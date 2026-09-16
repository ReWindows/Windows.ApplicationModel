#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 22 member(s).
namespace Windows::ApplicationModel::Internal {
class PackageDownloadProgressServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@QEAA@XZ
    PackageDownloadProgressServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutomaticPayloadBytes@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEA_K@Z
    virtual long get_AutomaticPayloadBytes(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BytesDownloaded@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEA_K@Z
    virtual long get_BytesDownloaded(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageType@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEAW4PackageType@234@@Z
    virtual long get_PackageType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequiredPayloadBytes@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEA_K@Z
    virtual long get_RequiredPayloadBytes(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TotalBytes@PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAAJPEA_K@Z
    virtual long get_TotalBytes(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageDownloadProgressServer@Internal@ApplicationModel@Windows@@UEAA@XZ
    virtual ~PackageDownloadProgressServer();
};
} // namespace Windows::ApplicationModel::Internal
