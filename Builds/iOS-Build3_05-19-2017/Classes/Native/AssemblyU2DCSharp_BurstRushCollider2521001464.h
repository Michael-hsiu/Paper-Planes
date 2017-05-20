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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BurstRushCollider
struct  BurstRushCollider_t2521001464  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BurstRushCollider::explosion
	GameObject_t1756533147 * ___explosion_2;
	// System.Int32 BurstRushCollider::dmg
	int32_t ___dmg_3;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(BurstRushCollider_t2521001464, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_dmg_3() { return static_cast<int32_t>(offsetof(BurstRushCollider_t2521001464, ___dmg_3)); }
	inline int32_t get_dmg_3() const { return ___dmg_3; }
	inline int32_t* get_address_of_dmg_3() { return &___dmg_3; }
	inline void set_dmg_3(int32_t value)
	{
		___dmg_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
