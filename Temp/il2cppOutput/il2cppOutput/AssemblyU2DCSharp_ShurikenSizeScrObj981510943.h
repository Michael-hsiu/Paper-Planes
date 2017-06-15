#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UpgradableScriptableObject868707505.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShurikenSizeScrObj
struct  ShurikenSizeScrObj_t981510943  : public UpgradableScriptableObject_t868707505
{
public:
	// System.Collections.Generic.List`1<System.Int32> ShurikenSizeScrObj::pricesList
	List_1_t1440998580 * ___pricesList_9;
	// System.Collections.Generic.List`1<System.Single> ShurikenSizeScrObj::sizesList
	List_1_t1445631064 * ___sizesList_10;
	// System.Collections.Generic.List`1<System.Int32> ShurikenSizeScrObj::damageBoundariesList
	List_1_t1440998580 * ___damageBoundariesList_11;

public:
	inline static int32_t get_offset_of_pricesList_9() { return static_cast<int32_t>(offsetof(ShurikenSizeScrObj_t981510943, ___pricesList_9)); }
	inline List_1_t1440998580 * get_pricesList_9() const { return ___pricesList_9; }
	inline List_1_t1440998580 ** get_address_of_pricesList_9() { return &___pricesList_9; }
	inline void set_pricesList_9(List_1_t1440998580 * value)
	{
		___pricesList_9 = value;
		Il2CppCodeGenWriteBarrier(&___pricesList_9, value);
	}

	inline static int32_t get_offset_of_sizesList_10() { return static_cast<int32_t>(offsetof(ShurikenSizeScrObj_t981510943, ___sizesList_10)); }
	inline List_1_t1445631064 * get_sizesList_10() const { return ___sizesList_10; }
	inline List_1_t1445631064 ** get_address_of_sizesList_10() { return &___sizesList_10; }
	inline void set_sizesList_10(List_1_t1445631064 * value)
	{
		___sizesList_10 = value;
		Il2CppCodeGenWriteBarrier(&___sizesList_10, value);
	}

	inline static int32_t get_offset_of_damageBoundariesList_11() { return static_cast<int32_t>(offsetof(ShurikenSizeScrObj_t981510943, ___damageBoundariesList_11)); }
	inline List_1_t1440998580 * get_damageBoundariesList_11() const { return ___damageBoundariesList_11; }
	inline List_1_t1440998580 ** get_address_of_damageBoundariesList_11() { return &___damageBoundariesList_11; }
	inline void set_damageBoundariesList_11(List_1_t1440998580 * value)
	{
		___damageBoundariesList_11 = value;
		Il2CppCodeGenWriteBarrier(&___damageBoundariesList_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
