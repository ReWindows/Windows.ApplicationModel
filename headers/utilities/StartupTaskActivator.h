#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 27 member(s).
namespace Windows::ApplicationModel {
class StartupTaskActivator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@StartupTaskActivator@ApplicationModel@Windows@@UEAAJPEAUIStartupTaskInternal@Internal@23@PEAK@Z
    virtual long Activate(WindissectOpaque *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateForUser@StartupTaskActivator@ApplicationModel@Windows@@UEAAJPEAUIUser@System@3@PEAUIStartupTaskInternal@Internal@23@PEAK@Z
    virtual long ActivateForUser(::Windows::System::IUser *, WindissectOpaque *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartupTaskActivator@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartupTaskActivator@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartupTaskActivator@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartupTaskActivator@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StartupTaskActivator@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StartupTaskActivator@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartupTaskActivator@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartupTaskActivator@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartupTaskActivator@ApplicationModel@Windows@@QEAA@XZ
    StartupTaskActivator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartupTaskActivator@ApplicationModel@Windows@@UEAA@XZ
    virtual ~StartupTaskActivator();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivator@StartupTaskActivator@ApplicationModel@Windows@@AEAAJPEAPEAUIApplicationActivationStatics@Private@Activation@23@@Z
    long GetActivator(WindissectOpaque * *);
};
} // namespace Windows::ApplicationModel
