#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z
    long Initialize(HSTRING__* const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1String@Internal@Windows@@QEAA@XZ
    ~String();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z
    long _InitializeHelper(unsigned short const *);
};
} // namespace Windows::Internal
