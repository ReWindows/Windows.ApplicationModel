#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 39 member(s).
namespace Windows::ApplicationModel {
class AppInstallerInfoServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInstallerInfoServer@ApplicationModel@Windows@@QEAA@XZ
    AppInstallerInfoServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAUIAppInstaller@StateRepository@Internal@3@@Z
    virtual long Initialize(::Windows::Internal::StateRepository::IAppInstaller *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutomaticBackgroundTask@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_AutomaticBackgroundTask(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DependencyPackageUris@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVUri@Foundation@Windows@@@Collections@Foundation@3@@Z
    virtual long get_DependencyPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceUpdateFromAnyVersion@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_ForceUpdateFromAnyVersion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoursBetweenUpdateChecks@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_HoursBetweenUpdateChecks(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAutoRepairEnabled@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsAutoRepairEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastChecked@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAUDateTime@Foundation@3@@Z
    virtual long get_LastChecked(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OnLaunch@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_OnLaunch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OptionalPackageUris@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVUri@Foundation@Windows@@@Collections@Foundation@3@@Z
    virtual long get_OptionalPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PausedUntil@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@3@@Z
    virtual long get_PausedUntil(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PolicySource@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAW4AppInstallerPolicySource@23@@Z
    virtual long get_PolicySource(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RepairUris@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVUri@Foundation@Windows@@@Collections@Foundation@3@@Z
    virtual long get_RepairUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowPrompt@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_ShowPrompt(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateBlocksActivation@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_UpdateBlocksActivation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateUris@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVUri@Foundation@Windows@@@Collections@Foundation@3@@Z
    virtual long get_UpdateUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@3@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@AppInstallerInfoServer@ApplicationModel@Windows@@UEAAJPEAUPackageVersion@23@@Z
    virtual long get_Version(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallerInfoServer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppInstallerInfoServer();
};
} // namespace Windows::ApplicationModel
