#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 6 member(s).
namespace winrt::Windows::ApplicationModel::factory_implementation {
class LimitedAccessFeatures {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFeatureUnlockForIdentity@LimitedAccessFeatures@factory_implementation@ApplicationModel@Windows@winrt@@SAIAEBUhstring@5@000@Z
    static unsigned int CheckFeatureUnlockForIdentity(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAppAccessRequest@LimitedAccessFeatures@factory_implementation@ApplicationModel@Windows@winrt@@SAXAEBUhstring@5@@Z
    static void EnsureAppAccessRequest(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessStatus@LimitedAccessFeatures@factory_implementation@ApplicationModel@Windows@winrt@@SAIAEBUhstring@5@@Z
    static unsigned int GetAccessStatus(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessStatusForProcess@LimitedAccessFeatures@factory_implementation@ApplicationModel@Windows@winrt@@SAIAEBUhstring@5@_K@Z
    static unsigned int GetAccessStatusForProcess(WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAccessRequests@LimitedAccessFeatures@factory_implementation@ApplicationModel@Windows@winrt@@SAXXZ
    static void ResetAccessRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnlockFeature@LimitedAccessFeatures@factory_implementation@ApplicationModel@Windows@winrt@@SA?AULimitedAccessFeatureRequestResult@345@AEBUhstring@5@00@Z
    static WindissectOpaque TryUnlockFeature(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::ApplicationModel::factory_implementation
