#ifndef PixelClusterHists_h
#define PixelClusterHists_h
#define PI 3.14159265
#include <iostream>
#include "TH1D.h"
#include "TH2D.h"
#include "TH2D.h"
#include "TProfile2D.h"
#include "TProfile.h"
#include "TGraphAsymmErrors.h"
#include "TMath.h"
#include "TString.h"
#include "math.h"
#ifndef __MAKECINT__
#include "xAODTruth/TruthParticle.h"
#include "xAODTruth/TruthVertex.h"
#include "xAODTracking/TrackParticle.h"
#include "xAODTracking/TrackStateValidationContainer.h"
#endif // not __MAKECINT__

#include <EventLoop/Worker.h>
#include <vector>
#include <set>

struct PixelClusterHists
{

  TString name;      //!



  TH2D*  h_IBLphimodVSetamod;
  TH2D*  h_BLphimodVSetamod;
  TH2D*  h_L1phimodVSetamod;
  TH2D*  h_L2phimodVSetamod;

  TH1D*  h_ToT;
  TH1D*  h_Charge;
  TH2D*  h_ChargeVSToT;
  TH1D*  h_Size;
  TH1D*  h_PhiSize;
  TH1D*  h_EtaSize;
  TH1D*  h_LVL1A;

  TH1D*  h_ToT0;
  TH1D*  h_Charge0;
  TH1D*  h_Size0;
  TH1D*  h_PhiSize0;
  TH1D*  h_EtaSize0;
  TH1D*  h_LVL1A0;

  TH1D*  h_ToT1;
  TH1D*  h_Charge1;
  TH1D*  h_Size1;
  TH1D*  h_PhiSize1;
  TH1D*  h_EtaSize1;
  TH1D*  h_LVL1A1;

  TH1D*  h_ToT2;
  TH1D*  h_Charge2;
  TH1D*  h_Size2;
  TH1D*  h_PhiSize2;
  TH1D*  h_EtaSize2;
  TH1D*  h_LVL1A2;

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

  TH2D*  h_ToTVSLocalPhiIPl;
  TH2D*  h_ToTVSLocalPhiI3D;
  TH2D*  h_ToTVSLocalPhiBL;
  TH2D*  h_ToTVSLocalPhiL1;
  TH2D*  h_ToTVSLocalPhiL2;
  TH2D*  h_ToTVSLocalEtaI3D;
  TH2D*  h_ToTVSLocalEtaIPl;
  TH2D*  h_ToTVSLocalEtaBL;
  TH2D*  h_ToTVSLocalEtaL1;
  TH2D*  h_ToTVSLocalEtaL2;
//=======SS===============
  TProfile2D*  h_ToTvsLocalXYIPl;
  TProfile2D*  h_ToTvsLocalXYI3D;
  TProfile2D*  h_ToTvsLocalXYBL;
  TProfile2D*  h_ToTvsLocalXYL1;
  TProfile2D*  h_ToTvsLocalXYL2;

  TProfile2D*  h_EtaSizevsLocalXYIPl;
  TProfile2D*  h_EtaSizevsLocalXYI3D;
  TProfile2D*  h_EtaSizevsLocalXYBL;
  TProfile2D*  h_EtaSizevsLocalXYL1;
  TProfile2D*  h_EtaSizevsLocalXYL2;

  TProfile2D*  h_PhiSizevsLocalXYIPl;
  TProfile2D*  h_PhiSizevsLocalXYI3D;
  TProfile2D*  h_PhiSizevsLocalXYBL;
  TProfile2D*  h_PhiSizevsLocalXYL1;
  TProfile2D*  h_PhiSizevsLocalXYL2;

  TH1D*  h_ToTIPl_lowT;
  TH1D*  h_ToTIPl_highT;
  TH1D*  h_ToTI_darkyellow;

  TH2D* h_LocalYVSGlobalZIPl;
  TH2D* h_LocalYVSGlobalZI3D;
  TH2D* h_LocalYVSGlobalZBL;
  TH2D* h_LocalYVSGlobalZL1;
  TH2D* h_LocalYVSGlobalZL2;

  TH2D* h_LocalXVSGlobalXYIPl;
  TH2D* h_LocalXVSGlobalXYI3D;
  TH2D* h_LocalXVSGlobalXYBL;
  TH2D* h_LocalXVSGlobalXYL1;
  TH2D* h_LocalXVSGlobalXYL2;

  TH2D* h_LocalXVSRIPl;
  TH2D* h_LocalXVSRI3D;

//  TProfile2D*  h_ToTvsLocalXYIPl_normalized;
//  TProfile2D*  h_ToTvsLocalXYBL_normalized;
//  TProfile2D*  h_EtaSizevsLocalXYIPl_normalized;
//  TProfile2D*  h_EtaSizevsLocalXYBL_normalized;

//===========================
  TH1D* h_GlobalZ;
  TH1D* h_GlobalZIBL;
  TH1D* h_GlobalZIPl;
  TH1D* h_GlobalZI3D;
  TH2D* h_GlobalRVSZ;
  TH2D* h_LocalYVSX;
  TH2D* h_LocalYVSXI;
  TH2D* h_LocalYVSXI3D;

  TH1D* h_ResiX1;
  TH1D* h_ResiX2;
  TH1D* h_ResiX3;
  TH1D* h_ResiXIPl;
  TH1D* h_ResiXI3D;
  TH1D* h_ResiY1;
  TH1D* h_ResiY2;
  TH1D* h_ResiY3;
  TH1D* h_ResiYIPl;
  TH1D* h_ResiYI3D;

  TH1D* h_PullX1;
  TH1D* h_PullX2;
  TH1D* h_PullX3;
  TH1D* h_PullXIPl;
  TH1D* h_PullXI3D;
  TH1D* h_PullY1;
  TH1D* h_PullY2;
  TH1D* h_PullY3;
  TH1D* h_PullYIPl;
  TH1D* h_PullYI3D;

  TH1D* h_PhiInci;
  TH1D* h_PhiInciIPl;
  TH1D* h_PhiInciI3D;
  TH1D* h_EtaInci;
  TH1D* h_EtaInciIPl;
  TH1D* h_EtaInciI3D;

  TH1D* h_omega1;
  TH1D* h_omega2;
  TH1D* h_omega3;
  TH1D* h_omega4;
  TH1D* h_omegaz1;
  TH1D* h_omegaz2;
  TH1D* h_omegaz3;
  TH1D* h_omegaz4;

  TProfile* h_resiXVSomega2;
  TProfile* h_resiXVSomega3;
  TProfile* h_resiXVSomega4;
  TProfile* h_resiXVSomega5;

  TProfile* h_resiYVSomega2;
  TProfile* h_resiYVSomega3;
  TProfile* h_resiYVSomega4;
  TProfile* h_resiYVSomega5;

  TH1D* h_resiXNN2;
  TH1D* h_resiXdigi2;
  TH1D* h_resiXomega2;
  TH1D* h_resiYNN2;
  TH1D* h_resiYdigi2;
  TH1D* h_resiYomega2;

  TH1D* h_resiXNN3 ;
  TH1D* h_resiXdigi3;
  TH1D* h_resiXomega3;
  TH1D* h_resiYNN3;
  TH1D* h_resiYdigi3;
  TH1D* h_resiYomega3;

  TH1D* h_resiXNN4;
  TH1D* h_resiXdigi4;
  TH1D* h_resiXomega4;
  TH1D* h_resiYNN4;
  TH1D* h_resiYdigi4;
  TH1D* h_resiYomega4;

  TH1D* h_resiXNN5;
  TH1D* h_resiXdigi5;
  TH1D* h_resiXomega5;
  TH1D* h_resiYNN5;
  TH1D* h_resiYdigi5;
  TH1D* h_resiYomega5;

  TH2D* h_mapX;
  TH2D* h_mapY;

  TH2D* h_phiVSphimod;

  TProfile* h_PixelLorentz;
  TProfile* h_PixelLorentzL0;
  TProfile* h_PixelLorentzL1;
  TProfile* h_PixelLorentzL2;
  TProfile* h_IBLPlLorentz;
  TProfile* h_IBL3DLorentz;

  TProfile* h_PixelLorentzs;
  TProfile* h_PixelLorentzL0s;
  TProfile* h_PixelLorentzL1s;
  TProfile* h_PixelLorentzL2s;
  TProfile* h_IBLPlLorentzs;
  TProfile* h_IBL3DLorentzs;

  TProfile* h_PixelLorentzE;
  TProfile* h_PixelLorentzEL0;
  TProfile* h_PixelLorentzEL1;
  TProfile* h_PixelLorentzEL2;
  TProfile* h_IBLPlLorentzE;
  TProfile* h_IBL3DLorentzE;

  TProfile* h_PixelLorentzL0_1;
  TProfile* h_PixelLorentzL0_2;
  TProfile* h_PixelLorentzL0_3;
  TProfile* h_PixelLorentzL0_4;
  TProfile* h_PixelLorentzL0_5;
  TProfile* h_PixelLorentzL0_6;
  TProfile* h_PixelLorentzL0_7;
  TProfile* h_PixelLorentzL0_8;
  TProfile* h_PixelLorentzL0_9;
  TProfile* h_PixelLorentzL0_10;
  TProfile* h_PixelLorentzL0_11;
  TProfile* h_PixelLorentzL0_12;
  TProfile* h_PixelLorentzL0_13;

  TProfile* h_PixelLorentzL1_1;
  TProfile* h_PixelLorentzL1_2;
  TProfile* h_PixelLorentzL1_3;
  TProfile* h_PixelLorentzL1_4;
  TProfile* h_PixelLorentzL1_5;
  TProfile* h_PixelLorentzL1_6;
  TProfile* h_PixelLorentzL1_7;
  TProfile* h_PixelLorentzL1_8;
  TProfile* h_PixelLorentzL1_9;
  TProfile* h_PixelLorentzL1_10;
  TProfile* h_PixelLorentzL1_11;
  TProfile* h_PixelLorentzL1_12;
  TProfile* h_PixelLorentzL1_13;

  TProfile* h_PixelLorentzL2_1;
  TProfile* h_PixelLorentzL2_2;
  TProfile* h_PixelLorentzL2_3;
  TProfile* h_PixelLorentzL2_4;
  TProfile* h_PixelLorentzL2_5;
  TProfile* h_PixelLorentzL2_6;
  TProfile* h_PixelLorentzL2_7;
  TProfile* h_PixelLorentzL2_8;
  TProfile* h_PixelLorentzL2_9;
  TProfile* h_PixelLorentzL2_10;
  TProfile* h_PixelLorentzL2_11;
  TProfile* h_PixelLorentzL2_12;
  TProfile* h_PixelLorentzL2_13;

  TProfile* h_IBLPlLorentz_1;
  TProfile* h_IBLPlLorentz_2;
  TProfile* h_IBLPlLorentz_3;
  TProfile* h_IBLPlLorentz_4;
  TProfile* h_IBLPlLorentz_5;
  TProfile* h_IBLPlLorentz_6;
  TProfile* h_IBLPlLorentz_7;
  TProfile* h_IBLPlLorentz_8;
  TProfile* h_IBLPlLorentz_9;
  TProfile* h_IBLPlLorentz_10;
  TProfile* h_IBLPlLorentz_11;
  TProfile* h_IBLPlLorentz_12;

  TProfile* h_shapeX0_2;
  TProfile* h_shapeX0_3;
  TProfile* h_shapeX0_4;
  TProfile* h_shapeX0_5;
  TProfile* h_shapeX03D_2;
  TProfile* h_shapeX03D_3;
  TProfile* h_shapeX03D_4;
  TProfile* h_shapeX03D_5;
  TProfile* h_shapeX1_2;
  TProfile* h_shapeX1_3;
  TProfile* h_shapeX1_4;
  TProfile* h_shapeX1_5;
  TProfile* h_shapeX2_2;
  TProfile* h_shapeX2_3;
  TProfile* h_shapeX2_4;
  TProfile* h_shapeX2_5;
  TProfile* h_shapeX3_2;
  TProfile* h_shapeX3_3;
  TProfile* h_shapeX3_4;
  TProfile* h_shapeX3_5;
  TProfile* h_shapeY0_2;
  TProfile* h_shapeY0_3;
  TProfile* h_shapeY0_4;
  TProfile* h_shapeY0_5;
  TProfile* h_shapeY03D_2;
  TProfile* h_shapeY03D_3;
  TProfile* h_shapeY03D_4;
  TProfile* h_shapeY03D_5;
  TProfile* h_shapeY1_2;
  TProfile* h_shapeY1_3;
  TProfile* h_shapeY1_4;
  TProfile* h_shapeY1_5;
  TProfile* h_shapeY2_2;
  TProfile* h_shapeY2_3;
  TProfile* h_shapeY2_4;
  TProfile* h_shapeY2_5;
  TProfile* h_shapeY3_2;
  TProfile* h_shapeY3_3;
  TProfile* h_shapeY3_4;
  TProfile* h_shapeY3_5;

  std::vector< TH1* > allHists;
  std::set<int>       usedBarcodes;

