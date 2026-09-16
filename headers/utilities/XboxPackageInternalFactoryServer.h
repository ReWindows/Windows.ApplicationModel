#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::Internal {
class XboxPackageInternalFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@XboxPackageInternalFactoryServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@XboxPackageInternalFactoryServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVector@PEAVXboxPackageInternal@Internal@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFullName@XboxPackageInternalFactoryServer@Internal@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIXboxPackageInternal@234@@Z
    virtual long FindByPackageFullName(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::ApplicationModel::Internal
