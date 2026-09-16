#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel {
class StartupTaskParent {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicyInternal@StartupTaskParent@ApplicationModel@Windows@@QEAAJPEAW4StartupTaskSystemSettings@23@PEAW4StartupTaskAdminSettings@23@@Z
    long GetPolicyInternal(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateInternal@StartupTaskParent@ApplicationModel@Windows@@QEAAJPEAW4StartupTaskState@23@@Z
    long GetStateInternal(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartupTaskParent@ApplicationModel@Windows@@QEAA@XZ
    ~StartupTaskParent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StartupTaskParent@ApplicationModel@Windows@@IEAAJAEBUSTARTUPTASK_INITIALIZE_DATA@23@@Z
    long Initialize(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutStateInternal@StartupTaskParent@ApplicationModel@Windows@@IEAAJW4StartupTaskState@23@_N@Z
    long PutStateInternal(int, bool);
};
} // namespace Windows::ApplicationModel
