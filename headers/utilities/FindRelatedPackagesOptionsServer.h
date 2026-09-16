#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 32 member(s).
namespace Windows::ApplicationModel {
class FindRelatedPackagesOptionsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeFrameworks@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IncludeFrameworks(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeHostRuntimes@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IncludeHostRuntimes(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeOptionals@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IncludeOptionals(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeResources@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IncludeResources(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Relationship@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJPEAW4PackageRelationship@23@@Z
    virtual long get_Relationship(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IncludeFrameworks@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJE@Z
    virtual long put_IncludeFrameworks(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IncludeHostRuntimes@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJE@Z
    virtual long put_IncludeHostRuntimes(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IncludeOptionals@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJE@Z
    virtual long put_IncludeOptionals(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IncludeResources@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJE@Z
    virtual long put_IncludeResources(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Relationship@FindRelatedPackagesOptionsServer@ApplicationModel@Windows@@UEAAJW4PackageRelationship@23@@Z
    virtual long put_Relationship(int);
};
} // namespace Windows::ApplicationModel
