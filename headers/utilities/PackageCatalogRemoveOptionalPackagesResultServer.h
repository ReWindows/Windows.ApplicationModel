#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 18 member(s).
class PackageCatalogRemoveOptionalPackagesResultServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageCatalogRemoveOptionalPackagesResultServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageCatalogRemoveOptionalPackagesResultServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageCatalogRemoveOptionalPackagesResultServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageCatalogRemoveOptionalPackagesResultServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageCatalogRemoveOptionalPackagesResultServer@@QEAA@JPEAU?$IVectorView@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    PackageCatalogRemoveOptionalPackagesResultServer(long, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageCatalogRemoveOptionalPackagesResultServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageCatalogRemoveOptionalPackagesResultServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@PackageCatalogRemoveOptionalPackagesResultServer@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagesRemoved@PackageCatalogRemoveOptionalPackagesResultServer@@UEAAJPEAPEAU?$IVectorView@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_PackagesRemoved(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageCatalogRemoveOptionalPackagesResultServer@@UEAA@XZ
    virtual ~PackageCatalogRemoveOptionalPackagesResultServer();
};
