#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ShotSpawn3804264869.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// BulletHellPatternGenerator
struct BulletHellPatternGenerator_t1973225052;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletHellShotSpawn
struct  BulletHellShotSpawn_t1128810710  : public ShotSpawn_t3804264869
{
public:
	// UnityEngine.GameObject BulletHellShotSpawn::bulletHellProjectile
	GameObject_t1756533147 * ___bulletHellProjectile_4;
	// BulletHellPatternGenerator BulletHellShotSpawn::bulletHellPatternGenerator
	BulletHellPatternGenerator_t1973225052 * ___bulletHellPatternGenerator_5;
	// System.Single BulletHellShotSpawn::rotationSpeed
	float ___rotationSpeed_6;
	// System.Int32 BulletHellShotSpawn::numRotations
	int32_t ___numRotations_7;
	// System.Boolean BulletHellShotSpawn::isFirstRotation
	bool ___isFirstRotation_8;
	// System.Single BulletHellShotSpawn::rotationAngle
	float ___rotationAngle_9;
	// System.Single BulletHellShotSpawn::rotationAngleCopy
	float ___rotationAngleCopy_10;
	// UnityEngine.Quaternion BulletHellShotSpawn::desiredRotation
	Quaternion_t4030073918  ___desiredRotation_11;
	// UnityEngine.Quaternion BulletHellShotSpawn::currRotation
	Quaternion_t4030073918  ___currRotation_12;
	// UnityEngine.Quaternion BulletHellShotSpawn::posQuat
	Quaternion_t4030073918  ___posQuat_13;
	// UnityEngine.Quaternion BulletHellShotSpawn::negQuat
	Quaternion_t4030073918  ___negQuat_14;
	// UnityEngine.Vector3 BulletHellShotSpawn::oldForward
	Vector3_t2243707580  ___oldForward_15;
	// System.Boolean BulletHellShotSpawn::generatedPattern
	bool ___generatedPattern_16;
	// System.Single BulletHellShotSpawn::delayBtwnShots
	float ___delayBtwnShots_17;
	// System.Collections.IEnumerator BulletHellShotSpawn::bulletHellRoutine
	Il2CppObject * ___bulletHellRoutine_18;

public:
	inline static int32_t get_offset_of_bulletHellProjectile_4() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___bulletHellProjectile_4)); }
	inline GameObject_t1756533147 * get_bulletHellProjectile_4() const { return ___bulletHellProjectile_4; }
	inline GameObject_t1756533147 ** get_address_of_bulletHellProjectile_4() { return &___bulletHellProjectile_4; }
	inline void set_bulletHellProjectile_4(GameObject_t1756533147 * value)
	{
		___bulletHellProjectile_4 = value;
		Il2CppCodeGenWriteBarrier(&___bulletHellProjectile_4, value);
	}

	inline static int32_t get_offset_of_bulletHellPatternGenerator_5() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___bulletHellPatternGenerator_5)); }
	inline BulletHellPatternGenerator_t1973225052 * get_bulletHellPatternGenerator_5() const { return ___bulletHellPatternGenerator_5; }
	inline BulletHellPatternGenerator_t1973225052 ** get_address_of_bulletHellPatternGenerator_5() { return &___bulletHellPatternGenerator_5; }
	inline void set_bulletHellPatternGenerator_5(BulletHellPatternGenerator_t1973225052 * value)
	{
		___bulletHellPatternGenerator_5 = value;
		Il2CppCodeGenWriteBarrier(&___bulletHellPatternGenerator_5, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_6() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___rotationSpeed_6)); }
	inline float get_rotationSpeed_6() const { return ___rotationSpeed_6; }
	inline float* get_address_of_rotationSpeed_6() { return &___rotationSpeed_6; }
	inline void set_rotationSpeed_6(float value)
	{
		___rotationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_numRotations_7() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___numRotations_7)); }
	inline int32_t get_numRotations_7() const { return ___numRotations_7; }
	inline int32_t* get_address_of_numRotations_7() { return &___numRotations_7; }
	inline void set_numRotations_7(int32_t value)
	{
		___numRotations_7 = value;
	}

	inline static int32_t get_offset_of_isFirstRotation_8() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___isFirstRotation_8)); }
	inline bool get_isFirstRotation_8() const { return ___isFirstRotation_8; }
	inline bool* get_address_of_isFirstRotation_8() { return &___isFirstRotation_8; }
	inline void set_isFirstRotation_8(bool value)
	{
		___isFirstRotation_8 = value;
	}

	inline static int32_t get_offset_of_rotationAngle_9() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___rotationAngle_9)); }
	inline float get_rotationAngle_9() const { return ___rotationAngle_9; }
	inline float* get_address_of_rotationAngle_9() { return &___rotationAngle_9; }
	inline void set_rotationAngle_9(float value)
	{
		___rotationAngle_9 = value;
	}

	inline static int32_t get_offset_of_rotationAngleCopy_10() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___rotationAngleCopy_10)); }
	inline float get_rotationAngleCopy_10() const { return ___rotationAngleCopy_10; }
	inline float* get_address_of_rotationAngleCopy_10() { return &___rotationAngleCopy_10; }
	inline void set_rotationAngleCopy_10(float value)
	{
		___rotationAngleCopy_10 = value;
	}

	inline static int32_t get_offset_of_desiredRotation_11() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___desiredRotation_11)); }
	inline Quaternion_t4030073918  get_desiredRotation_11() const { return ___desiredRotation_11; }
	inline Quaternion_t4030073918 * get_address_of_desiredRotation_11() { return &___desiredRotation_11; }
	inline void set_desiredRotation_11(Quaternion_t4030073918  value)
	{
		___desiredRotation_11 = value;
	}

	inline static int32_t get_offset_of_currRotation_12() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___currRotation_12)); }
	inline Quaternion_t4030073918  get_currRotation_12() const { return ___currRotation_12; }
	inline Quaternion_t4030073918 * get_address_of_currRotation_12() { return &___currRotation_12; }
	inline void set_currRotation_12(Quaternion_t4030073918  value)
	{
		___currRotation_12 = value;
	}

	inline static int32_t get_offset_of_posQuat_13() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___posQuat_13)); }
	inline Quaternion_t4030073918  get_posQuat_13() const { return ___posQuat_13; }
	inline Quaternion_t4030073918 * get_address_of_posQuat_13() { return &___posQuat_13; }
	inline void set_posQuat_13(Quaternion_t4030073918  value)
	{
		___posQuat_13 = value;
	}

	inline static int32_t get_offset_of_negQuat_14() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___negQuat_14)); }
	inline Quaternion_t4030073918  get_negQuat_14() const { return ___negQuat_14; }
	inline Quaternion_t4030073918 * get_address_of_negQuat_14() { return &___negQuat_14; }
	inline void set_negQuat_14(Quaternion_t4030073918  value)
	{
		___negQuat_14 = value;
	}

	inline static int32_t get_offset_of_oldForward_15() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___oldForward_15)); }
	inline Vector3_t2243707580  get_oldForward_15() const { return ___oldForward_15; }
	inline Vector3_t2243707580 * get_address_of_oldForward_15() { return &___oldForward_15; }
	inline void set_oldForward_15(Vector3_t2243707580  value)
	{
		___oldForward_15 = value;
	}

	inline static int32_t get_offset_of_generatedPattern_16() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___generatedPattern_16)); }
	inline bool get_generatedPattern_16() const { return ___generatedPattern_16; }
	inline bool* get_address_of_generatedPattern_16() { return &___generatedPattern_16; }
	inline void set_generatedPattern_16(bool value)
	{
		___generatedPattern_16 = value;
	}

	inline static int32_t get_offset_of_delayBtwnShots_17() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___delayBtwnShots_17)); }
	inline float get_delayBtwnShots_17() const { return ___delayBtwnShots_17; }
	inline float* get_address_of_delayBtwnShots_17() { return &___delayBtwnShots_17; }
	inline void set_delayBtwnShots_17(float value)
	{
		___delayBtwnShots_17 = value;
	}

	inline static int32_t get_offset_of_bulletHellRoutine_18() { return static_cast<int32_t>(offsetof(BulletHellShotSpawn_t1128810710, ___bulletHellRoutine_18)); }
	inline Il2CppObject * get_bulletHellRoutine_18() const { return ___bulletHellRoutine_18; }
	inline Il2CppObject ** get_address_of_bulletHellRoutine_18() { return &___bulletHellRoutine_18; }
	inline void set_bulletHellRoutine_18(Il2CppObject * value)
	{
		___bulletHellRoutine_18 = value;
		Il2CppCodeGenWriteBarrier(&___bulletHellRoutine_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
