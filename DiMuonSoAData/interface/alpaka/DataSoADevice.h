#ifndef DiMuonSoAAnalyzer_DiMuonSoAData_interface_alpaka_DataSoADevice_h
#define DiMuonSoAAnalyzer_DiMuonSoAData_interface_alpaka_DataSoADevice_h

#include "DataFormats/Portable/interface/alpaka/PortableCollection.h"
#include "DiMuonSoAAnalyzer/DiMuonSoAData/interface/DataSoA.h"

namespace ALPAKA_ACCELERATOR_NAMESPACE {
    
    using CandidateWithMassDevice = PortableCollection<CandidateWithMass>;
    using TwoDaughterCandDevice = PortableCollection<TwoDaughterCand>;

}
#endif