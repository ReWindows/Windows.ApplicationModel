#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 44 member(s).
namespace Windows::ApplicationModel {
class AppInfoServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppInfoServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInfoServer@ApplicationModel@Windows@@QEAA@XZ
    AppInfoServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAUIUser@StateRepository@Internal@3@_J@Z
    virtual long Initialize(::Windows::Internal::StateRepository::IUser *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppInfoServer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppInfoServer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppInfoServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppInfoServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayInfo@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUIAppDisplayInfo@23@@Z
    virtual long get_DisplayInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExecutionContext@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAW4AppExecutionContext@23@@Z
    virtual long get_ExecutionContext(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUIPackage@23@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedFileExtensions@AppInfoServer@ApplicationModel@Windows@@UEAAJPEAIPEAPEAPEAUHSTRING__@@@Z
    virtual long get_SupportedFileExtensions(unsigned int *, HSTRING__* * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInfoServer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppInfoServer();
};
} // namespace Windows::ApplicationModel
