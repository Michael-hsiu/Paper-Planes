﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyMovementCollisionType
struct  EnemyMovementCollisionType_t1487527125  : public MonoBehaviour_t1158329972
{
public:
	// System.Single EnemyMovementCollisionType::speed
	float ___speed_2;
	// System.Single EnemyMovementCollisionType::rotationSpeed
	float ___rotationSpeed_3;
	// UnityEngine.GameObject EnemyMovementCollisionType::target
	GameObject_t1756533147 * ___target_4;
	// UnityEngine.Vector2 EnemyMovementCollisionType::initialPos
	Vector2_t2243707579  ___initialPos_5;
	// UnityEngine.Vector2 EnemyMovementCollisionType::offset
	Vector2_t2243707579  ___offset_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(EnemyMovementCollisionType_t1487527125, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(EnemyMovementCollisionType_t1487527125, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(EnemyMovementCollisionType_t1487527125, ___target_4)); }
	inline GameObject_t1756533147 * get_target_4() const { return ___target_4; }
	inline GameObject_t1756533147 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t1756533147 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_initialPos_5() { return static_cast<int32_t>(offsetof(EnemyMovementCollisionType_t1487527125, ___initialPos_5)); }
	inline Vector2_t2243707579  get_initialPos_5() const { return ___initialPos_5; }
	inline Vector2_t2243707579 * get_address_of_initialPos_5() { return &___initialPos_5; }
	inline void set_initialPos_5(Vector2_t2243707579  value)
	{
		___initialPos_5 = value;
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(EnemyMovementCollisionType_t1487527125, ___offset_6)); }
	inline Vector2_t2243707579  get_offset_6() const { return ___offset_6; }
	inline Vector2_t2243707579 * get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(Vector2_t2243707579  value)
	{
		___offset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif