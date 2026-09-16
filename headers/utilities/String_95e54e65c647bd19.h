#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 3 member(s).
namespace Common {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveCompare@String@Common@@SAHPEBGK0K@Z
    static int CaseInsensitiveCompare(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveEquals@String@Common@@SAHPEBG0@Z
    static int CaseInsensitiveEquals(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveEquals@String@Common@@SAHPEBGK0K@Z
    static int CaseInsensitiveEquals(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
};
} // namespace Common
