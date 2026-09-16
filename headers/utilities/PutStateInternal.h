#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 4 member(s).
namespace Windows::ApplicationModel::StartupTaskTraceProvider {
class PutStateInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PutStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAAXKPEBG0_N@Z
    void StartActivity(unsigned long, unsigned short const *, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PutStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAA@XZ
    ~PutStateInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PutStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PutStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::ApplicationModel::StartupTaskTraceProvider
