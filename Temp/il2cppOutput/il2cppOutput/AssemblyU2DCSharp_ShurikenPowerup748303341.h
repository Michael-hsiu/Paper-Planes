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
// ShurikenObj
struct ShurikenObj_t3227405676;

#include "AssemblyU2DCSharp_PoolObject202793199.h"
#include "AssemblyU2DCSharp_SpecialWeapons1455949192.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShurikenPowerup
struct  ShurikenPowerup_t748303341  : public PoolObject_t202793199
{
public:
	// UnityEngine.GameObject ShurikenPowerup::shuriken
	GameObject_t1756533147 * ___shuriken_2;
	// UnityEngine.GameObject ShurikenPowerup::player
	GameObject_t1756533147 * ___player_3;
	// System.Boolean ShurikenPowerup::isVisible
	bool ___isVisible_4;
	// System.Single ShurikenPowerup::lifeTime
	float ___lifeTime_5;
	// System.Collections.IEnumerator ShurikenPowerup::cr
	Il2CppObject * ___cr_6;
	// ShurikenObj ShurikenPowerup::sken
	ShurikenObj_t3227405676 * ___sken_7;
	// SpecialWeapons ShurikenPowerup::id
	int32_t ___id_8;

public:
	inline static int32_t get_offset_of_shuriken_2() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___shuriken_2)); }
	inline GameObject_t1756533147 * get_shuriken_2() const { return ___shuriken_2; }
	inline GameObject_t1756533147 ** get_address_of_shuriken_2() { return &___shuriken_2; }
	inline void set_shuriken_2(GameObject_t1756533147 * value)
	{
		___shuriken_2 = value;
		Il2CppCodeGenWriteBarrier(&___shuriken_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___player_3)); }
	inline GameObject_t1756533147 * get_player_3() const { return ___player_3; }
	inline GameObject_t1756533147 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t1756533147 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_isVisible_4() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___isVisible_4)); }
	inline bool get_isVisible_4() const { return ___isVisible_4; }
	inline bool* get_address_of_isVisible_4() { return &___isVisible_4; }
	inline void set_isVisible_4(bool value)
	{
		___isVisible_4 = value;
	}

	inline static int32_t get_offset_of_lifeTime_5() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___lifeTime_5)); }
	inline float get_lifeTime_5() const { return ___lifeTime_5; }
	inline float* get_address_of_lifeTime_5() { return &___lifeTime_5; }
	inline void set_lifeTime_5(float value)
	{
		___lifeTime_5 = value;
	}

	inline static int32_t get_offset_of_cr_6() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___cr_6)); }
	inline Il2CppObject * get_cr_6() const { return ___cr_6; }
	inline Il2CppObject ** get_address_of_cr_6() { return &___cr_6; }
	inline void set_cr_6(Il2CppObject * value)
	{
		___cr_6 = value;
		Il2CppCodeGenWriteBarrier(&___cr_6, value);
	}

	inline static int32_t get_offset_of_sken_7() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___sken_7)); }
	inline ShurikenObj_t3227405676 * get_sken_7() const { return ___sken_7; }
	inline ShurikenObj_t3227405676 ** get_address_of_sken_7() { return &___sken_7; }
	inline void set_sken_7(ShurikenObj_t3227405676 * value)
	{
		___sken_7 = value;
		Il2CppCodeGenWriteBarrier(&___sken_7, value);
	}

	inline static int32_t get_offset_of_id_8() { return static_cast<int32_t>(offsetof(ShurikenPowerup_t748303341, ___id_8)); }
	inline int32_t get_id_8() const { return ___id_8; }
	inline int32_t* get_address_of_id_8() { return &___id_8; }
	inline void set_id_8(int32_t value)
	{
		___id_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
