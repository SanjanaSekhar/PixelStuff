#ifndef TrackHists_h
#define TrackHists_h

#include "TH1D.h"
#include "TH2D.h"
#include "TProfile.h"
#include "TGraphAsymmErrors.h"
#include "TMath.h"
#include "TString.h"

#ifndef __MAKECINT__
#endif // not __MAKECINT__

#include <EventLoop/Worker.h>
#include <vector>
#include <set>

struct TrackHists
{

  TString name;      //!

  TH1D*  h_pt;
  TH1D*  h_d0;
  TH1D*  h_z0;
  TH1D*  h_phi;
  TH1D*  h_theta;
  TH1D*  h_eta;
  TH1D*  h_chi2perdof;
  TH1D*  h_npix;
  TH1D*  h_npixout;
  TH1D*  h_npixhol;
  TH1D*  h_npixibl;
  TH1D*  h_nsct;
  TH1D*  h_ntrt;
  TH2D*  h_ntrtVSnpix;
  TH2D*  h_ntrtVSnsct;
  TH2D*  h_nsctVSnpix;
  TH2D*  h_phiVStheta;
  TH2D*  h_phiVSthetaVSntrt;
  TH2D*  h_etaVSnpix;
  TH2D*  h_ptVSnpix; 
  TProfile* h_npixVSd0;  

  std::vector< TH1* > allHists;
  std::set<int>       usedBarcodes;

