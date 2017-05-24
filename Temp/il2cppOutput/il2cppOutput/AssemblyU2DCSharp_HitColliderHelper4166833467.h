#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ship
struct Ship_t1116303770;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HitColliderHelper
struct  HitColliderHelper_t4166833467  : public MonoBehaviour_t1158329972
{
public:
	// Ship HitColliderHelper::enemy
	Ship_t1116303770 * ___enemy_2;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(HitColliderHelper_t4166833467, ___enemy_2)); }
	inline Ship_t1116303770 * get_enemy_2() const { return ___enemy_2; }
	inline Ship_t1116303770 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(Ship_t1116303770 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
