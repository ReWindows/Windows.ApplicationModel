#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 4 member(s).
namespace Windows::ApplicationModel::StartupTaskTraceProvider {
class ActivateForUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateForUser@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateForUser@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAA@XZ
    ~ActivateForUser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateForUser@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateForUser@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::ApplicationModel::StartupTaskTraceProvider
