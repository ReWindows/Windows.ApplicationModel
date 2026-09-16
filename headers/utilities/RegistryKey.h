#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 4 member(s).
namespace Common {
class RegistryKey {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z
    long GetUInt32Value(unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt64Value@RegistryKey@Common@@QEAAJPEBGPEA_K@Z
    long GetUInt64Value(unsigned short const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z
    long Open(HKEY__* const, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z
    long OpenSubKey(unsigned short const *, unsigned long, WindissectOpaque &);
};
} // namespace Common
