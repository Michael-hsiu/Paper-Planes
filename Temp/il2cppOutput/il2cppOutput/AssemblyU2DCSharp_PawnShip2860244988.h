#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Ship1116303770.h"

// IMoveState
struct IMoveState_t587483389;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PawnShip
struct  PawnShip_t2860244988  : public Ship_t1116303770
{
public:
	// IMoveState PawnShip::moveState
	Il2CppObject * ___moveState_20;
	// System.Int32 PawnShip::touchDamage
	int32_t ___touchDamage_21;

public:
	inline static int32_t get_offset_of_moveState_20() { return static_cast<int32_t>(offsetof(PawnShip_t2860244988, ___moveState_20)); }
	inline Il2CppObject * get_moveState_20() const { return ___moveState_20; }
	inline Il2CppObject ** get_address_of_moveState_20() { return &___moveState_20; }
	inline void set_moveState_20(Il2CppObject * value)
	{
		___moveState_20 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_20, value);
	}

	inline static int32_t get_offset_of_touchDamage_21() { return static_cast<int32_t>(offsetof(PawnShip_t2860244988, ___touchDamage_21)); }
	inline int32_t get_touchDamage_21() const { return ___touchDamage_21; }
	inline int32_t* get_address_of_touchDamage_21() { return &___touchDamage_21; }
	inline void set_touchDamage_21(int32_t value)
	{
		___touchDamage_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
