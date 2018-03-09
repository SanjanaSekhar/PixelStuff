

#include "xAODRootAccess/Init.h"
#include "SampleHandler/SampleHandler.h"
#include "SampleHandler/ToolsDiscovery.h"
#include "EventLoop/Job.h"
#include "EventLoop/DirectDriver.h"
#include "SampleHandler/DiskListLocal.h"

#include "TrackAnalysis/PixelClusterAnalysis.h"
#include <string>

int main( int argc, char* argv[] ) {
//int main( int argc, std::string argv[] ) {

  // Take the submit directory from the input if provided:
  std::string submitDir = "submitDir";

  std::string runnum = argv [ 1 ]; 
  if( argc > 1 ) submitDir = "TEST" + runnum;
  //if( argc > 1 ) submitDir = runnum;

  // Set up the job for xAOD access:
  xAOD::Init().ignore();

  // Construct the samples to run on:
  std::string filelist;
  filelist = "test.txt";
  SH::SampleHandler sh;
  //SH::DiskListLocal list ("/afs/cern.ch/work/a/amorley/public/xAOD-2011/InputFile");
  //SH::DiskListLocal list ("root://eosatlas//eos/atlas/atlascerngroupdisk/perf-idtracking//DxAOD/data14_cos/data14_cos.00242651.physics_IDCosmic.recon.DAOD.x277_p002");
  //SH::DiskListLocal list ("root://eosatlas//eos/atlas/atlascerngroupdisk/perf-idtracking//DxAOD/data14_cos/data14_cos.00242651.physics_IDCosmic.recon.DAOD.x284_p002");
    //SH::readFileList( sh, "sample", "filelist_246892_x287_p002.txt" );


    //SH::readFileList( sh, "sample", "test_single2016.txt" );
    SH::readFileList( sh, "sample", filelist );
    //SH::readFileList( sh, "sample", "BoffMC.txt" );


	//SH::scanSingleDir( sh, "TestFile" ,list);

  // Set the name of the input TTree. It's always "CollectionTree"
  // for xAOD files.
  sh.setMetaString( "nc_tree", "CollectionTree" );

  // Print what we found:
  sh.print();

  // Create an EventLoop job:
  EL::Job job;
  job.sampleHandler( sh );

  // Add our analysis to the job:
  PixelClusterAnalysis* alg = new PixelClusterAnalysis();
  job.algsAdd( alg );

  // Run the job using the local/direct driver:
  EL::DirectDriver driver;
  driver.submit( job, submitDir );

  return 0;
}
