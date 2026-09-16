#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 4 member(s).
namespace Windows::ApplicationModel::StartupTaskTraceProvider {
class RequestEnableAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RequestEnableAsync@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RequestEnableAsync@StartupTaskTraceProvider@ApplicationModel@Windows@@QEAA@XZ
    ~RequestEnableAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RequestEnableAsync@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RequestEnableAsync@StartupTaskTraceProvider@ApplicationModel@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::ApplicationModel::StartupTaskTraceProvider
