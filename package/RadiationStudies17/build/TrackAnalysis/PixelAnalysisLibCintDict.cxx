// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PixelAnalysisLibCintDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "TrackAnalysis/TrackEfficiencyAnalysis.h"
#include "TrackAnalysis/PixelClusterAnalysis.h"
#include "TrackAnalysis/TrackEfficiencyAnalysis.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_PixelClusterAnalysis(void *p = 0);
   static void *newArray_PixelClusterAnalysis(Long_t size, void *p);
   static void delete_PixelClusterAnalysis(void *p);
   static void deleteArray_PixelClusterAnalysis(void *p);
   static void destruct_PixelClusterAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PixelClusterAnalysis*)
   {
      ::PixelClusterAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PixelClusterAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PixelClusterAnalysis", ::PixelClusterAnalysis::Class_Version(), "TrackAnalysis/PixelClusterAnalysis.h", 20,
                  typeid(::PixelClusterAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PixelClusterAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::PixelClusterAnalysis) );
      instance.SetNew(&new_PixelClusterAnalysis);
      instance.SetNewArray(&newArray_PixelClusterAnalysis);
      instance.SetDelete(&delete_PixelClusterAnalysis);
      instance.SetDeleteArray(&deleteArray_PixelClusterAnalysis);
      instance.SetDestructor(&destruct_PixelClusterAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PixelClusterAnalysis*)
   {
      return GenerateInitInstanceLocal((::PixelClusterAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::PixelClusterAnalysis*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TrackEfficiencyAnalysis(void *p = 0);
   static void *newArray_TrackEfficiencyAnalysis(Long_t size, void *p);
   static void delete_TrackEfficiencyAnalysis(void *p);
   static void deleteArray_TrackEfficiencyAnalysis(void *p);
   static void destruct_TrackEfficiencyAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackEfficiencyAnalysis*)
   {
      ::TrackEfficiencyAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TrackEfficiencyAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TrackEfficiencyAnalysis", ::TrackEfficiencyAnalysis::Class_Version(), "TrackAnalysis/TrackEfficiencyAnalysis.h", 16,
                  typeid(::TrackEfficiencyAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TrackEfficiencyAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::TrackEfficiencyAnalysis) );
      instance.SetNew(&new_TrackEfficiencyAnalysis);
      instance.SetNewArray(&newArray_TrackEfficiencyAnalysis);
      instance.SetDelete(&delete_TrackEfficiencyAnalysis);
      instance.SetDeleteArray(&deleteArray_TrackEfficiencyAnalysis);
      instance.SetDestructor(&destruct_TrackEfficiencyAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackEfficiencyAnalysis*)
   {
      return GenerateInitInstanceLocal((::TrackEfficiencyAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TrackEfficiencyAnalysis*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PixelClusterAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PixelClusterAnalysis::Class_Name()
{
   return "PixelClusterAnalysis";
}

//______________________________________________________________________________
const char *PixelClusterAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PixelClusterAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PixelClusterAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PixelClusterAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PixelClusterAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PixelClusterAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PixelClusterAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PixelClusterAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TrackEfficiencyAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackEfficiencyAnalysis::Class_Name()
{
   return "TrackEfficiencyAnalysis";
}

//______________________________________________________________________________
const char *TrackEfficiencyAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackEfficiencyAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackEfficiencyAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackEfficiencyAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackEfficiencyAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackEfficiencyAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackEfficiencyAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackEfficiencyAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PixelClusterAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class PixelClusterAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PixelClusterAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(PixelClusterAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PixelClusterAnalysis(void *p) {
      return  p ? new(p) ::PixelClusterAnalysis : new ::PixelClusterAnalysis;
   }
   static void *newArray_PixelClusterAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::PixelClusterAnalysis[nElements] : new ::PixelClusterAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_PixelClusterAnalysis(void *p) {
      delete ((::PixelClusterAnalysis*)p);
   }
   static void deleteArray_PixelClusterAnalysis(void *p) {
      delete [] ((::PixelClusterAnalysis*)p);
   }
   static void destruct_PixelClusterAnalysis(void *p) {
      typedef ::PixelClusterAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PixelClusterAnalysis

//______________________________________________________________________________
void TrackEfficiencyAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TrackEfficiencyAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TrackEfficiencyAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(TrackEfficiencyAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackEfficiencyAnalysis(void *p) {
      return  p ? new(p) ::TrackEfficiencyAnalysis : new ::TrackEfficiencyAnalysis;
   }
   static void *newArray_TrackEfficiencyAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::TrackEfficiencyAnalysis[nElements] : new ::TrackEfficiencyAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackEfficiencyAnalysis(void *p) {
      delete ((::TrackEfficiencyAnalysis*)p);
   }
   static void deleteArray_TrackEfficiencyAnalysis(void *p) {
      delete [] ((::TrackEfficiencyAnalysis*)p);
   }
   static void destruct_TrackEfficiencyAnalysis(void *p) {
      typedef ::TrackEfficiencyAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackEfficiencyAnalysis

namespace ROOT {
   static TClass *maplEstringcOstringgR_Dictionary();
   static void maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringgR(void *p = 0);
   static void *newArray_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_maplEstringcOstringgR(void *p);
   static void deleteArray_maplEstringcOstringgR(void *p);
   static void destruct_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string>*)
   {
      map<string,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string>", -2, "map", 96,
                  typeid(map<string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOstringgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,string>) );
      instance.SetNew(&new_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_maplEstringcOstringgR);
      instance.SetDelete(&delete_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,string>*)0x0)->GetClass();
      maplEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,string> : new map<string,string>;
   }
   static void *newArray_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,string>[nElements] : new map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringgR(void *p) {
      delete ((map<string,string>*)p);
   }
   static void deleteArray_maplEstringcOstringgR(void *p) {
      delete [] ((map<string,string>*)p);
   }
   static void destruct_maplEstringcOstringgR(void *p) {
      typedef map<string,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,string>

namespace {
  void TriggerDictionaryInitialization_libPixelAnalysisLib_Impl() {
    static const char* headers[] = {
"TrackAnalysis/TrackEfficiencyAnalysis.h",
"TrackAnalysis/PixelClusterAnalysis.h",
"TrackAnalysis/TrackEfficiencyAnalysis.h",
0
    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/s/ssekhar/RadiationStudies17/source/TrackAnalysis",
"/afs/cern.ch/work/s/ssekhar/RadiationStudies17/source/TrackAnalysis",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoop",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/RootCoreUtils",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/SampleHandler",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthToolSupport/AsgTools",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/xAODRootAccessInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/xAODRootAccess",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthContainersInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthContainers",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthLinks",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/CxxUtils",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODCore",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEventFormat",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoopGrid",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoopAlgs",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/MultiDraw",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODBase",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/EventPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/GeoPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEventInfo",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTracking",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/InnerDetector/InDetRecTools/InDetTrackSelectionTool",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/PATCore",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DataQuality/GoodRunsLists",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/Interfaces/AsgAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/PATInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTruth",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODMuon",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODCaloEvent",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Calorimeter/CaloGeoHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/MuonSpectrometer/MuonIdHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/MuonID/MuonIDAnalysis/MuonMomentumCorrections",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/IsolationSelection",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEgamma",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigAnalysis/TrigDecisionTool",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTrigger",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfHLTData",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfL1Data",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigDecisionInterface",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigRoiConversion",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigSteeringEvent",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/RoiDescriptor",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/IRegionSelector",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigNavStructure",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfxAOD",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/MuonID/MuonSelectorTools",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Tools/PathResolver",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/xAODRootAccess",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthContainersInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthContainers",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthLinks",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/xAODRootAccessInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/CxxUtils",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODCore",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEventFormat",
"/afs/cern.ch/work/s/ssekhar/RadiationStudies17/source/TrackAnalysis",
"/afs/cern.ch/work/s/ssekhar/RadiationStudies17/source/TrackAnalysis",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoop",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/RootCoreUtils",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/SampleHandler",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthToolSupport/AsgTools",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/xAODRootAccessInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/xAODRootAccess",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthContainers",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthContainersInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthLinks",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/CxxUtils",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODCore",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEventFormat",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoopGrid",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoopAlgs",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/MultiDraw",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODBase",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/EventPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/GeoPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEventInfo",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTracking",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DataQuality/GoodRunsLists",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/Interfaces/AsgAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/PATInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTruth",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODMuon",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODCaloEvent",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Calorimeter/CaloGeoHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/MuonSpectrometer/MuonIdHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/MuonID/MuonIDAnalysis/MuonMomentumCorrections",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/IsolationSelection",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEgamma",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/PATCore",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/InnerDetector/InDetRecTools/InDetTrackSelectionTool",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigAnalysis/TrigDecisionTool",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigDecisionInterface",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTrigger",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfHLTData",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfL1Data",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigNavStructure",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigRoiConversion",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigSteeringEvent",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/RoiDescriptor",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/IRegionSelector",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfxAOD",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/MuonID/MuonSelectorTools",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Tools/PathResolver",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/RootCore/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/RootCore/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include",
"/afs/cern.ch/work/s/ssekhar/RadiationStudies17/build/TrackAnalysis/makePixelAnalysisLibCintDict.ree8ZS/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libPixelAnalysisLib dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace std{template <typename > class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$TrackAnalysis/PixelClusterAnalysis.h")))  PixelClusterAnalysis;
class __attribute__((annotate("$clingAutoload$TrackAnalysis/TrackEfficiencyAnalysis.h")))  TrackEfficiencyAnalysis;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libPixelAnalysisLib dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef HAVE_PRETTY_FUNCTION
  #define HAVE_PRETTY_FUNCTION 1
#endif
#ifndef HAVE_64_BITS
  #define HAVE_64_BITS 1
#endif
#ifndef __IDENTIFIER_64BIT__
  #define __IDENTIFIER_64BIT__ 1
#endif
#ifndef ATLAS
  #define ATLAS 1
#endif
#ifndef ROOTCORE
  #define ROOTCORE 1
#endif
#ifndef XAOD_STANDALONE
  #define XAOD_STANDALONE 1
#endif
#ifndef XAOD_ANALYSIS
  #define XAOD_ANALYSIS 1
#endif
#ifndef ROOTCORE_RELEASE_SERIES
  #define ROOTCORE_RELEASE_SERIES 25
#endif
#ifndef ROOTCORE
  #define ROOTCORE 1
#endif
#ifndef XAOD_STANDALONE
  #define XAOD_STANDALONE 1
#endif
#ifndef XAOD_ANALYSIS
  #define XAOD_ANALYSIS 1
#endif
#ifndef ROOTCORE_RELEASE_SERIES
  #define ROOTCORE_RELEASE_SERIES 25
#endif
#ifndef PACKAGE_VERSION
  #define PACKAGE_VERSION "TrackAnalysis-00-00-00"
#endif
#ifndef PACKAGE_VERSION_UQ
  #define PACKAGE_VERSION_UQ TrackAnalysis-00-00-00
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TrackAnalysis/TrackEfficiencyAnalysis.h"
#include "TrackAnalysis/PixelClusterAnalysis.h"
#include "TrackAnalysis/TrackEfficiencyAnalysis.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"PixelClusterAnalysis", payloadCode, "@",
"TrackEfficiencyAnalysis", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libPixelAnalysisLib",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libPixelAnalysisLib_Impl, {{"namespace DataVector_detail { template <typename B1, typename B2, typename B3> class VirtBases; }", 1},{"template <typename T> class DataVectorBase;", 1},{"template <typename T, typename BASE> class DataVector;", 1},{"namespace DataVector_detail { template <typename T> class DVLEltBaseInit; }", 1}}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libPixelAnalysisLib_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libPixelAnalysisLib() {
  TriggerDictionaryInitialization_libPixelAnalysisLib_Impl();
}
