#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InputManager
struct InputManager_t1610719423;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputManager
struct  InputManager_t1610719423  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct InputManager_t1610719423_StaticFields
{
public:
	// InputManager InputManager::instance
	InputManager_t1610719423 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(InputManager_t1610719423_StaticFields, ___instance_2)); }
	inline InputManager_t1610719423 * get_instance_2() const { return ___instance_2; }
	inline InputManager_t1610719423 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(InputManager_t1610719423 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
