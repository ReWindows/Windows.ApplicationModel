#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 38 member(s).
class PackageCatalogLocalFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageCatalogLocalFactoryServer@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageCatalogLocalFactoryServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageCatalogLocalFactoryServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageCatalogLocalFactoryServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageCatalogLocalFactoryServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@PackageCatalogLocalFactoryServer@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@PackageCatalogLocalFactoryServer@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForActivity@PackageCatalogLocalFactoryServer@@UEAAJU_GUID@@PEAPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    virtual long OpenForActivity(_GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForAllUsers@PackageCatalogLocalFactoryServer@@UEAAJPEAPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    virtual long OpenForAllUsers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForCurrentPackage@PackageCatalogLocalFactoryServer@@UEAAJPEAPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    virtual long OpenForCurrentPackage(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForCurrentUser@PackageCatalogLocalFactoryServer@@UEAAJPEAPEAUIPackageCatalog@ApplicationModel@Windows@@@Z
    virtual long OpenForCurrentUser(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForPackage@PackageCatalogLocalFactoryServer@@UEAAJPEAUIPackage@ApplicationModel@Windows@@PEAPEAUIPackageCatalog@34@@Z
    virtual long OpenForPackage(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenForUser@PackageCatalogLocalFactoryServer@@UEAAJPEAUIUser@System@Windows@@PEAPEAUIPackageCatalog@ApplicationModel@4@@Z
    virtual long OpenForUser(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageCatalogLocalFactoryServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageCatalogLocalFactoryServer@@UEAAKXZ
    virtual unsigned long Release();
};
