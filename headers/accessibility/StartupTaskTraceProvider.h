#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 3 member(s).
namespace Windows::ApplicationModel {
class StartupTaskTraceProvider {
public:
    class ActivateForUser;
    class EnumerateStartupTasks;
    class GetStateInternal;
    class PutStateInternal;
    class RequestEnableAsync;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageFamilyNameFoundInPolicy_@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAAXPEBG0@Z
    void PackageFamilyNameFoundInPolicy_(unsigned short const *, unsigned short const *);
};
} // namespace Windows::ApplicationModel
