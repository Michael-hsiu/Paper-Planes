﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Missile
struct Missile_t813944928;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Missile/<DamageDelay>c__Iterator1
struct  U3CDamageDelayU3Ec__Iterator1_t1788117821  : public Il2CppObject
{
public:
	// System.Single Missile/<DamageDelay>c__Iterator1::dmgDelay
	float ___dmgDelay_0;
	// Missile Missile/<DamageDelay>c__Iterator1::$this
	Missile_t813944928 * ___U24this_1;
	// System.Object Missile/<DamageDelay>c__Iterator1::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean Missile/<DamageDelay>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 Missile/<DamageDelay>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_dmgDelay_0() { return static_cast<int32_t>(offsetof(U3CDamageDelayU3Ec__Iterator1_t1788117821, ___dmgDelay_0)); }
	inline float get_dmgDelay_0() const { return ___dmgDelay_0; }
	inline float* get_address_of_dmgDelay_0() { return &___dmgDelay_0; }
	inline void set_dmgDelay_0(float value)
	{
		___dmgDelay_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDamageDelayU3Ec__Iterator1_t1788117821, ___U24this_1)); }
	inline Missile_t813944928 * get_U24this_1() const { return ___U24this_1; }
	inline Missile_t813944928 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Missile_t813944928 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDamageDelayU3Ec__Iterator1_t1788117821, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDamageDelayU3Ec__Iterator1_t1788117821, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDamageDelayU3Ec__Iterator1_t1788117821, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
