#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::StartupTaskTraceProvider {
class GetStateInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GetStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAAXPEBG0I@Z
    void Stop(unsigned short const *, unsigned short const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAA@XZ
    ~GetStateInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetStateInternal@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::ApplicationModel::StartupTaskTraceProvider
