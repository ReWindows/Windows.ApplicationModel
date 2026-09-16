#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::Core::Internal {
class AppListEntryFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppListEntryFactory@Internal@Core@ApplicationModel@Windows@@QEAA@XZ
    AppListEntryFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppListEntryFactory@Internal@Core@ApplicationModel@Windows@@UEAAJPEAUIAppDisplayInfo@45@PEAUHSTRING__@@PEAPEAUIAppListEntry@345@@Z
    virtual long Create(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppListEntryFactory@Internal@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppListEntryFactory();
};
} // namespace Windows::ApplicationModel::Core::Internal
