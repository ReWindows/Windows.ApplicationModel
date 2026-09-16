#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 1 member(s).
namespace Common {
class Guid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@Guid@Common@@SAJPEBEKPEAU_GUID@@@Z
    static long Decode(unsigned char const *, unsigned long, _GUID *);
};
} // namespace Common
