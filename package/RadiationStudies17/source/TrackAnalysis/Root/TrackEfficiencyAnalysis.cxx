#include <EventLoop/Job.h>
#include <EventLoop/StatusCode.h>
#include <EventLoop/Worker.h>
#include <TrackAnalysis/TrackEfficiencyAnalysis.h>

// EDM includes: - if move to header file will not compile?
#include "xAODEventInfo/EventInfo.h"
#include "xAODTruth/TruthParticleAuxContainer.h"
#include "xAODTruth/TruthParticleContainer.h"
#include "xAODTruth/TruthVertex.h"
#include "xAODTracking/TrackMeasurementValidationContainer.h"
#include "xAODTracking/TrackParticleContainer.h"
#include "xAODTracking/TrackParticleAuxContainer.h"

#include "xAODRootAccess/TStore.h"
#include "xAODCore/ShallowCopy.h"


// this is needed to distribute the algorithm to the workers
ClassImp(TrackEfficiencyAnalysis)



TrackEfficiencyAnalysis :: TrackEfficiencyAnalysis ()
{
  // Here you put any code for the base initialization of variables,
  // e.g. initialize all pointers to 0.  Note that you should only put
  // the most basic initialization here, since this method will be
  // called on both the submission and the worker node.  Most of your
  // initialization code will go into histInitialize() and
  // initialize().

  m_eventCounter = 0;
}



EL::StatusCode TrackEfficiencyAnalysis :: setupJob (EL::Job& job)
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
  xAOD::Init( "TrackEfficiencyAnalysis" ).ignore(); // call before opening first file

  return EL::StatusCode::SUCCESS;
}



EL::StatusCode TrackEfficiencyAnalysis :: histInitialize ()
{
  // Here you do everything that needs to be done at the very
  // beginning on each worker node, e.g. create histograms and output
  // trees.  This method gets called before any input files are
  // connected.


  m_PrimaryTracks    = new TrackEfficiencyHists("Primary");  
  m_SecondaryTracks  = new TrackEfficiencyHists("Secondary");  
  m_PrimaryTruth     = new TrackEfficiencyHists("PrimaryTruth");     
  m_SecondaryTruth   = new TrackEfficiencyHists("SecondaryTruth"); 

  m_DuplicatePrimaryTracks   =  new TrackEfficiencyHists("DuplicatePrimary");
  m_DuplicateSecondaryTracks =  new TrackEfficiencyHists("DuplicateSecondary");
	
  m_AllTracks        = new TrackEfficiencyHists("All");
  m_FakeTracks       = new TrackEfficiencyHists("Fake");       

  m_PrimaryTracks->Book( wk() );
  m_SecondaryTracks->Book( wk() );
  m_PrimaryTruth->Book( wk() );
  m_SecondaryTruth->Book( wk() );

  m_DuplicatePrimaryTracks->Book( wk() );
	m_DuplicateSecondaryTracks->Book( wk() );

  m_AllTracks->Book( wk() );
  m_FakeTracks->Book( wk() );

  return EL::StatusCode::SUCCESS;
}



