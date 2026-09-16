#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 61 member(s).
namespace Windows::ApplicationModel::Core {
class AppListEntryClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppListEntryClientProxy@Core@ApplicationModel@Windows@@QEAA@XZ
    AppListEntryClientProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsync@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchForUserAsync@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAUIUser@System@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchForUserAsync(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppInfo@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIAppInfo@34@@Z
    virtual long get_AppInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayInfo@AppListEntryClientProxy@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIAppDisplayInfo@34@@Z
    virtual long get_DisplayInfo(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@AppListEntryClientProxy@Core@ApplicationModel@Windows@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
};
} // namespace Windows::ApplicationModel::Core
