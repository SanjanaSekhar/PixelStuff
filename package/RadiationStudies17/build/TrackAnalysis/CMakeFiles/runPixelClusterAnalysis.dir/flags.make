# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# compile CXX with /cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/sw/lcg/releases/gcc/4.9.3/x86_64-slc6/bin/g++
CXX_FLAGS = -O2 -g -DNDEBUG -Wall -Wno-long-long -Wno-deprecated -Wno-unused-local-typedefs -Wwrite-strings -Wpointer-arith -Woverloaded-virtual -Wextra -Werror=return-type -pedantic   -std=c++14

CXX_DEFINES = -DATLAS -DHAVE_64_BITS -DHAVE_PRETTY_FUNCTION -DPACKAGE_VERSION=\"TrackAnalysis-00-00-00\" -DPACKAGE_VERSION_UQ=TrackAnalysis-00-00-00 -DROOTCORE -DROOTCORE_RELEASE_SERIES=25 -DUSE_CMAKE -DXAOD_ANALYSIS -DXAOD_STANDALONE -D__IDENTIFIER_64BIT__

CXX_INCLUDES = -I/afs/cern.ch/work/s/ssekhar/RadiationStudies17/source/TrackAnalysis -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoop -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/RootCoreUtils -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/SampleHandler -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthToolSupport/AsgTools -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/xAODRootAccessInterfaces -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/xAODRootAccess -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthContainersInterfaces -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthContainers -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/AthLinks -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Control/CxxUtils -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODCore -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEventFormat -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoopGrid -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/EventLoopAlgs -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/D3PDTools/MultiDraw -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODBase -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/EventPrimitives -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/GeoPrimitives -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEventInfo -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTracking -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/InnerDetector/InDetRecTools/InDetTrackSelectionTool -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/PATCore -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DataQuality/GoodRunsLists -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/Interfaces/AsgAnalysisInterfaces -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/PATInterfaces -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTruth -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODMuon -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODCaloEvent -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Calorimeter/CaloGeoHelpers -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODPrimitives -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/MuonSpectrometer/MuonIdHelpers -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/MuonID/MuonIDAnalysis/MuonMomentumCorrections -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/AnalysisCommon/IsolationSelection -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODEgamma -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigAnalysis/TrigDecisionTool -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Event/xAOD/xAODTrigger -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfHLTData -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfL1Data -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfInterfaces -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigDecisionInterface -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigRoiConversion -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigSteeringEvent -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/RoiDescriptor -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/DetectorDescription/IRegionSelector -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigEvent/TrigNavStructure -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Trigger/TrigConfiguration/TrigConfxAOD -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/PhysicsAnalysis/MuonID/MuonSelectorTools -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/src/Tools/PathResolver -I/cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/RootCore/include -isystem /cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include -isystem /cvmfs/atlas.cern.ch/repo/sw/ASG/2.6/AnalysisBase/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/../../../../AnalysisBaseExternals/2.6.3/InstallArea/x86_64-slc6-gcc49-opt/include/eigen3 

