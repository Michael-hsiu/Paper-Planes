#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// Ship
struct Ship_t1116303770;
// EnemySpawnTemplate
struct EnemySpawnTemplate_t4133663547;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawnTemplate/<WaitAndFire>c__Iterator0
struct  U3CWaitAndFireU3Ec__Iterator0_t2546928863  : public Il2CppObject
{
public:
	// UnityEngine.GameObject EnemySpawnTemplate/<WaitAndFire>c__Iterator0::<player>__0
	GameObject_t1756533147 * ___U3CplayerU3E__0_0;
	// UnityEngine.Vector3 EnemySpawnTemplate/<WaitAndFire>c__Iterator0::<target>__1
	Vector3_t2243707580  ___U3CtargetU3E__1_1;
	// UnityEngine.Vector3 EnemySpawnTemplate/<WaitAndFire>c__Iterator0::<randomPos>__2
	Vector3_t2243707580  ___U3CrandomPosU3E__2_2;
	// Ship EnemySpawnTemplate/<WaitAndFire>c__Iterator0::<spawnedEnemy>__2
	Ship_t1116303770 * ___U3CspawnedEnemyU3E__2_3;
	// UnityEngine.Vector3 EnemySpawnTemplate/<WaitAndFire>c__Iterator0::<dist>__2
	Vector3_t2243707580  ___U3CdistU3E__2_4;
	// System.Single EnemySpawnTemplate/<WaitAndFire>c__Iterator0::<zAngle>__2
	float ___U3CzAngleU3E__2_5;
	// UnityEngine.Quaternion EnemySpawnTemplate/<WaitAndFire>c__Iterator0::<desiredRotation>__2
	Quaternion_t4030073918  ___U3CdesiredRotationU3E__2_6;
	// System.Single EnemySpawnTemplate/<WaitAndFire>c__Iterator0::spawnDelay
	float ___spawnDelay_7;
	// EnemySpawnTemplate EnemySpawnTemplate/<WaitAndFire>c__Iterator0::$this
	EnemySpawnTemplate_t4133663547 * ___U24this_8;
	// System.Object EnemySpawnTemplate/<WaitAndFire>c__Iterator0::$current
	Il2CppObject * ___U24current_9;
	// System.Boolean EnemySpawnTemplate/<WaitAndFire>c__Iterator0::$disposing
	bool ___U24disposing_10;
	// System.Int32 EnemySpawnTemplate/<WaitAndFire>c__Iterator0::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_U3CplayerU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U3CplayerU3E__0_0)); }
	inline GameObject_t1756533147 * get_U3CplayerU3E__0_0() const { return ___U3CplayerU3E__0_0; }
	inline GameObject_t1756533147 ** get_address_of_U3CplayerU3E__0_0() { return &___U3CplayerU3E__0_0; }
	inline void set_U3CplayerU3E__0_0(GameObject_t1756533147 * value)
	{
		___U3CplayerU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CtargetU3E__1_1() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U3CtargetU3E__1_1)); }
	inline Vector3_t2243707580  get_U3CtargetU3E__1_1() const { return ___U3CtargetU3E__1_1; }
	inline Vector3_t2243707580 * get_address_of_U3CtargetU3E__1_1() { return &___U3CtargetU3E__1_1; }
	inline void set_U3CtargetU3E__1_1(Vector3_t2243707580  value)
	{
		___U3CtargetU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CrandomPosU3E__2_2() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U3CrandomPosU3E__2_2)); }
	inline Vector3_t2243707580  get_U3CrandomPosU3E__2_2() const { return ___U3CrandomPosU3E__2_2; }
	inline Vector3_t2243707580 * get_address_of_U3CrandomPosU3E__2_2() { return &___U3CrandomPosU3E__2_2; }
	inline void set_U3CrandomPosU3E__2_2(Vector3_t2243707580  value)
	{
		___U3CrandomPosU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CspawnedEnemyU3E__2_3() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U3CspawnedEnemyU3E__2_3)); }
	inline Ship_t1116303770 * get_U3CspawnedEnemyU3E__2_3() const { return ___U3CspawnedEnemyU3E__2_3; }
	inline Ship_t1116303770 ** get_address_of_U3CspawnedEnemyU3E__2_3() { return &___U3CspawnedEnemyU3E__2_3; }
	inline void set_U3CspawnedEnemyU3E__2_3(Ship_t1116303770 * value)
	{
		___U3CspawnedEnemyU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CspawnedEnemyU3E__2_3, value);
	}

	inline static int32_t get_offset_of_U3CdistU3E__2_4() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U3CdistU3E__2_4)); }
	inline Vector3_t2243707580  get_U3CdistU3E__2_4() const { return ___U3CdistU3E__2_4; }
	inline Vector3_t2243707580 * get_address_of_U3CdistU3E__2_4() { return &___U3CdistU3E__2_4; }
	inline void set_U3CdistU3E__2_4(Vector3_t2243707580  value)
	{
		___U3CdistU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CzAngleU3E__2_5() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U3CzAngleU3E__2_5)); }
	inline float get_U3CzAngleU3E__2_5() const { return ___U3CzAngleU3E__2_5; }
	inline float* get_address_of_U3CzAngleU3E__2_5() { return &___U3CzAngleU3E__2_5; }
	inline void set_U3CzAngleU3E__2_5(float value)
	{
		___U3CzAngleU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CdesiredRotationU3E__2_6() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U3CdesiredRotationU3E__2_6)); }
	inline Quaternion_t4030073918  get_U3CdesiredRotationU3E__2_6() const { return ___U3CdesiredRotationU3E__2_6; }
	inline Quaternion_t4030073918 * get_address_of_U3CdesiredRotationU3E__2_6() { return &___U3CdesiredRotationU3E__2_6; }
	inline void set_U3CdesiredRotationU3E__2_6(Quaternion_t4030073918  value)
	{
		___U3CdesiredRotationU3E__2_6 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_7() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___spawnDelay_7)); }
	inline float get_spawnDelay_7() const { return ___spawnDelay_7; }
	inline float* get_address_of_spawnDelay_7() { return &___spawnDelay_7; }
	inline void set_spawnDelay_7(float value)
	{
		___spawnDelay_7 = value;
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U24this_8)); }
	inline EnemySpawnTemplate_t4133663547 * get_U24this_8() const { return ___U24this_8; }
	inline EnemySpawnTemplate_t4133663547 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(EnemySpawnTemplate_t4133663547 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_8, value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U24current_9)); }
	inline Il2CppObject * get_U24current_9() const { return ___U24current_9; }
	inline Il2CppObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(Il2CppObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_9, value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t2546928863, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
