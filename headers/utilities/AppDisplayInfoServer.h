#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 23 member(s).
namespace Windows::ApplicationModel {
class AppDisplayInfoServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogo@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJUSize@Foundation@3@PEAPEAUIRandomAccessStreamReference@Streams@Storage@3@@Z
    virtual long GetLogo(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJPEAUIUser@StateRepository@Internal@3@_J@Z
    virtual long Initialize(::Windows::Internal::StateRepository::IUser *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAUIRandomAccessStreamReference@Streams@Storage@3@@Z
    virtual long Initialize(HSTRING__*, HSTRING__*, ::Windows::Storage::Streams::IRandomAccessStreamReference *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJPEAUIApplication@StateRepository@Internal@3@@Z
    virtual long Initialize(::Windows::Internal::StateRepository::IApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppDisplayInfoServer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppDisplayInfoServer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@AppDisplayInfoServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppDisplayInfoServer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppDisplayInfoServer();
};
} // namespace Windows::ApplicationModel
