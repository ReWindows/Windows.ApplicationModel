#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 65 member(s).
class PackageCatalogServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOptionalPackageAsync@PackageCatalogServer@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVPackageCatalogAddOptionalPackageResult@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long AddOptionalPackageAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageCatalogServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourcePackageAsync@PackageCatalogServer@@UEAAJPEAUHSTRING__@@0W4AddResourcePackageOptions@ApplicationModel@Windows@@PEAPEAU?$IAsyncOperationWithProgress@PEAVPackageCatalogAddResourcePackageResult@ApplicationModel@Windows@@UPackageInstallProgress@23@@Foundation@5@@Z
    virtual long AddResourcePackageAsync(HSTRING__*, HSTRING__*, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageCatalogServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageCatalogServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageCatalogServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageCatalogServer@@QEAA@XZ
    PackageCatalogServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageCatalogServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryKeyChangeCallback@PackageCatalogServer@@UEAAJXZ
    virtual long RegistryKeyChangeCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageCatalogServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOptionalPackagesAsync@PackageCatalogServer@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVPackageCatalogRemoveOptionalPackagesResult@ApplicationModel@Windows@@@45@@Z
    virtual long RemoveOptionalPackagesAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveResourcePackagesAsync@PackageCatalogServer@@UEAAJPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVPackageCatalogRemoveResourcePackagesResult@ApplicationModel@Windows@@@45@@Z
    virtual long RemoveResourcePackagesAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageCatalogServer@@QEAAJPEAUHSTRING__@@HPEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(HSTRING__*, int, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageCatalogServer@@QEAAJPEBU_GUID@@@Z
    long RuntimeClassInitialize(_GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageContentGroupStaging@PackageCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageContentGroupStagingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageContentGroupStaging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageInstalling@PackageCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageInstallingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageInstalling(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageStaging@PackageCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageStagingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageStaging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageStatusChanged@PackageCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageStatusChangedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageStatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUninstalling@PackageCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageUninstallingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUninstalling(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUpdating@PackageCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageUpdatingEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUpdating(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageContentGroupStaging@PackageCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageContentGroupStaging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageInstalling@PackageCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageInstalling(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageStaging@PackageCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageStaging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageStatusChanged@PackageCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageStatusChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUninstalling@PackageCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUninstalling(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUpdating@PackageCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUpdating(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageCatalogServer@@UEAA@XZ
    virtual ~PackageCatalogServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@PackageCatalogServer@@AEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventListenerAdded@PackageCatalogServer@@AEAAJXZ
    long EventListenerAdded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventListenerRemoved@PackageCatalogServer@@AEAAJXZ
    long EventListenerRemoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeLocals@PackageCatalogServer@@AEAAJPEAUHSTRING__@@0@Z
    long InitializeLocals(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessActivityNotificationPayload@PackageCatalogServer@@CAXPEAV1@PEAGI@Z
    static void ProcessActivityNotificationPayload(PackageCatalogServer *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessGeneralNotificationPayload@PackageCatalogServer@@CAXPEAV1@PEAGI@Z
    static void ProcessGeneralNotificationPayload(PackageCatalogServer *, unsigned short *, unsigned int);
};
