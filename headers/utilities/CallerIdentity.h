#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 18 member(s).
class CallerIdentity {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessAppId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFamilyName@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFullName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationForCallingProcess@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreApplicationForCallingProcess(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCallingThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCallingThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCurrentThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCurrentThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCallingThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCallingThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCurrentThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCurrentThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPackageFamilyNameFromProcess(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPackageFullNameFromProcess(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetProcessAppId(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z
    long GetStateHandle(unsigned short const *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z
    long GetStateRegKey(void *, unsigned short const *, unsigned long, HKEY__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z
    long IsCallingProcessAppContainer(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z
    long IsProcessAppContainer(void *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ
    void _EnsureRuntimeBrokerPID();
};
