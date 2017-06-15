﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShooting
struct  PlayerShooting_t3959056376  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerShooting::shot
	GameObject_t1756533147 * ___shot_2;
	// UnityEngine.Transform PlayerShooting::shotSpawn
	Transform_t3275118058 * ___shotSpawn_3;
	// System.Single PlayerShooting::fireRate
	float ___fireRate_4;
	// System.Single PlayerShooting::nextFire
	float ___nextFire_5;
	// System.Single PlayerShooting::speed
	float ___speed_6;

public:
	inline static int32_t get_offset_of_shot_2() { return static_cast<int32_t>(offsetof(PlayerShooting_t3959056376, ___shot_2)); }
	inline GameObject_t1756533147 * get_shot_2() const { return ___shot_2; }
	inline GameObject_t1756533147 ** get_address_of_shot_2() { return &___shot_2; }
	inline void set_shot_2(GameObject_t1756533147 * value)
	{
		___shot_2 = value;
		Il2CppCodeGenWriteBarrier(&___shot_2, value);
	}

	inline static int32_t get_offset_of_shotSpawn_3() { return static_cast<int32_t>(offsetof(PlayerShooting_t3959056376, ___shotSpawn_3)); }
	inline Transform_t3275118058 * get_shotSpawn_3() const { return ___shotSpawn_3; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_3() { return &___shotSpawn_3; }
	inline void set_shotSpawn_3(Transform_t3275118058 * value)
	{
		___shotSpawn_3 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_3, value);
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(PlayerShooting_t3959056376, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_nextFire_5() { return static_cast<int32_t>(offsetof(PlayerShooting_t3959056376, ___nextFire_5)); }
	inline float get_nextFire_5() const { return ___nextFire_5; }
	inline float* get_address_of_nextFire_5() { return &___nextFire_5; }
	inline void set_nextFire_5(float value)
	{
		___nextFire_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(PlayerShooting_t3959056376, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif