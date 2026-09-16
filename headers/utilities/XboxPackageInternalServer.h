#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 30 member(s).
namespace Windows::ApplicationModel::Internal {
class XboxPackageInternalServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeByPackageFullName@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long InitializeByPackageFullName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BuildVersion@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEA_K@Z
    virtual long get_BuildVersion(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentId@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ContentId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceId@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_DeviceId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DictionaryAsPropertySet@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_DictionaryAsPropertySet(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageSize@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEA_K@Z
    virtual long get_PackageSize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryServiceConfigId@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_PrimaryServiceConfigId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProductId@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ProductId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleId@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_TitleId(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XboxPackageInternalServer@Internal@ApplicationModel@Windows@@UEAA@XZ
    virtual ~XboxPackageInternalServer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSrXboxPackageByPackageFullName@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIXboxPackage@StateRepository@24@@Z
    long GetSrXboxPackageByPackageFullName(HSTRING__*, ::Windows::Internal::StateRepository::IXboxPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBySRXboxPackage@XboxPackageInternalServer@Internal@ApplicationModel@Windows@@AEAAJPEAUIXboxPackage@StateRepository@24@@Z
    long InitializeBySRXboxPackage(::Windows::Internal::StateRepository::IXboxPackage *);
};
} // namespace Windows::ApplicationModel::Internal
