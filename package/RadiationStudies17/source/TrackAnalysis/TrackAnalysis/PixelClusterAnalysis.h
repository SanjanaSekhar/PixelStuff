#ifndef TrackAnalysis_PixelClusterAnalysis_H
#define TrackAnalysis_PixelClusterAnalysis_H


#include "xAODRootAccess/Init.h"
#include "xAODRootAccess/TEvent.h"

#include <EventLoop/Algorithm.h>

#include "TrackAnalysis/PixelClusterHists.h"
#include "TrackAnalysis/PixelAllClusterHists.h"
#include "TrackAnalysis/TrackHists.h"
#include "TrackAnalysis/EventHists.h"

#ifndef __MAKECINT__
#include "xAODTracking/TrackParticle.h"
#include "xAODTruth/TruthParticle.h"
#endif // not __MAKECINT__

class PixelClusterAnalysis : public EL::Algorithm
{
  // put your configuration variables here as public variables.
  // that way they can be set directly from CINT and python.
public:
  // float cutValue;



  // variables that don't get filled at submission time should be
  // protected from being send from the submission node to the worker
  // node (done by the //!)
public:
  // Tree *myTree; //!
  // TH1 *myHist; //!



  // this is a standard constructor
  PixelClusterAnalysis ();

  // these are the functions inherited from Algorithm
  virtual EL::StatusCode setupJob (EL::Job& job);
  virtual EL::StatusCode fileExecute ();
  virtual EL::StatusCode histInitialize ();
  virtual EL::StatusCode changeInput (bool firstFile);
  virtual EL::StatusCode initialize ();
  virtual EL::StatusCode execute ();
  virtual EL::StatusCode postExecute ();
  virtual EL::StatusCode finalize ();
  virtual EL::StatusCode histFinalize ();


  xAOD::TEvent *m_event;          //!
  unsigned int  m_eventCounter;   //!


  PixelAllClusterHists* m_AllClusters;   //!
  PixelClusterHists* m_OTrClusters; //!
  TrackHists* m_Tracks; //!
  TrackHists* m_Tracks_RedTRT; //!
  TrackHists* m_Tracks_LowPt; //!
  TrackHists* m_Tracks_Selected; //!
  EventHists* m_EventHisto; //!

  // this is needed to distribute the algorithm to the workers
  ClassDef(PixelClusterAnalysis, 1);
};

#endif
