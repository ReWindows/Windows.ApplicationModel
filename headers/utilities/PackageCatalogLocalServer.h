#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 52 member(s).
class PackageCatalogLocalServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOptionalPackageAsync@PackageCatalogLocalServer@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVPackageCatalogAddOptionalPackageResult@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long AddOptionalPackageAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageCatalogLocalServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourcePackageAsync@PackageCatalogLocalServer@@UEAAJPEAUHSTRING__@@0W4AddResourcePackageOptions@ApplicationModel@Windows@@PEAPEAU?$IAsyncOperationWithProgress@PEAVPackageCatalogAddResourcePackageResult@ApplicationModel@Windows@@UPackageInstallProgress@23@@Foundation@5@@Z
    virtual long AddResourcePackageAsync(HSTRING__*, HSTRING__*, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageCatalogLocalServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageCatalogLocalServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageCatalogLocalServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageCatalogLocalServer@@QEAA@XZ
    PackageCatalogLocalServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageCatalogLocalServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageCatalogLocalServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOptionalPackagesAsync@PackageCatalogLocalServer@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVPackageCatalogRemoveOptionalPackagesResult@ApplicationModel@Windows@@@45@@Z
    virtual long RemoveOptionalPackagesAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveResourcePackagesAsync@PackageCatalogLocalServer@@UEAAJPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVPackageCatalogRemoveResourcePackagesResult@ApplicationModel@Windows@@@45@@Z
    virtual long RemoveResourcePackagesAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageCatalogLocalServer@@QEAAJPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageContentGroupStaging@PackageCatalogLocalServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageContentGroupStagingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageContentGroupStaging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageInstalling@PackageCatalogLocalServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageInstallingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageInstalling(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageStaging@PackageCatalogLocalServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageStagingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageStaging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageStatusChanged@PackageCatalogLocalServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageStatusChangedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageStatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUninstalling@PackageCatalogLocalServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageUninstallingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUninstalling(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUpdating@PackageCatalogLocalServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageUpdatingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUpdating(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageContentGroupStaging@PackageCatalogLocalServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageContentGroupStaging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageInstalling@PackageCatalogLocalServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageInstalling(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageStaging@PackageCatalogLocalServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageStaging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageStatusChanged@PackageCatalogLocalServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageStatusChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUninstalling@PackageCatalogLocalServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUninstalling(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUpdating@PackageCatalogLocalServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUpdating(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageCatalogLocalServer@@UEAA@XZ
    virtual ~PackageCatalogLocalServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRefreshPackageGraph@PackageCatalogLocalServer@@CAJPEAUIPackageInstallingEventArgs@ApplicationModel@Windows@@@Z
    static long TryRefreshPackageGraph(WindissectOpaque *);
};
