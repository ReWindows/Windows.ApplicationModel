#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 17 member(s).
class PackageUpdateAvailabilityResultServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageUpdateAvailabilityResultServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageUpdateAvailabilityResultServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageUpdateAvailabilityResultServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageUpdateAvailabilityResultServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageUpdateAvailabilityResultServer@@QEAA@JW4PackageUpdateAvailability@ApplicationModel@Windows@@@Z
    PackageUpdateAvailabilityResultServer(long, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageUpdateAvailabilityResultServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageUpdateAvailabilityResultServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Availability@PackageUpdateAvailabilityResultServer@@UEAAJPEAW4PackageUpdateAvailability@ApplicationModel@Windows@@@Z
    virtual long get_Availability(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@PackageUpdateAvailabilityResultServer@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
};
