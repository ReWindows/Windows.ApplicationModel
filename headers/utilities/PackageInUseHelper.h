#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 7 member(s).
namespace AppModel {
class PackageInUseHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForApp@PackageInUseHelper@AppModel@@SAJPEAPEAV12@@Z
    static long CreateForApp(::AppModel::PackageInUseHelper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInUseIndicatorFilePath@PackageInUseHelper@AppModel@@QEAAJPEBGPEAPEAG@Z
    long GetPackageInUseIndicatorFilePath(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileCreatedInCurrentBootSession@PackageInUseHelper@AppModel@@SAJPEAXPEA_N@Z
    static long IsFileCreatedInCurrentBootSession(void *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageNotInUse@PackageInUseHelper@AppModel@@QEAAJPEBGPEAPEAXPEAPEAG@Z
    long SetPackageNotInUse(unsigned short const *, void * *, unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInUseIndicatorFile@PackageInUseHelper@AppModel@@AEAAJPEBGPEAPEAX@Z
    long CreateInUseIndicatorFile(unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInUseStateFolderIfNeeded@PackageInUseHelper@AppModel@@AEAAJXZ
    long CreateInUseStateFolderIfNeeded();
};
} // namespace AppModel
