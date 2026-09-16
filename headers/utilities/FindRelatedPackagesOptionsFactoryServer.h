#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel {
class FindRelatedPackagesOptionsFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@FindRelatedPackagesOptionsFactoryServer@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FindRelatedPackagesOptionsFactoryServer@ApplicationModel@Windows@@UEAAJW4PackageRelationship@23@PEAPEAUIFindRelatedPackagesOptions@23@@Z
    virtual long CreateInstance(int, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindRelatedPackagesOptionsFactoryServer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~FindRelatedPackagesOptionsFactoryServer();
};
} // namespace Windows::ApplicationModel
