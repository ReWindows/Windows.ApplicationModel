#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 6 member(s).
namespace AppModelWinRtProvider {
class CheckFeatureUnlockForIdentity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CheckFeatureUnlockForIdentity@AppModelWinRtProvider@@QEAAXPEBG000@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CheckFeatureUnlockForIdentity@AppModelWinRtProvider@@QEAA@XZ
    ~CheckFeatureUnlockForIdentity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CheckFeatureUnlockForIdentity@AppModelWinRtProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CheckFeatureUnlockForIdentity@AppModelWinRtProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppModelWinRtProvider
