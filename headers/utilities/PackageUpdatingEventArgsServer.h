#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 22 member(s).
class PackageUpdatingEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageUpdatingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageUpdatingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageUpdatingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageUpdatingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageUpdatingEventArgsServer@@QEAA@XZ
    PackageUpdatingEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageUpdatingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageUpdatingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivityId@PackageUpdatingEventArgsServer@@UEAAJPEAU_GUID@@@Z
    virtual long get_ActivityId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@PackageUpdatingEventArgsServer@@UEAAJPEAJ@Z
    virtual long get_ErrorCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComplete@PackageUpdatingEventArgsServer@@UEAAJPEAE@Z
    virtual long get_IsComplete(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@PackageUpdatingEventArgsServer@@UEAAJPEAN@Z
    virtual long get_Progress(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePackage@PackageUpdatingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_SourcePackage(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetPackage@PackageUpdatingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_TargetPackage(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUpdatingEventArgsServer@@UEAA@XZ
    virtual ~PackageUpdatingEventArgsServer();
};
