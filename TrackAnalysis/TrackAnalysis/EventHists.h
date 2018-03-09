#ifndef EventHists_h
#define EventHists_h

#include "TH1D.h"
#include "TH2D.h"
#include "TProfile.h"
#include "TGraphAsymmErrors.h"
#include "TMath.h"
#include "TString.h"

#ifndef __MAKECINT__
#include "xAODTruth/TruthParticle.h"
#include "xAODTruth/TruthVertex.h"
#include "xAODTracking/TrackParticle.h"
#include "xAODTracking/TrackStateValidationContainer.h"
#endif // not __MAKECINT__

#include <EventLoop/Worker.h>
#include <vector>
#include <set>

struct EventHists
{

  TString name;      //!

  
  TProfile* h_OccupIBLAll;
  TProfile* h_OccupBLAll;
  TProfile* h_OccupL1All;
  TProfile* h_OccupL2All;
  TProfile* h_OccupECCAll;
  TProfile* h_OccupECAAll;
  
  TProfile* h_OccupIBL;
  TProfile* h_OccupBL;
  TProfile* h_OccupL1;
  TProfile* h_OccupL2;
  TProfile* h_OccupECC;
  TProfile* h_OccupECA;

   
  TH1D* h_mu_avr;
  TH1D* h_mu_act;
   
  std::vector< TH1* > allHists;
  std::set<int>       usedBarcodes;

  EventHists(const TString& n)
  {
    name = n;

    h_OccupIBLAll = new TProfile( name + "OccupIBLa", "IBL Occupancy VS mu; mu; Number of Clusters; #Hits", 50,0., 50.); 
    h_OccupBLAll  = new TProfile( name + "OccupBLa",  "BL Occupancy VS mu ; mu; Number of Clusters; #Hits", 50,0., 50.); 
    h_OccupL1All  = new TProfile( name + "OccupL1a",  "L1 Occupancy VS mu; mu; Number of Clusters;  #Hits", 50,0., 50.); 
    h_OccupL2All  = new TProfile( name + "OccupL2a",  "L2 Occupancy VS mu; mu; Number of Clusters;  #Hits", 50,0., 50.); 
    h_OccupECCAll = new TProfile( name + "OccupECCa", "ECC Occupancy VS mu; mu; Number of Clusters; #Hits", 50,0., 50.); 
    h_OccupECAAll = new TProfile( name + "OccupECAa", "ECA Occupancy VS mu; mu; Number of Clusters; #Hits", 50,0., 50.); 

    h_OccupIBL = new TProfile( name + "OccupIBL", "IBL Occupancy VS mu; mu; Number of Clusters; #Hits", 50,0., 50.); 
    h_OccupBL  = new TProfile( name + "OccupBL",  "BL Occupancy VS mu ; mu; Number of Clusters; #Hits", 50,0., 50.); 
    h_OccupL1  = new TProfile( name + "OccupL1",  "L1 Occupancy VS mu; mu; Number of Clusters;  #Hits", 50,0., 50.); 
    h_OccupL2  = new TProfile( name + "OccupL2",  "L2 Occupancy VS mu; mu; Number of Clusters;  #Hits", 50,0., 50.); 
    h_OccupECC = new TProfile( name + "OccupECC", "ECC Occupancy VS mu; mu; Number of Clusters; #Hits", 50,0., 50.); 
    h_OccupECA = new TProfile( name + "OccupECA", "ECA Occupancy VS mu; mu; Number of Clusters; #Hits", 50,0., 50.); 

 
    h_mu_avr     =  new TH1D( name + "Mu_avr", "Mu; #Mu; #Events", 200, 0., 20. );
    h_mu_act     =  new TH1D( name + "Mu_act", "Mu; #Mu; #Events", 400, -20., 20. );
 
    allHists.push_back( h_OccupIBLAll );
    allHists.push_back( h_OccupBLAll );
    allHists.push_back( h_OccupL1All );
    allHists.push_back( h_OccupL2All );
    allHists.push_back( h_OccupECCAll );
    allHists.push_back( h_OccupECAAll );
    allHists.push_back( h_OccupIBL );
    allHists.push_back( h_OccupBL );
    allHists.push_back( h_OccupL1 );
    allHists.push_back( h_OccupL2 );
    allHists.push_back( h_OccupECC );
    allHists.push_back( h_OccupECA );
    allHists.push_back( h_mu_avr );
    allHists.push_back( h_mu_act );


    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
		  (*hist)->Sumw2();
    }
	
	}
  
  ~EventHists()
  {
    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
      delete *hist;
    }
  }



  /** Fill the histograms using the recosntructed information*/ 
  //void Fill( xAOD::PrepRawDataContainer::const_iterator * cluster_itr)
  void Fill(int nibl, int nbl, int nl1, int nl2, int necc, int neca,int nibla, int nbla, int nl1a, int nl2a, int necca, int necaa, float mu,
  float act ) {
    


   h_OccupIBLAll->Fill(mu,nibla);
   h_OccupBLAll->Fill(mu,nbla);
   h_OccupL1All->Fill(mu,nl1a);
   h_OccupL2All->Fill(mu,nl2a);
   h_OccupECCAll->Fill(mu,necca);  
   h_OccupECAAll->Fill(mu,necaa);  
   h_OccupIBL->Fill(mu,nibl);
   h_OccupBL->Fill(mu,nbl);
   h_OccupL1->Fill(mu,nl1);
   h_OccupL2->Fill(mu,nl2);
   h_OccupECC->Fill(mu,necc);  
   h_OccupECA->Fill(mu,neca);  
   h_mu_avr->Fill(mu);  
   h_mu_act->Fill(act);  

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