  PixelClusterHists(const TString& n)
  {
    name = n;

    h_IBLphimodVSetamod=  new TH2D( name + "IBLPhiModuleVSEtaModule", "IBL Phi Module VS Eta Module; eta; phi; #Hits", 22, -11., 11., 16, -1.,15. );
    h_BLphimodVSetamod =  new TH2D( name + "BLPhiModuleVSEtaModule", "BL Phi Module VS Eta Module; eta; phi; #Hits", 16, -8., 8., 24, -1.,23. );
    h_L1phimodVSetamod =  new TH2D( name + "L1PhiModuleVSEtaModule", "L1 Phi Module VS Eta Module; eta; phi; #Hits", 16, -8., 8., 40, -1.,39. );
    h_L2phimodVSetamod =  new TH2D( name + "L2PhiModuleVSEtaModule", "L2 Phi Module VS Eta Module; eta; phi; #Hits", 16, -8., 8., 54, -1.,53. );

    h_ToT     =  new TH1D( name + "PixelClusterToT", "Pixel Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_Charge  =  new TH1D( name + "PixelClusterCharge", "Pixel Cluster Charge; #Charge; #Hits", 125, 0., 100000. );
    h_ChargeVSToT     =  new TH2D( name + "PixelClusterChargeVSToT", "Pixel Cluster ToT; #ToT; #Charge", 250, -0.5, 249.5, 250, 0., 200000. );
    h_Size    =  new TH1D( name + "PixelClusterSize", "Pixel Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSize =  new TH1D( name + "PixelClusterPhiWidth", "Pixel Cluster Phi Width; #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSize =  new TH1D( name + "PixelClusterEtaWidth", "Pixel Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1A   =  new TH1D( name + "PixelClusterLVL1A", "Pixel Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_ToT0     =  new TH1D( name + "PixelClusterToTBL", "Pixel Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_Charge0  =  new TH1D( name + "PixelClusterChargeBL", "Pixel Cluster Charge; #Charge; #Hits", 125, 0., 100000. );
    h_Size0    =  new TH1D( name + "PixelClusterSizeBL", "Pixel Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSize0 =  new TH1D( name + "PixelClusterPhiWidthBL", "Pixel Cluster Phi Width; #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSize0 =  new TH1D( name + "PixelClusterEtaWidthBL", "Pixel Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1A0   =  new TH1D( name + "PixelClusterLVL1ABL", "Pixel Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_ToT1     =  new TH1D( name + "PixelClusterToTL1", "Pixel Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_Charge1  =  new TH1D( name + "PixelClusterChargeL1", "Pixel Cluster Charge; #Charge; #Hits", 125, 0., 100000. );
    h_Size1    =  new TH1D( name + "PixelClusterSizeL1", "Pixel Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSize1 =  new TH1D( name + "PixelClusterPhiWidthL1", "Pixel Cluster Phi Width; #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSize1 =  new TH1D( name + "PixelClusterEtaWidthL1", "Pixel Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1A1   =  new TH1D( name + "PixelClusterLVL1AL1", "Pixel Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_ToT2     =  new TH1D( name + "PixelClusterToTL2", "Pixel Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_Charge2  =  new TH1D( name + "PixelClusterChargeL2", "Pixel Cluster Charge; #Charge; #Hits", 125, 0., 100000. );
    h_Size2    =  new TH1D( name + "PixelClusterSizeL2", "Pixel Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSize2 =  new TH1D( name + "PixelClusterPhiWidthL2", "Pixel Cluster Phi Width; #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSize2 =  new TH1D( name + "PixelClusterEtaWidthL2", "Pixel Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1A2   =  new TH1D( name + "PixelClusterLVL1AL2", "Pixel Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_ToTI     =  new TH1D( name + "IBLPlanarClusterToT", "IBL Planar Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_ChargeI  =  new TH1D( name + "IBLPlanarClusterCharge", "IBL Planar Cluster Charge; #Charge; #Hits", 125, 0., 100000. );
    h_SizeI    =  new TH1D( name + "IBLPlanarClusterSize", "IBL Planar Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSizeI =  new TH1D( name + "IBLPlanarClusterPhiWidth", "IBL Planar Cluster Phi Width; IBL #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSizeI =  new TH1D( name + "IBLPlanarClusterEtaWidth", "IBL Planar Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1AI   =  new TH1D( name + "IBLPlanarClusterLVL1A", "IBL Planar Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_ToTI3D     =  new TH1D( name + "IBL3DClusterToT", "IBL 3D Cluster ToT; #ToT; #Hits", 250, -0.5, 249.5 );
    h_ChargeI3D  =  new TH1D( name + "IBL3DClusterCharge", "IBL 3D Cluster Charge; #Charge; #Hits", 125, 0., 100000. );
    h_SizeI3D    =  new TH1D( name + "IBL3DClusterSize", "IBL 3D Cluster Size; #Size; #Hits",20, -0.5, 19.5 );
    h_PhiSizeI3D =  new TH1D( name + "IBL3DClusterPhiWidth", "IBL 3D Cluster Phi Width; #Phi Width; #Hits",20, -0.5, 19.5 );
    h_EtaSizeI3D =  new TH1D( name + "IBL3DClusterEtaWidth", "IBL 3D Cluster Eta Width; #Eta Width; #Hits",20, -0.5, 19.5 );
    h_LVL1AI3D   =  new TH1D( name + "IBL3DClusterLVL1A", "IBL 3D Cluster LVL1A; #LVL1A; #Hits",20, -0.5, 19.5 );

    h_SizeVSToT   =  new TH2D( name + "PixelsSizeVSToT", "Pixels Size VS ToT; ToT; Size; #Hits", 250, -0.5, 249.5, 20, -0.5,19.5 );
    h_SizeVSToTI  =  new TH2D( name + "IBLPlanarSizeVSToT", "IBL Planar Size VS ToT; ToT; Size; #Hits", 250, -0.5, 249.5, 20, -0.5,19.5 );
    h_SizeVSToTI3D=  new TH2D( name + "IBL3DSizeVSToT", "IBL 3D Size VS ToT; ToT; Size; #Hits", 250, -0.5, 249.5, 20, -0.5,19.5 );

    h_ToTVSLocalPhiIPl   =  new TH2D( name + "PixelsToTVSLocalPhiIPl", "ToT VS Phi Incidence IBL Planar; Phi Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalPhiI3D   =  new TH2D( name + "PixelsToTVSLocalPhiI3D", "ToT VS Phi Incidence IBL 3D; Phi Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalPhiBL   =  new TH2D( name + "PixelsToTVSLocalPhiBL", "ToT VS Phi Incidence BL; Phi Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalPhiL1   =  new TH2D( name + "PixelsToTVSLocalPhiL1", "ToT VS Phi Incidence L1; Phi Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalPhiL2   =  new TH2D( name + "PixelsToTVSLocalPhiL2", "ToT VS Phi Incidence L2; Phi Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalEtaIPl   =  new TH2D( name + "PixelsToTVSLocalEtaIPl", "ToT VS Eta Incidence IBL Planar; Eta Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalEtaI3D   =  new TH2D( name + "PixelsToTVSLocalEtaI3D", "ToT VS Eta Incidence IBL 3D; Eta Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalEtaBL   =  new TH2D( name + "PixelsToTVSLocalEtaBL", "ToT VS Eta Incidence BL; Eta Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalEtaL1   =  new TH2D( name + "PixelsToTVSLocalEtaL1", "ToT VS Eta Incidence L1; Eta Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
    h_ToTVSLocalEtaL2   =  new TH2D( name + "PixelsToTVSLocalEtaL2", "ToT VS Eta Incidence L2; Eta Incidence [rad]; ToT; #Hits", 640, -1.6025, 1.597575,200, -0.5,199.5 );
//===========SS==================================================================================================================================================================================================================
    h_ToTvsLocalXYIPl = new TProfile2D( name + "PixelsToTVSLocalXYIPl","ToT VS LocalX VS LocalY IBL Planar; LocalY; LocalX; ToT; #Hits", 320, -40.,40.,400, -10., 10.);
    h_ToTvsLocalXYI3D = new TProfile2D(name + "PixelsToTVSLocalXYI3D","ToT VS LocalX VS LocalY IBL 3D; LocalY; LocalX; ToT; #Hits", 320, -40.,40.,400, -10., 10.);
    h_ToTvsLocalXYBL = new TProfile2D(name + "PixelsToTVSLocalXYBL","ToT VS LocalX VS LocalY BL; LocalY; LocalX; ToT; #Hits", 60, -2.,10.,400, -10., 10.);
    h_ToTvsLocalXYL1 = new TProfile2D( name + "PixelsToTVSLocalXYL1","ToT VS LocalX VS LocalY L1; LocalY; LocalX; ToT; #Hits", 60, -2.,10.,400, -10., 10.);
    h_ToTvsLocalXYL2 = new TProfile2D( name + "PixelsToTVSLocalXYL2","ToT VS LocalX VS LocalY L2; LocalY; LocalX; ToT; #Hits", 60, -2.,10.,400, -10., 10.);

    h_EtaSizevsLocalXYIPl = new TProfile2D( name + "IBLPlanarEtaWidthVSLocalXY","Cluster Eta width IBL Planar VS Local X VS Local Y;LocalY; LocalX; ClusterEtaWidth", 320, -40.,40.,400, -10., 10.);
    h_EtaSizevsLocalXYI3D = new TProfile2D( name + "IBL3DEtaWidthVSLocalXY","Cluster Eta width IBL 3D VS Local X VS Local Y; LocalY; LocalX; ClusterEtaWidth", 320, -40.,40.,400, -10., 10.);
    h_EtaSizevsLocalXYBL = new TProfile2D( name + "BLEtaWidthVSLocalXY","Cluster Eta width BL VS Local X VS Local Y;LocalY; LocalX; ClusterEtaWidth", 60, -2.,10.,400, -10., 10.);
    h_EtaSizevsLocalXYL1 = new TProfile2D( name + "L1EtaWidthVSLocalXY","Cluster Eta width L1 VS Local X VS Local Y;LocalY; LocalX; ClusterEtaWidth",60, -2.,10.,400, -10., 10.);
    h_EtaSizevsLocalXYL2 = new TProfile2D( name + "L2EtaWidthVSLocalXY","Cluster Eta width L2 VS Local X VS Local Y; LocalY; LocalX; ClusterEtaWidth",60, -2.,10.,400, -10., 10.);

    h_PhiSizevsLocalXYIPl = new TProfile2D( name + "IBLPlanarPhiWidthVSLocalXY","Cluster Phi width IBL Planar VS Local X VS Local Y; LocalY; LocalX; ClusterPhiWidth",320, -40.,40.,400, -10., 10.);
    h_PhiSizevsLocalXYI3D = new TProfile2D( name + "IBL3DPhiWidthVSLocalXY","Cluster Phi width IBL 3D VS Local X VS Local Y; LocalY; LocalX; ClusterPhiWidth",320, -40.,40.,400, -10., 10.);
    h_PhiSizevsLocalXYBL = new TProfile2D( name + "BLPhiWidthVSLocalXY","Cluster Phi width BL VS Local X VS Local Y; LocalY; LocalX; ClusterPhiWidth",60, -2.,10.,400, -10., 10.);
    h_PhiSizevsLocalXYL1 = new TProfile2D( name + "L1PhiWidthVSLocalXY","Cluster Phi width L1 VS Local X VS Local Y;LocalY; LocalX; ClusterPhiWidth",60, -2.,10.,400, -10., 10.);
    h_PhiSizevsLocalXYL2 = new TProfile2D( name + "L2PhiWidthVSLocalXY","Cluster Phi width L2 VS Local X VS Local Y; LocalY; LocalX; ClusterPhiWidth",60, -2.,10.,400, -10., 10.);

    h_ToTIPl_lowT =  new TH1D( name + "IPllowT", "IBL Planar Cluster ToT low threshold region; #ToT; #Hits", 160, 0., 40.);
    h_ToTIPl_highT =  new TH1D( name + "IPlhighT", "IBL Planar Cluster ToT high threshold region; #ToT; #Hits", 160, 0., 40.);
    h_ToTI_darkyellow =  new TH1D( name + "IBLPlanarClusterToT dark yellow region", "IBL Planar Cluster ToT; #ToT; #Hits", 40, 0., 40.);

    h_LocalYVSGlobalZIPl = new TH2D( name + "LocalYVSGlobalZIPl", "IBL Planar: Pixel Cluster Local Y VS Global Z; LocalY; GLobalZ; #Hits", 320, -40., 40., 1200, -600.,600. );
    h_LocalYVSGlobalZI3D = new TH2D( name + "LocalYVSGlobalZI3D", "IBL 3D: Pixel Cluster Local Y VS Global Z; LocalY; GLobalZ; #Hits", 320, -40., 40.,1200, -600.,600. );
    h_LocalYVSGlobalZBL = new TH2D( name + "LocalYVSGlobalZBL", "BL: Pixel Cluster Local Y VS Global Z; LocalY; GLobalZ; #Hits",400, -40., 40., 1200, -600.,600.);
    h_LocalYVSGlobalZL1 = new TH2D( name + "LocalYVSGlobalZL1", "L1: Pixel Cluster Local Y VS Global Z; LocalY; GLobalZ; #Hits",400, -40., 40., 1200, -600.,600. );
    h_LocalYVSGlobalZL2 = new TH2D( name + "LocalYVSGlobalZL2", "L2: Pixel Cluster Local Y VS Global Z; LocalY; GLobalZ; #Hits",400, -40., 40., 1200, -600.,600. );
    
    h_LocalXVSGlobalXYIPl = new TH2D( name + "LocalXVSGlobalXYIPl", "IBL Planar: Pixel Cluster Local X VS Global SQRT(X^2+Y^2); LocalX; Global SQRT(X^2+Y^2); #Hits", 400, -10., 10., 6000, -600.,600. );
    h_LocalXVSGlobalXYI3D = new TH2D( name + "LocalXVSGlobalXYI3D", "IBL 3D: Pixel Cluster Local X VS Global SQRT(X^2+Y^2); LocalX; Global SQRT(X^2+Y^2); #Hits",  400, -10., 10., 6000, -600.,600. );
    h_LocalXVSGlobalXYBL = new TH2D( name + "LocalXVSGlobalXYBL", "BL: Pixel Cluster Local X VS Global SQRT(X^2+Y^2); LocalX; Global SQRT(X^2+Y^2); #Hits", 400, -10., 10., 1200, -600.,600. );
    h_LocalXVSGlobalXYL1 = new TH2D( name + "LocalXVSGlobalXYL1", "L1: Pixel Cluster Local X VS Global SQRT(X^2+Y^2); LocalX; Global SQRT(X^2+Y^2); #Hits", 400, -10., 10.,1200, -600.,600. );
    h_LocalXVSGlobalXYL2 = new TH2D( name + "LocalXVSGlobalXYL2", "L2: Pixel Cluster Local X VS Global SQRT(X^2+Y^2); LocalX; Global SQRT(X^2+Y^2); #Hits",  400, -10., 10., 1200, -600.,600. );
   
    h_LocalXVSRIPl = new TH2D( name + "LocalXVSRIPl", "IBL Planar: Pixel Cluster Local X VS R; LocalX; R; #Hits", 400, -10., 10., 6000, -600.,600. );
    h_LocalXVSRI3D = new TH2D( name + "LocalXVSRI3D", "IBL 3D: Pixel Cluster Local X VS R; LocalX; R; #Hits",  400, -10., 10., 6000, -600.,600. );
    //h_ToTvsLocalXYIPl_normalized = new TProfile2D( name + "PixelsToTVSLocalXYIPl_n","ToT VS LocalX VS LocalY IBL Planar (norm); LocalY; LocalX; ToT; #Hits", 80, -40.,40.,20, -10., 10.);
    //h_ToTvsLocalXYBL_normalized = new TProfile2D(name + "PixelsToTVSLocalXYBL_n","ToT VS LocalX VS LocalY BL (norm); LocalY; LocalX; ToT; #Hits", 24, -2.,10.,20, -10., 10.);
    //h_EtaSizevsLocalXYIPl_normalized = new TProfile2D( name + "IBLPlanarEtaWidthVSLocalXY_n","Cluster Eta width IBL Planar (norm) VS Local X VS Local Y;LocalY; LocalX; ClusterEtaWidth", 80, -40.,40.,20, -10., 10.);
    //h_EtaSizevsLocalXYBL_normalized = new TProfile2D( name + "BLEtaWidthVSLocalXY_n","Cluster Eta width BL (norm) VS Local X VS Local Y;LocalY; LocalX; ClusterEtaWidth", 24, -2.,10.,20, -10., 10.);

//===================================================================================================================================================================================================================================
    h_GlobalZ     =  new TH1D( name + "ClusterGlobalZ", "Cluster Global Z; Global Z; #Hits ", 250, -1000., 1000. );
    h_GlobalZIBL  =  new TH1D( name + "IBLClusterGlobalZ", "IBL Cluster Global Z; Global Z; #Hits ", 250, -1000., 1000. );
    h_GlobalZIPl  =  new TH1D( name + "IBLPlanarClusterGlobalZ", "IBL Planar Cluster Global Z; Global Z; #Hits ", 250, -1000., 1000. );
    h_GlobalZI3D  =  new TH1D( name + "IBL3DClusterGlobalZ", "IBL 3D Cluster Global Z; Global Z; #Hits ", 250, -1000., 1000. );

    h_GlobalRVSZ    =  new TH2D( name + "ClusterRadiusVSZ", "Cluster Radius VS Z; Z; Radius; #Hits", 200, -1000., 1000., 200, 0.,200. );

    h_LocalYVSX    =  new TH2D( name + "PixelClusterLocalYVSX", "Pixel Cluster Local Y VS X; Local X; Local Y; #Hits", 200, -100., 100., 200, -100.,100. );
    h_LocalYVSXI   =  new TH2D( name + "IBLPlanarClusterLocalYVSX", "IBL Planar Cluster Local Y VS X; Local X; Local Y; #Hits", 200, -100., 100., 200, -100.,100. );
    h_LocalYVSXI3D =  new TH2D( name + "IBL3DClusterLocalYVSX", "IBL 3D Cluster Local Y VS X; Local X; Local Y; #Hits", 200, -100., 100., 200, -100.,100. );


    h_ResiX1    = new TH1D( name + "PixelPhiResidualsBL", "Pixel Phi Residuals BL; Residuals; #Hits",500, -1., 1.);
    h_ResiX2    = new TH1D( name + "PixelPhiResidualsL1", "Pixel Phi Residuals L1; Residuals; #Hits",500, -1., 1.);
    h_ResiX3    = new TH1D( name + "PixelPhiResidualsL2", "Pixel Phi Residuals L2; Residuals; #Hits",500, -1., 1.);
    h_ResiXIPl = new TH1D( name + "IBLPlanarPhiResiduals", "IBL Planar Phi Residual; Residuals; #Hits",500, -5., 5.);
    h_ResiXI3D = new TH1D( name + "IBL3DPhiResiduals", "IBL 3D Phi Residuals; Residuals; #Hits",500, -5., 5.);
    h_ResiY1    = new TH1D( name + "PixelZResidualsBL", "Pixel Z Residuals BL; Residuals; #Hits",500, -1., 1.);
    h_ResiY2    = new TH1D( name + "PixelZResidualsL1", "Pixel Z Residuals L1; Residuals; #Hits",500, -1., 1.);
    h_ResiY3    = new TH1D( name + "PixelZResidualsL2", "Pixel Z Residuals L2; Residuals; #Hits",500, -1., 1.);
    h_ResiYIPl = new TH1D( name + "IBL PlanarZResiduals", "IBL Planar Z Residual; Residuals; #Hits",500, -5., 5.);
    h_ResiYI3D = new TH1D( name + "IBL3DZResiduals", "IBL 3D Z Residuals; Residuals; #Hits",500, -5., 5.);

    h_PullX1    = new TH1D( name + "PixelPhiPullsBL", "Pixel Phi Pulls BL; Pulls; #Hits",500, -5., 5.);
    h_PullX2    = new TH1D( name + "PixelPhiPullsL1", "Pixel Phi Pulls L1; Pulls; #Hits",500, -5., 5.);
    h_PullX3    = new TH1D( name + "PixelPhiPullsL2", "Pixel Phi Pulls L2; Pulls; #Hits",500, -5., 5.);
    h_PullXIPl = new TH1D( name + "IBLPlanarPhiPulls", "IBL Planar Phi Pulls; Pulls; #Hits",500, -5., 5.);
    h_PullXI3D = new TH1D( name + "IBL3DPhiPulls", "IBL 3D Phi Pulls; Pulls; #Hits",500, -5., 5.);
    h_PullY1    = new TH1D( name + "PixelZPullsBL", "Pixel Z Pulls BL; Pulls; #Hits",500, -5., 5.);
    h_PullY2    = new TH1D( name + "PixelZPullsL1", "Pixel Z Pulls L1; Pulls; #Hits",500, -5., 5.);
    h_PullY3    = new TH1D( name + "PixelZPullsL2", "Pixel Z Pulls L2; Pulls; #Hits",500, -5., 5.);
    h_PullYIPl = new TH1D( name + "IBLPlanarZPulls", "IBL Planar Z Pulls; Pulls; #Hits",500, -5., 5.);
    h_PullYI3D = new TH1D( name + "IBL3DZPulls", "IBL 3D Z Pulls; Pulls; #Hits",500, -5., 5.);

    h_PhiInci  = new TH1D( name + "PixelPhiIncidence", "Pixel Phi Incidence; Phi Incidence; #Hits",64, -1.6, 1.6);
    h_PhiInciIPl  = new TH1D( name + "IBLPlanarPhiIncidence", "IBL Planar Phi Incidence; Phi Incidence; #Hits",64, -1.6, 1.6);
    h_PhiInciI3D  = new TH1D( name + "IBL3DPhiIncidence", "IBL 3D Phi Incidence; Phi Incidence; #Hits",64, -1.6, 1.6);
    h_EtaInci  = new TH1D( name + "PixelEtaIncidence", "Pixel Eta Incidence; Eta Incidence; #Hits",64, -1.6, 1.6);
    h_EtaInciIPl  = new TH1D( name + "IBLPlanarEtaIncidence", "IBL Planar Eta Incidence; Eta Incidence; #Hits",64, -1.6, 1.6);
    h_EtaInciI3D  = new TH1D( name + "IBL3DEtaIncidence", "IBL 3D Eta Incidence; Eta Incidence; #Hits",64, -1.6, 1.6);

    h_omega1  = new TH1D( name + "Omega1", "Pixel Barrel Omega; Omega; #Hits",50, 0., 1.);
    h_omega2  = new TH1D( name + "Omega2", "Pixel Barrel Omega; Omega; #Hits",50, 0., 1.);
    h_omega3  = new TH1D( name + "Omega3", "Pixel Barrel Omega; Omega; #Hits",50, 0., 1.);
    h_omega4  = new TH1D( name + "Omega4", "Pixel Barrel Omega; Omega; #Hits",50, 0., 1.);

    h_resiXVSomega2  = new TProfile ( name + "resiXVSOmega2", "Pixel Barrel Omega; Omega; Residuals Phi",50, 0., 1.);
    h_resiXVSomega3  = new TProfile ( name + "resiXVSOmega3", "Pixel Barrel Omega; Omega; Residuals Phi",50, 0., 1.);
    h_resiXVSomega4  = new TProfile ( name + "resiXVSOmega4", "Pixel Barrel Omega; Omega; Residuals Phi",50, 0., 1.);
    h_resiXVSomega5  = new TProfile ( name + "resiXVSOmega5", "Pixel Barrel Omega; Omega; Residuals Phi",50, 0., 1.);

    h_omegaz1  = new TH1D( name + "Omegaz1", "Pixel Barrel Omega_Z; Omega_Z; #Hits",50, 0., 1.);
    h_omegaz2  = new TH1D( name + "Omegaz2", "Pixel Barrel Omega_Z; Omega_Z; #Hits",50, 0., 1.);
    h_omegaz3  = new TH1D( name + "Omegaz3", "Pixel Barrel Omega_Z; Omega_Z; #Hits",50, 0., 1.);
    h_omegaz4  = new TH1D( name + "Omegaz4", "Pixel Barrel Omega_Z; Omega_Z; #Hits",50, 0., 1.);

    h_resiYVSomega2  = new TProfile( name + "resiYVSOmega2", "Pixel Barrel Omega; Omega; Residuals Eta",50, 0., 1.);
    h_resiYVSomega3  = new TProfile( name + "resiYVSOmega3", "Pixel Barrel Omega; Omega; Residuals Eta",50, 0., 1.);
    h_resiYVSomega4  = new TProfile( name + "resiYVSOmega4", "Pixel Barrel Omega; Omega; Residuals Eta",50, 0., 1.);
    h_resiYVSomega5  = new TProfile( name + "resiYVSOmega5", "Pixel Barrel Omega; Omega; Residuals Eta",50, 0., 1.);

    h_resiXNN2  = new TH1D( name + "resiXNN2", "Pixel Residual X NN; Residuals; #Hits",100, -0.5, 0.5);
    h_resiXdigi2  = new TH1D( name + "resiXdigi2", "Pixel Residual X Digi; Residuals; #Hits",100, -0.5, 0.5);
    h_resiXomega2  = new TH1D( name + "resiXomega2", "Pixel Residual X Omega; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYNN2  = new TH1D( name + "resiYNN2", "Pixel Residual Y NN; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYdigi2  = new TH1D( name + "resiYdigi2", "Pixel Residual Y Digi; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYomega2  = new TH1D( name + "resiYomega2", "Pixel Residual Y Omega; Residuals; #Hits",100, -0.5, 0.5);

    h_resiXNN3  = new TH1D( name + "resiXNN3", "Pixel Residual X NN; Residuals; #Hits",100, -0.5, 0.5);
    h_resiXdigi3  = new TH1D( name + "resiXdigi3", "Pixel Residual X Digi; Residuals; #Hits",100, -0.5, 0.5);
    h_resiXomega3  = new TH1D( name + "resiXomega3", "Pixel Residual X Omega; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYNN3  = new TH1D( name + "resiYNN3", "Pixel Residual Y NN; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYdigi3  = new TH1D( name + "resiYdigi3", "Pixel Residual Y Digi; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYomega3  = new TH1D( name + "resiYomega3", "Pixel Residual Y Omega; Residuals; #Hits",100, -0.5, 0.5);

    h_resiXNN4  = new TH1D( name + "resiXNN4", "Pixel Residual X NN; Residuals; #Hits",100, -0.5, 0.5);
    h_resiXdigi4  = new TH1D( name + "resiXdigi4", "Pixel Residual X Digi; Residuals; #Hits",100, -0.5, 0.5);
    h_resiXomega4  = new TH1D( name + "resiXomega4", "Pixel Residual X Omega; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYNN4  = new TH1D( name + "resiYNN4", "Pixel Residual Y NN; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYdigi4  = new TH1D( name + "resiYdigi4", "Pixel Residual Y Digi; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYomega4  = new TH1D( name + "resiYomega4", "Pixel Residual Y Omega; Residuals; #Hits",100, -0.5, 0.5);

    h_resiXNN5  = new TH1D( name + "resiXNN5", "Pixel Residual X NN; Residuals; #Hits",100, -0.5, 0.5);
    h_resiXdigi5  = new TH1D( name + "resiXdigi5", "Pixel Residual X Digi; Residuals; #Hits",100, -0.5, 0.5);
    h_resiXomega5  = new TH1D( name + "resiXomega5", "Pixel Residual X Omega; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYNN5  = new TH1D( name + "resiYNN5", "Pixel Residual Y NN; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYdigi5  = new TH1D( name + "resiYdigi5", "Pixel Residual Y Digi; Residuals; #Hits",100, -0.5, 0.5);
    h_resiYomega5  = new TH1D( name + "resiYomega5", "Pixel Residual Y Omega; Residuals; #Hits",100, -0.5, 0.5);

    h_mapX = new TH2D( name + "mapX", "Pixel X VS Phi Index", 330, -1., 329., 360, -9., 9.);
    h_mapY = new TH2D( name + "mapY", "Pixel Y VS Eta Index", 346, -1., 145., 175, -35., 35.);

    h_PixelLorentz = new TProfile( name + "PixelLorentz", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0 = new TProfile( name + "PixelLorentzBLayer", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1 = new TProfile( name + "PixelLorentzLayer1", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2 = new TProfile( name + "PixelLorentzLayer2", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_IBLPlLorentz = new TProfile( name + "IBLPlanarLorentz", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.6025, 1.5975);
    h_IBL3DLorentz = new TProfile( name + "IBL3DLorentz", "IBL 3D Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);

    h_PixelLorentzs = new TProfile( name + "PixelLorentzs", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 160,-1.61, 1.5975);
    h_PixelLorentzL0s = new TProfile( name + "PixelLorentzBLayers", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 160,-1.61, 1.59);
    h_PixelLorentzL1s = new TProfile( name + "PixelLorentzLayer1s", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 160,-1.61, 1.59);
    h_PixelLorentzL2s = new TProfile( name + "PixelLorentzLayer2s", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 160,-1.61, 1.59);
    h_IBLPlLorentzs = new TProfile( name + "IBLPlanarLorentzs", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",160,-1.61, 1.59);
    h_IBL3DLorentzs = new TProfile( name + "IBL3DLorentzs", "IBL 3D Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 160,-1.61, 1.59);

    h_PixelLorentzE = new TProfile( name + "PixelLorentzTheta", "Pixel Eta size VS Eta incidence; Eta Incidence; Eta size; #Hits", 128,-1.6, 1.6);
    h_PixelLorentzEL0 = new TProfile( name + "PixelLorentzThetaBLayer", "Pixel Eta size VS Eta incidence; Eta Incidence; Eta size; #Hits", 128,-1.6, 1.6);
    h_PixelLorentzEL1 = new TProfile( name + "PixelLorentzThetaLayer1", "Pixel Eta size VS Eta incidence; Eta Incidence; Eta size; #Hits", 128,-1.6, 1.6);
    h_PixelLorentzEL2 = new TProfile( name + "PixelLorentzThetaLayer2", "Pixel Eta size VS Eta incidence; Eta Incidence; Eta size; #Hits", 128,-1.6, 1.6);
    h_IBLPlLorentzE = new TProfile( name + "IBLPlanarLorentzTheta", "IBL Planar Eta size VS Eta incidence; Eta Incidence; Eta size; #Hits", 128,-1.6, 1.6);
    h_IBL3DLorentzE = new TProfile( name + "IBL3DLorentzTheta", "IBL 3D Eta size VS Eta incidence; Eta Incidence; Eta size; #Hits", 128,-1.6, 1.6);

    h_PixelLorentzL0_1 = new TProfile( name + "PixelLorentzBLayer_1", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_2 = new TProfile( name + "PixelLorentzBLayer_2", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_3 = new TProfile( name + "PixelLorentzBLayer_3", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_4 = new TProfile( name + "PixelLorentzBLayer_4", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_5 = new TProfile( name + "PixelLorentzBLayer_5", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_6 = new TProfile( name + "PixelLorentzBLayer_6", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_7 = new TProfile( name + "PixelLorentzBLayer_7", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_8 = new TProfile( name + "PixelLorentzBLayer_8", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_9 = new TProfile( name + "PixelLorentzBLayer_9", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_10 = new TProfile( name + "PixelLorentzBLayer_10", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_11 = new TProfile( name + "PixelLorentzBLayer_11", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_12 = new TProfile( name + "PixelLorentzBLayer_12", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL0_13 = new TProfile( name + "PixelLorentzBLayer_13", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);

    h_PixelLorentzL1_1 = new TProfile( name + "PixelLorentzLayer1_1", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_2 = new TProfile( name + "PixelLorentzLayer1_2", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_3 = new TProfile( name + "PixelLorentzLayer1_3", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_4 = new TProfile( name + "PixelLorentzLayer1_4", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_5 = new TProfile( name + "PixelLorentzLayer1_5", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_6 = new TProfile( name + "PixelLorentzLayer1_6", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_7 = new TProfile( name + "PixelLorentzLayer1_7", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_8 = new TProfile( name + "PixelLorentzLayer1_8", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_9 = new TProfile( name + "PixelLorentzLayer1_9", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_10 = new TProfile( name + "PixelLorentzLayer1_10", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_11 = new TProfile( name + "PixelLorentzLayer1_11", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_12 = new TProfile( name + "PixelLorentzLayer1_12", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL1_13 = new TProfile( name + "PixelLorentzLayer1_13", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);

    h_PixelLorentzL2_1 = new TProfile( name + "PixelLorentzLayer2_1", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_2 = new TProfile( name + "PixelLorentzLayer2_2", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_3 = new TProfile( name + "PixelLorentzLayer2_3", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_4 = new TProfile( name + "PixelLorentzLayer2_4", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_5 = new TProfile( name + "PixelLorentzLayer2_5", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_6 = new TProfile( name + "PixelLorentzLayer2_6", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_7 = new TProfile( name + "PixelLorentzLayer2_7", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_8 = new TProfile( name + "PixelLorentzLayer2_8", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_9 = new TProfile( name + "PixelLorentzLayer2_9", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_10 = new TProfile( name + "PixelLorentzLayer2_10", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_11 = new TProfile( name + "PixelLorentzLayer2_11", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_12 = new TProfile( name + "PixelLorentzLayer2_12", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);
    h_PixelLorentzL2_13 = new TProfile( name + "PixelLorentzLayer2_13", "Pixel Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits", 640,-1.6025, 1.5975);

    h_IBLPlLorentz_1 = new TProfile( name + "IBLPlanarLorentz_1", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_2 = new TProfile( name + "IBLPlanarLorentz_2", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_3 = new TProfile( name + "IBLPlanarLorentz_3", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_4 = new TProfile( name + "IBLPlanarLorentz_4", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_5 = new TProfile( name + "IBLPlanarLorentz_5", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_6 = new TProfile( name + "IBLPlanarLorentz_6", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_7 = new TProfile( name + "IBLPlanarLorentz_7", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_8 = new TProfile( name + "IBLPlanarLorentz_8", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_9 = new TProfile( name + "IBLPlanarLorentz_9", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_10 = new TProfile( name + "IBLPlanarLorentz_10", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_11 = new TProfile( name + "IBLPlanarLorentz_11", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);
    h_IBLPlLorentz_12 = new TProfile( name + "IBLPlanarLorentz_12", "IBL Planar Phi size VS Phi incidence; Phi Incidence; Phi size; #Hits",640,-1.61, 1.5975);

    h_phiVSphimod   =  new TH2D( name + "phiVSphimodIBL", "Phi VS IBL Phi Index; Phi Index; Phi; #Hits", 14, 0., 14, 64, -3.2,3.2 );

    h_shapeX0_2 = new TProfile( name + "ToTPhiProfileIBL2Pix", "Phi ToT profile in IBL for 2-pix clus.; Phi Index; ToT fraction;",2,0., 2.);
    h_shapeX0_3 = new TProfile( name + "ToTPhiProfileIBL3Pix", "Phi ToT profile in IBL for 3-pix clus.; Phi Index; ToT fraction;",3,0., 3.);
    h_shapeX0_4 = new TProfile( name + "ToTPhiProfileIBL4Pix", "Phi ToT profile in IBL for 4-pix clus.; Phi Index; ToT fraction;",4,0., 4.);
    h_shapeX0_5 = new TProfile( name + "ToTPhiProfileIBL5Pix", "Phi ToT profile in IBL for 5-pix clus.; Phi Index; ToT fraction;",5,0., 5.);
    h_shapeX03D_2 = new TProfile( name + "ToTPhiProfileIBL3D2Pix", "Phi ToT profile in IBL 3D for 2-pix clus.; Phi Index; ToT fraction;",2,0., 2.);
    h_shapeX03D_3 = new TProfile( name + "ToTPhiProfileIBL3D3Pix", "Phi ToT profile in IBL 3D for 3-pix clus.; Phi Index; ToT fraction;",3,0., 3.);
    h_shapeX03D_4 = new TProfile( name + "ToTPhiProfileIBL3D4Pix", "Phi ToT profile in IBL 3D for 4-pix clus.; Phi Index; ToT fraction;",4,0., 4.);
    h_shapeX03D_5 = new TProfile( name + "ToTPhiProfileIBL3D5Pix", "Phi ToT profile in IBL 3D for 5-pix clus.; Phi Index; ToT fraction;",5,0., 5.);
    h_shapeX1_2 = new TProfile( name + "ToTPhiProfileBL2Pix", "Phi ToT profile in BL for 2-pix clus.; Phi Index; ToT fraction;",2,0., 2.);
    h_shapeX1_3 = new TProfile( name + "ToTPhiProfileBL3Pix", "Phi ToT profile in BL for 3-pix clus.; Phi Index; ToT fraction;",3,0., 3.);
    h_shapeX1_4 = new TProfile( name + "ToTPhiProfileBL4Pix", "Phi ToT profile in BL for 4-pix clus.; Phi Index; ToT fraction;",4,0., 4.);
    h_shapeX1_5 = new TProfile( name + "ToTPhiProfileBL5Pix", "Phi ToT profile in BL for 5-pix clus.; Phi Index; ToT fraction;",5,0., 5.);
    h_shapeX2_2 = new TProfile( name + "ToTPhiProfileL12Pix", "Phi ToT profile in L1 for 2-pix clus.; Phi Index; ToT fraction;",2,0., 2.);
    h_shapeX2_3 = new TProfile( name + "ToTPhiProfileL13Pix", "Phi ToT profile in L1 for 3-pix clus.; Phi Index; ToT fraction;",3,0., 3.);
    h_shapeX2_4 = new TProfile( name + "ToTPhiProfileL14Pix", "Phi ToT profile in L1 for 4-pix clus.; Phi Index; ToT fraction;",4,0., 4.);
    h_shapeX2_5 = new TProfile( name + "ToTPhiProfileL15Pix", "Phi ToT profile in L1 for 5-pix clus.; Phi Index; ToT fraction;",5,0., 5.);
    h_shapeX3_2 = new TProfile( name + "ToTPhiProfileL22Pix", "Phi ToT profile in L2 for 2-pix clus.; Phi Index; ToT fraction;",2,0., 2.);
    h_shapeX3_3 = new TProfile( name + "ToTPhiProfileL23Pix", "Phi ToT profile in L2 for 3-pix clus.; Phi Index; ToT fraction;",3,0., 3.);
    h_shapeX3_4 = new TProfile( name + "ToTPhiProfileL24Pix", "Phi ToT profile in L2 for 4-pix clus.; Phi Index; ToT fraction;",4,0., 4.);
    h_shapeX3_5 = new TProfile( name + "ToTPhiProfileL25Pix", "Phi ToT profile in L2 for 5-pix clus.; Phi Index; ToT fraction;",5,0., 5.);
    h_shapeY0_2 = new TProfile( name + "ToTEtaProfileIBL2Pix", "Eta ToT profile in IBL for 2-pix clus.; Eta Index; ToT fraction;",2,0., 2.);
    h_shapeY0_3 = new TProfile( name + "ToTEtaProfileIBL3Pix", "Eta ToT profile in IBL for 3-pix clus.; Eta Index; ToT fraction;",3,0., 3.);
    h_shapeY0_4 = new TProfile( name + "ToTEtaProfileIBL4Pix", "Eta ToT profile in IBL for 4-pix clus.; Eta Index; ToT fraction;",4,0., 4.);
    h_shapeY0_5 = new TProfile( name + "ToTEtaProfileIBL5Pix", "Eta ToT profile in IBL for 5-pix clus.; Eta Index; ToT fraction;",5,0., 5.);
    h_shapeY03D_2 = new TProfile( name + "ToTEtaProfileIBL3D2Pix", "Eta ToT profile in IBL 3D for 2-pix clus.; Eta Index; ToT fraction;",2,0., 2.);
    h_shapeY03D_3 = new TProfile( name + "ToTEtaProfileIBL3D3Pix", "Eta ToT profile in IBL 3D for 3-pix clus.; Eta Index; ToT fraction;",3,0., 3.);
    h_shapeY03D_4 = new TProfile( name + "ToTEtaProfileIBL3D4Pix", "Eta ToT profile in IBL 3D for 4-pix clus.; Eta Index; ToT fraction;",4,0., 4.);
    h_shapeY03D_5 = new TProfile( name + "ToTEtaProfileIBL3D5Pix", "Eta ToT profile in IBL 3D for 5-pix clus.; Eta Index; ToT fraction;",5,0., 5.);
    h_shapeY1_2 = new TProfile( name + "ToTEtaProfileBL2Pix", "Eta ToT profile in BL for 2-pix clus.; Eta Index; ToT fraction;",2,0., 2.);
    h_shapeY1_3 = new TProfile( name + "ToTEtaProfileBL3Pix", "Eta ToT profile in BL for 3-pix clus.; Eta Index; ToT fraction;",3,0., 3.);
    h_shapeY1_4 = new TProfile( name + "ToTEtaProfileBL4Pix", "Eta ToT profile in BL for 4-pix clus.; Eta Index; ToT fraction;",4,0., 4.);
    h_shapeY1_5 = new TProfile( name + "ToTEtaProfileBL5Pix", "Eta ToT profile in BL for 5-pix clus.; Eta Index; ToT fraction;",5,0., 5.);
    h_shapeY2_2 = new TProfile( name + "ToTEtaProfileL12Pix", "Eta ToT profile in L1 for 2-pix clus.; Eta Index; ToT fraction;",2,0., 2.);
    h_shapeY2_3 = new TProfile( name + "ToTEtaProfileL13Pix", "Eta ToT profile in L1 for 3-pix clus.; Eta Index; ToT fraction;",3,0., 3.);
    h_shapeY2_4 = new TProfile( name + "ToTEtaProfileL14Pix", "Eta ToT profile in L1 for 4-pix clus.; Eta Index; ToT fraction;",4,0., 4.);
    h_shapeY2_5 = new TProfile( name + "ToTEtaProfileL15Pix", "Eta ToT profile in L1 for 5-pix clus.; Eta Index; ToT fraction;",5,0., 5.);
    h_shapeY3_2 = new TProfile( name + "ToTEtaProfileL22Pix", "Eta ToT profile in L2 for 2-pix clus.; Eta Index; ToT fraction;",2,0., 2.);
    h_shapeY3_3 = new TProfile( name + "ToTEtaProfileL23Pix", "Eta ToT profile in L2 for 3-pix clus.; Eta Index; ToT fraction;",3,0., 3.);
    h_shapeY3_4 = new TProfile( name + "ToTEtaProfileL24Pix", "Eta ToT profile in L2 for 4-pix clus.; Eta Index; ToT fraction;",4,0., 4.);
    h_shapeY3_5 = new TProfile( name + "ToTEtaProfileL25Pix", "Eta ToT profile in L2 for 5-pix clus.; Eta Index; ToT fraction;",5,0., 5.);

    allHists.push_back( h_IBLphimodVSetamod );
    allHists.push_back( h_BLphimodVSetamod );
    allHists.push_back( h_L1phimodVSetamod );
    allHists.push_back( h_L2phimodVSetamod );

    allHists.push_back( h_ToT );
    allHists.push_back( h_Charge );
    allHists.push_back( h_ChargeVSToT );
    allHists.push_back( h_Size );
    allHists.push_back( h_PhiSize );
    allHists.push_back( h_EtaSize );
    allHists.push_back( h_LVL1A );

    allHists.push_back( h_ToT0 );
    allHists.push_back( h_Charge0 );
    allHists.push_back( h_Size0 );
    allHists.push_back( h_PhiSize0 );
    allHists.push_back( h_EtaSize0 );
    allHists.push_back( h_LVL1A0 );

    allHists.push_back( h_ToT1 );
    allHists.push_back( h_Charge1 );
    allHists.push_back( h_Size1 );
    allHists.push_back( h_PhiSize1 );
    allHists.push_back( h_EtaSize1 );
    allHists.push_back( h_LVL1A1 );

    allHists.push_back( h_ToT2 );
    allHists.push_back( h_Charge2 );
    allHists.push_back( h_Size2 );
    allHists.push_back( h_PhiSize2 );
    allHists.push_back( h_EtaSize2 );
    allHists.push_back( h_LVL1A2 );

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

    allHists.push_back(  h_ToTVSLocalPhiIPl );
    allHists.push_back(  h_ToTVSLocalPhiI3D );
    allHists.push_back( h_ToTVSLocalPhiBL );
    allHists.push_back( h_ToTVSLocalPhiL1 );
    allHists.push_back(  h_ToTVSLocalPhiL2  );
    allHists.push_back(  h_ToTVSLocalEtaIPl );
    allHists.push_back( h_ToTVSLocalEtaI3D );
    allHists.push_back( h_ToTVSLocalEtaBL );
    allHists.push_back( h_ToTVSLocalEtaL1 );
    allHists.push_back( h_ToTVSLocalEtaL2 );
//====================SS=============================
    allHists.push_back( h_ToTvsLocalXYIPl );
    allHists.push_back( h_ToTvsLocalXYI3D );
    allHists.push_back( h_ToTvsLocalXYBL );
    allHists.push_back( h_ToTvsLocalXYL1 );
    allHists.push_back( h_ToTvsLocalXYL2 );

    allHists.push_back( h_EtaSizevsLocalXYIPl);
    allHists.push_back( h_EtaSizevsLocalXYI3D);
    allHists.push_back( h_EtaSizevsLocalXYBL);
    allHists.push_back( h_EtaSizevsLocalXYL1);
    allHists.push_back( h_EtaSizevsLocalXYL2);

    allHists.push_back( h_PhiSizevsLocalXYIPl);
    allHists.push_back( h_PhiSizevsLocalXYI3D);
    allHists.push_back( h_PhiSizevsLocalXYBL);
    allHists.push_back( h_PhiSizevsLocalXYL1);
    allHists.push_back( h_PhiSizevsLocalXYL2);

    allHists.push_back( h_ToTIPl_lowT);
    allHists.push_back( h_ToTIPl_highT);
    allHists.push_back( h_ToTI_darkyellow);

    allHists.push_back( h_LocalYVSGlobalZIPl );
    allHists.push_back( h_LocalYVSGlobalZI3D );
    allHists.push_back( h_LocalYVSGlobalZBL );
    allHists.push_back( h_LocalYVSGlobalZL1 );
    allHists.push_back( h_LocalYVSGlobalZL2 );

    allHists.push_back( h_LocalXVSGlobalXYIPl );
    allHists.push_back( h_LocalXVSGlobalXYI3D );
    allHists.push_back( h_LocalXVSGlobalXYBL );
    allHists.push_back( h_LocalXVSGlobalXYL1 );
    allHists.push_back( h_LocalXVSGlobalXYL2 );

    allHists.push_back( h_LocalXVSRIPl );
    allHists.push_back( h_LocalXVSRI3D );

  //  allHists.push_back( h_ToTvsLocalXYIPl_normalized);
  //  allHists.push_back( h_ToTvsLocalXYBL_normalized);
  //  allHists.push_back( h_EtaSizevsLocalXYIPl_normalized);
  //  allHists.push_back( h_EtaSizevsLocalXYBL_normalized);

//=====================================================
    allHists.push_back( h_ResiX1 );
    allHists.push_back( h_ResiX2 );
    allHists.push_back( h_ResiX3 );
    allHists.push_back( h_ResiXIPl );
    allHists.push_back( h_ResiXI3D );
    allHists.push_back( h_ResiY1 );
    allHists.push_back( h_ResiY2 );
    allHists.push_back( h_ResiY3 );
    allHists.push_back( h_ResiYIPl );
    allHists.push_back( h_ResiYI3D );
    allHists.push_back( h_PullX1 );
    allHists.push_back( h_PullX2 );
    allHists.push_back( h_PullX3 );
    allHists.push_back( h_PullXIPl );
    allHists.push_back( h_PullXI3D );
    allHists.push_back( h_PullY1 );
    allHists.push_back( h_PullY2 );
    allHists.push_back( h_PullY3 );
    allHists.push_back( h_PullYIPl );
    allHists.push_back( h_PullYI3D );

    allHists.push_back( h_PhiInci );
    allHists.push_back( h_PhiInciIPl );
    allHists.push_back( h_PhiInciI3D );
    allHists.push_back( h_EtaInci );
    allHists.push_back( h_EtaInciIPl );
    allHists.push_back( h_EtaInciI3D );

    allHists.push_back( h_omega1 );
    allHists.push_back( h_omega2 );
    allHists.push_back( h_omega3 );
    allHists.push_back( h_omega4 );
    allHists.push_back( h_omegaz1 );
    allHists.push_back( h_omegaz2 );
    allHists.push_back( h_omegaz3 );
    allHists.push_back( h_omegaz4 );

    allHists.push_back( h_resiXVSomega2 );
    allHists.push_back( h_resiXVSomega3 );
    allHists.push_back( h_resiXVSomega4 );
    allHists.push_back( h_resiXVSomega5 );

    allHists.push_back( h_resiYVSomega2 );
    allHists.push_back( h_resiYVSomega3 );
    allHists.push_back( h_resiYVSomega4 );
    allHists.push_back( h_resiYVSomega5 );

    allHists.push_back( h_resiXNN2 );
    allHists.push_back( h_resiXdigi2 );
    allHists.push_back( h_resiXomega2 );
    allHists.push_back( h_resiYNN2 );
    allHists.push_back( h_resiYdigi2 );
    allHists.push_back( h_resiYomega2 );

    allHists.push_back( h_resiXNN3 );
    allHists.push_back( h_resiXdigi3 );
    allHists.push_back( h_resiXomega3 );
    allHists.push_back( h_resiYNN3 );
    allHists.push_back( h_resiYdigi3 );
    allHists.push_back( h_resiYomega3 );

    allHists.push_back( h_resiXNN4 );
    allHists.push_back( h_resiXdigi4 );
    allHists.push_back( h_resiXomega4 );
    allHists.push_back( h_resiYNN4 );
    allHists.push_back( h_resiYdigi4 );
    allHists.push_back( h_resiYomega4 );

    allHists.push_back( h_resiXNN5 );
    allHists.push_back( h_resiXdigi5 );
    allHists.push_back( h_resiXomega5 );
    allHists.push_back( h_resiYNN5 );
    allHists.push_back( h_resiYdigi5 );
    allHists.push_back( h_resiYomega5 );

    allHists.push_back( h_mapX );
    allHists.push_back( h_mapY );

    allHists.push_back( h_PixelLorentz );
    allHists.push_back( h_PixelLorentzL0 );
    allHists.push_back( h_PixelLorentzL1 );
    allHists.push_back( h_PixelLorentzL2 );
    allHists.push_back( h_IBLPlLorentz );
    allHists.push_back( h_IBL3DLorentz );

    allHists.push_back( h_PixelLorentzs );
    allHists.push_back( h_PixelLorentzL0s );
    allHists.push_back( h_PixelLorentzL1s );
    allHists.push_back( h_PixelLorentzL2s );
    allHists.push_back( h_IBLPlLorentzs );
    allHists.push_back( h_IBL3DLorentzs );

    allHists.push_back( h_PixelLorentzE );
    allHists.push_back( h_PixelLorentzEL0 );
    allHists.push_back( h_PixelLorentzEL1 );
    allHists.push_back( h_PixelLorentzEL2 );
    allHists.push_back( h_IBLPlLorentzE );
    allHists.push_back( h_IBL3DLorentzE );

    allHists.push_back( h_PixelLorentzL0_1 );
    allHists.push_back( h_PixelLorentzL0_2 );
    allHists.push_back( h_PixelLorentzL0_3 );
    allHists.push_back( h_PixelLorentzL0_4 );
    allHists.push_back( h_PixelLorentzL0_5 );
    allHists.push_back( h_PixelLorentzL0_6 );
    allHists.push_back( h_PixelLorentzL0_7 );
    allHists.push_back( h_PixelLorentzL0_8 );
    allHists.push_back( h_PixelLorentzL0_9 );
    allHists.push_back( h_PixelLorentzL0_10 );
    allHists.push_back( h_PixelLorentzL0_11 );
    allHists.push_back( h_PixelLorentzL0_12 );
    allHists.push_back( h_PixelLorentzL0_13 );

    allHists.push_back( h_PixelLorentzL1_1 );
    allHists.push_back( h_PixelLorentzL1_2 );
    allHists.push_back( h_PixelLorentzL1_3 );
    allHists.push_back( h_PixelLorentzL1_4 );
    allHists.push_back( h_PixelLorentzL1_5 );
    allHists.push_back( h_PixelLorentzL1_6 );
    allHists.push_back( h_PixelLorentzL1_7 );
    allHists.push_back( h_PixelLorentzL1_8 );
    allHists.push_back( h_PixelLorentzL1_9 );
    allHists.push_back( h_PixelLorentzL1_10 );
    allHists.push_back( h_PixelLorentzL1_11 );
    allHists.push_back( h_PixelLorentzL1_12 );
    allHists.push_back( h_PixelLorentzL1_13 );

    allHists.push_back( h_PixelLorentzL2_1 );
    allHists.push_back( h_PixelLorentzL2_2 );
    allHists.push_back( h_PixelLorentzL2_3 );
    allHists.push_back( h_PixelLorentzL2_4 );
    allHists.push_back( h_PixelLorentzL2_5 );
    allHists.push_back( h_PixelLorentzL2_6 );
    allHists.push_back( h_PixelLorentzL2_7 );
    allHists.push_back( h_PixelLorentzL2_8 );
    allHists.push_back( h_PixelLorentzL2_9 );
    allHists.push_back( h_PixelLorentzL2_10 );
    allHists.push_back( h_PixelLorentzL2_11 );
    allHists.push_back( h_PixelLorentzL2_12 );
    allHists.push_back( h_PixelLorentzL2_13 );

    allHists.push_back( h_IBLPlLorentz_1 );
    allHists.push_back( h_IBLPlLorentz_2 );
    allHists.push_back( h_IBLPlLorentz_3 );
    allHists.push_back( h_IBLPlLorentz_4 );
    allHists.push_back( h_IBLPlLorentz_5 );
    allHists.push_back( h_IBLPlLorentz_6 );
    allHists.push_back( h_IBLPlLorentz_7 );
    allHists.push_back( h_IBLPlLorentz_8 );
    allHists.push_back( h_IBLPlLorentz_9 );
    allHists.push_back( h_IBLPlLorentz_10 );
    allHists.push_back( h_IBLPlLorentz_11 );
    allHists.push_back( h_IBLPlLorentz_12 );

    allHists.push_back( h_phiVSphimod );

    allHists.push_back(h_shapeX0_2);
    allHists.push_back(h_shapeX0_3);
    allHists.push_back(h_shapeX0_4);
    allHists.push_back(h_shapeX0_5);
    allHists.push_back(h_shapeX03D_2);
    allHists.push_back(h_shapeX03D_3);
    allHists.push_back(h_shapeX03D_4);
    allHists.push_back(h_shapeX03D_5);
    allHists.push_back(h_shapeX1_2);
    allHists.push_back(h_shapeX1_3);
    allHists.push_back(h_shapeX1_4);
    allHists.push_back(h_shapeX1_5);
    allHists.push_back(h_shapeX2_2);
    allHists.push_back(h_shapeX2_3);
    allHists.push_back(h_shapeX2_4);
    allHists.push_back(h_shapeX2_5);
    allHists.push_back(h_shapeX3_2);
    allHists.push_back(h_shapeX3_3);
    allHists.push_back(h_shapeX3_4);
    allHists.push_back(h_shapeX3_5);
    allHists.push_back(h_shapeY0_2);
    allHists.push_back(h_shapeY0_3);
    allHists.push_back(h_shapeY0_4);
    allHists.push_back(h_shapeY0_5);
    allHists.push_back(h_shapeY03D_2);
    allHists.push_back(h_shapeY03D_3);
    allHists.push_back(h_shapeY03D_4);
    allHists.push_back(h_shapeY03D_5);
    allHists.push_back(h_shapeY1_2);
    allHists.push_back(h_shapeY1_3);
    allHists.push_back(h_shapeY1_4);
    allHists.push_back(h_shapeY1_5);
    allHists.push_back(h_shapeY2_2);
    allHists.push_back(h_shapeY2_3);
    allHists.push_back(h_shapeY2_4);
    allHists.push_back(h_shapeY2_5);
    allHists.push_back(h_shapeY3_2);
    allHists.push_back(h_shapeY3_3);
    allHists.push_back(h_shapeY3_4);
    allHists.push_back(h_shapeY3_5);

    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
		  (*hist)->Sumw2();
    }

	}

  ~PixelClusterHists()
  {
    for( std::vector<TH1*>::iterator hist = allHists.begin(); hist != allHists.end(); ++hist){
      delete *hist;
    }
  }



  /** Fill the histograms using the recosntructed information*/
  void Fill( const xAOD::TrackMeasurementValidation * pc , const xAOD::TrackStateValidation * msos, float pt, float phi)
 {

  /*std::vector<double> omega2x {0 ,5.97e-05 ,0.000885362 ,0.00406185 ,0.0104971 ,0.0228189 ,0.0392398 ,0.0601934 ,0.084132 ,0.106697 ,0.138048
  ,0.164923 ,0.193378 ,0.219665 ,0.24686 ,0.27649 ,0.3031 ,0.332404 ,0.361439 ,0.385046 ,0.416972 ,0.444562 ,0.471846 ,0.498838 ,0.518258
  ,0.555964 ,0.581276 ,0.608448 ,0.636622 ,0.66068 ,0.690895 ,0.719195 ,0.746855 ,0.772684 ,0.800327 ,0.824002 ,0.848434 ,0.875096 ,0.897382
  ,0.917483 ,0.941335 ,0.96057 ,0.975087 ,0.986859 ,0.994095 ,0.997752 ,0.999507 ,0.999963 ,1 ,1};

  std::vector<double> omega3x {0 ,2.46318e-05 ,0.000640426 ,0.00332529 ,0.00807922 ,0.0167742 ,0.0269225 ,0.0398049 ,0.0528597 ,0.0653727
  ,0.0842899 ,0.10301 ,0.120203 ,0.14316 ,0.165328 ,0.195133 ,0.223016 ,0.254249 ,0.286221 ,0.313907 ,0.362752 ,0.40034 ,0.433938 ,0.481329
  ,0.492093 ,0.560939 ,0.604611 ,0.640278 ,0.676314 ,0.705503 ,0.746859 ,0.775555 ,0.80302 ,0.828021 ,0.855978 ,0.874304 ,0.89534 ,0.912927
  ,0.928543 ,0.941672 ,0.955885 ,0.96889 ,0.978004 ,0.986896 ,0.994261 ,0.997882 ,0.999581 ,1 ,1 ,1};

  std::vector<double> omega4x {0 ,0 ,0.000512492 ,0.00474055 ,0.0128123 ,0.0274183 ,0.0449712 ,0.0659833 ,0.0853299 ,0.104805 ,0.131326
  ,0.151185 ,0.173607 ,0.197053 ,0.220628 ,0.247662 ,0.273543 ,0.300705 ,0.328123 ,0.348366 ,0.379885 ,0.404869 ,0.438181 ,0.467905 ,0.483408
  ,0.523382 ,0.553876 ,0.580782 ,0.609097 ,0.633184 ,0.666624 ,0.692249 ,0.716848 ,0.742088 ,0.772197 ,0.792825 ,0.817809 ,0.845996 ,0.869827
  ,0.889686 ,0.915311 ,0.934914 ,0.954773 ,0.977707 ,0.988725 ,0.994491 ,0.999359 ,0.999872 ,1 ,1};

  std::vector<double> omega5x {0 ,0 ,0.000860338 ,0.00516203 ,0.0131919 ,0.0315457 ,0.0516203 ,0.0714081 ,0.0914826 ,0.108689 ,0.131632
  ,0.151706 ,0.174935 ,0.198165 ,0.2191 ,0.246344 ,0.265558 ,0.289074 ,0.318612 ,0.340981 ,0.374821 ,0.401778 ,0.425007 ,0.451391 ,0.469745
  ,0.513048 ,0.540006 ,0.564956 ,0.5922 ,0.616576 ,0.648122 ,0.674505 ,0.70261 ,0.723831 ,0.751075 ,0.774591 ,0.802696 ,0.827072 ,0.84858
  ,0.865214 ,0.895899 ,0.920849 ,0.944365 ,0.968454 ,0.98308 ,0.994838 ,0.998853 ,1 ,1 ,1};

  std::vector<double> omega2y {5.22307e-06 ,2.26333e-05 ,0.00049445 ,0.0031617 ,0.009358 ,0.0209166 ,0.0349162 ,0.0520061 ,0.070252 ,0.0880714
  ,0.111821 ,0.134421 ,0.156995 ,0.179987 ,0.203567 ,0.23039 ,0.255182 ,0.282474 ,0.311363 ,0.336921 ,0.369866 ,0.401003 ,0.431734 ,0.464714
  ,0.491877 ,0.535135 ,0.567149 ,0.598236 ,0.629289 ,0.656392 ,0.688045 ,0.716762 ,0.743554 ,0.769522 ,0.796567 ,0.819505 ,0.843176 ,0.866876
  ,0.888778 ,0.907675 ,0.929692 ,0.948508 ,0.964534 ,0.979587 ,0.990753 ,0.996983 ,0.999528 ,0.999984 ,1 ,1};

  std::vector<double> omega3y {5.70119e-06 ,1.71036e-05 ,0.000581521 ,0.00404214 ,0.0126395 ,0.0277135 ,0.04415 ,0.0642923 ,0.0853753 ,0.105854
  ,0.131983 ,0.157495 ,0.183624 ,0.210197 ,0.237694 ,0.268874 ,0.297881 ,0.328537 ,0.361353 ,0.390782 ,0.427652 ,0.461563 ,0.494812 ,0.532103
  ,0.563762 ,0.611093 ,0.639172 ,0.665705 ,0.69319 ,0.715465 ,0.74364 ,0.767848 ,0.790533 ,0.812454 ,0.835498 ,0.854757 ,0.875064 ,0.893969
  ,0.911734 ,0.92707 ,0.945343 ,0.960057 ,0.972235 ,0.984059 ,0.993079 ,0.997754 ,0.999709 ,0.999983 ,1 ,1};

  std::vector<double> omega4y {2.47372e-05 ,4.94743e-05 ,0.000568955 ,0.00566481 ,0.0194682 ,0.0451701 ,0.0695362 ,0.0979344 ,0.126704 ,0.15619
  ,0.189116 ,0.219518 ,0.248213 ,0.279579 ,0.309833 ,0.343451 ,0.373902 ,0.403908 ,0.434385 ,0.461868 ,0.490489 ,0.517848 ,0.54167 ,0.566456
  ,0.590303 ,0.622882 ,0.641311 ,0.659023 ,0.678145 ,0.696005 ,0.717749 ,0.738429 ,0.758021 ,0.778479 ,0.800643 ,0.819814 ,0.840445 ,0.860359
  ,0.881014 ,0.899023 ,0.919357 ,0.938009 ,0.955622 ,0.972938 ,0.988052 ,0.996042 ,0.999406 ,1 ,1 ,1};

  std::vector<double> omega5y {0 ,0.000531632 ,0.000531632 ,0.00637959 ,0.0366826 ,0.0850611 ,0.12387 ,0.169059 ,0.214779 ,0.249867 ,0.292929
  ,0.333333 ,0.367889 ,0.391813 ,0.417863 ,0.441255 ,0.459862 ,0.476342 ,0.492291 ,0.503456 ,0.520999 ,0.528974 ,0.538543 ,0.559277 ,0.61563
  ,0.755981 ,0.772993 ,0.785221 ,0.796385 ,0.809144 ,0.822435 ,0.830409 ,0.837321 ,0.847422 ,0.863371 ,0.871877 ,0.882509 ,0.896863 ,0.906964
  ,0.914939 ,0.933546 ,0.946837 ,0.958001 ,0.971823 ,0.987772 ,0.997873 ,1 ,1 ,1 ,1};*/

  std::vector<double> omega5y {0 ,0.000158099 ,0.00221338 ,0.0143474 ,0.0441095 ,0.0873692 ,0.137339 ,0.190594 ,0.2437 ,0.294595 ,0.343829 ,0.391061 ,0.432523 ,0.466553
  ,0.496394 ,0.523429 ,0.546196 ,0.5658 ,0.584455 ,0.600499 ,0.611141 ,0.619807 ,0.634335 ,0.658612 ,0.688616 ,0.716371 ,0.737187 ,0.752918
  ,0.766969 ,0.78019 ,0.792799 ,0.805012 ,0.817027 ,0.829043 ,0.841216 ,0.853706 ,0.866354 ,0.879002 ,0.89165 ,0.905088 ,0.920107 ,0.935917
  ,0.951885 ,0.968222 ,0.983821 ,0.994941 ,0.999368 ,1 ,1 ,1};

  std::vector<double> omega4y {2.50223e-05 ,2.50223e-05 ,0.00119951 ,0.00692961 ,0.0208921 ,0.0428319 ,0.0690006 ,0.0970787 ,0.126217 ,0.156056
  ,0.186565 ,0.217317 ,0.24807 ,0.278834 ,0.309624 ,0.340427 ,0.371229 ,0.401919 ,0.432188 ,0.461728 ,0.490556 ,0.518256 ,0.544342 ,0.569414
  ,0.594011 ,0.617237 ,0.63754 ,0.655455 ,0.673605 ,0.693456 ,0.714277 ,0.735139 ,0.755889 ,0.776582 ,0.797276 ,0.817969 ,0.838683 ,0.859331
  ,0.879801 ,0.899873 ,0.919322 ,0.938189 ,0.956455 ,0.973752 ,0.987875 ,0.996225 ,0.99942 ,1 ,1 ,1};

  std::vector<double> omega3y {5.81918e-06 ,5.81918e-06 ,0.000888517 ,0.00465062 ,0.0134259 ,0.0273876 ,0.0450881 ,0.065336 ,0.0868553
  ,0.109734 ,0.134851 ,0.161243 ,0.187904 ,0.215027 ,0.243121 ,0.272672 ,0.303511 ,0.334801 ,0.366642 ,0.399865 ,0.434198 ,0.46881 ,0.503423
  ,0.537698 ,0.57087 ,0.601936 ,0.630595 ,0.658039 ,0.685339 ,0.712162 ,0.737952 ,0.76255 ,0.785855 ,0.808312 ,0.830164 ,0.851084 ,0.871119
  ,0.890416 ,0.90904 ,0.926826 ,0.943389 ,0.958497 ,0.972028 ,0.983913 ,0.992954 ,0.997966 ,0.999758 ,1 ,1 ,1};

  std::vector<double> omega2y {5.25453e-06 ,5.25453e-06 ,0.000617572 ,0.00325266 ,0.0096211 ,0.0204689 ,0.0350543 ,0.0521587 ,0.0705145
  ,0.0902372 ,0.112005 ,0.134729 ,0.157526 ,0.180657 ,0.204487 ,0.229626 ,0.256294 ,0.283751 ,0.311727 ,0.341042 ,0.371831 ,0.403155 ,0.434479
  ,0.466069 ,0.498278 ,0.530832 ,0.563013 ,0.594543 ,0.625783 ,0.656427 ,0.685895 ,0.714172 ,0.741202 ,0.767382 ,0.792732 ,0.817003 ,0.840816
  ,0.864185 ,0.886664 ,0.908112 ,0.928437 ,0.947534 ,0.964824 ,0.979636 ,0.990726 ,0.997074 ,0.999546 ,1 ,1 ,1};

  std::vector<double> omega2x {0 ,6.41173e-05 ,0.00104699 ,0.00420598 ,0.0111242 ,0.0230621 ,0.0400588 ,0.0610509 ,0.0844086 ,0.109599
  ,0.136428 ,0.163708 ,0.190965 ,0.218302 ,0.24564 ,0.273439 ,0.302164 ,0.33135 ,0.360537 ,0.38936 ,0.417458 ,0.445115 ,0.472532 ,0.49967
  ,0.526678 ,0.553761 ,0.581004 ,0.608317 ,0.635914 ,0.664181 ,0.692876 ,0.721296 ,0.749136 ,0.776244 ,0.802147 ,0.827008 ,0.851568 ,0.875589
  ,0.898531 ,0.920527 ,0.94153 ,0.960513 ,0.975947 ,0.987177 ,0.994196 ,0.997805 ,0.999428 ,0.999952 ,1 ,1};

  std::vector<double> omega3x {0 ,2.46098e-05 ,0.000867497 ,0.00340846 ,0.00851962 ,0.0165824 ,0.0271385 ,0.0394557 ,0.052499 ,0.0670111
  ,0.0843318 ,0.103035 ,0.1226 ,0.144085 ,0.168144 ,0.195519 ,0.225531 ,0.256736 ,0.288483 ,0.321912 ,0.358153 ,0.395708 ,0.433263 ,0.472832
  ,0.517044 ,0.563699 ,0.607181 ,0.645475 ,0.681479 ,0.71568 ,0.74643 ,0.774882 ,0.802308 ,0.828677 ,0.853067 ,0.874551 ,0.893661 ,0.911232
  ,0.927284 ,0.941876 ,0.955555 ,0.967933 ,0.978282 ,0.987166 ,0.994175 ,0.998151 ,0.999679 ,1 ,1 ,1};

  std::vector<double> omega4x {0 ,0 ,0.00119968 ,0.00540665 ,0.0142907 ,0.0284302 ,0.0462767 ,0.0656687 ,0.0853499 ,0.105063 ,0.12558 ,0.147409
  ,0.170105 ,0.193353 ,0.217582 ,0.243448 ,0.270586 ,0.298082 ,0.325609 ,0.353202 ,0.3815 ,0.411013 ,0.441102 ,0.471192 ,0.50137 ,0.531727
  ,0.561816 ,0.591192 ,0.619789 ,0.64722 ,0.67358 ,0.699495 ,0.725166 ,0.750716 ,0.776201 ,0.801556 ,0.826847 ,0.851781 ,0.875979 ,0.898795
  ,0.919768 ,0.94007 ,0.960459 ,0.9782 ,0.989503 ,0.995369 ,0.99863 ,0.99987 ,1 ,1};

  std::vector<double> omega5x {0 ,0 ,0.0012968 ,0.0055114 ,0.0151653 ,0.0314113 ,0.0510074 ,0.0710358 ,0.0912082 ,0.111435 ,0.132346 ,0.154751
  ,0.178022 ,0.201364 ,0.224706 ,0.248121 ,0.271679 ,0.29531 ,0.319805 ,0.346191 ,0.373718 ,0.400807 ,0.426791 ,0.452469 ,0.478831 ,0.505776
  ,0.532864 ,0.559953 ,0.587042 ,0.61413 ,0.640985 ,0.667749 ,0.694748 ,0.721548 ,0.747557 ,0.772556 ,0.797051 ,0.821546 ,0.846041 ,0.87068
  ,0.895608 ,0.920679 ,0.945606 ,0.967688 ,0.98379 ,0.993948 ,0.998775 ,0.999964 ,1 ,1};

  bool Noise = false;
  float pi = 3.14159;
  int bec = pc->auxdata< int>("bec");
  int layer = pc->auxdata< int>("layer");
  int lvl1 = pc->auxdata< int>("LVL1A");
  float phiInc = msos->auxdata< float > ("localPhi");
  float etaInc = msos->auxdata< float > ("localTheta");
  int etamod = pc->auxdata< int >("eta_module");
  int phimod = pc->auxdata< int >("phi_module");
  double tot = double(pc->auxdata< int >("ToT"));
  double realtot = tot;
  float charge = pc->auxdata< float >("charge");
  //int size = pc->auxdata< int >("size");
  int size = 0;
  int phiWidth = pc->auxdata< int >("sizePhi");
  int etaWidth = pc->auxdata< int >("sizeZ");
  float resiX = msos->auxdata< float > ("unbiasedResidualX");
  float resiY = msos->auxdata< float > ("unbiasedResidualY");
  float pullX = msos->auxdata< float > ("unbiasedPullX");
  float pullY = msos->auxdata< float > ("unbiasedPullY");
  float localx = msos->auxdata< float > ("localX");
  float localy = msos->auxdata< float > ("localY");
  float globalx = pc->auxdata< float >("globalX");
  float globaly = pc->auxdata< float >("globalY");
  float globalz = pc->auxdata< float >("globalZ");
  float globalr = sqrt(globalx*globalx + globaly*globaly);
  int isfake = pc->auxdata< char >("isFake");
  int isgang = pc->auxdata< char >("gangedPixel");

  if ( phiInc > pi/2 ) phiInc = phiInc - pi;
  if ( phiInc < -pi/2 ) phiInc = pi + phiInc;
  if ( etaInc > pi/2 ) etaInc = etaInc - pi;
  if ( etaInc < -pi/2 ) etaInc = pi + etaInc;

  tot = tot/sqrt(tan(phiInc)*tan(phiInc) + tan(etaInc)*tan(etaInc) + 1.);
  charge = charge/sqrt(tan(phiInc)*tan(phiInc) + tan(etaInc)*tan(etaInc) + 1.);

    //if( pc->auxdata< int>("bec")==0 && pc->auxdata< int >("layer")!=0 && pc->auxdata< int >("LVL1A") > 5) Noise = true;
    //if( pc->auxdata< int>("bec")==0 && pc->auxdata< int >("layer")==0 && (pc->auxdata< int >("LVL1A") < 9 || pc->auxdata< int >("LVL1A") > 11 )
    //) Noise = true;

 if ( bec != 0 ) Noise = true;
 // cut clusters too close to the edge: at least 2 pixels away in both dimensions. NB: Last pixel in IBL planar is 500 micron in local y:
 float xcut = 8.1;
 float ycut = 28.7;
 if ( bec == 0 && layer == 0 && etamod >= -6 && etamod <= 5 ) {xcut = 8.3; ycut = 19.7;}
 if ( bec == 0 && layer == 0 && (etamod < -6 || etamod > 5) ) {xcut = 8.3; ycut =  9.5;}
 if ( fabs(localx)>xcut || fabs(localy) > ycut ) Noise = true;

 //std::cout << isfake << " , " << isgang << std::endl;
 if ( isfake || isgang ) Noise = true;

 //if ( fabs(phiInc) > 0.60 && bec ==0 && layer == 0) Noise = true;
 //if ( fabs(phiInc) > 0.30 && bec ==0 && layer == 1) Noise = true;
 //if ( fabs(phiInc) > 0.50 && bec ==0 && layer == 2) Noise = true;
 //if ( fabs(phiInc) > 0.50 && bec ==0 && layer == 3) Noise = true;

 if(!Noise) {

 //std::cout << "Phi Incid = " << phiInc << " radians" << std::endl;

 // Some clusters have tot = 0. Fix it:
 if(tot==0){
   std::vector<int>  totList;
   std::vector<float> chList;
   std::vector<float> CTerm,ATerm,ETerm;
   if (pc->isAvailable<std::vector<int>>("rdo_tot"))      { totList = pc->auxdata<std::vector<int>>("rdo_tot"); }
   if (pc->isAvailable<std::vector<float>>("rdo_charge")) { chList  = pc->auxdata<std::vector<float>>("rdo_charge"); }
   if (pc->isAvailable<std::vector<float>>("rdo_Cterm"))  { CTerm = pc->auxdata<std::vector<float>>("rdo_Cterm"); }
   if (pc->isAvailable<std::vector<float>>("rdo_Aterm"))  { ATerm = pc->auxdata<std::vector<float>>("rdo_Aterm"); }
   if (pc->isAvailable<std::vector<float>>("rdo_Eterm"))  { ETerm = pc->auxdata<std::vector<float>>("rdo_Eterm"); }

   int totnew = 0;
   if (pc->isAvailable<std::vector<int>>("rdo_phi_pixel_index")) {
     int nHits = pc->auxdata<std::vector<int>>("rdo_phi_pixel_index").size();
      float chargenew = 0;
      for (int i=0; i<nHits; i++) {
        int tot0 = 0;
        if (totList.size()==nHits) { tot0 = totList[i]; }

        float charge0 = 0.0;
        if (chList.size()==nHits) { charge0 = chList[i]; }

        // re-calculate tot
        if (tot0==0) {
          if (CTerm.size()==nHits) {
            if (charge0+CTerm[i]!=0.0) { tot0 = ATerm[i]*(charge0+ETerm[i])/(charge0+CTerm[i]); }
            //if ( bec == 0 && layer == 0)std::cout << "pixel " << i << " A, E, C = " << ATerm[i] << " , " << ETerm[i] << " , " << CTerm[i] << " Charge, tot = " << charge0 <<
	    //" , " << tot0 << " , " << charge0/tot0 << std::endl;
          }
        }
        totnew = totnew + tot0;
        chargenew = chargenew + charge0;
      }
      //if ( bec == 0 && layer == 0)std::cout << " charge, tot = " << charge << " , " << tot << " new charge, tot = " << chargenew << " , " <<
      //totnew << std::endl;
    }
    tot = double(totnew);
 }

 // Build omega distribution for phi:
 //if ( bec == 0 && layer != 0 && etaWidth == 1 && size > 1 && size <= 5 && fabs(pullX) < 3.){
 if ( bec == 0 && etaWidth == 1 && size > 1 && size <= 5 && fabs(pullX) < 3.){
   std::vector<int>  totList1;
   std::vector<int>  phiIndex;
   if (pc->isAvailable<std::vector<int>>("rdo_phi_pixel_index")) {
     int nHits = pc->auxdata<std::vector<int>>("rdo_phi_pixel_index").size();
     if (pc->isAvailable<std::vector<int>>("rdo_tot"))      { totList1  = pc->auxdata<std::vector<int>>("rdo_tot"); }
     phiIndex = pc->auxdata<std::vector<int>>("rdo_phi_pixel_index");
     if (totList1.size()==nHits) {
       std::cout << "Phi Incidence = " << phiInc << std::endl;
       for (int i=0; i < nHits; i++) {
         std::cout << " nHits = " << "Pixel = " << i << " Phi Index = " << phiIndex[i] << " ToT = " << totList1[i] << std::endl;
       }
       int ileft = nHits-1; int iright = 0;
       if ( phiIndex[0] < phiIndex[ileft] ) {ileft = 0; iright = nHits - 1;}
       if ( layer != 0 ) {
         float omega = double(totList1[ileft])/double(totList1[ileft] + totList1[iright]);
         int iomega = omega/0.02 + 1;
         //std::cout << omega << "," << iomega << std::endl;
         float xomega = 999999.;
         //std::cout << " Omega = " << omega << " , " << totList1[nHits-1] << " , " << totList1[0] << std::endl;
         if (size == 2) { h_omega1->Fill(omega); h_resiXVSomega2->Fill(omega,resiX); xomega = phiIndex[ileft] + omega2x[iomega];}
         if (size == 3) { h_omega2->Fill(omega); h_resiXVSomega3->Fill(omega,resiX); xomega = phiIndex[ileft] + 2.*omega3x[iomega];}
         if (size == 4) { h_omega3->Fill(omega); h_resiXVSomega4->Fill(omega,resiX); xomega = phiIndex[ileft] + 3.*omega4x[iomega];}
         if (size == 5) { h_omega4->Fill(omega); h_resiXVSomega5->Fill(omega,resiX); xomega = phiIndex[ileft] + 4.*omega5x[iomega];}
         float xextr = localx + resiX;
         float xmiddle = (phiIndex[ileft] + phiIndex[iright])/2.;
         float xdigi = xmiddle*0.050 - 8.2;
         float resdigi = xextr - xdigi;
         float x = xomega*0.050 - 8.2;
         float resomega = xextr - x;
         h_mapX->Fill(xmiddle,localx);
         if (size == 2) { h_resiXNN2->Fill(resiX); h_resiXdigi2->Fill(resdigi); h_resiXomega2->Fill(resomega);}
         if (size == 3) { h_resiXNN3->Fill(resiX); h_resiXdigi3->Fill(resdigi); h_resiXomega3->Fill(resomega);}
         if (size == 4) { h_resiXNN4->Fill(resiX); h_resiXdigi4->Fill(resdigi); h_resiXomega4->Fill(resomega);}
         if (size == 5) { h_resiXNN5->Fill(resiX); h_resiXdigi5->Fill(resdigi); h_resiXomega5->Fill(resomega);}
         //std::cout << " ileft = " << phiIndex[ileft] << " iright = " << phiIndex[iright] << " local x = " << localx << " Exrapolated X = " <<
         //xextr << " Res Omega = " << resomega << std::endl;
       }
       for (int i=0; i<nHits; i++){
         float fracToT = double(totList1[i])/double(realtot);
	 //std::cout << "size = " << size << " Pixel " << i << " has a ToT of " << totList1[i] << " Total Tot = " << realtot << " Frac = " <<
	 //fracToT << std::endl;
	 if (layer ==0){
	   if ( etamod >= -6 && etamod <= 5) {
	     if (size == 2) h_shapeX0_2->Fill(i,fracToT);
	     if (size == 3) h_shapeX0_3->Fill(i,fracToT);
	     if (size == 4) h_shapeX0_4->Fill(i,fracToT);
	     if (size == 5) h_shapeX0_5->Fill(i,fracToT);
	   }else{
	     if (size == 2) h_shapeX03D_2->Fill(i,fracToT);
	     if (size == 3) h_shapeX03D_3->Fill(i,fracToT);
	     if (size == 4) h_shapeX03D_4->Fill(i,fracToT);
	     if (size == 5) h_shapeX03D_5->Fill(i,fracToT);
	   }
	 }
	 if (layer ==1){
	   if (size == 2) h_shapeX1_2->Fill(i,fracToT);
	   if (size == 3) h_shapeX1_3->Fill(i,fracToT);
	   if (size == 4) h_shapeX1_4->Fill(i,fracToT);
	   if (size == 5) h_shapeX1_5->Fill(i,fracToT);
	 }
	 if (layer ==2){
	   if (size == 2) h_shapeX2_2->Fill(i,fracToT);
	   if (size == 3) h_shapeX2_3->Fill(i,fracToT);
	   if (size == 4) h_shapeX2_4->Fill(i,fracToT);
	   if (size == 5) h_shapeX2_5->Fill(i,fracToT);
	 }
	 if (layer ==3){
	   if (size == 2) h_shapeX3_2->Fill(i,fracToT);
	   if (size == 3) h_shapeX3_3->Fill(i,fracToT);
	   if (size == 4) h_shapeX3_4->Fill(i,fracToT);
	   if (size == 5) h_shapeX3_5->Fill(i,fracToT);
	 }
       }
     }
   }
 }
 //std::cout << " End of Cluster " << std::endl;

 // Build omega distribution for eta:
 //if ( bec == 0 && layer != 0 && phiWidth == 1 && size > 1 && size <= 5 && fabs(pullY) < 3.){
 if ( bec == 0 && phiWidth == 1 && size > 1 && size <= 5 && fabs(pullY) < 3.){
   std::vector<int>  totList1;
   std::vector<int>  etaIndex;
   std::vector<int>  phiIndex;
   if (pc->isAvailable<std::vector<int>>("rdo_eta_pixel_index")) {
     int nHits = pc->auxdata<std::vector<int>>("rdo_eta_pixel_index").size();
     if (pc->isAvailable<std::vector<int>>("rdo_tot"))      { totList1  = pc->auxdata<std::vector<int>>("rdo_tot"); }
     etaIndex = pc->auxdata<std::vector<int>>("rdo_eta_pixel_index");
     phiIndex = pc->auxdata<std::vector<int>>("rdo_phi_pixel_index");
     if (totList1.size()==nHits) {
       std::cout << "Eta Incidence = " << etaInc << std::endl;
       for (int i=0; i < nHits; i++) {
         std::cout << " nHits = " << "Pixel = " << i << " Eta Index = " << etaIndex[i] << "Phia Index = " << phiIndex[i] << " ToT = " << totList1[i] << std::endl;
       }
       int ileft = nHits-1; int iright = 0;
       if ( etaIndex[0] < etaIndex[ileft] ) {ileft = 0; iright = nHits - 1;}
       if( layer!=0 ) {
         float omega = double(totList1[ileft])/double(totList1[ileft] + totList1[iright]);
         //std::cout << " Omega = " << omega << " , " << totList1[nHits-1] << " , " << totList1[0] << std::endl;
         if (size == 2) { h_omegaz1->Fill(omega); h_resiYVSomega2->Fill(omega,resiY);}
         if (size == 3) { h_omegaz2->Fill(omega); h_resiYVSomega3->Fill(omega,resiY);}
         if (size == 4) { h_omegaz3->Fill(omega); h_resiYVSomega4->Fill(omega,resiY);}
         if (size == 5) { h_omegaz4->Fill(omega); h_resiYVSomega5->Fill(omega,resiY);}
         float yextr = localy + resiY;
         float weightL = 1.;
         float weightR = 1.;
         float roundup = -0.5;
         if ( ((etaIndex[ileft])%18 == 17 || (etaIndex[ileft])%18 == 1) && etaIndex[ileft] != 1 ) weightL = 1.5;
         if ( ((etaIndex[iright])%18 == 17 || (etaIndex[iright])%18 == 1) && etaIndex[iright] != 143 ) weightR = 1.5;
         //std::cout << etaIndex[ileft] << " , " << weightL << " , " << etaIndex[iright] << " , " << weightR << std::endl;
         float ymiddle = (weightL*etaIndex[ileft] + weightR*etaIndex[iright])/(weightL+weightR);
         float slope = 0.4;
         if( (ymiddle >17.+roundup && ymiddle <= 19.+roundup) ||
             (ymiddle >35.+roundup && ymiddle <= 37.+roundup) ||
	     (ymiddle >53.+roundup && ymiddle <= 55.+roundup) ||
	     (ymiddle >71.+roundup && ymiddle <= 73.+roundup) ||
	     (ymiddle >89.+roundup && ymiddle <= 91.+roundup) ||
	     (ymiddle >107.+roundup && ymiddle <= 109.+roundup) ||
	     (ymiddle >125.+roundup && ymiddle <= 127.+roundup) ) slope = 0.6;
         float intercept = -999999.;
         if ( (ymiddle > 71.+roundup && ymiddle <= 73.+roundup) ) intercept =  -43.2;
         if ( (ymiddle > 89.+roundup && ymiddle <= 91.+roundup) ) intercept =  -46.4;
         if ( (ymiddle > 107.+roundup && ymiddle <= 109.+roundup) ) intercept =  -49.6;
         if ( (ymiddle > 125.+roundup && ymiddle <= 127.+roundup) ) intercept =  -52.8;
         if ( (ymiddle > 73.+roundup && ymiddle <= 89.+roundup) ) intercept =  -28.6;
         if ( (ymiddle > 91.+roundup && ymiddle <= 107.+roundup) ) intercept =  -28.2;
         if ( (ymiddle > 109.+roundup && ymiddle <= 125.+roundup) ) intercept =  -27.8;
         if ( (ymiddle > 127.+roundup && ymiddle <= 144.+roundup) ) intercept =  -27.4;

         if ( (ymiddle > 53.+roundup && ymiddle <= 55.+roundup) ) intercept =  -40.0;
         if ( (ymiddle > 35.+roundup && ymiddle <= 37.+roundup) ) intercept =  -36.8;
         if ( (ymiddle > 17.+roundup && ymiddle <= 19.+roundup) ) intercept =  -33.6;
         if ( (ymiddle > 55.+roundup && ymiddle <= 71.+roundup) ) intercept =  -29.0;
         if ( (ymiddle > 37.+roundup && ymiddle <= 53.+roundup) ) intercept =  -29.4;
         if ( (ymiddle > 19.+roundup && ymiddle <= 35.+roundup) ) intercept =  -29.8;
         if ( (ymiddle > 0.+roundup && ymiddle <= 17.+roundup) ) intercept =  -30.2;
         float ydigi = ymiddle*slope + intercept + slope/2.;
         float resdigi = yextr - ydigi;
         h_mapY->Fill(ymiddle,localy);
         if (size == 2) { h_resiYNN2->Fill(resiY); h_resiYdigi2->Fill(resdigi); }
         if (size == 3) { h_resiYNN3->Fill(resiY); h_resiYdigi3->Fill(resdigi); }
         if (size == 4) { h_resiYNN4->Fill(resiY); h_resiYdigi4->Fill(resdigi); }
         if (size == 5) { h_resiYNN5->Fill(resiY); h_resiYdigi5->Fill(resdigi); }
         //std::cout << " ileft = " << etaIndex[ileft] << " iright = " << etaIndex[iright] << " local y = " << localy << " Exrapolated Y = " <<
         //yextr << "Y middle = " << ymiddle << " Y Digi = " << ydigi << " Res Digi = " << resdigi << std::endl;
       }
       for (int i=0; i<nHits; i++){
         float fracToT = double(totList1[i])/double(realtot);
	 if (layer ==0){
	   if ( etamod >= -6 && etamod <= 5) {
	     if (size == 2) h_shapeY0_2->Fill(i,fracToT);
	     if (size == 3) h_shapeY0_3->Fill(i,fracToT);
	     if (size == 4) h_shapeY0_4->Fill(i,fracToT);
	     if (size == 5) h_shapeY0_5->Fill(i,fracToT);
           }else{
	     if (size == 2) h_shapeY03D_2->Fill(i,fracToT);
	     if (size == 3) h_shapeY03D_3->Fill(i,fracToT);
	     if (size == 4) h_shapeY03D_4->Fill(i,fracToT);
	     if (size == 5) h_shapeY03D_5->Fill(i,fracToT);
	   }
	 }
	 if (layer ==1){
	   if (size == 2) h_shapeY1_2->Fill(i,fracToT);
	   if (size == 3) h_shapeY1_3->Fill(i,fracToT);
	   if (size == 4) h_shapeY1_4->Fill(i,fracToT);
	   if (size == 5) h_shapeY1_5->Fill(i,fracToT);
	 }
	 if (layer ==2){
	   if (size == 2) h_shapeY2_2->Fill(i,fracToT);
	   if (size == 3) h_shapeY2_3->Fill(i,fracToT);
	   if (size == 4) h_shapeY2_4->Fill(i,fracToT);
	   if (size == 5) h_shapeY2_5->Fill(i,fracToT);
	 }
	 if (layer ==3){
	   if (size == 2) h_shapeY3_2->Fill(i,fracToT);
	   if (size == 3) h_shapeY3_3->Fill(i,fracToT);
	   if (size == 4) h_shapeY3_4->Fill(i,fracToT);
	   if (size == 5) h_shapeY3_5->Fill(i,fracToT);
	 }
       }
     }
   }
 }



 h_GlobalRVSZ->Fill(globalz,globalr);

 if ( bec == 0 && layer == 0) {
   h_IBLphimodVSetamod->Fill(etamod,phimod);
   h_GlobalZIBL->Fill(globalz);
   if ( etamod >= -6 && etamod <= 5) {
      //if ( phiInc > -0.5 && phiInc < 0.6 ) {
        h_ToTI->Fill(tot);
        if(localx>=4 && localy<=-2 && localy>=-10) h_ToTIPl_lowT->Fill(tot);
        if(localx<=-4 && localy<=-10 && localy>=-18) h_ToTIPl_highT->Fill(tot);
        h_ChargeI->Fill(charge);
        h_SizeI->Fill(size);
        h_PhiSizeI->Fill(phiWidth);
        h_PhiSizevsLocalXYIPl->Fill(localy,localx,phiWidth);
        h_EtaSizeI->Fill(etaWidth);
        h_EtaSizevsLocalXYIPl->Fill(localy,localx,etaWidth);
      //}
      h_LVL1AI->Fill(lvl1);
      h_SizeVSToTI->Fill(tot,size);
      h_GlobalZIPl->Fill(globalz);
      h_LocalYVSXI->Fill(localx,localy);
      h_LocalYVSGlobalZIPl->Fill(localy,globalz);
      h_LocalXVSGlobalXYIPl->Fill(localx,sqrt((globalx*globalx)+(globaly*globaly)));
      h_LocalXVSRIPl->Fill(localx,sqrt((33*33)+(localx*localx)+(66*localx*sin(14.*(PI/180.)))));
//if(pt>2000.){
        h_ResiXIPl->Fill(resiX);
        h_ResiYIPl->Fill(resiY);
        h_PullXIPl->Fill(pullX);
        h_PullYIPl->Fill(pullY);
      //}
      h_PhiInciIPl->Fill(phiInc);
      h_EtaInciIPl->Fill(etaInc);
      h_ToTVSLocalPhiIPl->Fill(phiInc,tot);
      h_ToTVSLocalEtaIPl->Fill(etaInc,tot);
      if(tot<=32)h_ToTvsLocalXYIPl->Fill(localy,localx,tot);
  
   }else{
      //if ( phiInc > -0.6 && phiInc < 0.6 ) {
        h_ToTI3D->Fill(tot);
        h_ChargeI3D->Fill(charge);
        h_SizeI3D->Fill(size);
        h_PhiSizeI3D->Fill(phiWidth);
        h_PhiSizevsLocalXYI3D->Fill(localy,localx,phiWidth);
        h_EtaSizeI3D->Fill(etaWidth);
        h_EtaSizevsLocalXYI3D->Fill(localy,localx,etaWidth);
      //}
      h_LVL1AI3D->Fill(lvl1);
      h_SizeVSToTI3D->Fill(tot,size);
      h_GlobalZI3D->Fill(globalz);
      h_LocalYVSXI3D->Fill(localx,localy);
      h_LocalYVSGlobalZI3D->Fill(localy,globalz);
      h_LocalXVSGlobalXYI3D->Fill(localx,sqrt((globalx*globalx)+(globaly*globaly)));
      h_LocalXVSRIPl->Fill(localx,sqrt((33*33)+(localx*localx)+(66*localx*sin(14.*(PI/180.)))));
      //if(pt>2000.){
        h_ResiXI3D->Fill(resiX);
        h_ResiYI3D->Fill(resiY);
        h_PullXI3D->Fill(pullX);
        h_PullYI3D->Fill(pullY);
      //}
      h_PhiInciI3D->Fill(phiInc);
      h_EtaInciI3D->Fill(etaInc);
      h_ToTVSLocalPhiI3D->Fill(phiInc,tot);
      h_ToTVSLocalEtaI3D->Fill(etaInc,tot);
      if(tot<=32)h_ToTvsLocalXYI3D->Fill(localy,localx,tot);
   }
   h_phiVSphimod->Fill(phimod,phi);
 }
 if ( bec == 0 && layer != 0) {
      if(layer == 1) h_BLphimodVSetamod->Fill(etamod,phimod);
      if(layer == 2) h_L1phimodVSetamod->Fill(etamod,phimod);
      if(layer == 3) h_L2phimodVSetamod->Fill(etamod,phimod);
      //if ( phiInc > -0.5 && phiInc < 0.6 ) {
        h_ToT->Fill(tot);
        h_Charge->Fill(charge);
        h_ChargeVSToT->Fill(tot,charge);
        h_Size->Fill(size);
        h_PhiSize->Fill(phiWidth);
        h_EtaSize->Fill(etaWidth);
        if(layer == 1) {
          h_ToT0->Fill(tot);
          h_Charge0->Fill(charge);
          h_Size0->Fill(size);
          h_PhiSize0->Fill(phiWidth);
          h_LocalYVSGlobalZBL->Fill(localy,globalz);
          h_LocalXVSGlobalXYBL->Fill(localx,sqrt((globalx*globalx)+(globaly*globaly)));
          h_EtaSize0->Fill(etaWidth);
          float localytemp = 0;
          if(0<=localy && localy<=7.6) localytemp = localy;
          else if(7.6<localy && localy<=(7.6*2)) localytemp = localy - 7.6;
          else if((7.6*2)<localy && localy<=(7.6*3)) localytemp = localy - (7.6*2);
          else if((7.6*3)<localy && localy<=(7.6*4)) localytemp = localy - (7.6*3);
          else if(-7.6<=localy && localy<0) localytemp = localy + 7.6;
          else if(-(7.6*2)<=localy && localy<-7.6) localytemp = localy + (7.6*2);
          else if(-(7.6*3)<=localy && localy<-(7.6*2)) localytemp = localy + (7.6*3);
          else if((0.6-(7.6*4))<=localy && localy<-(7.6*3)) localytemp = localy + (7.6*4);
          h_EtaSizevsLocalXYBL->Fill(localytemp,localx,etaWidth);
          h_PhiSizevsLocalXYBL->Fill(localytemp,localx,phiWidth);
	}
        if(layer == 2) {
          h_ToT1->Fill(tot);
          h_Charge1->Fill(charge);
          h_Size1->Fill(size);
          h_PhiSize1->Fill(phiWidth);
          h_LocalYVSGlobalZL1->Fill(localy,globalz);
          h_LocalXVSGlobalXYL1->Fill(localx,sqrt((globalx*globalx)+(globaly*globaly)));
	        float localytemp = 0;
          if(0<=localy && localy<=7.6) localytemp = localy;
          else if(7.6<localy && localy<=(7.6*2)) localytemp = localy - 7.6;
          else if((7.6*2)<localy && localy<=(7.6*3)) localytemp = localy - (7.6*2);
          else if((7.6*3)<localy && localy<=(7.6*4)) localytemp = localy - (7.6*3);
          else if(-7.6<=localy && localy<0) localytemp = localy + 7.6;
          else if(-(7.6*2)<=localy && localy<-7.6) localytemp = localy + (7.6*2);
          else if(-(7.6*3)<=localy && localy<-(7.6*2)) localytemp = localy + (7.6*3);
          else if((0.6-(7.6*4))<=localy && localy<-(7.6*3)) localytemp = localy + (7.6*4);
          h_PhiSizevsLocalXYL1->Fill(localytemp,localx,phiWidth);
          h_EtaSize1->Fill(etaWidth);
          h_EtaSizevsLocalXYL1->Fill(localytemp,localx,etaWidth);

	}
        if(layer == 3) {
          h_ToT2->Fill(tot);
          h_Charge2->Fill(charge);
          h_Size2->Fill(size);
          h_PhiSize2->Fill(phiWidth);
          h_LocalYVSGlobalZL2->Fill(localy,globalz);
          h_LocalXVSGlobalXYL2->Fill(localx,sqrt((globalx*globalx)+(globaly*globaly)));
	        float localytemp = 0;
          if(0<=localy && localy<=7.6) localytemp = localy;
          else if(7.6<localy && localy<=(7.6*2)) localytemp = localy - 7.6;
          else if((7.6*2)<localy && localy<=(7.6*3)) localytemp = localy - (7.6*2);
          else if((7.6*3)<localy && localy<=(7.6*4)) localytemp = localy - (7.6*3);
          else if(-7.6<=localy && localy<0) localytemp = localy + 7.6;
          else if(-(7.6*2)<=localy && localy<-7.6) localytemp = localy + (7.6*2);
          else if(-(7.6*3)<=localy && localy<-(7.6*2)) localytemp = localy + (7.6*3);
          else if((0.6-(7.6*4))<=localy && localy<-(7.6*3)) localytemp = localy + (7.6*4);
          h_PhiSizevsLocalXYL2->Fill(localytemp,localx,phiWidth);
          h_EtaSize2->Fill(etaWidth);
          h_EtaSizevsLocalXYL2->Fill(localytemp,localx,etaWidth);
	}
      //}
      h_LVL1A->Fill(lvl1);
      if(layer == 1) h_LVL1A0->Fill(lvl1);
      if(layer == 2) h_LVL1A1->Fill(lvl1);
      if(layer == 3) h_LVL1A2->Fill(lvl1);
      h_SizeVSToT->Fill(tot,size);
      h_GlobalZ->Fill(globalz);
      h_LocalYVSX->Fill(localy,localx);
      //if(pt>2000.){
        if(layer == 1){
	  h_ResiX1->Fill(resiX);
          h_ResiY1->Fill(resiY);
          h_PullX1->Fill(pullX);
          h_PullY1->Fill(pullY);
          h_ToTVSLocalPhiBL->Fill(phiInc,tot);
          h_ToTVSLocalEtaBL->Fill(etaInc,tot);
          float localytemp = 0;
          if(0<=localy && localy<=7.6) localytemp = localy;
          else if(7.6<localy && localy<=(7.6*2)) localytemp = localy - 7.6;
          else if((7.6*2)<localy && localy<=(7.6*3)) localytemp = localy - (7.6*2);
          else if((7.6*3)<localy && localy<=(7.6*4)) localytemp = localy - (7.6*3);
          else if(-7.6<=localy && localy<0) localytemp = localy + 7.6;
          else if(-(7.6*2)<=localy && localy<-7.6) localytemp = localy + (7.6*2);
          else if(-(7.6*3)<=localy && localy<-(7.6*2)) localytemp = localy + (7.6*3);
          else if((0.6-(7.6*4))<=localy && localy<-(7.6*3)) localytemp = localy + (7.6*4);
          if(tot<=72)h_ToTvsLocalXYBL->Fill(localytemp,localx,tot);
        }
        if(layer == 2){
	  h_ResiX2->Fill(resiX);
          h_ResiY2->Fill(resiY);
          h_PullX2->Fill(pullX);
          h_PullY2->Fill(pullY);
          h_ToTVSLocalPhiL1->Fill(phiInc,tot);
          h_ToTVSLocalEtaL1->Fill(etaInc,tot);
	float localytemp = 0;
          if(0<=localy && localy<=7.6) localytemp = localy;
          else if(7.6<localy && localy<=(7.6*2)) localytemp = localy - 7.6;
          else if((7.6*2)<localy && localy<=(7.6*3)) localytemp = localy - (7.6*2);
          else if((7.6*3)<localy && localy<=(7.6*4)) localytemp = localy - (7.6*3);
          else if(-7.6<=localy && localy<0) localytemp = localy + 7.6;
          else if(-(7.6*2)<=localy && localy<-7.6) localytemp = localy + (7.6*2);
          else if(-(7.6*3)<=localy && localy<-(7.6*2)) localytemp = localy + (7.6*3);
          else if((0.6-(7.6*4))<=localy && localy<-(7.6*3)) localytemp = localy + (7.6*4);
          if(tot<=120)h_ToTvsLocalXYL1->Fill(localytemp,localx,tot);
        }
        if(layer == 3){
	  h_ResiX3->Fill(resiX);
          h_ResiY3->Fill(resiY);
          h_PullX3->Fill(pullX);
          h_PullY3->Fill(pullY);
          h_ToTVSLocalPhiL2->Fill(phiInc,tot);
          h_ToTVSLocalEtaL2->Fill(etaInc,tot);
	  float localytemp = 0;
          if(0<=localy && localy<=7.6) localytemp = localy;
          else if(7.6<localy && localy<=(7.6*2)) localytemp = localy - 7.6;
          else if((7.6*2)<localy && localy<=(7.6*3)) localytemp = localy - (7.6*2);
          else if((7.6*3)<localy && localy<=(7.6*4)) localytemp = localy - (7.6*3);
          else if(-7.6<=localy && localy<0) localytemp = localy + 7.6;
          else if(-(7.6*2)<=localy && localy<-7.6) localytemp = localy + (7.6*2);
          else if(-(7.6*3)<=localy && localy<-(7.6*2)) localytemp = localy + (7.6*3);
          else if((0.6-(7.6*4))<=localy && localy<-(7.6*3)) localytemp = localy + (7.6*4);
          if(tot<=120)h_ToTvsLocalXYL2->Fill(localytemp,localx,tot);
        }
      //}
      h_PhiInci->Fill(phiInc);
      h_EtaInci->Fill(etaInc);
}


    if( bec == 0 && layer !=0 )h_PixelLorentz->Fill( phiInc, phiWidth );
    if( bec == 0 && layer !=0 )h_PixelLorentzs->Fill( phiInc, phiWidth );
    if( bec == 0 && layer ==1 ){
      h_PixelLorentzL0->Fill( phiInc, phiWidth );
      h_PixelLorentzL0s->Fill( phiInc, phiWidth );
      if( etamod == -6)h_PixelLorentzL0_1->Fill( phiInc, phiWidth );
      if( etamod == -5)h_PixelLorentzL0_2->Fill( phiInc, phiWidth );
      if( etamod == -4)h_PixelLorentzL0_3->Fill( phiInc, phiWidth );
      if( etamod == -3)h_PixelLorentzL0_4->Fill( phiInc, phiWidth );
      if( etamod == -2)h_PixelLorentzL0_5->Fill( phiInc, phiWidth );
      if( etamod == -1)h_PixelLorentzL0_6->Fill( phiInc, phiWidth );
      if( etamod ==  0)h_PixelLorentzL0_7->Fill( phiInc, phiWidth );
      if( etamod ==  1)h_PixelLorentzL0_8->Fill( phiInc, phiWidth );
      if( etamod ==  2)h_PixelLorentzL0_9->Fill( phiInc, phiWidth );
      if( etamod ==  3)h_PixelLorentzL0_10->Fill( phiInc, phiWidth );
      if( etamod ==  4)h_PixelLorentzL0_11->Fill( phiInc, phiWidth );
      if( etamod ==  5)h_PixelLorentzL0_12->Fill( phiInc, phiWidth );
      if( etamod ==  6)h_PixelLorentzL0_13->Fill( phiInc, phiWidth );
    }
    if( bec == 0 && layer ==2 ){
      h_PixelLorentzL1->Fill( phiInc, phiWidth );
      h_PixelLorentzL1s->Fill( phiInc, phiWidth );
      if( etamod == -6)h_PixelLorentzL1_1->Fill( phiInc, phiWidth );
      if( etamod == -5)h_PixelLorentzL1_2->Fill( phiInc, phiWidth );
      if( etamod == -4)h_PixelLorentzL1_3->Fill( phiInc, phiWidth );
      if( etamod == -3)h_PixelLorentzL1_4->Fill( phiInc, phiWidth );
      if( etamod == -2)h_PixelLorentzL1_5->Fill( phiInc, phiWidth );
      if( etamod == -1)h_PixelLorentzL1_6->Fill( phiInc, phiWidth );
      if( etamod ==  0)h_PixelLorentzL1_7->Fill( phiInc, phiWidth );
      if( etamod ==  1)h_PixelLorentzL1_8->Fill( phiInc, phiWidth );
      if( etamod ==  2)h_PixelLorentzL1_9->Fill( phiInc, phiWidth );
      if( etamod ==  3)h_PixelLorentzL1_10->Fill( phiInc, phiWidth );
      if( etamod ==  4)h_PixelLorentzL1_11->Fill( phiInc, phiWidth );
      if( etamod ==  5)h_PixelLorentzL1_12->Fill( phiInc, phiWidth );
      if( etamod ==  6)h_PixelLorentzL1_13->Fill( phiInc, phiWidth );
    }
    if( bec == 0 && layer ==3 ){
      h_PixelLorentzL2->Fill( phiInc, phiWidth );
      h_PixelLorentzL2s->Fill( phiInc, phiWidth );
      if( etamod == -6)h_PixelLorentzL2_1->Fill( phiInc, phiWidth );
      if( etamod == -5)h_PixelLorentzL2_2->Fill( phiInc, phiWidth );
      if( etamod == -4)h_PixelLorentzL2_3->Fill( phiInc, phiWidth );
      if( etamod == -3)h_PixelLorentzL2_4->Fill( phiInc, phiWidth );
      if( etamod == -2)h_PixelLorentzL2_5->Fill( phiInc, phiWidth );
      if( etamod == -1)h_PixelLorentzL2_6->Fill( phiInc, phiWidth );
      if( etamod ==  0)h_PixelLorentzL2_7->Fill( phiInc, phiWidth );
      if( etamod ==  1)h_PixelLorentzL2_8->Fill( phiInc, phiWidth );
      if( etamod ==  2)h_PixelLorentzL2_9->Fill( phiInc, phiWidth );
      if( etamod ==  3)h_PixelLorentzL2_10->Fill( phiInc, phiWidth );
      if( etamod ==  4)h_PixelLorentzL2_11->Fill( phiInc, phiWidth );
      if( etamod ==  5)h_PixelLorentzL2_12->Fill( phiInc, phiWidth );
      if( etamod ==  6)h_PixelLorentzL2_13->Fill( phiInc, phiWidth );
    }
    if( bec == 0 && layer !=0 )h_PixelLorentzE->Fill( etaInc, etaWidth );
    if( bec == 0 && layer ==1 )h_PixelLorentzEL0->Fill( etaInc, etaWidth );
    if( bec == 0 && layer ==2 )h_PixelLorentzEL1->Fill( etaInc, etaWidth );
    if( bec == 0 && layer ==3 )h_PixelLorentzEL2->Fill( etaInc, etaWidth );
    if( bec == 0 && layer == 0){
      if( etamod >= -6 && etamod <= 5 ){
        h_IBLPlLorentz->Fill( phiInc, phiWidth );
        h_IBLPlLorentzs->Fill( phiInc, phiWidth );
        if( etamod == -6)h_IBLPlLorentz_1->Fill( phiInc, phiWidth );
        if( etamod == -5)h_IBLPlLorentz_2->Fill( phiInc, phiWidth );
        if( etamod == -4)h_IBLPlLorentz_3->Fill( phiInc, phiWidth );
        if( etamod == -3)h_IBLPlLorentz_4->Fill( phiInc, phiWidth );
        if( etamod == -2)h_IBLPlLorentz_5->Fill( phiInc, phiWidth );
        if( etamod == -1)h_IBLPlLorentz_6->Fill( phiInc, phiWidth );
        if( etamod ==  0)h_IBLPlLorentz_7->Fill( phiInc, phiWidth );
        if( etamod ==  1)h_IBLPlLorentz_8->Fill( phiInc, phiWidth );
        if( etamod ==  2)h_IBLPlLorentz_9->Fill( phiInc, phiWidth );
        if( etamod ==  3)h_IBLPlLorentz_10->Fill( phiInc, phiWidth );
        if( etamod ==  4)h_IBLPlLorentz_11->Fill( phiInc, phiWidth );
        if( etamod ==  5)h_IBLPlLorentz_12->Fill( phiInc, phiWidth );
      }
      if( etamod <  -6 || etamod > 5  )h_IBL3DLorentz->Fill( phiInc, phiWidth );
      if( etamod <  -6 || etamod > 5  )h_IBL3DLorentzs->Fill( phiInc, phiWidth );
      if( etamod >= -6 && etamod <= 5 )h_IBLPlLorentzE->Fill( etaInc, etaWidth );
      if( etamod <  -6 || etamod > 5  )h_IBL3DLorentzE->Fill( etaInc, etaWidth );
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
