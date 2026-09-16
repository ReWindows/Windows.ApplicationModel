#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 39 member(s).
namespace Windows::ApplicationModel {
class StartupTaskInternalServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StartupTaskInternalServer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StartupTaskInternalServer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateAsync@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJW4StartupTaskState@23@PEAPEAU?$IAsyncOperation@W4StartupTaskState@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long SetStateAsync(int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartupTaskInternalServer@ApplicationModel@Windows@@QEAA@XZ
    StartupTaskInternalServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsManagedByUser@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsManagedByUser(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastDisabledTime@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEA_J@Z
    virtual long get_LastDisabledTime(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_LogoPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageRelativeApplicationId@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageRelativeApplicationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublisherName@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublisherName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RelativeExecutable@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RelativeExecutable(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAW4StartupTaskState@23@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskId@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TaskId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJPEAW4StartupTaskType@Internal@23@@Z
    virtual long get_Type(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_State@StartupTaskInternalServer@ApplicationModel@Windows@@UEAAJW4StartupTaskState@23@@Z
    virtual long put_State(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartupTaskInternalServer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~StartupTaskInternalServer();
};
} // namespace Windows::ApplicationModel
