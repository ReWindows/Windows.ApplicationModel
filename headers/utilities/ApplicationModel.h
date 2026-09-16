#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 12 member(s).
namespace Windows {
class ApplicationModel {
public:
    class AppDisplayInfoFactoryServer;
    class AppDisplayInfoServer;
    class AppInfoFactoryServer;
    class AppInfoServer;
    class AppInstallerInfoServer;
    class Core;
    class DesignModeFactoryServer;
    class DesignModeServer;
    class FindRelatedPackagesOptionsFactoryServer;
    class FindRelatedPackagesOptionsServer;
    class FullTrustProcessLauncher;
    class PackageFactoryServer;
    class PackageIdServer;
    class PackageServer;
    class PackageStatusServer;
    class StartupTaskActivator;
    class StartupTaskInternalServer;
    class StartupTaskInternalStatics;
    class StartupTaskParent;
    class StartupTaskServer;
    class StartupTaskStatics;
    class StartupTaskTraceProvider;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabledBoolean@ApplicationModel@Windows@@YA_NPEAUIPropertyValue@Foundation@2@@Z
    bool GetEnabledBoolean(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyNameFromAUMID@ApplicationModel@Windows@@YAJPEBGAEAVHString@Wrappers@WRL@Microsoft@@@Z
    long GetPackageFamilyNameFromAUMID(unsigned short const *, ::Microsoft::WRL::Wrappers::HString &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalizeString@ApplicationModel@Windows@@YAJPEBG0AEBVHString@Wrappers@WRL@Microsoft@@AEAV3456@@Z
    long LocalizeString(unsigned short const *, unsigned short const *, ::Microsoft::WRL::Wrappers::HString const &, ::Microsoft::WRL::Wrappers::HString &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCall@ApplicationModel@Windows@@YAJPEAUIUnknown@@@Z
    long ValidateCall(IUnknown *);
};
} // namespace Windows
