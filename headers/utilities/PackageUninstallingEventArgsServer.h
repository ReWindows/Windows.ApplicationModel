#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 21 member(s).
class PackageUninstallingEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageUninstallingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageUninstallingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageUninstallingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageUninstallingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageUninstallingEventArgsServer@@QEAA@XZ
    PackageUninstallingEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageUninstallingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageUninstallingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivityId@PackageUninstallingEventArgsServer@@UEAAJPEAU_GUID@@@Z
    virtual long get_ActivityId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@PackageUninstallingEventArgsServer@@UEAAJPEAJ@Z
    virtual long get_ErrorCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComplete@PackageUninstallingEventArgsServer@@UEAAJPEAE@Z
    virtual long get_IsComplete(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageUninstallingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@PackageUninstallingEventArgsServer@@UEAAJPEAN@Z
    virtual long get_Progress(double *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUninstallingEventArgsServer@@UEAA@XZ
    virtual ~PackageUninstallingEventArgsServer();
};
