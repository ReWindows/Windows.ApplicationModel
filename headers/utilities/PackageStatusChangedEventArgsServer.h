#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 18 member(s).
class PackageStatusChangedEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageStatusChangedEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageStatusChangedEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageStatusChangedEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageStatusChangedEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageStatusChangedEventArgsServer@@QEAA@XZ
    PackageStatusChangedEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageStatusChangedEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageStatusChangedEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageStatusChangedEventArgsServer@@QEAAJPEAUHSTRING__@@W4PackageType@Internal@ApplicationModel@Windows@@@Z
    long RuntimeClassInitialize(HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageStatusChangedEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageStatusChangedEventArgsServer@@UEAA@XZ
    virtual ~PackageStatusChangedEventArgsServer();
};
