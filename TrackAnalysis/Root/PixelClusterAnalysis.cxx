#include <EventLoop/Job.h>
#include <EventLoop/StatusCode.h>
#include <EventLoop/Worker.h>
#include <TrackAnalysis/PixelClusterAnalysis.h>


// EDM includes: - if move to header file will not compile?
#include "xAODEventInfo/EventInfo.h"
#include "xAODTruth/TruthParticleAuxContainer.h"
#include "xAODTruth/TruthParticleContainer.h"
#include "xAODTruth/TruthVertex.h"
#include "xAODTracking/TrackMeasurementValidationContainer.h"
#include "xAODTracking/TrackStateValidationContainer.h"
#include "xAODTracking/TrackParticleContainer.h"
#include "xAODTracking/TrackParticleAuxContainer.h"

#include "xAODRootAccess/TStore.h"
#include "xAODCore/ShallowCopy.h"

#include <iostream>

// this is needed to distribute the algorithm to the workers
ClassImp(PixelClusterAnalysis)

namespace TrackState {

  enum MeasurementType {
  
    unidentified = 0,
    Pixel = 1,
    SCT = 2,
    TRT = 3,
    MDT = 4,
    CSC = 5,
    RPC = 6,
    TGC = 7,
    Pseudo = 8,
    Vertex = 9,
    Segment = 10,
    SpacePoint = 11,
    LarCal = 12,
    TileCal = 13,
    STGC = 14,
    MM = 15,
    NumberOfMeasurementTypes = 16 };
}

namespace TrackStateOnSurface {

  enum TrackStateOnSurfaceType {
  
    Measurement = 0,
    InertMaterial = 1,
    BremPoint = 2,
    Scatterer = 3,
    Perigee = 4,
    Outlier = 5,
    Hole = 6,
    Unknown = 7,
    CaloDeposit = 8,
    Parameter = 9,
    FitQuality = 10,
    NumberOfTrackStateOnSurfaceType = 11 };
}        



PixelClusterAnalysis :: PixelClusterAnalysis ()
{
  // Here you put any code for the base initialization of variables,
  // e.g. initialize all pointers to 0.  Note that you should only put
  // the most basic initialization here, since this method will be
  // called on both the submission and the worker node.  Most of your
  // initialization code will go into histInitialize() and
  // initialize().
 
  m_eventCounter = 0;
}



