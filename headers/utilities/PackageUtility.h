#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
class PackageUtility {
public:
    class ItemProgressHandler;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AwaitAppInstall@PackageUtility@@YAJPEAUIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z
    long AwaitAppInstall(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckComCallerHasCapability@PackageUtility@@YAJIPEAPEBGPEA_N@Z
    long CheckComCallerHasCapability(unsigned int, unsigned short const * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePackage@PackageUtility@@YAJPEBGW4PackageType@Internal@ApplicationModel@Windows@@HPEAPEAUIPackage@45@@Z
    long CreatePackage(unsigned short const *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePackageByFamilyName@PackageUtility@@YAJPEBGW4PackageType@Internal@ApplicationModel@Windows@@HPEAPEAUIPackage@45@@Z
    long CreatePackageByFamilyName(unsigned short const *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePackageByFamilyNameAndResourceId@PackageUtility@@YAJPEBG0W4PackageType@Internal@ApplicationModel@Windows@@HPEAPEAUIPackage@45@@Z
    long CreatePackageByFamilyNameAndResourceId(unsigned short const *, unsigned short const *, int, int, WindissectOpaque * *);
};
