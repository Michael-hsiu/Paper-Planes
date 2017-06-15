#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PoolObject202793199.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject>
struct Func_2_t3035764824;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mine
struct  Mine_t2729441277  : public PoolObject_t202793199
{
public:
	// UnityEngine.GameObject Mine::explosion
	GameObject_t1756533147 * ___explosion_2;
	// System.Single Mine::rotationFactor
	float ___rotationFactor_3;
	// System.Int32 Mine::explosionDmg
	int32_t ___explosionDmg_4;
	// System.Single Mine::dmgRange
	float ___dmgRange_5;
	// System.Collections.IEnumerator Mine::cr
	Il2CppObject * ___cr_6;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(Mine_t2729441277, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_rotationFactor_3() { return static_cast<int32_t>(offsetof(Mine_t2729441277, ___rotationFactor_3)); }
	inline float get_rotationFactor_3() const { return ___rotationFactor_3; }
	inline float* get_address_of_rotationFactor_3() { return &___rotationFactor_3; }
	inline void set_rotationFactor_3(float value)
	{
		___rotationFactor_3 = value;
	}

	inline static int32_t get_offset_of_explosionDmg_4() { return static_cast<int32_t>(offsetof(Mine_t2729441277, ___explosionDmg_4)); }
	inline int32_t get_explosionDmg_4() const { return ___explosionDmg_4; }
	inline int32_t* get_address_of_explosionDmg_4() { return &___explosionDmg_4; }
	inline void set_explosionDmg_4(int32_t value)
	{
		___explosionDmg_4 = value;
	}

	inline static int32_t get_offset_of_dmgRange_5() { return static_cast<int32_t>(offsetof(Mine_t2729441277, ___dmgRange_5)); }
	inline float get_dmgRange_5() const { return ___dmgRange_5; }
	inline float* get_address_of_dmgRange_5() { return &___dmgRange_5; }
	inline void set_dmgRange_5(float value)
	{
		___dmgRange_5 = value;
	}

	inline static int32_t get_offset_of_cr_6() { return static_cast<int32_t>(offsetof(Mine_t2729441277, ___cr_6)); }
	inline Il2CppObject * get_cr_6() const { return ___cr_6; }
	inline Il2CppObject ** get_address_of_cr_6() { return &___cr_6; }
	inline void set_cr_6(Il2CppObject * value)
	{
		___cr_6 = value;
		Il2CppCodeGenWriteBarrier(&___cr_6, value);
	}
};

struct Mine_t2729441277_StaticFields
{
public:
	// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject> Mine::<>f__am$cache0
	Func_2_t3035764824 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(Mine_t2729441277_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Func_2_t3035764824 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Func_2_t3035764824 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Func_2_t3035764824 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
