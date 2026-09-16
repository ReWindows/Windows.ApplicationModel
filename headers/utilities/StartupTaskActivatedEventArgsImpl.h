#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 49 member(s).
class StartupTaskActivatedEventArgsImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartupTaskActivatedEventArgsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartupTaskActivatedEventArgsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@StartupTaskActivatedEventArgsImpl@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartupTaskActivatedEventArgsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartupTaskActivatedEventArgsImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartupTaskActivatedEventArgsImpl@@QEAA@XZ
    StartupTaskActivatedEventArgsImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskId@StartupTaskActivatedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TaskId(HSTRING__* *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartupTaskActivatedEventArgsImpl@@EEAA@XZ
    virtual ~StartupTaskActivatedEventArgsImpl();
};