EL::StatusCode PixelClusterAnalysis :: setupJob (EL::Job& job)
{
  // Here you put code that sets up the job on the submission object
  // so that it is ready to work with your algorithm, e.g. you can
  // request the D3PDReader service or add output files.  Any code you
  // put here could instead also go into the submission script.  The
  // sole advantage of putting it here is that it gets automatically
  // activated/deactivated when you add/remove the algorithm from your
  // job, which may or may not be of value to you.
  
  
  job.useXAOD ();

  // let's initialize the algorithm to use the xAODRootAccess package
  xAOD::Init( "PixelClusterAnalysis" ).ignore(); // call before opening first file
  
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode PixelClusterAnalysis :: histInitialize ()
{
  // Here you do everything that needs to be done at the very
  // beginning on each worker node, e.g. create histograms and output
  // trees.  This method gets called before any input files are
  // connected.

  m_AllClusters = new PixelAllClusterHists("AllClusters");
  m_OTrClusters = new PixelClusterHists("OnTrackClusters");
  m_Tracks = new TrackHists("AllTracks");
  m_Tracks_Selected = new TrackHists("GoodTracks");
 
  m_EventHisto = new EventHists("EventInfo");
  
  m_AllClusters->Book( wk() );
  m_OTrClusters->Book( wk() );
  m_Tracks->Book( wk() );
  m_Tracks_Selected->Book( wk() );

  m_EventHisto->Book( wk() );
 
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode PixelClusterAnalysis :: fileExecute ()
{
  // Here you do everything that needs to be done exactly once for every
  // single file, e.g. collect a list of all lumi-blocks processed
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode PixelClusterAnalysis :: changeInput (bool firstFile)
{
  // Here you do everything you need to do when we change input files,
  // e.g. resetting branch addresses on trees.  If you are using
  // D3PDReader or a similar service this method is not needed.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode PixelClusterAnalysis :: initialize ()
{
  // Here you do everything that you need to do after the first input
  // file has been connected and before the first event is processed,
  // e.g. create additional histograms based on which variables are
  // available in the input files.  You can also create all of your
  // histograms and trees in here, but be aware that this method
  // doesn't get called if no events are processed.  So any objects
  // you create here won't be available in the output if you have no
  // input events.
  
  m_event = wk()->xaodEvent();
  
  // as a check, let's see the number of events in our xAOD
  Info("initialize()", "Number of events = %lli", m_event->getEntries() ); // print long long int
  
  
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode PixelClusterAnalysis :: execute ()
{
  // Here you do everything that needs to be done on every single
  // events, e.g. read input variables, apply cuts, and fill
  // histograms and trees.  This is where most of your actual analysis
  // code will go.
  

  // print every 100 events, so we know where we are:
  if( (m_eventCounter % 100) ==0 ) Info("execute()", "Event number = %i", m_eventCounter );
  m_eventCounter++;

  //----------------------------
  // Event information
  //--------------------------- 
  const xAOD::EventInfo* eventInfo = 0;
  if( ! m_event->retrieve( eventInfo, "EventInfo").isSuccess() ){
    Error("execute()", "Failed to retrieve event info collection. Exiting." );
    return EL::StatusCode::FAILURE;
  }

  // check if the event is data or MC
  // (many tools are applied either to data or MC)
  bool isMC = false;
  // check if the event is MC
  if(eventInfo->eventType( xAOD::EventInfo::IS_SIMULATION ) ){
    isMC = true; // can do something with this later
  }   

  int OccupIBL = 0;
  int OccupBL = 0;
  int OccupL1 = 0;
  int OccupL2 = 0;
  int OccupECC = 0;
  int OccupECA = 0;
  int OccupIBLall = 0;
  int OccupBLall = 0;
  int OccupL1all = 0;
  int OccupL2all = 0;
  int OccupECCall = 0;
  int OccupECAall = 0;



  // get track container of interest
  const xAOD::TrackParticleContainer* recoTracks = 0;
  if ( !m_event->retrieve( recoTracks, "InDetTrackParticles" ).isSuccess() ){ // retrieve arguments: container type, container key
    Error("execute()", "Failed to retrieve Reconstructed Track container. Exiting." );
    return EL::StatusCode::FAILURE;
  }

  // loop over the tracks in the container
  
  //for( xAOD::TrackParticleContainer::const_iterator recoTrk_itr = recoTracks->begin(); recoTrk_itr != recoTracks->end(); recoTrk_itr++) {
    for(auto recoTrk_itr = recoTracks->begin(); recoTrk_itr != recoTracks->end(); recoTrk_itr++) {

    float pt = (*recoTrk_itr)->pt();
    float d0 = (*recoTrk_itr)->d0();
    float z0 = (*recoTrk_itr)->z0();
    float phi = (*recoTrk_itr)->phi();
    float theta = (*recoTrk_itr)->theta();
    float eta = (*recoTrk_itr)->eta();
    float chi2 = (*recoTrk_itr)->chiSquared();
    int ndof = (*recoTrk_itr)->numberDoF();
    int npix = (*recoTrk_itr)->auxdataConst< unsigned char >("numberOfPixelHits");
    int npixout = (*recoTrk_itr)->auxdataConst< unsigned char >("numberOfPixelOutliers");
    int npixhol = (*recoTrk_itr)->auxdataConst< unsigned char >("numberOfPixelHoles");
    int nibl = (*recoTrk_itr)->auxdataConst< unsigned char >("numberOfInnermostPixelLayerHits");
    int nbl  = (*recoTrk_itr)->auxdataConst< unsigned char >("numberOfNextToInnermostPixelLayerHits");
    int nsct = (*recoTrk_itr)->auxdataConst< unsigned char >("numberOfSCTHits");
    int ntrt = (*recoTrk_itr)->auxdataConst< unsigned char >("numberOfTRTHits");
    
    //if( npix >= 10 )Info("execute()",  "Event, Npix (%i %i %i %i)", m_eventCounter, eventInfo->eventNumber(), eventInfo->lumiBlock(), npix); 

    m_Tracks->Fill(
    pt, d0,z0, phi, theta, eta, chi2, ndof, npix, npixout, npixhol, nibl, nsct, ntrt);
    //if ( fabs(eta) <= 0.02 ) m_Tracks_RedTRT->Fill(
    //pt, d0,z0, phi, theta, eta, chi2, ndof, npix, npixout, npixhol, nibl, nsct, ntrt);
    //if ( pt < 1000. ) m_Tracks_LowPt->Fill(
    //pt, d0,z0, phi, theta, eta, chi2, ndof, npix, npixout, npixhol, nibl, nsct, ntrt);

    // Make your track selection
    //if ( nsct < 8 || ntrt < 15 || npix < 1)
    // End of 2015 ID Tracking Perf. Group recommendations (Tight):
    //if ( ( (nsct + npix) < 9 && eta <= 1.65 )  || ( (nsct + npix) < 11 && eta > 1.65 )  || (nibl+nbl) == 0 || npixhol > 0  || fabs (d0) >= 2.
    //|| fabs(z0) >= 150. )
      //continue;
    if ( npix < 1 || nsct < 8 || ntrt < 15 )
      continue;
    
    m_Tracks_Selected->Fill(
    pt, d0,z0, phi, theta, eta, chi2, ndof, npix, npixout, npixhol, nibl, nsct, ntrt);


    //Info("execute()",  "Track  (pT, eta, phi, nSCT)  = (%f, %f, %f, %i)", (*recoTrk_itr)->pt(), (*recoTrk_itr)->eta(), (*recoTrk_itr)->phi(),
    //(*recoTrk_itr)->auxdataConst< unsigned char >("numberOfSCTHits") );


    typedef std::vector<ElementLink< xAOD::TrackStateValidationContainer > > MeasurementsOnTrack;
    //typedef std::vector<ElementLink< xAOD::TrackStateValidationContainer > >::const_iterator MeasurementsOnTrackIter;
    static const char* measurementNames = "msosLink";   //Note the prefix could change

    //std::cout << " Ici : " << (*recoTrk_itr)->isAvailable< MeasurementsOnTrack >("") << std::endl;

    // Check if there are MSOS attached
    if( ! (*recoTrk_itr)->isAvailable< MeasurementsOnTrack >( measurementNames ) ) {
      continue;
    }

   // Get the MSOS's
    const MeasurementsOnTrack& measurementsOnTrack = (*recoTrk_itr)->auxdata< MeasurementsOnTrack >( measurementNames );

    // Loop over track TrackStateValidation's
    
    
    for( auto msos_iter = measurementsOnTrack.begin(); msos_iter != measurementsOnTrack.end(); ++msos_iter){  
      //Check if the element link is valid
      if( ! (*msos_iter).isValid() ) {
        continue;
      }
      
      const xAOD::TrackStateValidation* msos = *(*msos_iter); 
     
      // The detector type enum is defined in TrkEventPrimitives/TrackStateDefs.h
      // The mesurement state on surface type is defined in the header file TrkTrack/TrackStateOnSurface.h
      // We will port the enums to xAOD world in the future

      if( msos->detType() != TrackState::Pixel  ||  msos->type() != TrackStateOnSurface::Measurement )  //its   pixel && and a measurement on track
        continue;
      
      //Info("execute()",  "->MSOS is a pixel with the following ID tralala1 %li", msos->detElementId()); 
      
      //Get pixel cluster
      if(  msos->trackMeasurementValidationLink().isValid() && *(msos->trackMeasurementValidationLink()) ){
        const xAOD::TrackMeasurementValidation* pixelCluster =  *(msos->trackMeasurementValidationLink());        
        // Access a dressed member    
        float charge(0);
        if( pixelCluster->isAvailable< float >( "charge" ) )   // Check is not required if you know it is there
          charge = pixelCluster->auxdata< float >("charge"); 
     
        m_OTrClusters->Fill( pixelCluster, msos, pt, phi);
         
	int bec = pixelCluster->auxdata< int>("bec");
        int layer = pixelCluster->auxdata< int>("layer");
	if (bec == -2)OccupECC = OccupECC + 1; 
	if (bec ==  2)OccupECA = OccupECA + 1;
	if (bec == 0) {
	  if (layer == 0) OccupIBL = OccupIBL + 1; 
	  if (layer == 1) OccupBL = OccupBL + 1; 
	  if (layer == 2) OccupL1 = OccupL1 + 1; 
	  if (layer == 3) OccupL2 = OccupL2 + 1; 
        }
	
        //Info("execute()",  "-->Pixel Cluster local position (%f, %f) has the charge %f", pixelCluster->localX(), pixelCluster->localY(), charge );
        
        if(isMC){
          std::vector<int> truth_barcode;
          if( pixelCluster->isAvailable< std::vector<int> >( "truth_barcode" ) ) 
            truth_barcode = pixelCluster->auxdata< std::vector<int> >("truth_barcode"); 
          for( auto barcode = truth_barcode.begin(); barcode !=truth_barcode.end();  ++barcode){
            //Info("execute()",  "--->Pixel Cluster orginates from particle with barcode %i", *barcode);
          } 
        } //End check on MC           
      } // End Check on Element link     
    } // End for loop over MSOS's
  } // end for loop over reconstructed tracks


  // If you don't care about the global properties of the track you can loop over the MSOS directly 
  // Get the measurement state on surface
  const xAOD::TrackStateValidationContainer* pixelMSOSs = 0;
  if ( !m_event->retrieve( pixelMSOSs, "PixelMSOSs" ).isSuccess() ){ // retrieve arguments: container type, container key
    Error("execute()", "Failed to retrieve Pixel TrackStateValidationContainer. Exiting." );
    return EL::StatusCode::FAILURE;
  }

  // loop over the tracks in the container

  //Info("execute()",  "Looping over the MSOS container");
  for( auto msos_itr = pixelMSOSs->begin(); msos_itr != pixelMSOSs->end(); msos_itr++) {  
    //if( (*msos_itr)->detType() == TrackState::Pixel  &&  (*msos_itr)->type() == TrackStateOnSurface::Measurement ) //its  a pixel && anda a measurement on track    
    //Info("execute()",  "MSOS is a pixel with the following ID %li", (*msos_itr)->detElementId());
  }  
  
  
  //If you don't about the track properties at all you can loop over the the pixel clusters
  const xAOD::TrackMeasurementValidationContainer* pixelClusters = 0;
  if ( !m_event->retrieve( pixelClusters, "PixelClusters" ).isSuccess() ){ // retrieve arguments: container type, container key
    Error("execute()", "Failed to retrieve Pixel Clusters. Exiting." );
    return EL::StatusCode::FAILURE;
  }

  // loop over the tracks in the container
  
  // Different method of accessing the data
  static SG::AuxElement::ConstAccessor< std::vector<float> >  NN_matrixOfCharge("NN_matrixOfCharge");
  
  //Info("execute()",  "Looping over the PRD container");
  for( auto cluster_itr = pixelClusters->begin(); cluster_itr != pixelClusters->end(); cluster_itr++) {  
  
    float charge(0);
    if( (*cluster_itr)->isAvailable< float >( "charge" ) )   // Check is not required if you know it is there
      charge = (*cluster_itr)->auxdataConst< float >("charge"); 

    //Info("execute()",  "Pixel Cluster local position (%f, %f) with charge %f",  (*cluster_itr)->localX(),  (*cluster_itr)->localY(),charge );  
    m_AllClusters->Fill(
    (*cluster_itr)->localX(),
    (*cluster_itr)->localY(),
    (*cluster_itr)->globalX(),
    (*cluster_itr)->globalY(),
    (*cluster_itr)->globalZ(),
    (*cluster_itr)->auxdataConst< float >("charge"),0,
    //(*cluster_itr)->auxdataConst< int >("size"),
    (*cluster_itr)->auxdataConst< int >("sizePhi"),
    (*cluster_itr)->auxdataConst< int >("sizeZ"),
    (*cluster_itr)->auxdataConst< int >("LVL1A"),
    (*cluster_itr)->auxdataConst< int >("ToT"),
    (*cluster_itr)->auxdataConst< int >("bec"),
    (*cluster_itr)->auxdataConst< int >("layer"),
    (*cluster_itr)->auxdataConst< int >("eta_module"),
    (*cluster_itr)->auxdataConst< int >("phi_module")
    );  
	int bec = (*cluster_itr)->auxdataConst< int>("bec");
        int layer = (*cluster_itr)->auxdataConst< int>("layer");
	if (bec == -2)OccupECCall = OccupECCall + 1; 
	if (bec ==  2)OccupECAall = OccupECAall + 1;
	if (bec == 0) {
	  if (layer == 0) OccupIBLall = OccupIBLall + 1; 
	  if (layer == 1) OccupBLall = OccupBLall + 1; 
	  if (layer == 2) OccupL1all = OccupL1all + 1; 
	  if (layer == 3) OccupL2all = OccupL2all + 1; 
        }
    
    //Info("execute()",  "Size of the NN charge matrix %li", NN_matrixOfCharge( **cluster_itr ).size() ); 

  }  
  
  m_EventHisto->Fill(OccupIBL,OccupBL,OccupL1,OccupL2,OccupECC,OccupECA,OccupIBLall,OccupBLall,OccupL1all,OccupL2all,OccupECCall,OccupECAall,
  eventInfo->averageInteractionsPerCrossing(),eventInfo->actualInteractionsPerCrossing());
    
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode PixelClusterAnalysis :: postExecute ()
{
  // Here you do everything that needs to be done after the main event
  // processing.  This is typically very rare, particularly in user
  // code.  It is mainly used in implementing the NTupleSvc.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode PixelClusterAnalysis :: finalize ()
{
  // This method is the mirror image of initialize(), meaning it gets
  // called after the last event has been processed on the worker node
  // and allows you to finish up any objects you created in
  // initialize() before they are written to disk.  This is actually
  // fairly rare, since this happens separately for each worker node.
  // Most of the time you want to do your post-processing on the
  // submission node after all your histogram outputs have been
  // merged.  This is different from histFinalize() in that it only
  // gets called on worker nodes that processed input events.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode PixelClusterAnalysis :: histFinalize ()
{
  // This method is the mirror image of histInitialize(), meaning it
  // gets called after the last event has been processed on the worker
  // node and allows you to finish up any objects you created in
  // histInitialize() before they are written to disk.  This is
  // actually fairly rare, since this happens separately for each
  // worker node.  Most of the time you want to do your
  // post-processing on the submission node after all your histogram
  // outputs have been merged.  This is different from finalize() in
  // that it gets called on all worker nodes regardless of whether
  // they processed input events.
  return EL::StatusCode::SUCCESS;
}
