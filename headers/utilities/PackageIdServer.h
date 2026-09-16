#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 24 member(s).
namespace Windows::ApplicationModel {
class PackageIdServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageIdServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageIdServer@ApplicationModel@Windows@@UEAAJPEBGAEBUPACKAGE_VERSION@@W4ProcessorArchitecture@System@3@00000@Z
    virtual long Initialize(unsigned short const *, PACKAGE_VERSION const &, int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@UPackageVersion@23@W4ProcessorArchitecture@System@3@00000@Z
    virtual long Initialize(HSTRING__*, WindissectOpaque, int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageIdServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageIdServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Architecture@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAW4ProcessorArchitecture@System@3@@Z
    virtual long get_Architecture(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FamilyName@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullName@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Publisher@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Publisher(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublisherId@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublisherId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceId@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResourceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@PackageIdServer@ApplicationModel@Windows@@UEAAJPEAUPackageVersion@23@@Z
    virtual long get_Version(WindissectOpaque *);
};
} // namespace Windows::ApplicationModel
