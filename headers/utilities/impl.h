#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.ApplicationModel.dll by Windissect. 13 member(s).
namespace winrt {
class impl {
public:
    class atomic_ref_count;
    class factory_cache_entry_base;
    class factory_count_guard;
    class slim_source_location;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@AEBUslim_source_location@12@@Z
    WindissectOpaque check_hresult_allow_bounds(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z
    WindissectOpaque * create_hstring_on_heap(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z
    WindissectOpaque * duplicate_hstring(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z
    int make_marshaler(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z
    WindissectOpaque * precreate_hstring_on_heap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z
    WindissectOpaque trim_hresult_message(unsigned short const * const, unsigned int);
};
} // namespace winrt
