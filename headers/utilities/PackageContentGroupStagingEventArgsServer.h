#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 24 member(s).
class PackageContentGroupStagingEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageContentGroupStagingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageContentGroupStagingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageContentGroupStagingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageContentGroupStagingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageContentGroupStagingEventArgsServer@@QEAA@XZ
    PackageContentGroupStagingEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageContentGroupStagingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageContentGroupStagingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageContentGroupStagingEventArgsServer@@QEAAJPEAUHSTRING__@@W4PackageType@Internal@ApplicationModel@Windows@@0ENEU_GUID@@J@Z
    long RuntimeClassInitialize(HSTRING__*, int, HSTRING__*, unsigned char, double, unsigned char, _GUID, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivityId@PackageContentGroupStagingEventArgsServer@@UEAAJPEAU_GUID@@@Z
    virtual long get_ActivityId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentGroupName@PackageContentGroupStagingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContentGroupName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@PackageContentGroupStagingEventArgsServer@@UEAAJPEAJ@Z
    virtual long get_ErrorCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComplete@PackageContentGroupStagingEventArgsServer@@UEAAJPEAE@Z
    virtual long get_IsComplete(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContentGroupRequired@PackageContentGroupStagingEventArgsServer@@UEAAJPEAE@Z
    virtual long get_IsContentGroupRequired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageContentGroupStagingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@PackageContentGroupStagingEventArgsServer@@UEAAJPEAN@Z
    virtual long get_Progress(double *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageContentGroupStagingEventArgsServer@@UEAA@XZ
    virtual ~PackageContentGroupStagingEventArgsServer();
};
