#ifndef TrackEfficiencyHists_h
#define TrackEfficiencyHists_h

#include "TH1D.h"
#include "TH2D.h"
#include "TGraphAsymmErrors.h"
#include "TMath.h"
#include "TString.h"

#ifndef __MAKECINT__
#include "xAODTruth/TruthParticle.h"
#include "xAODTruth/TruthVertex.h"
#include "xAODTracking/TrackParticle.h"
#endif // not __MAKECINT__

#include <EventLoop/Worker.h>
#include <vector>
#include <set>

struct TrackEfficiencyHists
{

  TString name;      //!

  TH1D*  h_eta;        //!
  TH1D*  h_phi;        //!
  TH1D*  h_pt;         //!
  TH1D*  h_radius;     //!
  TH2D*  h_ptVsEta;    //!
  TH2D*  h_radiusVsEta;//!
  


  std::vector< TH1* > allHists;
  std::set<int>       usedBarcodes;

  TrackEfficiencyHists(const TString& n)
  {
    name = n;

    h_eta     =  new TH1D( name + "TracksVsEta", "TracksVsEta; #eta; # Tracks", 50, -2.5, 2.5 );
    h_phi     =  new TH1D( name + "TracksVsPhi", "TracksVsPhi; #phi [rad]; # Tracks", 50, -TMath::Pi(), TMath::Pi() );
    h_pt      =  new TH1D( name + "TracksVsPt", "TracksVsPt; p_{T} [GeV]; # Tracks", 50, 0, 20 );
    h_radius  =  new TH1D( name + "TracksVsR", "TracksVsR; Radius [mm]; # Tracks", 50, 0, 200 );
    h_ptVsEta =  new TH2D( name + "TracksVsPtEta", "TracksVsPtEta;  p_{T} [GeV]; #eta ; # Tracks", 50, 0, 20, 50, -2.5, 2.5 ); 
    h_radiusVsEta  =  new TH2D( name + "TracksVsRadiusEta", "TracksVsRadiusEta;  Radius [mm]; #eta; # Tracks", 50, 0, 200, 50, -2.5, 2.5 );
    
    allHists.push_back( h_eta );
    allHists.push_back( h_phi );
    allHists.push_back( h_pt );
    allHists.push_back( h_radius );
    allHists.push_back( h_ptVsEta );
    allHists.push_back( h_radiusVsEta );
  

    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
		  (*hist)->Sumw2();
    }
	
	}
  
  ~TrackEfficiencyHists()
  {
    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
      delete *hist;
    }
  }

  //* Determine if the TruthParticle has been used before */
  bool hasBeenUsed( const xAOD::TruthParticle* tp)
	{
    if( usedBarcodes.find(tp->barcode()) == usedBarcodes.end() ){
			return false;
		} else {
			return true;
		}
	}

  /** Fill the histograms using truth information */
  void Fill( const xAOD::TruthParticle * tp )
  {
    usedBarcodes.insert( tp->barcode() ); 
   
		h_eta->Fill( tp->eta() );
    h_phi->Fill( tp->phi() );
    h_pt->Fill( tp->pt() *1e-3 );
   
    double r = tp->hasProdVtx() ? tp->prodVtx()->perp() : 0 ;
    h_radius->Fill( r ); 

    h_ptVsEta->Fill(  tp->pt() *1e-3, tp->eta()  );
    h_radiusVsEta->Fill( r, tp->eta() );
  }

  /** Fill the histograms using the recosntructed information*/ 
  void Fill( const xAOD::TrackParticle * tp )
  {
    h_eta->Fill( tp->eta() );
    h_phi->Fill( tp->phi() );
    h_pt->Fill( tp->pt() *1e-3 );
   
    h_ptVsEta->Fill(  tp->pt() *1e-3, tp->eta()  );
  }

  /** Add histograms to the output file */
  void Book( EL::Worker* wk )
  {
    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
      wk->addOutput( *hist );
    }
  }

  /** Make the efficiency plots and add them to the output file:  
	 * Note that object that you call this from is the numerator  */
  void BuildAndBookEfficiency( const TString prefix, const TrackEfficiencyHists * denom,  EL::Worker* wk ) const
  {
    std::vector<TH1*>::const_iterator pass  =  allHists.cbegin();
    std::vector<TH1*>::const_iterator total =  denom->allHists.cbegin();
    int count(0);
    for( ; pass != allHists.end(); ++pass, ++total, ++count){
			if ( (*pass)->GetDimension() == 1  &&  (*pass)->GetEntries() <= (*total)->GetEntries() ){
        TGraphAsymmErrors* eff = new TGraphAsymmErrors();
				eff->Divide( (*pass), (*total), "cl=0.683 b(1,1) mode");
        eff->SetName( prefix + (*pass)->GetName() );
        eff->SetTitle( (*pass)->GetTitle() );
        eff->GetXaxis()->SetTitle( (*pass)->GetXaxis()->GetTitle() );
        wk->addOutput( eff );
      } else {
				if( (*total)->GetEntries() <= 0 )
					continue;
        TH1*  clone = (TH1*) (*total)->Clone(  prefix + (*pass)->GetName() );
        if( (*total)->GetEntries() > 0 )
					clone->Divide( (*pass), (*total) );
	      else
					clone->Reset();
        wk->addOutput( clone );
      }
    }
  }
};

#endif 
