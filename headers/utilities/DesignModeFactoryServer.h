#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel {
class DesignModeFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DesignModeFactoryServer@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesignMode2Enabled@DesignModeFactoryServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_DesignMode2Enabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesignModeEnabled@DesignModeFactoryServer@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_DesignModeEnabled(unsigned char *);
};
} // namespace Windows::ApplicationModel
