#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 7 member(s).
namespace Common {
class StringBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@StringBuffer@Common@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCapacity@StringBuffer@Common@@QEAAJK@Z
    long SetCapacity(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@StringBuffer@Common@@QEAAJK@Z
    long SetLength(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StringBuffer@Common@@QEAAJPEBGK@Z
    long SetValue(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z
    long SetValueFromString(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StringBuffer@Common@@QEAA@XZ
    ~StringBuffer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapacityFromLength@StringBuffer@Common@@AEAAKK@Z
    unsigned long GetCapacityFromLength(unsigned long);
};
} // namespace Common
