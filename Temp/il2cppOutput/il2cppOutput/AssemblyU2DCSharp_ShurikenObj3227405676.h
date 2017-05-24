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
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "AssemblyU2DCSharp_PoolObject202793199.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShurikenObj
struct  ShurikenObj_t3227405676  : public PoolObject_t202793199
{
public:
	// UnityEngine.GameObject ShurikenObj::explosion
	GameObject_t1756533147 * ___explosion_2;
	// System.Int32 ShurikenObj::dmg
	int32_t ___dmg_3;
	// System.Single ShurikenObj::rotationFactor
	float ___rotationFactor_4;
	// System.Single ShurikenObj::dmgDelay
	float ___dmgDelay_5;
	// System.Collections.IEnumerator ShurikenObj::cr
	Il2CppObject * ___cr_6;
	// System.Collections.IEnumerator ShurikenObj::dd
	Il2CppObject * ___dd_7;
	// System.Boolean ShurikenObj::canDmg
	bool ___canDmg_8;
	// System.Single ShurikenObj::lifetime
	float ___lifetime_9;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_dmg_3() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___dmg_3)); }
	inline int32_t get_dmg_3() const { return ___dmg_3; }
	inline int32_t* get_address_of_dmg_3() { return &___dmg_3; }
	inline void set_dmg_3(int32_t value)
	{
		___dmg_3 = value;
	}

	inline static int32_t get_offset_of_rotationFactor_4() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___rotationFactor_4)); }
	inline float get_rotationFactor_4() const { return ___rotationFactor_4; }
	inline float* get_address_of_rotationFactor_4() { return &___rotationFactor_4; }
	inline void set_rotationFactor_4(float value)
	{
		___rotationFactor_4 = value;
	}

	inline static int32_t get_offset_of_dmgDelay_5() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___dmgDelay_5)); }
	inline float get_dmgDelay_5() const { return ___dmgDelay_5; }
	inline float* get_address_of_dmgDelay_5() { return &___dmgDelay_5; }
	inline void set_dmgDelay_5(float value)
	{
		___dmgDelay_5 = value;
	}

	inline static int32_t get_offset_of_cr_6() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___cr_6)); }
	inline Il2CppObject * get_cr_6() const { return ___cr_6; }
	inline Il2CppObject ** get_address_of_cr_6() { return &___cr_6; }
	inline void set_cr_6(Il2CppObject * value)
	{
		___cr_6 = value;
		Il2CppCodeGenWriteBarrier(&___cr_6, value);
	}

	inline static int32_t get_offset_of_dd_7() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___dd_7)); }
	inline Il2CppObject * get_dd_7() const { return ___dd_7; }
	inline Il2CppObject ** get_address_of_dd_7() { return &___dd_7; }
	inline void set_dd_7(Il2CppObject * value)
	{
		___dd_7 = value;
		Il2CppCodeGenWriteBarrier(&___dd_7, value);
	}

	inline static int32_t get_offset_of_canDmg_8() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___canDmg_8)); }
	inline bool get_canDmg_8() const { return ___canDmg_8; }
	inline bool* get_address_of_canDmg_8() { return &___canDmg_8; }
	inline void set_canDmg_8(bool value)
	{
		___canDmg_8 = value;
	}

	inline static int32_t get_offset_of_lifetime_9() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___lifetime_9)); }
	inline float get_lifetime_9() const { return ___lifetime_9; }
	inline float* get_address_of_lifetime_9() { return &___lifetime_9; }
	inline void set_lifetime_9(float value)
	{
		___lifetime_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
