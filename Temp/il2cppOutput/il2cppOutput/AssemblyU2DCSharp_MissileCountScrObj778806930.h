#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "AssemblyU2DCSharp_UpgradableScriptableObject868707505.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissileCountScrObj
struct  MissileCountScrObj_t778806930  : public UpgradableScriptableObject_t868707505
{
public:
	// System.Collections.Generic.List`1<System.Int32> MissileCountScrObj::pricesList
	List_1_t1440998580 * ___pricesList_8;
	// System.Collections.Generic.List`1<System.Int32> MissileCountScrObj::numMissilesList
	List_1_t1440998580 * ___numMissilesList_9;

public:
	inline static int32_t get_offset_of_pricesList_8() { return static_cast<int32_t>(offsetof(MissileCountScrObj_t778806930, ___pricesList_8)); }
	inline List_1_t1440998580 * get_pricesList_8() const { return ___pricesList_8; }
	inline List_1_t1440998580 ** get_address_of_pricesList_8() { return &___pricesList_8; }
	inline void set_pricesList_8(List_1_t1440998580 * value)
	{
		___pricesList_8 = value;
		Il2CppCodeGenWriteBarrier(&___pricesList_8, value);
	}

	inline static int32_t get_offset_of_numMissilesList_9() { return static_cast<int32_t>(offsetof(MissileCountScrObj_t778806930, ___numMissilesList_9)); }
	inline List_1_t1440998580 * get_numMissilesList_9() const { return ___numMissilesList_9; }
	inline List_1_t1440998580 ** get_address_of_numMissilesList_9() { return &___numMissilesList_9; }
	inline void set_numMissilesList_9(List_1_t1440998580 * value)
	{
		___numMissilesList_9 = value;
		Il2CppCodeGenWriteBarrier(&___numMissilesList_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
