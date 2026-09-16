#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 6 member(s).
namespace AppModelWinRtProvider {
class TryUnlockLimitedAccessFeature {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TryUnlockLimitedAccessFeature@AppModelWinRtProvider@@QEAAXPEBG00@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TryUnlockLimitedAccessFeature@AppModelWinRtProvider@@QEAA@XZ
    ~TryUnlockLimitedAccessFeature();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TryUnlockLimitedAccessFeature@AppModelWinRtProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TryUnlockLimitedAccessFeature@AppModelWinRtProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppModelWinRtProvider
