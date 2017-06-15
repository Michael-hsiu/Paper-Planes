#pragma once

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
// InputManager
struct InputManager_t1610719423;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputManager
struct  InputManager_t1610719423  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InputManager::inputComponent
	GameObject_t1756533147 * ___inputComponent_2;

public:
	inline static int32_t get_offset_of_inputComponent_2() { return static_cast<int32_t>(offsetof(InputManager_t1610719423, ___inputComponent_2)); }
	inline GameObject_t1756533147 * get_inputComponent_2() const { return ___inputComponent_2; }
	inline GameObject_t1756533147 ** get_address_of_inputComponent_2() { return &___inputComponent_2; }
	inline void set_inputComponent_2(GameObject_t1756533147 * value)
	{
		___inputComponent_2 = value;
		Il2CppCodeGenWriteBarrier(&___inputComponent_2, value);
	}
};

struct InputManager_t1610719423_StaticFields
{
public:
	// InputManager InputManager::instance
	InputManager_t1610719423 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(InputManager_t1610719423_StaticFields, ___instance_3)); }
	inline InputManager_t1610719423 * get_instance_3() const { return ___instance_3; }
	inline InputManager_t1610719423 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(InputManager_t1610719423 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
