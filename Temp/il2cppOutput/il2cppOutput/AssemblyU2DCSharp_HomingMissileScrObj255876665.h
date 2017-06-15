#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerupScriptableObject1415146708.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




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
	// System.String HomingMissileScrObj::damageStr
	String_t* ___damageStr_7;
	// System.String HomingMissileScrObj::numMissilesStr
	String_t* ___numMissilesStr_8;
	// System.String HomingMissileScrObj::missileSpawnChanceStr
	String_t* ___missileSpawnChanceStr_9;

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

	inline static int32_t get_offset_of_damageStr_7() { return static_cast<int32_t>(offsetof(HomingMissileScrObj_t255876665, ___damageStr_7)); }
	inline String_t* get_damageStr_7() const { return ___damageStr_7; }
	inline String_t** get_address_of_damageStr_7() { return &___damageStr_7; }
	inline void set_damageStr_7(String_t* value)
	{
		___damageStr_7 = value;
		Il2CppCodeGenWriteBarrier(&___damageStr_7, value);
	}

	inline static int32_t get_offset_of_numMissilesStr_8() { return static_cast<int32_t>(offsetof(HomingMissileScrObj_t255876665, ___numMissilesStr_8)); }
	inline String_t* get_numMissilesStr_8() const { return ___numMissilesStr_8; }
	inline String_t** get_address_of_numMissilesStr_8() { return &___numMissilesStr_8; }
	inline void set_numMissilesStr_8(String_t* value)
	{
		___numMissilesStr_8 = value;
		Il2CppCodeGenWriteBarrier(&___numMissilesStr_8, value);
	}

	inline static int32_t get_offset_of_missileSpawnChanceStr_9() { return static_cast<int32_t>(offsetof(HomingMissileScrObj_t255876665, ___missileSpawnChanceStr_9)); }
	inline String_t* get_missileSpawnChanceStr_9() const { return ___missileSpawnChanceStr_9; }
	inline String_t** get_address_of_missileSpawnChanceStr_9() { return &___missileSpawnChanceStr_9; }
	inline void set_missileSpawnChanceStr_9(String_t* value)
	{
		___missileSpawnChanceStr_9 = value;
		Il2CppCodeGenWriteBarrier(&___missileSpawnChanceStr_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
