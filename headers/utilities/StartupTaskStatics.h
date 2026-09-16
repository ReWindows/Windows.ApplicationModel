#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 20 member(s).
namespace Windows::ApplicationModel {
class StartupTaskStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartupTaskStatics@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsync@StartupTaskStatics@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStartupTask@ApplicationModel@Windows@@@Foundation@3@@Z
    virtual long GetAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentPackageAsync@StartupTaskStatics@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVStartupTask@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetForCurrentPackageAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartupTaskStatics@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartupTaskStatics@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartupTaskStatics@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartupTaskStatics@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartupTaskStatics@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartupTaskStatics@ApplicationModel@Windows@@UEAA@XZ
    virtual ~StartupTaskStatics();
};
} // namespace Windows::ApplicationModel
