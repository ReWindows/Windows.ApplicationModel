#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 153 member(s).
namespace Windows::ApplicationModel {
class PackageServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUpdateAvailabilityAsync@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVPackageUpdateAvailabilityResult@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long CheckUpdateAvailabilityAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRelatedPackages@PackageServer@ApplicationModel@Windows@@UEAAJPEAUIFindRelatedPackagesOptions@23@PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@3@@Z
    virtual long FindRelatedPackages(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInstallerInfo@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIAppInstallerInfo@23@@Z
    virtual long GetAppInstallerInfo(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppListEntries@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@3@@Z
    virtual long GetAppListEntries(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppListEntriesAsync@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetAppListEntriesAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentGroupAsync@PackageServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVPackageContentGroup@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long GetContentGroupAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentGroupsAsync@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAVPackageContentGroup@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetContentGroupsAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoAsRandomAccessStreamReference@PackageServer@ApplicationModel@Windows@@UEAAJUSize@Foundation@3@PEAPEAUIRandomAccessStreamReference@Streams@Storage@3@@Z
    virtual long GetLogoAsRandomAccessStreamReference(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailToken@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetThumbnailToken(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageServer@ApplicationModel@Windows@@UEAAJIPEAUHSTRING__@@UPackageVersion@23@W4ProcessorArchitecture@System@3@000000W4PackageType@Internal@23@W4PackageFlags@923@PEAU_PACKAGE_RESOURCES_CONTEXT_REFERENCE@@W4PackageSignatureKind@23@_N@Z
    virtual long Initialize(unsigned int, HSTRING__*, WindissectOpaque, int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, int, _PACKAGE_RESOURCES_CONTEXT_REFERENCE *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageServer@ApplicationModel@Windows@@UEAAJIPEAUHSTRING__@@UPackageVersion@23@W4ProcessorArchitecture@System@3@000000_NW4PackageSignatureKind@23@3@Z
    virtual long Initialize(unsigned int, HSTRING__*, WindissectOpaque, int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, bool, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageServer@ApplicationModel@Windows@@UEAAJIPEAUIPackage@StateRepository@Internal@3@PEAU_PACKAGE_RESOURCES_CONTEXT_REFERENCE@@@Z
    virtual long Initialize(unsigned int, ::Windows::Internal::StateRepository::IPackage *, _PACKAGE_RESOURCES_CONTEXT_REFERENCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageServer@ApplicationModel@Windows@@UEAAJIPEBGAEBUPACKAGE_VERSION@@W4ProcessorArchitecture@System@3@000000IPEAU_PACKAGE_RESOURCES_CONTEXT_REFERENCE@@W4PackageSignatureKind@23@@Z
    virtual long Initialize(unsigned int, unsigned short const *, PACKAGE_VERSION const &, int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int, _PACKAGE_RESOURCES_CONTEXT_REFERENCE *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageServer@ApplicationModel@Windows@@UEAAJIPEAUHSTRING__@@UPackageVersion@23@W4ProcessorArchitecture@System@3@0000000W4PackageType@Internal@23@W4PackageFlags@923@PEAU_PACKAGE_RESOURCES_CONTEXT_REFERENCE@@W4PackageSignatureKind@23@_N@Z
    virtual long Initialize(unsigned int, HSTRING__*, WindissectOpaque, int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, int, _PACKAGE_RESOURCES_CONTEXT_REFERENCE *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageServer@ApplicationModel@Windows@@UEAAJIPEBGAEBUPACKAGE_VERSION@@W4ProcessorArchitecture@System@3@000000_NW4PackageSignatureKind@23@3@Z
    virtual long Initialize(unsigned int, unsigned short const *, PACKAGE_VERSION const &, int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, bool, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithCurrentPackageInfo@PackageServer@ApplicationModel@Windows@@UEAAJXZ
    virtual long InitializeWithCurrentPackageInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageServer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageServer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Launch@PackageServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Launch(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageServer@ApplicationModel@Windows@@QEAA@XZ
    PackageServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageServer@ApplicationModel@Windows@@QEAAJAEBUPACKAGE_INFO@@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(PACKAGE_INFO const &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInUseAsync@PackageServer@ApplicationModel@Windows@@UEAAJEPEAPEAU?$IAsyncOperation@_N@Foundation@3@@Z
    virtual long SetInUseAsync(unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StageContentGroupsAsync@PackageServer@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAVPackageContentGroup@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@63@@Z
    virtual long StageContentGroupsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StageContentGroupsWithPriorityAsync@PackageServer@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@3@EPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAVPackageContentGroup@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@63@@Z
    virtual long StageContentGroupsWithPriorityAsync(WindissectOpaque *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyContentIntegrityAsync@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@3@@Z
    virtual long VerifyContentIntegrityAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Author@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Author(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dependencies@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@3@@Z
    virtual long get_Dependencies(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveExternalLocation@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@3@@Z
    virtual long get_EffectiveExternalLocation(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveExternalPath@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EffectiveExternalPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveLocation@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@3@@Z
    virtual long get_EffectiveLocation(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectivePath@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EffectivePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIPackageId@23@@Z
    virtual long get_Id(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallDate@PackageServer@ApplicationModel@Windows@@UEAAJPEAUDateTime@Foundation@3@@Z
    virtual long get_InstallDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstalledDate@PackageServer@ApplicationModel@Windows@@UEAAJPEAUDateTime@Foundation@3@@Z
    virtual long get_InstalledDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstalledLocation@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@3@@Z
    virtual long get_InstalledLocation(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstalledPath@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_InstalledPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBundle@PackageServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsBundle(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDevelopmentMode@PackageServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsDevelopmentMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFramework@PackageServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsFramework(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOptional@PackageServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsOptional(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProvisioned@PackageServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsProvisioned(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResourcePackage@PackageServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsResourcePackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStub@PackageServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsStub(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Logo@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@3@@Z
    virtual long get_Logo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MachineExternalLocation@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@3@@Z
    virtual long get_MachineExternalLocation(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MachineExternalPath@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MachineExternalPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MutableLocation@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@3@@Z
    virtual long get_MutableLocation(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MutablePath@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MutablePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProductId@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProductId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublisherDisplayName@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublisherDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SignatureKind@PackageServer@ApplicationModel@Windows@@UEAAJPEAW4PackageSignatureKind@23@@Z
    virtual long get_SignatureKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceUriSchemeName@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SourceUriSchemeName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIPackageStatus@23@@Z
    virtual long get_Status(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserExternalLocation@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@3@@Z
    virtual long get_UserExternalLocation(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserExternalPath@PackageServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UserExternalPath(HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorageFolderForInstalledLocation@PackageServer@ApplicationModel@Windows@@AEAAJIPEBG0_NPEAPEAUIStorageFolder@Storage@3@@Z
    long CreateStorageFolderForInstalledLocation(unsigned int, unsigned short const *, unsigned short const *, bool, ::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorageFolderForPath@PackageServer@ApplicationModel@Windows@@AEAAJPEBGPEAPEAUIStorageFolder@Storage@3@@Z
    long CreateStorageFolderForPath(unsigned short const *, ::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLegacyLocationIndex@PackageServer@ApplicationModel@Windows@@AEAAJPEBGPEAI@Z
    long GetLegacyLocationIndex(unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtString@PackageServer@ApplicationModel@Windows@@AEAAJIPEAPEAUHSTRING__@@@Z
    long GetMrtString(unsigned int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtUri@PackageServer@ApplicationModel@Windows@@AEAAJIPEAPEAUIUriRuntimeClass@Foundation@3@@Z
    long GetMrtUri(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageLocation@PackageServer@ApplicationModel@Windows@@AEAAJW4PackagePathType@@PEAPEAUIStorageFolder@Storage@3@@Z
    long GetPackageLocation(int, ::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagePath@PackageServer@ApplicationModel@Windows@@AEAAJW4PackagePathType@@PEAPEAUHSTRING__@@@Z
    long GetPackagePath(int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageResourceResolver@PackageServer@ApplicationModel@Windows@@AEAAJPEAPEAUIPackageResourceResolver@StateRepository@Internal@3@@Z
    long GetPackageResourceResolver(::Windows::Internal::StateRepository::IPackageResourceResolver * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSignatureKindFromFlags@PackageServer@ApplicationModel@Windows@@CA?AW4PackageSignatureKind@23@I@Z
    static int GetSignatureKindFromFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSrPackage@PackageServer@ApplicationModel@Windows@@AEAAJPEAPEAUIPackage@StateRepository@Internal@3@@Z
    long GetSrPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateDependencies@PackageServer@ApplicationModel@Windows@@AEAAJXZ
    long PopulateDependencies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateDependenciesFromCurrentPackageGraph@PackageServer@ApplicationModel@Windows@@AEAAJXZ
    long PopulateDependenciesFromCurrentPackageGraph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveMrtString@PackageServer@ApplicationModel@Windows@@AEAAJIPEAPEAUHSTRING__@@@Z
    long RetrieveMrtString(unsigned int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFlags@PackageServer@ApplicationModel@Windows@@AEAAJI@Z
    long SetPackageFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageInUse@PackageServer@ApplicationModel@Windows@@AEAAJPEA_N@Z
    long SetPackageInUse(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageType@PackageServer@ApplicationModel@Windows@@AEAAJI@Z
    long SetPackageType(unsigned int);
};
} // namespace Windows::ApplicationModel
