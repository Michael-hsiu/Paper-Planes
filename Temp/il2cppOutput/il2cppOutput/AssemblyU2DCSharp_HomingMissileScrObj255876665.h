#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;

#include "AssemblyU2DCSharp_PowerupScriptableObject1415146708.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomingMissileScrObj
struct  HomingMissileScrObj_t255876665  : public PowerupScriptableObject_t1415146708
{
public:
	// System.Int32 HomingMissileScrObj::damage
	int32_t ___damage_3;
	// System.Int32 HomingMissileScrObj::numMissiles
	int32_t ___numMissiles_4;
	// System.Single HomingMissileScrObj::missileSpawnChance
	float ___missileSpawnChance_5;
	// UnityEngine.GameObject HomingMissileScrObj::missile
	GameObject_t1756533147 * ___missile_6;
	// System.Collections.Generic.List`1<System.Single> HomingMissileScrObj::missileSpawnChanceList
	List_1_t1445631064 * ___missileSpawnChanceList_7;

public:
	inline static int32_t get_offset_of_damage_3() { return static_cast<int32_t>(offsetof(HomingMissileScrObj_t255876665, ___damage_3)); }
	inline int32_t get_damage_3() const { return ___damage_3; }
	inline int32_t* get_address_of_damage_3() { return &___damage_3; }
	inline void set_damage_3(int32_t value)
	{
		___damage_3 = value;
	}

	inline static int32_t get_offset_of_numMissiles_4() { return static_cast<int32_t>(offsetof(HomingMissileScrObj_t255876665, ___numMissiles_4)); }
	inline int32_t get_numMissiles_4() const { return ___numMissiles_4; }
	inline int32_t* get_address_of_numMissiles_4() { return &___numMissiles_4; }
	inline void set_numMissiles_4(int32_t value)
	{
		___numMissiles_4 = value;
	}

	inline static int32_t get_offset_of_missileSpawnChance_5() { return static_cast<int32_t>(offsetof(HomingMissileScrObj_t255876665, ___missileSpawnChance_5)); }
	inline float get_missileSpawnChance_5() const { return ___missileSpawnChance_5; }
	inline float* get_address_of_missileSpawnChance_5() { return &___missileSpawnChance_5; }
	inline void set_missileSpawnChance_5(float value)
	{
		___missileSpawnChance_5 = value;
	}

	inline static int32_t get_offset_of_missile_6() { return static_cast<int32_t>(offsetof(HomingMissileScrObj_t255876665, ___missile_6)); }
	inline GameObject_t1756533147 * get_missile_6() const { return ___missile_6; }
	inline GameObject_t1756533147 ** get_address_of_missile_6() { return &___missile_6; }
	inline void set_missile_6(GameObject_t1756533147 * value)
	{
		___missile_6 = value;
		Il2CppCodeGenWriteBarrier(&___missile_6, value);
	}

	inline static int32_t get_offset_of_missileSpawnChanceList_7() { return static_cast<int32_t>(offsetof(HomingMissileScrObj_t255876665, ___missileSpawnChanceList_7)); }
	inline List_1_t1445631064 * get_missileSpawnChanceList_7() const { return ___missileSpawnChanceList_7; }
	inline List_1_t1445631064 ** get_address_of_missileSpawnChanceList_7() { return &___missileSpawnChanceList_7; }
	inline void set_missileSpawnChanceList_7(List_1_t1445631064 * value)
	{
		___missileSpawnChanceList_7 = value;
		Il2CppCodeGenWriteBarrier(&___missileSpawnChanceList_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
