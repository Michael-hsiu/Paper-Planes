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
// PoolObject
struct PoolObject_t202793199;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PoolManager/ObjectInstance
struct  ObjectInstance_t624909858  : public Il2CppObject
{
public:
	// UnityEngine.GameObject PoolManager/ObjectInstance::gameObject
	GameObject_t1756533147 * ___gameObject_0;
	// UnityEngine.Transform PoolManager/ObjectInstance::transform
	Transform_t3275118058 * ___transform_1;
	// System.Boolean PoolManager/ObjectInstance::hasPoolObjectComponent
	bool ___hasPoolObjectComponent_2;
	// PoolObject PoolManager/ObjectInstance::poolObjectScript
	PoolObject_t202793199 * ___poolObjectScript_3;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(ObjectInstance_t624909858, ___gameObject_0)); }
	inline GameObject_t1756533147 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t1756533147 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_0, value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ObjectInstance_t624909858, ___transform_1)); }
	inline Transform_t3275118058 * get_transform_1() const { return ___transform_1; }
	inline Transform_t3275118058 ** get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Transform_t3275118058 * value)
	{
		___transform_1 = value;
		Il2CppCodeGenWriteBarrier(&___transform_1, value);
	}

	inline static int32_t get_offset_of_hasPoolObjectComponent_2() { return static_cast<int32_t>(offsetof(ObjectInstance_t624909858, ___hasPoolObjectComponent_2)); }
	inline bool get_hasPoolObjectComponent_2() const { return ___hasPoolObjectComponent_2; }
	inline bool* get_address_of_hasPoolObjectComponent_2() { return &___hasPoolObjectComponent_2; }
	inline void set_hasPoolObjectComponent_2(bool value)
	{
		___hasPoolObjectComponent_2 = value;
	}

	inline static int32_t get_offset_of_poolObjectScript_3() { return static_cast<int32_t>(offsetof(ObjectInstance_t624909858, ___poolObjectScript_3)); }
	inline PoolObject_t202793199 * get_poolObjectScript_3() const { return ___poolObjectScript_3; }
	inline PoolObject_t202793199 ** get_address_of_poolObjectScript_3() { return &___poolObjectScript_3; }
	inline void set_poolObjectScript_3(PoolObject_t202793199 * value)
	{
		___poolObjectScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___poolObjectScript_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
