#ifndef PixelAllClusterHists_h
#define PixelAllClusterHists_h

#include "TH1D.h"
#include "TH2D.h"
#include "TH3D.h"
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

struct PixelAllClusterHists
{

  TString name;      //!

  TH2D*  h_IBLphimodVSetamod;
  TH2D*  h_BLphimodVSetamod;
  TH2D*  h_L1phimodVSetamod;
  TH2D*  h_L2phimodVSetamod;
  TH1D*  h_ToT;
  TH1D*  h_Charge;
  TH1D*  h_Size;
  TH1D*  h_PhiSize;
  TH1D*  h_EtaSize;
  TH1D*  h_LVL1A;
  TH1D*  h_ToTI;
  TH1D*  h_ChargeI;
  TH1D*  h_SizeI;
  TH1D*  h_PhiSizeI;
  TH1D*  h_EtaSizeI;
  TH1D*  h_LVL1AI;
  TH1D*  h_ToTI3D;
  TH1D*  h_ChargeI3D;
  TH1D*  h_SizeI3D;
  TH1D*  h_PhiSizeI3D;
  TH1D*  h_EtaSizeI3D;
  TH1D*  h_LVL1AI3D;

  TH2D* h_SizeVSToT;
  TH2D* h_SizeVSToTI;
  TH2D* h_SizeVSToTI3D;

  TH1D* h_GlobalZ;
  TH1D* h_GlobalZIBL;
  TH1D* h_GlobalZIPl;
  TH1D* h_GlobalZI3D;
  TH2D* h_GlobalRVSZ;
  TH2D* h_LocalYVSX;
  TH2D* h_LocalYVSXI;
  TH2D* h_LocalYVSXI3D;

  std::vector< TH1* > allHists;
  std::set<int>       usedBarcodes;

