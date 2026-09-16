#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 21 member(s).
class PackageInstallingEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageInstallingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageInstallingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageInstallingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageInstallingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageInstallingEventArgsServer@@QEAA@XZ
    PackageInstallingEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageInstallingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageInstallingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivityId@PackageInstallingEventArgsServer@@UEAAJPEAU_GUID@@@Z
    virtual long get_ActivityId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@PackageInstallingEventArgsServer@@UEAAJPEAJ@Z
    virtual long get_ErrorCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComplete@PackageInstallingEventArgsServer@@UEAAJPEAE@Z
    virtual long get_IsComplete(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageInstallingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@PackageInstallingEventArgsServer@@UEAAJPEAN@Z
    virtual long get_Progress(double *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageInstallingEventArgsServer@@UEAA@XZ
    virtual ~PackageInstallingEventArgsServer();
};
