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
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EnemyType756400788.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Turret
struct  Turret_t2838438942  : public MonoBehaviour_t1158329972
{
public:
	// EnemyType Turret::enemyType
	int32_t ___enemyType_2;
	// UnityEngine.GameObject Turret::target
	GameObject_t1756533147 * ___target_3;
	// System.Boolean Turret::isMarked
	bool ___isMarked_4;
	// UnityEngine.GameObject Turret::explosion
	GameObject_t1756533147 * ___explosion_5;
	// System.Single Turret::rotationSpeed
	float ___rotationSpeed_6;
	// System.Int32 Turret::health
	int32_t ___health_7;
	// System.Int32 Turret::enemyPoints
	int32_t ___enemyPoints_8;
	// UnityEngine.GameObject Turret::shot
	GameObject_t1756533147 * ___shot_9;
	// UnityEngine.Transform Turret::shotSpawn
	Transform_t3275118058 * ___shotSpawn_10;
	// System.Int32 Turret::shotDamage
	int32_t ___shotDamage_11;
	// System.Single Turret::fireRate
	float ___fireRate_12;
	// System.Single Turret::burstFireDelay
	float ___burstFireDelay_13;
	// System.Int32 Turret::burstCount
	int32_t ___burstCount_14;
	// System.Single Turret::fieldOfViewDegrees
	float ___fieldOfViewDegrees_15;
	// System.Single Turret::visibilityDistance
	float ___visibilityDistance_16;
	// System.Single Turret::nextFire
	float ___nextFire_17;
	// UnityEngine.Vector3 Turret::initialPos
	Vector3_t2243707580  ___initialPos_18;
	// UnityEngine.Quaternion Turret::initialRot
	Quaternion_t4030073918  ___initialRot_19;

public:
	inline static int32_t get_offset_of_enemyType_2() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___enemyType_2)); }
	inline int32_t get_enemyType_2() const { return ___enemyType_2; }
	inline int32_t* get_address_of_enemyType_2() { return &___enemyType_2; }
	inline void set_enemyType_2(int32_t value)
	{
		___enemyType_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___target_3)); }
	inline GameObject_t1756533147 * get_target_3() const { return ___target_3; }
	inline GameObject_t1756533147 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(GameObject_t1756533147 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_isMarked_4() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___isMarked_4)); }
	inline bool get_isMarked_4() const { return ___isMarked_4; }
	inline bool* get_address_of_isMarked_4() { return &___isMarked_4; }
	inline void set_isMarked_4(bool value)
	{
		___isMarked_4 = value;
	}

	inline static int32_t get_offset_of_explosion_5() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___explosion_5)); }
	inline GameObject_t1756533147 * get_explosion_5() const { return ___explosion_5; }
	inline GameObject_t1756533147 ** get_address_of_explosion_5() { return &___explosion_5; }
	inline void set_explosion_5(GameObject_t1756533147 * value)
	{
		___explosion_5 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_5, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_6() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___rotationSpeed_6)); }
	inline float get_rotationSpeed_6() const { return ___rotationSpeed_6; }
	inline float* get_address_of_rotationSpeed_6() { return &___rotationSpeed_6; }
	inline void set_rotationSpeed_6(float value)
	{
		___rotationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___health_7)); }
	inline int32_t get_health_7() const { return ___health_7; }
	inline int32_t* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(int32_t value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_enemyPoints_8() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___enemyPoints_8)); }
	inline int32_t get_enemyPoints_8() const { return ___enemyPoints_8; }
	inline int32_t* get_address_of_enemyPoints_8() { return &___enemyPoints_8; }
	inline void set_enemyPoints_8(int32_t value)
	{
		___enemyPoints_8 = value;
	}

	inline static int32_t get_offset_of_shot_9() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___shot_9)); }
	inline GameObject_t1756533147 * get_shot_9() const { return ___shot_9; }
	inline GameObject_t1756533147 ** get_address_of_shot_9() { return &___shot_9; }
	inline void set_shot_9(GameObject_t1756533147 * value)
	{
		___shot_9 = value;
		Il2CppCodeGenWriteBarrier(&___shot_9, value);
	}

	inline static int32_t get_offset_of_shotSpawn_10() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___shotSpawn_10)); }
	inline Transform_t3275118058 * get_shotSpawn_10() const { return ___shotSpawn_10; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_10() { return &___shotSpawn_10; }
	inline void set_shotSpawn_10(Transform_t3275118058 * value)
	{
		___shotSpawn_10 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_10, value);
	}

	inline static int32_t get_offset_of_shotDamage_11() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___shotDamage_11)); }
	inline int32_t get_shotDamage_11() const { return ___shotDamage_11; }
	inline int32_t* get_address_of_shotDamage_11() { return &___shotDamage_11; }
	inline void set_shotDamage_11(int32_t value)
	{
		___shotDamage_11 = value;
	}

	inline static int32_t get_offset_of_fireRate_12() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___fireRate_12)); }
	inline float get_fireRate_12() const { return ___fireRate_12; }
	inline float* get_address_of_fireRate_12() { return &___fireRate_12; }
	inline void set_fireRate_12(float value)
	{
		___fireRate_12 = value;
	}

	inline static int32_t get_offset_of_burstFireDelay_13() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___burstFireDelay_13)); }
	inline float get_burstFireDelay_13() const { return ___burstFireDelay_13; }
	inline float* get_address_of_burstFireDelay_13() { return &___burstFireDelay_13; }
	inline void set_burstFireDelay_13(float value)
	{
		___burstFireDelay_13 = value;
	}

	inline static int32_t get_offset_of_burstCount_14() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___burstCount_14)); }
	inline int32_t get_burstCount_14() const { return ___burstCount_14; }
	inline int32_t* get_address_of_burstCount_14() { return &___burstCount_14; }
	inline void set_burstCount_14(int32_t value)
	{
		___burstCount_14 = value;
	}

	inline static int32_t get_offset_of_fieldOfViewDegrees_15() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___fieldOfViewDegrees_15)); }
	inline float get_fieldOfViewDegrees_15() const { return ___fieldOfViewDegrees_15; }
	inline float* get_address_of_fieldOfViewDegrees_15() { return &___fieldOfViewDegrees_15; }
	inline void set_fieldOfViewDegrees_15(float value)
	{
		___fieldOfViewDegrees_15 = value;
	}

	inline static int32_t get_offset_of_visibilityDistance_16() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___visibilityDistance_16)); }
	inline float get_visibilityDistance_16() const { return ___visibilityDistance_16; }
	inline float* get_address_of_visibilityDistance_16() { return &___visibilityDistance_16; }
	inline void set_visibilityDistance_16(float value)
	{
		___visibilityDistance_16 = value;
	}

	inline static int32_t get_offset_of_nextFire_17() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___nextFire_17)); }
	inline float get_nextFire_17() const { return ___nextFire_17; }
	inline float* get_address_of_nextFire_17() { return &___nextFire_17; }
	inline void set_nextFire_17(float value)
	{
		___nextFire_17 = value;
	}

	inline static int32_t get_offset_of_initialPos_18() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___initialPos_18)); }
	inline Vector3_t2243707580  get_initialPos_18() const { return ___initialPos_18; }
	inline Vector3_t2243707580 * get_address_of_initialPos_18() { return &___initialPos_18; }
	inline void set_initialPos_18(Vector3_t2243707580  value)
	{
		___initialPos_18 = value;
	}

	inline static int32_t get_offset_of_initialRot_19() { return static_cast<int32_t>(offsetof(Turret_t2838438942, ___initialRot_19)); }
	inline Quaternion_t4030073918  get_initialRot_19() const { return ___initialRot_19; }
	inline Quaternion_t4030073918 * get_address_of_initialRot_19() { return &___initialRot_19; }
	inline void set_initialRot_19(Quaternion_t4030073918  value)
	{
		___initialRot_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
