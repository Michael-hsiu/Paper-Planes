#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Ship1116303770.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BomberBoss
struct  BomberBoss_t2837930630  : public Ship_t1116303770
{
public:
	// System.Single BomberBoss::nextAttackTime
	float ___nextAttackTime_20;

public:
	inline static int32_t get_offset_of_nextAttackTime_20() { return static_cast<int32_t>(offsetof(BomberBoss_t2837930630, ___nextAttackTime_20)); }
	inline float get_nextAttackTime_20() const { return ___nextAttackTime_20; }
	inline float* get_address_of_nextAttackTime_20() { return &___nextAttackTime_20; }
	inline void set_nextAttackTime_20(float value)
	{
		___nextAttackTime_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