  TrackHists(const TString& n)
  {
    name = n;

    h_pt     =  new TH1D( name + "Pt", "Track Pt; #Pt; #Tracks", 1250, 0., 250000. );
    h_d0     =  new TH1D( name + "D0", "Track Transverse Impact Parameter; #D0; #Tracks", 300, -15., 15. );
    h_z0     =  new TH1D( name + "Z0", "Track Longitudinal Impact Parameter; #Z0; #Tracks",200, -1000., 1000. );
    h_phi    =  new TH1D( name + "Phi", "Track Azimuthal Angle; #Phi; #Tracks",128, -3.2, 3.2 );
    h_theta  =  new TH1D( name + "Theta", "Track Polar Angle; #Theta; #Tracks",64, 0., 3.2 );
    h_eta    =  new TH1D( name + "Eta", "Track Pseudorapidity; #Eta; #Tracks",1280, -3.2, 3.2 );
    h_chi2perdof    =  new TH1D( name + "Chi2PerDof", "Track Chi**2/D.o.F; #Chi2/dof; #Tracks",200, 0., 20 );
    h_npix   =  new TH1D( name + "NPix", "Track Number of Pixel Hits; #Npix; #Tracks",12, -0.5, 11.5 );
    h_npixout   =  new TH1D( name + "NPixOut", "Track Number of Pixel Outliers; #NPixOut; #Tracks",12, -0.5, 11.5 );
    h_npixhol   =  new TH1D( name + "NPixHole", "Track Number of Pixel Holes; #NPixHoles; #Tracks",6, -0.5, 5.5 );
    h_npixibl   =  new TH1D( name + "NIBL", "Track Number of IBL Hits; #NIBL; #Tracks",6, -0.5, 5.5 );
    h_nsct      =  new TH1D( name + "NSCT", "Track Number of SCT Hits; #NSCT; #Tracks",20, -0.5, 19.5 );
    h_ntrt      =  new TH1D( name + "NTRT", "Track Number of TRT Hits; #NTRT; #Tracks",100, -0.5, 99.5 );
    h_ntrtVSnpix      =  new TH2D( name + "NTRTVSNPIX", "Number of TRT VS Pixel Hits; #NPIX; #NTRT",12, -0.5, 11.5,100,-0.5,99.5 );
    h_ntrtVSnsct      =  new TH2D( name + "NTRTVSNSCT", "Number of TRT VS SCT Hits; #NSCT; #NTRT",20, -0.5, 19.5,100,-0.5,99.5 );
    h_nsctVSnpix      =  new TH2D( name + "NSCTVSNPIX", "Number of SCT VS Pixel Hits; #NPIX; #NSCT",12, -0.5, 11.5,20,-0.5,19.5 );
    h_phiVStheta      =  new TH2D( name + "PhiVSTheta", "Phi VS Theta; #Theta; #Phi",64, 0., 3.2, 128,-3.2,3.2 );
    h_phiVSthetaVSntrt      =  new TH2D( name + "PhiVSThetaVSNTRT", "Phi VS Theta; #Theta; #Phi",64, 0., 3.2, 128,-3.2,3.2 );
    h_etaVSnpix       =  new TH2D( name + "EtaVSNpix", "Track Pseudorapidity VS NPIX; #NPIX; #ETA",12,-0.5,11.5, 1280, -3.2, 3.2 );
    h_ptVSnpix        =  new TH2D( name + "PtVSNpix", "Track Pt VS NPIX; #NPIX; #ETA",12,-0.5,11.5, 1250, 0., 250000. );
    h_npixVSd0        =  new TProfile(name + "NpixVSD0", "Pixel Hits VS Transverse Impact Parameter; #D0; #NPIX",300, -150., 150,
    -0.5, 20.);
 
 
    allHists.push_back( h_pt );
    allHists.push_back( h_d0 );
    allHists.push_back( h_z0 );
    allHists.push_back( h_phi );
    allHists.push_back( h_theta );
    allHists.push_back( h_eta );
    allHists.push_back( h_chi2perdof );
    allHists.push_back( h_npix );
    allHists.push_back( h_npixout );
    allHists.push_back( h_npixhol );
    allHists.push_back( h_npixibl );
    allHists.push_back( h_nsct );
    allHists.push_back( h_ntrt );
    allHists.push_back( h_ntrtVSnpix );
    allHists.push_back( h_ntrtVSnsct );
    allHists.push_back( h_nsctVSnpix );
    allHists.push_back( h_phiVStheta );
    allHists.push_back( h_phiVSthetaVSntrt );
    allHists.push_back( h_etaVSnpix );
    allHists.push_back( h_ptVSnpix );
    allHists.push_back( h_npixVSd0 );


    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
		  (*hist)->Sumw2();
    }
	
	}
  
  ~TrackHists()
  {
    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
      delete *hist;
    }
  }



  /** Fill the histograms using the recosntructed information*/ 
  //void Fill( xAOD::PrepRawDataContainer::const_iterator * cluster_itr)
  void Fill(float pt, float d0, float z0, float phi, float theta, float eta, float chi2, int ndof, int npix, int npixout, int npixhol,
  int nibl, int nsct, int ntrt) {
    
  float chi2perdof = chi2/ndof;
  
  h_pt->Fill(pt);    
  h_d0->Fill(d0);    
  h_z0->Fill(z0);    
  h_phi->Fill(phi);    
  h_theta->Fill(theta);    
  h_eta->Fill(eta);    
  h_chi2perdof->Fill(chi2perdof);    
  h_npix->Fill(npix);    
  h_npixout->Fill(npixout);    
  h_npixhol->Fill(npixhol);    
  h_npixibl->Fill(nibl);    
  h_nsct->Fill(nsct);    
  h_ntrt->Fill(ntrt);    
  h_ntrtVSnpix->Fill(npix,ntrt);    
  h_ntrtVSnsct->Fill(nsct,ntrt);    
  h_nsctVSnpix->Fill(npix,nsct);    
  h_phiVStheta->Fill(theta,phi,1.);    
  h_phiVSthetaVSntrt->Fill(theta,phi,ntrt);    
  h_etaVSnpix->Fill(npix,eta);    
  h_ptVSnpix->Fill(npix,pt);    
  h_npixVSd0->Fill(d0,npix);    



  }

  /** Add histograms to the output file */
  void Book( EL::Worker* wk )
  {
    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
      wk->addOutput( *hist );
    }
  }

};

#endif 
