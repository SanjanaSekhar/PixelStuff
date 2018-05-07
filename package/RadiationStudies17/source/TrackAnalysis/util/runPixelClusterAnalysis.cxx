#include "xAODRootAccess/Init.h"
#include <SampleHandler/SampleHandler.h>
#include <SampleHandler/ScanDir.h>
#include <SampleHandler/ToolsDiscovery.h>
#include "EventLoop/Job.h"
#include "EventLoop/DirectDriver.h"
#include "SampleHandler/DiskListLocal.h"
#include <TSystem.h>
#include <EventLoopAlgs/NTupleSvc.h>
#include <EventLoop/OutputStream.h>

#include "TrackAnalysis/PixelClusterAnalysis.h"
#include <iostream>
//#include "PixelAnalysis/pixelAnalysis.h"
using namespace std;
int main( int argc, char* argv[] ) {

  // Take the submit directory from the input if provided:

  if (argc < 2){ cout << "Need output directory " << endl; return 0; }
  if (argc > 2){ cout << "Too many arguments." << endl; return 0; }

  std::string submitDir = argv[ 1 ];
  //std::string listFile = argv[ 2 ];

  // Set up the job for xAOD access:
  xAOD::Init().ignore();

  // Construct the samples to run on:
  SH::SampleHandler sh;

  // use SampleHandler to scan all of the subdirectories of a directory for particular MC single file:
  SH::readFileList( sh, "sample", "test.txt" );

  

  



 

// Set the name of the input TTree. It's always "CollectionTree"
  // for xAOD files.
  sh.setMetaString( "nc_tree", "CollectionTree" );

  // Print what we found:
  sh.print();

  // Create an EventLoop job:
  EL::Job job;
  job.sampleHandler( sh );

  // define an output and an ntuple associated to that output
 // EL::OutputStream output  ("myOutput");
  //job.outputAdd (output);
  //EL::NTupleSvc *ntuple = new EL::NTupleSvc ("myOutput");
  //job.algsAdd (ntuple);

  // Add our analysis to the job:
  PixelClusterAnalysis* alg = new PixelClusterAnalysis();
  job.algsAdd( alg );

//alg->outputName = "myOutput"; // give the name of the output to our algorithm

  // Run the job using the local/direct driver:
  EL::DirectDriver driver;
  driver.submit( job, submitDir );

  return 0;
}
