#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 3 member(s).
namespace Common {
class StateSeparation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCache@StateSeparation@Common@@SAXXZ
    static void ClearCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsStateSeparationEnabled@StateSeparation@Common@@SAJPEA_N@Z
    static long GetIsStateSeparationEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistedRegKeyPath@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEAPEAG@Z
    static long GetPersistedRegKeyPath(WindissectOpaque const &, unsigned short * *);
};
} // namespace Common