  PixelAllClusterHists(const TString& n)
  {
    name = n;


    h_IBLphimodVSetamod=  new TH2D( name + "IBLPhiModuleVSEtaModule", "IBL Phi Module VS Eta Module; eta; phi; #Hits", 22, -11., 11., 16, -1.,15. );
    h_BLphimodVSetamod =  new TH2D( name + "BLPhiModuleVSEtaModule", "BL Phi Module VS Eta Module; eta; phi; #Hits", 16, -8., 8., 24, -1.,23. );
    h_L1phimodVSetamod =  new TH2D( name + "L1PhiModuleVSEtaModule", "L1 Phi Module VS Eta Module; eta; phi; #Hits", 16, -8., 8., 40, -1.,39. );
    h_L2phimodVSetamod =  new TH2D( name + "L2PhiModuleVSEtaModule", "L2 Phi Module VS Eta Module; eta; phi; #Hits", 16, -8., 8., 54, -1.,53. );

    h_ToT     =  new TH1D( name + "PixelClusterToT", "Pixel Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_Charge  =  new TH1D( name + "PixelClusterCharge", "Pixel Cluster Charge; #Charge; #Hits", 250, 0., 100000. );
    h_Size    =  new TH1D( name + "PixelClusterSize", "Pixel Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSize =  new TH1D( name + "PixelClusterPhiWidth", "Pixel Cluster Phi Width; #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSize =  new TH1D( name + "PixelClusterEtaWidth", "Pixel Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1A   =  new TH1D( name + "PixelClusterLVL1A", "Pixel Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_ToTI     =  new TH1D( name + "IBLPlanarClusterToT", "IBL Planar Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_ChargeI  =  new TH1D( name + "IBLPlanarClusterCharge", "IBL Planar Cluster Charge; #Charge; #Hits", 250, 0., 100000. );
    h_SizeI    =  new TH1D( name + "IBLPlanarClusterSize", "IBL Planar Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSizeI =  new TH1D( name + "IBLPlanarClusterPhiWidth", "IBL Planar Cluster Phi Width; IBL #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSizeI =  new TH1D( name + "IBLPlanarClusterEtaWidth", "IBL Planar Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1AI   =  new TH1D( name + "IBLPlanarClusterLVL1A", "IBL Planar Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_ToTI3D     =  new TH1D( name + "IBL3DClusterToT", "IBL 3D Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_ChargeI3D  =  new TH1D( name + "IBL3DClusterCharge", "IBL 3D Cluster Charge; #Charge; #Hits", 250, 0., 100000. );
    h_SizeI3D    =  new TH1D( name + "IBL3DClusterSize", "IBL 3D Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSizeI3D =  new TH1D( name + "IBL3DClusterPhiWidth", "IBL 3D Cluster Phi Width; #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSizeI3D =  new TH1D( name + "IBL3DClusterEtaWidth", "IBL 3D Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1AI3D   =  new TH1D( name + "IBL3DClusterLVL1A", "IBL 3D Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_SizeVSToT   =  new TH2D( name + "PixelsSizeVSToT", "Pixels Size VS ToT; ToT; Size; #Hits", 250, -0.5, 249.5, 20, -0.5,19.5 );
    h_SizeVSToTI  =  new TH2D( name + "IBLPlanarSizeVSToT", "IBL Planar Size VS ToT; ToT; Size; #Hits", 250, -0.5, 249.5, 20,-0.5,19.5 );
    h_SizeVSToTI3D=  new TH2D( name + "IBL3DSizeVSToT", "IBL 3D Size VS ToT; ToT; Size; #Hits", 250, -0.5, 249.5, 20, -0.5,19.5 );

    h_GlobalZ     =  new TH1D( name + "ClusterGlobalZ", "Cluster Global Z; Global Z; #Hits ", 250, -1000., 1000. );
    h_GlobalZIBL  =  new TH1D( name + "IBLClusterGlobalZ", "IBL Cluster Global Z; Global Z; #Hits ", 250, -1000., 1000. );
    h_GlobalZIPl  =  new TH1D( name + "IBLPlanarClusterGlobalZ", "IBL Planar Cluster Global Z; Global Z; #Hits ", 250, -1000., 1000. );
    h_GlobalZI3D  =  new TH1D( name + "IBL3DClusterGlobalZ", "IBL 3D Cluster Global Z; Global Z; #Hits ", 250, -1000., 1000. );

    h_GlobalRVSZ    =  new TH2D( name + "ClusterRadiusVSZ", "Cluster Radius VS Z; Z; Radius; #Hits", 200, -1000., 1000., 200, 0.,200. );

    h_LocalYVSX    =  new TH2D( name + "PixelClusterLocalYVSX", "Pixel Cluster Local Y VS X; Local X; Local Y; #Hits", 200, -100., 100., 200, -100.,100. );
    h_LocalYVSXI   =  new TH2D( name + "IBLPlanarClusterLocalYVSX", "IBL Planar Cluster Local Y VS X; Local X; Local Y; #Hits", 200, -100., 100., 200, -100.,100. );
    h_LocalYVSXI3D =  new TH2D( name + "IBL3DClusterLocalYVSX", "IBL 3D Cluster Local Y VS X; Local X; Local Y; #Hits", 200, -100., 100., 200, -100.,100. );



    allHists.push_back( h_IBLphimodVSetamod );
    allHists.push_back( h_BLphimodVSetamod );
    allHists.push_back( h_L1phimodVSetamod );
    allHists.push_back( h_L2phimodVSetamod );
    allHists.push_back( h_ToT );
    allHists.push_back( h_Charge );
    allHists.push_back( h_Size );
    allHists.push_back( h_PhiSize );
    allHists.push_back( h_EtaSize );
    allHists.push_back( h_LVL1A );
    allHists.push_back( h_ToTI );
    allHists.push_back( h_ChargeI );
    allHists.push_back( h_SizeI );
    allHists.push_back( h_PhiSizeI );
    allHists.push_back( h_EtaSizeI );
    allHists.push_back( h_LVL1AI );
    allHists.push_back( h_ToTI3D );
    allHists.push_back( h_ChargeI3D );
    allHists.push_back( h_SizeI3D );
    allHists.push_back( h_PhiSizeI3D );
    allHists.push_back( h_EtaSizeI3D );
    allHists.push_back( h_LVL1AI3D );
    allHists.push_back( h_SizeVSToT );
    allHists.push_back( h_SizeVSToTI );
    allHists.push_back( h_SizeVSToTI3D );
    allHists.push_back( h_GlobalZ );
    allHists.push_back( h_GlobalZIBL );
    allHists.push_back( h_GlobalZIPl );
    allHists.push_back( h_GlobalZI3D );
    allHists.push_back( h_GlobalRVSZ );
    allHists.push_back( h_LocalYVSX );
    allHists.push_back( h_LocalYVSXI );
    allHists.push_back( h_LocalYVSXI3D );


    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
		  (*hist)->Sumw2();
    }

	}

  ~PixelAllClusterHists()
  {
    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
      delete *hist;
    }
  }



  /** Fill the histograms using the recosntructed information*/
  //void Fill( xAOD::PrepRawDataContainer::const_iterator * cluster_itr)
  void Fill(float localx, float localy, float globalx, float globaly, float globalz, float charge, int size, int phiwidth, int etawidth,
  int lvl1, int tot, int bec, int layer, int etamod, int phimod) {



    float globalr = sqrt(globalx*globalx + globaly*globaly);

    //h_npix->Fill( tp->npix() );
    //h_nIBL->Fill( tp->nIBL() );
    //h_nBL->Fill( tp->nBL() );

    //float size = (cluster_itr)->auxdataConst< float >("size");
    //float size = ci->size();
    //float phiwidth = ci->sizePhi();
    //float phiwidth = (*cluster_itr)->auxdataConst< float >("sizePhi");
    //float phiwidth = *ci->auxdataConst< int >("sizePhi");
    //float etawidth = (*cluster_itr)->auxdataConst< float >("sizeZ");
    //int lvl1 = (*cluster_itr)->auxdataConst< int >("LVL1");
    //int tot = (*cluster_itr)->auxdataConst< int >("ToT");
    //float charge = (*cluster_itr)->auxdataConst< float >("charge");
    //int etamod = (*cluster_itr)->auxdataConst< int >("eta_module");
    //int phimod = (*cluster_itr)->auxdataConst< int >("phi_module");
    //float globalx = (*cluster_itr)->auxdataConst< float >("globalX");
    //float globaly = (*cluster_itr)->auxdataConst< float >("globalY");
    //float globalz = (*cluster_itr)->auxdataConst< float >("globalZ");
    //float globalr = sqrt(globalx*globalx + globaly*globaly);
    //float localx = (*cluster_itr)->auxdataConst< float >("localX");
    //float localy = (*cluster_itr)->auxdataConst< float >("localY");
    //int bec = (*cluster_itr)->auxdataConst< int >("bec");
    //int layer = (*cluster_itr)->auxdataConst< int >("layer");

    bool Noise = false;
    //if( pc->auxdata< int>("bec")==0 && pc->auxdata< int >("layer")!=0 && pc->auxdata< int >("LVL1A") > 5) Noise = true;
    //if( pc->auxdata< int>("bec")==0 && pc->auxdata< int >("layer")==0 && (pc->auxdata< int >("LVL1A") < 9 || pc->auxdata< int >("LVL1A") > 11 )
    //) Noise = true;

 if(!Noise) {

 h_GlobalRVSZ->Fill(globalz,globalr);

 if ( bec == 0 && layer == 0) {
   h_IBLphimodVSetamod->Fill(etamod,phimod);
   h_GlobalZIBL->Fill(globalz);
   if ( etamod >= -6 && etamod <= 5) {
      h_ToTI->Fill(tot);
      h_ChargeI->Fill(charge);
      h_SizeI->Fill(size);
      h_PhiSizeI->Fill(phiwidth);
      h_EtaSizeI->Fill(etawidth);
      h_LVL1AI->Fill(lvl1);
      h_SizeVSToTI->Fill(tot,size);
      h_GlobalZIPl->Fill(globalz);
      h_LocalYVSXI->Fill(localx,localy);
   }else{
      h_ToTI3D->Fill(tot);
      h_ChargeI3D->Fill(charge);
      h_SizeI3D->Fill(size);
      h_PhiSizeI3D->Fill(phiwidth);
      h_EtaSizeI3D->Fill(etawidth);
      h_LVL1AI3D->Fill(lvl1);
      h_SizeVSToTI3D->Fill(tot,size);
      h_GlobalZI3D->Fill(globalz);
      h_LocalYVSXI3D->Fill(localx,localy);
   }
 }
 if ( bec == 0 && layer != 0) {
      if(layer == 1) h_BLphimodVSetamod->Fill(etamod,phimod);
      if(layer == 2) h_L1phimodVSetamod->Fill(etamod,phimod);
      if(layer == 3) h_L2phimodVSetamod->Fill(etamod,phimod);
      h_ToT->Fill(tot);
      h_Charge->Fill(charge);
      h_Size->Fill(size);
      h_PhiSize->Fill(phiwidth);
      h_EtaSize->Fill(etawidth);
      h_LVL1A->Fill(lvl1);
      h_SizeVSToT->Fill(tot,size);
      h_GlobalZ->Fill(globalz);
      h_LocalYVSX->Fill(localx,localy);
 }



 }



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
