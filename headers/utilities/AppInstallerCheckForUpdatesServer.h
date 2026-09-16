#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 17 member(s).
namespace Windows::ApplicationModel::Internal {
class AppInstallerCheckForUpdatesServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppInstallerCheckForUpdatesAsync@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVPackageUpdateAvailabilityResult@ApplicationModel@Windows@@@Foundation@4@@Z
    virtual long AppInstallerCheckForUpdatesAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppInstallerCheckForUpdatesServer@Internal@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::ApplicationModel::Internal
