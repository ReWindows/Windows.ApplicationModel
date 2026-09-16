#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 9 member(s).
namespace Windows::ApplicationModel {
class PackageFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageFactoryServer@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PackageFactoryServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@UPackageVersion@23@W4ProcessorArchitecture@System@3@0000000W4PackageType@Internal@23@W4PackageFlags@923@EPEAPEAUIPackage@23@@Z
    virtual long Create(HSTRING__*, WindissectOpaque, int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, int, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PackageFactoryServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@UPackageVersion@23@W4ProcessorArchitecture@System@3@000000EPEAPEAUIPackage@23@@Z
    virtual long Create(HSTRING__*, WindissectOpaque, int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PackageFactoryServer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@UPackageVersion@23@W4ProcessorArchitecture@System@3@000000W4PackageType@Internal@23@W4PackageFlags@923@EPEAPEAUIPackage@23@@Z
    virtual long Create(HSTRING__*, WindissectOpaque, int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, int, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PackageFactoryServer@ApplicationModel@Windows@@UEAAJPEAUIPackage@StateRepository@Internal@3@PEAPEAU423@@Z
    virtual long Create(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFactoryServer@ApplicationModel@Windows@@QEAA@XZ
    PackageFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@PackageFactoryServer@ApplicationModel@Windows@@UEAAJPEAPEAUIPackage@23@@Z
    virtual long get_Current(WindissectOpaque * *);
};
} // namespace Windows::ApplicationModel
