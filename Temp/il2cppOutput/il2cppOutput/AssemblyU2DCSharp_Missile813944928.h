#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HomingMissileScrObj
struct HomingMissileScrObj_t255876665;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject>
struct Func_2_t3035764824;
// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_t3404947624;
// System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject>
struct Func_2_t1335906053;

#include "AssemblyU2DCSharp_PoolObject202793199.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Missile
struct  Missile_t813944928  : public PoolObject_t202793199
{
public:
	// HomingMissileScrObj Missile::missileData
	HomingMissileScrObj_t255876665 * ___missileData_2;
	// UnityEngine.GameObject Missile::explosion
	GameObject_t1756533147 * ___explosion_3;
	// UnityEngine.GameObject Missile::target
	GameObject_t1756533147 * ___target_4;
	// System.Single Missile::damageRange
	float ___damageRange_5;
	// System.Single Missile::rotationSpeed
	float ___rotationSpeed_6;
	// System.Single Missile::speed
	float ___speed_7;
	// System.Single Missile::dmgDelay
	float ___dmgDelay_8;
	// System.Boolean Missile::seekingTarget
	bool ___seekingTarget_9;
	// System.Boolean Missile::noEnemies
	bool ___noEnemies_10;
	// System.Single Missile::seekDelay
	float ___seekDelay_11;
	// System.Single Missile::randomVal
	float ___randomVal_12;
	// System.Boolean Missile::canDmg
	bool ___canDmg_13;

public:
	inline static int32_t get_offset_of_missileData_2() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___missileData_2)); }
	inline HomingMissileScrObj_t255876665 * get_missileData_2() const { return ___missileData_2; }
	inline HomingMissileScrObj_t255876665 ** get_address_of_missileData_2() { return &___missileData_2; }
	inline void set_missileData_2(HomingMissileScrObj_t255876665 * value)
	{
		___missileData_2 = value;
		Il2CppCodeGenWriteBarrier(&___missileData_2, value);
	}

	inline static int32_t get_offset_of_explosion_3() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___explosion_3)); }
	inline GameObject_t1756533147 * get_explosion_3() const { return ___explosion_3; }
	inline GameObject_t1756533147 ** get_address_of_explosion_3() { return &___explosion_3; }
	inline void set_explosion_3(GameObject_t1756533147 * value)
	{
		___explosion_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___target_4)); }
	inline GameObject_t1756533147 * get_target_4() const { return ___target_4; }
	inline GameObject_t1756533147 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t1756533147 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_damageRange_5() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___damageRange_5)); }
	inline float get_damageRange_5() const { return ___damageRange_5; }
	inline float* get_address_of_damageRange_5() { return &___damageRange_5; }
	inline void set_damageRange_5(float value)
	{
		___damageRange_5 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_6() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___rotationSpeed_6)); }
	inline float get_rotationSpeed_6() const { return ___rotationSpeed_6; }
	inline float* get_address_of_rotationSpeed_6() { return &___rotationSpeed_6; }
	inline void set_rotationSpeed_6(float value)
	{
		___rotationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_dmgDelay_8() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___dmgDelay_8)); }
	inline float get_dmgDelay_8() const { return ___dmgDelay_8; }
	inline float* get_address_of_dmgDelay_8() { return &___dmgDelay_8; }
	inline void set_dmgDelay_8(float value)
	{
		___dmgDelay_8 = value;
	}

	inline static int32_t get_offset_of_seekingTarget_9() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___seekingTarget_9)); }
	inline bool get_seekingTarget_9() const { return ___seekingTarget_9; }
	inline bool* get_address_of_seekingTarget_9() { return &___seekingTarget_9; }
	inline void set_seekingTarget_9(bool value)
	{
		___seekingTarget_9 = value;
	}

	inline static int32_t get_offset_of_noEnemies_10() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___noEnemies_10)); }
	inline bool get_noEnemies_10() const { return ___noEnemies_10; }
	inline bool* get_address_of_noEnemies_10() { return &___noEnemies_10; }
	inline void set_noEnemies_10(bool value)
	{
		___noEnemies_10 = value;
	}

	inline static int32_t get_offset_of_seekDelay_11() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___seekDelay_11)); }
	inline float get_seekDelay_11() const { return ___seekDelay_11; }
	inline float* get_address_of_seekDelay_11() { return &___seekDelay_11; }
	inline void set_seekDelay_11(float value)
	{
		___seekDelay_11 = value;
	}

	inline static int32_t get_offset_of_randomVal_12() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___randomVal_12)); }
	inline float get_randomVal_12() const { return ___randomVal_12; }
	inline float* get_address_of_randomVal_12() { return &___randomVal_12; }
	inline void set_randomVal_12(float value)
	{
		___randomVal_12 = value;
	}

	inline static int32_t get_offset_of_canDmg_13() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___canDmg_13)); }
	inline bool get_canDmg_13() const { return ___canDmg_13; }
	inline bool* get_address_of_canDmg_13() { return &___canDmg_13; }
	inline void set_canDmg_13(bool value)
	{
		___canDmg_13 = value;
	}
};

struct Missile_t813944928_StaticFields
{
public:
	// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject> Missile::<>f__am$cache0
	Func_2_t3035764824 * ___U3CU3Ef__amU24cache0_14;
	// System.Func`2<UnityEngine.GameObject,System.Boolean> Missile::<>f__am$cache1
	Func_2_t3404947624 * ___U3CU3Ef__amU24cache1_15;
	// System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> Missile::<>f__am$cache2
	Func_2_t1335906053 * ___U3CU3Ef__amU24cache2_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_14() { return static_cast<int32_t>(offsetof(Missile_t813944928_StaticFields, ___U3CU3Ef__amU24cache0_14)); }
	inline Func_2_t3035764824 * get_U3CU3Ef__amU24cache0_14() const { return ___U3CU3Ef__amU24cache0_14; }
	inline Func_2_t3035764824 ** get_address_of_U3CU3Ef__amU24cache0_14() { return &___U3CU3Ef__amU24cache0_14; }
	inline void set_U3CU3Ef__amU24cache0_14(Func_2_t3035764824 * value)
	{
		___U3CU3Ef__amU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_15() { return static_cast<int32_t>(offsetof(Missile_t813944928_StaticFields, ___U3CU3Ef__amU24cache1_15)); }
	inline Func_2_t3404947624 * get_U3CU3Ef__amU24cache1_15() const { return ___U3CU3Ef__amU24cache1_15; }
	inline Func_2_t3404947624 ** get_address_of_U3CU3Ef__amU24cache1_15() { return &___U3CU3Ef__amU24cache1_15; }
	inline void set_U3CU3Ef__amU24cache1_15(Func_2_t3404947624 * value)
	{
		___U3CU3Ef__amU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_16() { return static_cast<int32_t>(offsetof(Missile_t813944928_StaticFields, ___U3CU3Ef__amU24cache2_16)); }
	inline Func_2_t1335906053 * get_U3CU3Ef__amU24cache2_16() const { return ___U3CU3Ef__amU24cache2_16; }
	inline Func_2_t1335906053 ** get_address_of_U3CU3Ef__amU24cache2_16() { return &___U3CU3Ef__amU24cache2_16; }
	inline void set_U3CU3Ef__amU24cache2_16(Func_2_t1335906053 * value)
	{
		___U3CU3Ef__amU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
