#ifndef TrackAnalysis_TrackEfficiencyAnalysis_H
#define TrackAnalysis_TrackEfficiencyAnalysis_H

#include "xAODRootAccess/Init.h"
#include "xAODRootAccess/TEvent.h"

#include <EventLoop/Algorithm.h>

#include "TrackAnalysis/TrackEfficiencyHists.h"

#ifndef __MAKECINT__
#include "xAODTracking/TrackParticle.h"
#include "xAODTruth/TruthParticle.h"
#endif // not __MAKECINT__

class TrackEfficiencyAnalysis : public EL::Algorithm
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
  TrackEfficiencyAnalysis ();

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

// Everything in the header file  that refers to the xAOD edm needs 
#ifndef __MAKECINT__
  /** Check if the truth particle is a primary charged particle within detector acceptance*/
  bool isPrimary( const xAOD::TruthParticle*   )const;
  
  /** Check if the truth particle is a secondary charged particle within detector acceptance*/
	bool isSecondary( const xAOD::TruthParticle* )const;
	
	/** Check if the truth particle is a combinatorial fake or has no truth associated to it*/
	bool isFake( const xAOD::TrackParticle*      )const;
  
  /** Check if the track particle originated from is a primary charged particle within detector acceptance*/
  bool isPrimary( const xAOD::TrackParticle*   )const;
  
  /** Check if the track particle originated from is a secondary charged particle within detector acceptance*/
  bool isSecondary( const xAOD::TrackParticle* )const;
  
  /** Get the truth particle from associated to a track particle.  Return 0 if there is no truth particle associated*/
  const xAOD::TruthParticle* truthParticle(const xAOD::TrackParticle *trkPart) const;
#endif // not __MAKECINT__

  xAOD::TEvent *m_event;                   //!
  unsigned int  m_eventCounter;            //!
 
  
  TrackEfficiencyHists* m_PrimaryTracks;   //!
  TrackEfficiencyHists* m_SecondaryTracks; //!
  TrackEfficiencyHists* m_PrimaryTruth;    //!
  TrackEfficiencyHists* m_SecondaryTruth;  //!

  TrackEfficiencyHists* m_DuplicatePrimaryTracks;   //!
  TrackEfficiencyHists* m_DuplicateSecondaryTracks; //!

  TrackEfficiencyHists* m_AllTracks;       //!
	TrackEfficiencyHists* m_FakeTracks;      //!


  // this is needed to distribute the algorithm to the workers
  ClassDef(TrackEfficiencyAnalysis, 1);
};

#endif
