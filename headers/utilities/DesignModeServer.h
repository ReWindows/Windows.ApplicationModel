#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 2 member(s).
namespace Windows::ApplicationModel {
class DesignModeServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DesignModeServer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DesignModeServer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
};
} // namespace Windows::ApplicationModel
