#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 4 member(s).
class UserAwareCallerIdentity {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@UserAwareCallerIdentity@@YAJKPEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessId@UserAwareCallerIdentity@@YAJPEAK@Z
    long GetCallingProcessId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFullName@UserAwareCallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFullName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessUserContext@UserAwareCallerIdentity@@YAJPEA_K@Z
    long GetCallingProcessUserContext(uint64_t *);
};
