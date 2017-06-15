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

// MissileSpawnChanceScrObj
struct  MissileSpawnChanceScrObj_t3625258158  : public UpgradableScriptableObject_t868707505
{
public:
	// System.Collections.Generic.List`1<System.Int32> MissileSpawnChanceScrObj::pricesList
	List_1_t1440998580 * ___pricesList_9;
	// System.Collections.Generic.List`1<System.Single> MissileSpawnChanceScrObj::spawnChancesList
	List_1_t1445631064 * ___spawnChancesList_10;

public:
	inline static int32_t get_offset_of_pricesList_9() { return static_cast<int32_t>(offsetof(MissileSpawnChanceScrObj_t3625258158, ___pricesList_9)); }
	inline List_1_t1440998580 * get_pricesList_9() const { return ___pricesList_9; }
	inline List_1_t1440998580 ** get_address_of_pricesList_9() { return &___pricesList_9; }
	inline void set_pricesList_9(List_1_t1440998580 * value)
	{
		___pricesList_9 = value;
		Il2CppCodeGenWriteBarrier(&___pricesList_9, value);
	}

	inline static int32_t get_offset_of_spawnChancesList_10() { return static_cast<int32_t>(offsetof(MissileSpawnChanceScrObj_t3625258158, ___spawnChancesList_10)); }
	inline List_1_t1445631064 * get_spawnChancesList_10() const { return ___spawnChancesList_10; }
	inline List_1_t1445631064 ** get_address_of_spawnChancesList_10() { return &___spawnChancesList_10; }
	inline void set_spawnChancesList_10(List_1_t1445631064 * value)
	{
		___spawnChancesList_10 = value;
		Il2CppCodeGenWriteBarrier(&___spawnChancesList_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
