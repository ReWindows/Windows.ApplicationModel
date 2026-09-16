#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 18 member(s).
class PackageCatalogRemoveResourcePackagesResultServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageCatalogRemoveResourcePackagesResultServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageCatalogRemoveResourcePackagesResultServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageCatalogRemoveResourcePackagesResultServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageCatalogRemoveResourcePackagesResultServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageCatalogRemoveResourcePackagesResultServer@@QEAA@JPEAU?$IVectorView@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    PackageCatalogRemoveResourcePackagesResultServer(long, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageCatalogRemoveResourcePackagesResultServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageCatalogRemoveResourcePackagesResultServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@PackageCatalogRemoveResourcePackagesResultServer@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagesRemoved@PackageCatalogRemoveResourcePackagesResultServer@@UEAAJPEAPEAU?$IVectorView@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_PackagesRemoved(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageCatalogRemoveResourcePackagesResultServer@@UEAA@XZ
    virtual ~PackageCatalogRemoveResourcePackagesResultServer();
};
