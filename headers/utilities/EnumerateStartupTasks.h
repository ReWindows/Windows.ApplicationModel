#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::StartupTaskTraceProvider {
class EnumerateStartupTasks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@EnumerateStartupTasks@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnumerateStartupTasks@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAA@XZ
    ~EnumerateStartupTasks();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@EnumerateStartupTasks@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@EnumerateStartupTasks@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::ApplicationModel::StartupTaskTraceProvider
