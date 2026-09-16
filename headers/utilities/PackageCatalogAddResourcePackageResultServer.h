#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 19 member(s).
class PackageCatalogAddResourcePackageResultServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageCatalogAddResourcePackageResultServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageCatalogAddResourcePackageResultServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageCatalogAddResourcePackageResultServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageCatalogAddResourcePackageResultServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageCatalogAddResourcePackageResultServer@@QEAA@PEAUIPackage@ApplicationModel@Windows@@PEAEJ@Z
    PackageCatalogAddResourcePackageResultServer(WindissectOpaque *, unsigned char *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageCatalogAddResourcePackageResultServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageCatalogAddResourcePackageResultServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@PackageCatalogAddResourcePackageResultServer@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComplete@PackageCatalogAddResourcePackageResultServer@@UEAAJPEAE@Z
    virtual long get_IsComplete(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageCatalogAddResourcePackageResultServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageCatalogAddResourcePackageResultServer@@UEAA@XZ
    virtual ~PackageCatalogAddResourcePackageResultServer();
};
