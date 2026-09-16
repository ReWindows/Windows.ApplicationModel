#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 26 member(s).
namespace Windows::ApplicationModel {
class StartupTaskInternalStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabledUserStartupTasksAsync@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVStartupTaskInternal@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetEnabledUserStartupTasksAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabledUserStartupTasksByPackageFullnameAsync@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVStartupTaskInternal@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetEnabledUserStartupTasksByPackageFullnameAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabledUserStartupTasksForUserAsync@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAUIUser@System@3@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVStartupTaskInternal@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetEnabledUserStartupTasksForUserAsync(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserStartupTaskByPackageFullnameAndTaskIdAsync@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAVStartupTaskInternal@Internal@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long GetUserStartupTaskByPackageFullnameAndTaskIdAsync(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserStartupTaskByPackageFullnameAndTaskIdForUserAsync@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAUIUser@System@3@PEAUHSTRING__@@1PEAPEAU?$IAsyncOperation@PEAVStartupTaskInternal@Internal@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long GetUserStartupTaskByPackageFullnameAndTaskIdForUserAsync(::Windows::System::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserStartupTasksAsync@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVStartupTaskInternal@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetUserStartupTasksAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserStartupTasksByPackageFullnameAsync@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVStartupTaskInternal@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetUserStartupTasksByPackageFullnameAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserStartupTasksForUserAsync@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJPEAUIUser@System@3@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVStartupTaskInternal@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetUserStartupTasksForUserAsync(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartupTaskInternalStatics@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartupTaskInternalStatics@ApplicationModel@Windows@@UEAA@XZ
    virtual ~StartupTaskInternalStatics();
};
} // namespace Windows::ApplicationModel
