#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 1 member(s).
namespace Windows::ApplicationModel {
class Core {
public:
    class AppListEntryClientProxy;
    class AppListEntryServer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateUser@Core@ApplicationModel@Windows@@YAJPEAUIUser@System@3@@Z
    long ValidateUser(::Windows::System::IUser *);
};
} // namespace Windows::ApplicationModel
