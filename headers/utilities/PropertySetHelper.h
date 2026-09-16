#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 3 member(s).
namespace Windows::Internal::ShellHelpers {
class PropertySetHelper {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z
    long GetPropertyValueFactory(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z
    long SetPropVal(HSTRING__*, WindissectOpaque *);
};
} // namespace Windows::Internal::ShellHelpers
