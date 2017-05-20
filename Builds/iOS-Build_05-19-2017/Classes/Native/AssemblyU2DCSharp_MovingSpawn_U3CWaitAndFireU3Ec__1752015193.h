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
// MovingSpawn
struct MovingSpawn_t1342199589;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_EnemyType756400788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingSpawn/<WaitAndFire>c__Iterator0
struct  U3CWaitAndFireU3Ec__Iterator0_t1752015193  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 MovingSpawn/<WaitAndFire>c__Iterator0::<target>__0
	Vector3_t2243707580  ___U3CtargetU3E__0_0;
	// EnemyType MovingSpawn/<WaitAndFire>c__Iterator0::<randType>__1
	int32_t ___U3CrandTypeU3E__1_1;
	// UnityEngine.GameObject MovingSpawn/<WaitAndFire>c__Iterator0::<prefabRef>__2
	GameObject_t1756533147 * ___U3CprefabRefU3E__2_2;
	// System.Single MovingSpawn/<WaitAndFire>c__Iterator0::spawnDelay
	float ___spawnDelay_3;
	// MovingSpawn MovingSpawn/<WaitAndFire>c__Iterator0::$this
	MovingSpawn_t1342199589 * ___U24this_4;
	// System.Object MovingSpawn/<WaitAndFire>c__Iterator0::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean MovingSpawn/<WaitAndFire>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 MovingSpawn/<WaitAndFire>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtargetU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t1752015193, ___U3CtargetU3E__0_0)); }
	inline Vector3_t2243707580  get_U3CtargetU3E__0_0() const { return ___U3CtargetU3E__0_0; }
	inline Vector3_t2243707580 * get_address_of_U3CtargetU3E__0_0() { return &___U3CtargetU3E__0_0; }
	inline void set_U3CtargetU3E__0_0(Vector3_t2243707580  value)
	{
		___U3CtargetU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CrandTypeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t1752015193, ___U3CrandTypeU3E__1_1)); }
	inline int32_t get_U3CrandTypeU3E__1_1() const { return ___U3CrandTypeU3E__1_1; }
	inline int32_t* get_address_of_U3CrandTypeU3E__1_1() { return &___U3CrandTypeU3E__1_1; }
	inline void set_U3CrandTypeU3E__1_1(int32_t value)
	{
		___U3CrandTypeU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CprefabRefU3E__2_2() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t1752015193, ___U3CprefabRefU3E__2_2)); }
	inline GameObject_t1756533147 * get_U3CprefabRefU3E__2_2() const { return ___U3CprefabRefU3E__2_2; }
	inline GameObject_t1756533147 ** get_address_of_U3CprefabRefU3E__2_2() { return &___U3CprefabRefU3E__2_2; }
	inline void set_U3CprefabRefU3E__2_2(GameObject_t1756533147 * value)
	{
		___U3CprefabRefU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CprefabRefU3E__2_2, value);
	}

	inline static int32_t get_offset_of_spawnDelay_3() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t1752015193, ___spawnDelay_3)); }
	inline float get_spawnDelay_3() const { return ___spawnDelay_3; }
	inline float* get_address_of_spawnDelay_3() { return &___spawnDelay_3; }
	inline void set_spawnDelay_3(float value)
	{
		___spawnDelay_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t1752015193, ___U24this_4)); }
	inline MovingSpawn_t1342199589 * get_U24this_4() const { return ___U24this_4; }
	inline MovingSpawn_t1342199589 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(MovingSpawn_t1342199589 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_4, value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t1752015193, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t1752015193, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CWaitAndFireU3Ec__Iterator0_t1752015193, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
