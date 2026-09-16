#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 38 member(s).
class PackageCatalogFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageCatalogFactoryServer@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageCatalogFactoryServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageCatalogFactoryServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageCatalogFactoryServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageCatalogFactoryServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@PackageCatalogFactoryServer@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@PackageCatalogFactoryServer@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForActivity@PackageCatalogFactoryServer@@UEAAJU_GUID@@PEAPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    virtual long OpenForActivity(_GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForAllUsers@PackageCatalogFactoryServer@@UEAAJPEAPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    virtual long OpenForAllUsers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForCurrentPackage@PackageCatalogFactoryServer@@UEAAJPEAPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    virtual long OpenForCurrentPackage(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForCurrentUser@PackageCatalogFactoryServer@@UEAAJPEAPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    virtual long OpenForCurrentUser(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForPackage@PackageCatalogFactoryServer@@UEAAJPEAUIPackage@ApplicationModel@Windows@@PEAPEAUIPackageCatalog@34@@Z
    virtual long OpenForPackage(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForUser@PackageCatalogFactoryServer@@UEAAJPEAUIUser@System@Windows@@PEAPEAUIPackageCatalog@ApplicationModel@4@@Z
    virtual long OpenForUser(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageCatalogFactoryServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageCatalogFactoryServer@@UEAAKXZ
    virtual unsigned long Release();
};
