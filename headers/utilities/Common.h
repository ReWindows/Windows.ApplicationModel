#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 7 member(s).
class Common {
public:
    class AutoHandleModule;
    class AutoRtlWriterLock;
    class Guid;
    class RegistryKey;
    class SidHelper;
    class StateSeparation;
    class String;
    class StringBuffer;
    class StringBufferBuilder;
    class StringBuilder;
    class UInt32;
    class UInt64;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStringToOutput@Common@@YAJPEBGPEAPEAG@Z
    long CopyStringToOutput(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCacheMapIfNeeded@Common@@YAJXZ
    long CreateCacheMapIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericMapCaseInsensitiveCompare@Common@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z
    int GenericMapCaseInsensitiveCompare(_RTL_AVL_TABLE *, void *, void *);
};
