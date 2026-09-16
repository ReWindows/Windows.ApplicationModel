#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 10 member(s).
namespace Windows::ApplicationModel {
class AppDisplayInfoFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppDisplayInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppDisplayInfoFactoryServer@ApplicationModel@Windows@@QEAA@XZ
    AppDisplayInfoFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppDisplayInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAUIRandomAccessStreamReference@Streams@Storage@3@PEAPEAUIAppDisplayInfo@23@@Z
    virtual long Create(HSTRING__*, HSTRING__*, ::Windows::Storage::Streams::IRandomAccessStreamReference *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromApplicationId@AppDisplayInfoFactoryServer@ApplicationModel@Windows@@UEAAJ_JPEAPEAUIAppDisplayInfo@23@@Z
    virtual long CreateFromApplicationId(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromAumidAndUserSid@AppDisplayInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIAppDisplayInfo@23@@Z
    virtual long CreateFromAumidAndUserSid(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromAumidForCurrentUser@AppDisplayInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppDisplayInfo@23@@Z
    virtual long CreateFromAumidForCurrentUser(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromUserAndApplicationId@AppDisplayInfoFactoryServer@ApplicationModel@Windows@@UEAAJPEAUIUser@StateRepository@Internal@3@_JPEAPEAUIAppDisplayInfo@23@@Z
    virtual long CreateFromUserAndApplicationId(::Windows::Internal::StateRepository::IUser *, int64_t, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppDisplayInfoFactoryServer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppDisplayInfoFactoryServer();
};
} // namespace Windows::ApplicationModel
