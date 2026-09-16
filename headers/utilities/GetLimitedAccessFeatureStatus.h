#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 6 member(s).
namespace AppModelWinRtProvider {
class GetLimitedAccessFeatureStatus {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetLimitedAccessFeatureStatus@AppModelWinRtProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetLimitedAccessFeatureStatus@AppModelWinRtProvider@@QEAA@XZ
    ~GetLimitedAccessFeatureStatus();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetLimitedAccessFeatureStatus@AppModelWinRtProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetLimitedAccessFeatureStatus@AppModelWinRtProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppModelWinRtProvider
