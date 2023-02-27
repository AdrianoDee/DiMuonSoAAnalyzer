#ifndef DiMuonSoAAnalyzer_DiMuonSoAData_interface_DataSoAHost_h
#define DiMuonSoAAnalyzer_DiMuonSoAData_interface_DataSoAHost_h

#include "DataFormats/Portable/interface/PortableHostCollection.h"
#include "DataSoA.h"

using CandidateWithMassHost = PortableHostCollection<CandidateWithMass>;
using TwoDaughterCandHost = PortableHostCollection<TwoDaughterCand>;

#endif