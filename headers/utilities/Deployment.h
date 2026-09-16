#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 1 member(s).
namespace Windows::Management {
class Deployment {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForDeploymentOperation@Deployment@Management@Windows@@YAJKPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@3@PEAU?$IAsyncOperationProgressHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAU?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAPEAUIDeploymentResult@123@@Z
    long WaitForDeploymentOperation(unsigned long, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::Management
