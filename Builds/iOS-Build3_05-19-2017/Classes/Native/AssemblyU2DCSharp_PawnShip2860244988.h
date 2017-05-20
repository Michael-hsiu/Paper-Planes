#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IMoveState
struct IMoveState_t587483389;

#include "AssemblyU2DCSharp_Ship1116303770.h"

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
	Il2CppObject * ___moveState_15;

public:
	inline static int32_t get_offset_of_moveState_15() { return static_cast<int32_t>(offsetof(PawnShip_t2860244988, ___moveState_15)); }
	inline Il2CppObject * get_moveState_15() const { return ___moveState_15; }
	inline Il2CppObject ** get_address_of_moveState_15() { return &___moveState_15; }
	inline void set_moveState_15(Il2CppObject * value)
	{
		___moveState_15 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
