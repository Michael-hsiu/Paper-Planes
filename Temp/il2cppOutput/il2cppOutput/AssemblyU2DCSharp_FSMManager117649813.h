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
// FSMManager
struct FSMManager_t117649813;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FSMManager
struct  FSMManager_t117649813  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FSMManager::player
	GameObject_t1756533147 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(FSMManager_t117649813, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

struct FSMManager_t117649813_StaticFields
{
public:
	// FSMManager FSMManager::instance
	FSMManager_t117649813 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(FSMManager_t117649813_StaticFields, ___instance_3)); }
	inline FSMManager_t117649813 * get_instance_3() const { return ___instance_3; }
	inline FSMManager_t117649813 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(FSMManager_t117649813 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
