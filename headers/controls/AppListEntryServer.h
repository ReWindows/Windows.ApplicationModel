#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 60 member(s).
namespace Windows::ApplicationModel::Core {
class AppListEntryServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppListEntryServer@Core@ApplicationModel@Windows@@QEAA@XZ
    AppListEntryServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppListEntryServer@Core@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppListEntryServer@Core@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsync@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchForUserAsync@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAUIUser@System@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchForUserAsync(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppListEntryServer@Core@ApplicationModel@Windows@@QEAAJPEAUIAppDisplayInfo@34@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppInfo@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIAppInfo@34@@Z
    virtual long get_AppInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayInfo@AppListEntryServer@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIAppDisplayInfo@34@@Z
    virtual long get_DisplayInfo(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppListEntryServer@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppListEntryServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchForUserInternalAsync@AppListEntryServer@Core@ApplicationModel@Windows@@AEAAJPEAUIUser@System@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    long LaunchForUserInternalAsync(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@AppListEntryServer@Core@ApplicationModel@Windows@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
};
} // namespace Windows::ApplicationModel::Core
