#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 22 member(s).
class PackageContentGroupStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageContentGroupStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageContentGroupStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageContentGroupStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageContentGroupStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@PackageContentGroupStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@PackageContentGroupStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageContentGroupStatics@@QEAA@XZ
    PackageContentGroupStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageContentGroupStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageContentGroupStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequiredGroupName@PackageContentGroupStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RequiredGroupName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageContentGroupStatics@@UEAA@XZ
    virtual ~PackageContentGroupStatics();
};
