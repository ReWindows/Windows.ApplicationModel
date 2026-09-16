#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 28 member(s).
namespace Windows::ApplicationModel {
class StartupTaskServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartupTaskServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@StartupTaskServer@ApplicationModel@Windows@@UEAAJXZ
    virtual long Disable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartupTaskServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartupTaskServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartupTaskServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StartupTaskServer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StartupTaskServer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartupTaskServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartupTaskServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestEnableAsync@StartupTaskServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@W4StartupTaskState@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long RequestEnableAsync(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartupTaskServer@ApplicationModel@Windows@@QEAA@XZ
    StartupTaskServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@StartupTaskServer@ApplicationModel@Windows@@UEAAJPEAW4StartupTaskState@23@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskId@StartupTaskServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TaskId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartupTaskServer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~StartupTaskServer();
};
} // namespace Windows::ApplicationModel
