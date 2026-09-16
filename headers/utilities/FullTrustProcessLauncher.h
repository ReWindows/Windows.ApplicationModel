#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 37 member(s).
namespace Windows::ApplicationModel {
class FullTrustProcessLauncher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@FullTrustProcessLauncher@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@FullTrustProcessLauncher@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFullTrustProcessForAppAsync@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long LaunchFullTrustProcessForAppAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFullTrustProcessForAppWithArgumentsAsync@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAVFullTrustProcessLaunchResult@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long LaunchFullTrustProcessForAppWithArgumentsAsync(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFullTrustProcessForAppWithParametersAsync@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long LaunchFullTrustProcessForAppWithParametersAsync(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFullTrustProcessForCurrentAppAsync@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long LaunchFullTrustProcessForCurrentAppAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFullTrustProcessForCurrentAppWithArgumentsAsync@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVFullTrustProcessLaunchResult@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long LaunchFullTrustProcessForCurrentAppWithArgumentsAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFullTrustProcessForCurrentAppWithParametersAsync@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long LaunchFullTrustProcessForCurrentAppWithParametersAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FullTrustProcessLauncher@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHstringArgument@FullTrustProcessLauncher@ApplicationModel@Windows@@AEAAJAEAPEAUHSTRING__@@PEAU4@@Z
    long EnsureHstringArgument(HSTRING__* &, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFullTrustProcessForAppAsyncWorker@FullTrustProcessLauncher@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@0PEAPEAUIAsyncAction@Foundation@3@@Z
    long LaunchFullTrustProcessForAppAsyncWorker(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFullTrustProcessForAppAsyncWorkerWithDynamicArgs@FullTrustProcessLauncher@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAVFullTrustProcessLaunchResult@ApplicationModel@Windows@@@Foundation@3@@Z
    long LaunchFullTrustProcessForAppAsyncWorkerWithDynamicArgs(HSTRING__*, HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::ApplicationModel
