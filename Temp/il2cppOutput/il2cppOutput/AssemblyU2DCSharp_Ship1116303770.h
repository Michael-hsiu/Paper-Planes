#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_AbstractShip2730254364.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Renderer
struct Renderer_t257310565;




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
	GameObject_t1756533147 * ___target_5;
	// UnityEngine.GameObject Ship::explosion
	GameObject_t1756533147 * ___explosion_6;
	// System.Single Ship::moveFactor
	float ___moveFactor_7;
	// System.Single Ship::speed
	float ___speed_8;
	// System.Single Ship::rotationSpeed
	float ___rotationSpeed_9;
	// System.Int32 Ship::health
	int32_t ___health_10;
	// System.Int32 Ship::enemyPoints
	int32_t ___enemyPoints_11;
	// System.Boolean Ship::isSpeedBuffed
	bool ___isSpeedBuffed_12;
	// System.Single Ship::buffedSpeedFactor
	float ___buffedSpeedFactor_13;
	// System.Boolean Ship::isMarked
	bool ___isMarked_14;
	// UnityEngine.Vector2 Ship::initialPos
	Vector2_t2243707579  ___initialPos_15;
	// System.Collections.IEnumerator Ship::hitFlickerRoutine
	Il2CppObject * ___hitFlickerRoutine_16;
	// UnityEngine.Color Ship::startColor
	Color_t2020392075  ___startColor_17;
	// UnityEngine.Renderer Ship::sprite
	Renderer_t257310565 * ___sprite_18;
	// System.Single Ship::flickerTime
	float ___flickerTime_19;

public:
	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___target_5)); }
	inline GameObject_t1756533147 * get_target_5() const { return ___target_5; }
	inline GameObject_t1756533147 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(GameObject_t1756533147 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier(&___target_5, value);
	}

	inline static int32_t get_offset_of_explosion_6() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___explosion_6)); }
	inline GameObject_t1756533147 * get_explosion_6() const { return ___explosion_6; }
	inline GameObject_t1756533147 ** get_address_of_explosion_6() { return &___explosion_6; }
	inline void set_explosion_6(GameObject_t1756533147 * value)
	{
		___explosion_6 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_6, value);
	}

	inline static int32_t get_offset_of_moveFactor_7() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___moveFactor_7)); }
	inline float get_moveFactor_7() const { return ___moveFactor_7; }
	inline float* get_address_of_moveFactor_7() { return &___moveFactor_7; }
	inline void set_moveFactor_7(float value)
	{
		___moveFactor_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_9() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___rotationSpeed_9)); }
	inline float get_rotationSpeed_9() const { return ___rotationSpeed_9; }
	inline float* get_address_of_rotationSpeed_9() { return &___rotationSpeed_9; }
	inline void set_rotationSpeed_9(float value)
	{
		___rotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_health_10() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___health_10)); }
	inline int32_t get_health_10() const { return ___health_10; }
	inline int32_t* get_address_of_health_10() { return &___health_10; }
	inline void set_health_10(int32_t value)
	{
		___health_10 = value;
	}

	inline static int32_t get_offset_of_enemyPoints_11() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___enemyPoints_11)); }
	inline int32_t get_enemyPoints_11() const { return ___enemyPoints_11; }
	inline int32_t* get_address_of_enemyPoints_11() { return &___enemyPoints_11; }
	inline void set_enemyPoints_11(int32_t value)
	{
		___enemyPoints_11 = value;
	}

	inline static int32_t get_offset_of_isSpeedBuffed_12() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___isSpeedBuffed_12)); }
	inline bool get_isSpeedBuffed_12() const { return ___isSpeedBuffed_12; }
	inline bool* get_address_of_isSpeedBuffed_12() { return &___isSpeedBuffed_12; }
	inline void set_isSpeedBuffed_12(bool value)
	{
		___isSpeedBuffed_12 = value;
	}

	inline static int32_t get_offset_of_buffedSpeedFactor_13() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___buffedSpeedFactor_13)); }
	inline float get_buffedSpeedFactor_13() const { return ___buffedSpeedFactor_13; }
	inline float* get_address_of_buffedSpeedFactor_13() { return &___buffedSpeedFactor_13; }
	inline void set_buffedSpeedFactor_13(float value)
	{
		___buffedSpeedFactor_13 = value;
	}

	inline static int32_t get_offset_of_isMarked_14() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___isMarked_14)); }
	inline bool get_isMarked_14() const { return ___isMarked_14; }
	inline bool* get_address_of_isMarked_14() { return &___isMarked_14; }
	inline void set_isMarked_14(bool value)
	{
		___isMarked_14 = value;
	}

	inline static int32_t get_offset_of_initialPos_15() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___initialPos_15)); }
	inline Vector2_t2243707579  get_initialPos_15() const { return ___initialPos_15; }
	inline Vector2_t2243707579 * get_address_of_initialPos_15() { return &___initialPos_15; }
	inline void set_initialPos_15(Vector2_t2243707579  value)
	{
		___initialPos_15 = value;
	}

	inline static int32_t get_offset_of_hitFlickerRoutine_16() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___hitFlickerRoutine_16)); }
	inline Il2CppObject * get_hitFlickerRoutine_16() const { return ___hitFlickerRoutine_16; }
	inline Il2CppObject ** get_address_of_hitFlickerRoutine_16() { return &___hitFlickerRoutine_16; }
	inline void set_hitFlickerRoutine_16(Il2CppObject * value)
	{
		___hitFlickerRoutine_16 = value;
		Il2CppCodeGenWriteBarrier(&___hitFlickerRoutine_16, value);
	}

	inline static int32_t get_offset_of_startColor_17() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___startColor_17)); }
	inline Color_t2020392075  get_startColor_17() const { return ___startColor_17; }
	inline Color_t2020392075 * get_address_of_startColor_17() { return &___startColor_17; }
	inline void set_startColor_17(Color_t2020392075  value)
	{
		___startColor_17 = value;
	}

	inline static int32_t get_offset_of_sprite_18() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___sprite_18)); }
	inline Renderer_t257310565 * get_sprite_18() const { return ___sprite_18; }
	inline Renderer_t257310565 ** get_address_of_sprite_18() { return &___sprite_18; }
	inline void set_sprite_18(Renderer_t257310565 * value)
	{
		___sprite_18 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_18, value);
	}

	inline static int32_t get_offset_of_flickerTime_19() { return static_cast<int32_t>(offsetof(Ship_t1116303770, ___flickerTime_19)); }
	inline float get_flickerTime_19() const { return ___flickerTime_19; }
	inline float* get_address_of_flickerTime_19() { return &___flickerTime_19; }
	inline void set_flickerTime_19(float value)
	{
		___flickerTime_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
