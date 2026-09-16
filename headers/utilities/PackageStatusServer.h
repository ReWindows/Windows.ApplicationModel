#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 35 member(s).
namespace Windows::ApplicationModel {
class PackageStatusServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageStatusServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageStatusServer@ApplicationModel@Windows@@UEAAJI@Z
    virtual long Initialize(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageStatusServer@ApplicationModel@Windows@@QEAA@XZ
    PackageStatusServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageStatusServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageStatusServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyIsOK@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long VerifyIsOK(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataOffline@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_DataOffline(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DependencyIssue@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_DependencyIssue(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeploymentInProgress@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_DeploymentInProgress(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Disabled@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_Disabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPartiallyStaged@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsPartiallyStaged(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LicenseIssue@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_LicenseIssue(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Modified@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_Modified(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NeedsRemediation@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_NeedsRemediation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotAvailable@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_NotAvailable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageOffline@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_PackageOffline(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Servicing@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_Servicing(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tampered@PackageStatusServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_Tampered(unsigned char *);
};
} // namespace Windows::ApplicationModel
