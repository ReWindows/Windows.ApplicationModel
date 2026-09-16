#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
namespace PackageUtility {
class ItemProgressHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@ItemProgressHandler@PackageUtility@@UEAAJPEAUIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInspectable@@@Z
    virtual long Invoke(WindissectOpaque *, IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemProgressHandler@PackageUtility@@QEAA@XZ
    ItemProgressHandler();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemProgressHandler@PackageUtility@@UEAA@XZ
    virtual ~ItemProgressHandler();
};
} // namespace PackageUtility
