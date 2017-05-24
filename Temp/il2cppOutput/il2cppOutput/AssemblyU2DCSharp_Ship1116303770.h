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

#include "AssemblyU2DCSharp_AbstractShip2730254364.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ship
struct  Ship_t1116303770  : public AbstractShip_t2730254364
{
public:
	// UnityEngine.GameObject Ship::target
	GameObject_t1756533147 * ___target_4;
	// UnityEngine.GameObject Ship::explosion
	GameObject_t1756533147 * ___explosion_5;
	// System.Single Ship::moveFactor
	float ___moveFactor_6;
	// System.Single Ship::speed
	float ___speed_7;
	// System.Single Ship::rotationSpeed
	float ___rotationSpeed_8;
	// System.Int32 Ship::health
	int32_t ___health_9;
	// System.Int32 Ship::enemyPoints
	int32_t ___enemyPoints_10;
	// System.Boolean Ship::isSpeedBuffed
	bool ___isSpeedBuffed_11;
	// System.Single Ship::buffedSpeedFactor
	float ___buffedSpeedFactor_12;
	// System.Boolean Ship::isMarked
	bool ___isMarked_13;
	// UnityEngine.Vector2 Ship::initialPos
	Vector2_t2243707579  ___initialPos_14;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___target_4)); }
	inline GameObject_t1756533147 * get_target_4() const { return ___target_4; }
	inline GameObject_t1756533147 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t1756533147 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_explosion_5() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___explosion_5)); }
	inline GameObject_t1756533147 * get_explosion_5() const { return ___explosion_5; }
	inline GameObject_t1756533147 ** get_address_of_explosion_5() { return &___explosion_5; }
	inline void set_explosion_5(GameObject_t1756533147 * value)
	{
		___explosion_5 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_5, value);
	}

	inline static int32_t get_offset_of_moveFactor_6() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___moveFactor_6)); }
	inline float get_moveFactor_6() const { return ___moveFactor_6; }
	inline float* get_address_of_moveFactor_6() { return &___moveFactor_6; }
	inline void set_moveFactor_6(float value)
	{
		___moveFactor_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_8() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___rotationSpeed_8)); }
	inline float get_rotationSpeed_8() const { return ___rotationSpeed_8; }
	inline float* get_address_of_rotationSpeed_8() { return &___rotationSpeed_8; }
	inline void set_rotationSpeed_8(float value)
	{
		___rotationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_health_9() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___health_9)); }
	inline int32_t get_health_9() const { return ___health_9; }
	inline int32_t* get_address_of_health_9() { return &___health_9; }
	inline void set_health_9(int32_t value)
	{
		___health_9 = value;
	}

	inline static int32_t get_offset_of_enemyPoints_10() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___enemyPoints_10)); }
	inline int32_t get_enemyPoints_10() const { return ___enemyPoints_10; }
	inline int32_t* get_address_of_enemyPoints_10() { return &___enemyPoints_10; }
	inline void set_enemyPoints_10(int32_t value)
	{
		___enemyPoints_10 = value;
	}

	inline static int32_t get_offset_of_isSpeedBuffed_11() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___isSpeedBuffed_11)); }
	inline bool get_isSpeedBuffed_11() const { return ___isSpeedBuffed_11; }
	inline bool* get_address_of_isSpeedBuffed_11() { return &___isSpeedBuffed_11; }
	inline void set_isSpeedBuffed_11(bool value)
	{
		___isSpeedBuffed_11 = value;
	}

	inline static int32_t get_offset_of_buffedSpeedFactor_12() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___buffedSpeedFactor_12)); }
	inline float get_buffedSpeedFactor_12() const { return ___buffedSpeedFactor_12; }
	inline float* get_address_of_buffedSpeedFactor_12() { return &___buffedSpeedFactor_12; }
	inline void set_buffedSpeedFactor_12(float value)
	{
		___buffedSpeedFactor_12 = value;
	}

	inline static int32_t get_offset_of_isMarked_13() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___isMarked_13)); }
	inline bool get_isMarked_13() const { return ___isMarked_13; }
	inline bool* get_address_of_isMarked_13() { return &___isMarked_13; }
	inline void set_isMarked_13(bool value)
	{
		___isMarked_13 = value;
	}

	inline static int32_t get_offset_of_initialPos_14() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___initialPos_14)); }
	inline Vector2_t2243707579  get_initialPos_14() const { return ___initialPos_14; }
	inline Vector2_t2243707579 * get_address_of_initialPos_14() { return &___initialPos_14; }
	inline void set_initialPos_14(Vector2_t2243707579  value)
	{
		___initialPos_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
