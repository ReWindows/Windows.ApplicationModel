#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 21 member(s).
class PackageContentGroupServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageContentGroupServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageContentGroupServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageContentGroupServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageContentGroupServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageContentGroupServer@@QEAA@XZ
    PackageContentGroupServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageContentGroupServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageContentGroupServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageContentGroupServer@@QEAAJPEAUIPackage@ApplicationModel@Windows@@PEAUIContentGroup@StateRepository@Internal@4@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::Internal::StateRepository::IContentGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRequired@PackageContentGroupServer@@UEAAJPEAE@Z
    virtual long get_IsRequired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PackageContentGroupServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageContentGroupServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@PackageContentGroupServer@@UEAAJPEAW4PackageContentGroupState@ApplicationModel@Windows@@@Z
    virtual long get_State(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageContentGroupServer@@UEAA@XZ
    virtual ~PackageContentGroupServer();
};
