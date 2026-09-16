#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 3 member(s).
namespace Common {
class SidHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSidToString@SidHelper@Common@@SAJQEAXPEAVStringBuffer@2@@Z
    static long ConvertSidToString(void * const, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUserSid@SidHelper@Common@@SAJPEAPEAX@Z
    static long GetCurrentUserSid(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSidFromToken@SidHelper@Common@@SAJPEAXPEAPEAX@Z
    static long GetUserSidFromToken(void *, void * *);
};
} // namespace Common
