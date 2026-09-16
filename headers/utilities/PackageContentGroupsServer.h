#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 19 member(s).
namespace Windows::ApplicationModel::Internal {
class PackageContentGroupsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StageContentGroupsWithPriorityAsync@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@UEAAJPEAUIPackage@34@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@EPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAVPackageContentGroup@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@84@@Z
    virtual long StageContentGroupsWithPriorityAsync(WindissectOpaque *, WindissectOpaque *, unsigned char, WindissectOpaque * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSrPackage@PackageContentGroupsServer@Internal@ApplicationModel@Windows@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEAPEAUIPackage@StateRepository@24@@Z
    long GetSrPackage(::Microsoft::WRL::Wrappers::HString const &, ::Windows::Internal::StateRepository::IPackage * *);
};
} // namespace Windows::ApplicationModel::Internal