EL::StatusCode TrackEfficiencyAnalysis :: fileExecute ()
{
  // Here you do everything that needs to be done exactly once for every
  // single file, e.g. collect a list of all lumi-blocks processed
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode TrackEfficiencyAnalysis :: changeInput (bool firstFile)
{
  // Here you do everything you need to do when we change input files,
  // e.g. resetting branch addresses on trees.  If you are using
  // D3PDReader or a similar service this method is not needed.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode TrackEfficiencyAnalysis :: initialize ()
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



EL::StatusCode TrackEfficiencyAnalysis :: execute ()
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




  // Reset barcode set
  m_PrimaryTracks->usedBarcodes.clear();
  m_SecondaryTracks->usedBarcodes.clear();

  // get track container of interest
  const xAOD::TrackParticleContainer* recoTracks = 0;
  if ( !m_event->retrieve( recoTracks, "InDetTrackParticles" ).isSuccess() ){ // retrieve arguments: container type, container key
    Error("execute()", "Failed to retrieve Reconstructed Track container. Exiting." );
    return EL::StatusCode::FAILURE;
  }


  // loop over the tracks in the container
  for( xAOD::TrackParticleContainer::const_iterator recoTrk_itr = recoTracks->begin();
          recoTrk_itr != recoTracks->end(); recoTrk_itr++) {
    //Info("execute()", "  original reco track pT = %.2f GeV", ((*recoTrk_itr)->pt() * 0.001));
    m_AllTracks->Fill( (*recoTrk_itr) );

    if(isMC){
      if( isFake( (*recoTrk_itr) ) ){
        m_FakeTracks->Fill( (*recoTrk_itr) );
      } 
      const xAOD::TruthParticle* truth = truthParticle( (*recoTrk_itr)  );  
      if(!truth) 
         continue;
      if( isPrimary( truth ) ) {
				if ( m_PrimaryTracks->hasBeenUsed(truth) ){
				  m_DuplicatePrimaryTracks->Fill(truth);
				} else {
          m_PrimaryTracks->Fill(truth);
				}
      } else if( isSecondary( truth ) ){
				if (m_SecondaryTracks->hasBeenUsed(truth) ){ 
          m_DuplicateSecondaryTracks->Fill(truth);
				} else {
					m_SecondaryTracks->Fill(truth);
				}
      }
    }
  } // end for loop over reconstructed tracks


  if (!isMC)   
    return EL::StatusCode::SUCCESS;

  //---------------------
  // TRUTH PARTICLES
  //---------------------
  // get track container of interest
  const xAOD::TruthParticleContainer* truthParticles = 0;
  if ( !m_event->retrieve( truthParticles, "TruthParticle" ).isSuccess() ){ // retrieve arguments: container type, container key
    Error("execute()", "Failed to retrieve Truth Particle container. Exiting." );
    return EL::StatusCode::FAILURE;
  }

  for(xAOD::TruthParticleContainer::const_iterator truthPart_itr = truthParticles->begin();
      truthPart_itr != truthParticles->end(); truthPart_itr++) {
    
    if( isPrimary( (*truthPart_itr) ) ) {
      m_PrimaryTruth->Fill( (*truthPart_itr) );
    } else if( isSecondary( (*truthPart_itr) ) ){
      m_SecondaryTruth->Fill( (*truthPart_itr) );
    }
  }

  return EL::StatusCode::SUCCESS;
}



EL::StatusCode TrackEfficiencyAnalysis :: postExecute ()
{
  // Here you do everything that needs to be done after the main event
  // processing.  This is typically very rare, particularly in user
  // code.  It is mainly used in implementing the NTupleSvc.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode TrackEfficiencyAnalysis :: finalize ()
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



EL::StatusCode TrackEfficiencyAnalysis :: histFinalize ()
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


  m_PrimaryTracks->BuildAndBookEfficiency( "Efficiency", m_PrimaryTruth, wk() );
  m_SecondaryTracks->BuildAndBookEfficiency( "Efficiency", m_SecondaryTruth, wk() );
  m_DuplicatePrimaryTracks->BuildAndBookEfficiency( "Rate", m_PrimaryTracks, wk() );
  m_DuplicateSecondaryTracks->BuildAndBookEfficiency( "Rate", m_SecondaryTracks, wk() );	
  m_FakeTracks->BuildAndBookEfficiency( "FakeRate", m_AllTracks, wk() );

  return EL::StatusCode::SUCCESS;
}


bool TrackEfficiencyAnalysis :: isPrimary( const xAOD::TruthParticle* tp )const
{
  if( tp->status() != 1 )     //Check to see if its a stable particle
    return false;
  
  //Note this const cast will not  be required in the future -- there is bug in the truth edm
  if( const_cast<xAOD::TruthParticle*>(tp)->isNeutral() )         //Clearly for tracking we don't care about Neutrals 
    return false;

  if( tp->barcode() == 0 ||   //Barcode of zero indicates there was no truth paticle found for this track 
      tp->barcode() >= 200e3) 
    return false;
 
  if( tp->pt() < 500.   ||  fabs(tp->eta()) > 2.5 ) // Check the particle is within acceptance 
    return false;
            
  // make sure particle decays before the last pixel layer
  if( !tp->hasProdVtx() || tp->prodVtx()->perp() > 110) 
    return false;

  return true;
}


bool TrackEfficiencyAnalysis :: isSecondary( const xAOD::TruthParticle* tp )const
{
  if( tp->status() != 1 )     //Check to see if its a stable particle
    return false;
  //Note this const cast will not  be required in the future -- there is bug in the truth edm
  if( const_cast<xAOD::TruthParticle*>(tp)->isNeutral() )         //Clearly for tracking we don't care about Neutrals 
    return false;

  if( tp->barcode() < 200e3 )    //larger than this indicates secondary  particles
    return false;
 
  if( tp->pt() < 500.   || fabs(tp->eta()) >  2.5 ) // Check the particle is within acceptance 
    return false;

  // make sure particle decays before the last SCT layer
  if( !tp->hasProdVtx() || tp->prodVtx()->perp() > 500)
    return false;

  return true;
}

bool TrackEfficiencyAnalysis :: isFake( const xAOD::TrackParticle* tp )  const
{
  static const char* NAME = "truthMatchProbability";
  if( ! tp->isAvailable< float >( NAME ) ) {
    Warning("isFake(..)", "Track Particle has no MatchProb is this data?" );
    return true;
  }

  const float truthProb = tp->auxdata< float >( NAME );
  if( truthProb < 0.7 ) {
    return true;
  }

  const xAOD::TruthParticle* truth = truthParticle( tp );
  if (truth && truth->barcode()!=0)
    return false;
  
  return true;    
} 

 
bool TrackEfficiencyAnalysis :: isPrimary( const xAOD::TrackParticle* tp )const
{
  const xAOD::TruthParticle* truth =  truthParticle( tp );
  if( !truth  ){
    return false;
  }

  return isPrimary( truth );
}


bool TrackEfficiencyAnalysis :: isSecondary( const xAOD::TrackParticle* tp)const
{
  const xAOD::TruthParticle* truth =  truthParticle( tp );
  if( !truth  ){
    return false;
  }

  return isSecondary( truth );
}


const xAOD::TruthParticle* TrackEfficiencyAnalysis::truthParticle(const xAOD::TrackParticle *trkPart) const 
{
  typedef ElementLink< xAOD::TruthParticleContainer > Link_t;
  static const char* NAME = "truthParticleLink";
  if( ! trkPart->isAvailable< Link_t >( NAME ) ) {
    return 0;
  }
  const Link_t& link = trkPart->auxdata< Link_t >( NAME );
  if( ! link.isValid() ) {
    return 0;
  }

  return *link;
} 


