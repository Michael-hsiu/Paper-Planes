#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Powerup2065360972.h"
#include "AssemblyU2DCSharp_SpecialWeapons1455949192.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// ShurikenObj
struct ShurikenObj_t3227405676;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShurikenPowerup
struct  ShurikenPowerup_t748303341  : public Powerup_t2065360972
{
public:
	// UnityEngine.GameObject ShurikenPowerup::shuriken
	GameObject_t1756533147 * ___shuriken_9;
	// System.Single ShurikenPowerup::lifeTime
	float ___lifeTime_10;
	// System.Collections.IEnumerator ShurikenPowerup::cr
	Il2CppObject * ___cr_11;
	// ShurikenObj ShurikenPowerup::sken
	ShurikenObj_t3227405676 * ___sken_12;
	// SpecialWeapons ShurikenPowerup::id
	int32_t ___id_13;

public:
	inline static int32_t get_offset_of_shuriken_9() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___shuriken_9)); }
	inline GameObject_t1756533147 * get_shuriken_9() const { return ___shuriken_9; }
	inline GameObject_t1756533147 ** get_address_of_shuriken_9() { return &___shuriken_9; }
	inline void set_shuriken_9(GameObject_t1756533147 * value)
	{
		___shuriken_9 = value;
		Il2CppCodeGenWriteBarrier(&___shuriken_9, value);
	}

	inline static int32_t get_offset_of_lifeTime_10() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___lifeTime_10)); }
	inline float get_lifeTime_10() const { return ___lifeTime_10; }
	inline float* get_address_of_lifeTime_10() { return &___lifeTime_10; }
	inline void set_lifeTime_10(float value)
	{
		___lifeTime_10 = value;
	}

	inline static int32_t get_offset_of_cr_11() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___cr_11)); }
	inline Il2CppObject * get_cr_11() const { return ___cr_11; }
	inline Il2CppObject ** get_address_of_cr_11() { return &___cr_11; }
	inline void set_cr_11(Il2CppObject * value)
	{
		___cr_11 = value;
		Il2CppCodeGenWriteBarrier(&___cr_11, value);
	}

	inline static int32_t get_offset_of_sken_12() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___sken_12)); }
	inline ShurikenObj_t3227405676 * get_sken_12() const { return ___sken_12; }
	inline ShurikenObj_t3227405676 ** get_address_of_sken_12() { return &___sken_12; }
	inline void set_sken_12(ShurikenObj_t3227405676 * value)
	{
		___sken_12 = value;
		Il2CppCodeGenWriteBarrier(&___sken_12, value);
	}

	inline static int32_t get_offset_of_id_13() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___id_13)); }
	inline int32_t get_id_13() const { return ___id_13; }
	inline int32_t* get_address_of_id_13() { return &___id_13; }
	inline void set_id_13(int32_t value)
	{
		___id_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
