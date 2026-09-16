#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 2 member(s).
namespace Common::ApplicationModel {
class PackageCatalogFaultInjection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@PackageCatalogFaultInjection@ApplicationModel@Common@@SA?AV123@XZ
    static WindissectOpaque GetCurrent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadConfigurationFromRegistry@PackageCatalogFaultInjection@ApplicationModel@Common@@AEAAJXZ
    long ReadConfigurationFromRegistry();
};
} // namespace Common::ApplicationModel
