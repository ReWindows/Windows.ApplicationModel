#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 18 member(s).
class PackageCatalogAddOptionalPackageResultServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageCatalogAddOptionalPackageResultServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageCatalogAddOptionalPackageResultServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageCatalogAddOptionalPackageResultServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageCatalogAddOptionalPackageResultServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageCatalogAddOptionalPackageResultServer@@QEAA@PEAUIPackage@ApplicationModel@Windows@@J@Z
    PackageCatalogAddOptionalPackageResultServer(WindissectOpaque *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageCatalogAddOptionalPackageResultServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageCatalogAddOptionalPackageResultServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@PackageCatalogAddOptionalPackageResultServer@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageCatalogAddOptionalPackageResultServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageCatalogAddOptionalPackageResultServer@@UEAA@XZ
    virtual ~PackageCatalogAddOptionalPackageResultServer();
};
