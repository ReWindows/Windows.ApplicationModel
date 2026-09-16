#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 10 member(s).
namespace Windows::ApplicationModel {
class AppInfoFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInfoFactoryServer@ApplicationModel@Windows@@QEAA@XZ
    AppInfoFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromApplicationId@AppInfoFactoryServer@ApplicationModel@Windows@@UEAAJ_JPEAPEAUIAppInfo@23@@Z
    virtual long CreateFromApplicationId(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromUserAndApplicationId@AppInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAUIUser@StateRepository@Internal@3@_JPEAPEAUIAppInfo@23@@Z
    virtual long CreateFromUserAndApplicationId(::Windows::Internal::StateRepository::IUser *, int64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromAppUserModelId@AppInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@23@@Z
    virtual long GetFromAppUserModelId(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromAppUserModelIdForUser@AppInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAUIUser@System@3@PEAUHSTRING__@@PEAPEAUIAppInfo@23@@Z
    virtual long GetFromAppUserModelIdForUser(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@AppInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAPEAUIAppInfo@23@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInfoFactoryServer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppInfoFactoryServer();
};
} // namespace Windows::ApplicationModel
