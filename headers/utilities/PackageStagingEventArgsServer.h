#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 36 member(s).
class PackageStagingEventArgsServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIndividualPackageProgressInfo@PackageStagingEventArgsServer@@QEAAJPEBGW4PackageType@Internal@ApplicationModel@Windows@@_K222@Z
    long AddIndividualPackageProgressInfo(unsigned short const *, int, uint64_t, uint64_t, uint64_t, uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageStagingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageStagingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageStagingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageStagingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageStagingEventArgsServer@@QEAA@XZ
    PackageStagingEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageStagingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageStagingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivityId@PackageStagingEventArgsServer@@UEAAJPEAU_GUID@@@Z
    virtual long get_ActivityId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BytesDownloaded@PackageStagingEventArgsServer@@UEAAJPEA_K@Z
    virtual long get_BytesDownloaded(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@PackageStagingEventArgsServer@@UEAAJPEAJ@Z
    virtual long get_ErrorCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IndividualPackageProgresses@PackageStagingEventArgsServer@@UEAAJPEAPEAU?$IVectorView@PEAVPackageDownloadProgress@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_IndividualPackageProgresses(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComplete@PackageStagingEventArgsServer@@UEAAJPEAE@Z
    virtual long get_IsComplete(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageStagingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@PackageStagingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageType@PackageStagingEventArgsServer@@UEAAJPEAW4PackageType@Internal@ApplicationModel@Windows@@@Z
    virtual long get_PackageType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@PackageStagingEventArgsServer@@UEAAJPEAN@Z
    virtual long get_Progress(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StagingPhase@PackageStagingEventArgsServer@@UEAAJPEAW4StagingPhase@Internal@ApplicationModel@Windows@@@Z
    virtual long get_StagingPhase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TotalAutomaticPayloadBytes@PackageStagingEventArgsServer@@UEAAJPEA_K@Z
    virtual long get_TotalAutomaticPayloadBytes(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TotalBytes@PackageStagingEventArgsServer@@UEAAJPEA_K@Z
    virtual long get_TotalBytes(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TotalRequiredPayloadBytes@PackageStagingEventArgsServer@@UEAAJPEA_K@Z
    virtual long get_TotalRequiredPayloadBytes(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageStagingEventArgsServer@@UEAA@XZ
    virtual ~PackageStagingEventArgsServer();
};
