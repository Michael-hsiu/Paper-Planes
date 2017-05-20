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
// HomingMissileManager
struct HomingMissileManager_t2295200215;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomingMissileManager
struct  HomingMissileManager_t2295200215  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject HomingMissileManager::missileSpawn
	GameObject_t1756533147 * ___missileSpawn_2;
	// UnityEngine.GameObject HomingMissileManager::missile
	GameObject_t1756533147 * ___missile_3;
	// UnityEngine.GameObject HomingMissileManager::player
	GameObject_t1756533147 * ___player_4;

public:
	inline static int32_t get_offset_of_missileSpawn_2() { return static_cast<int32_t>(offsetof(HomingMissileManager_t2295200215, ___missileSpawn_2)); }
	inline GameObject_t1756533147 * get_missileSpawn_2() const { return ___missileSpawn_2; }
	inline GameObject_t1756533147 ** get_address_of_missileSpawn_2() { return &___missileSpawn_2; }
	inline void set_missileSpawn_2(GameObject_t1756533147 * value)
	{
		___missileSpawn_2 = value;
		Il2CppCodeGenWriteBarrier(&___missileSpawn_2, value);
	}

	inline static int32_t get_offset_of_missile_3() { return static_cast<int32_t>(offsetof(HomingMissileManager_t2295200215, ___missile_3)); }
	inline GameObject_t1756533147 * get_missile_3() const { return ___missile_3; }
	inline GameObject_t1756533147 ** get_address_of_missile_3() { return &___missile_3; }
	inline void set_missile_3(GameObject_t1756533147 * value)
	{
		___missile_3 = value;
		Il2CppCodeGenWriteBarrier(&___missile_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(HomingMissileManager_t2295200215, ___player_4)); }
	inline GameObject_t1756533147 * get_player_4() const { return ___player_4; }
	inline GameObject_t1756533147 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1756533147 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}
};

struct HomingMissileManager_t2295200215_StaticFields
{
public:
	// HomingMissileManager HomingMissileManager::instance
	HomingMissileManager_t2295200215 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(HomingMissileManager_t2295200215_StaticFields, ___instance_5)); }
	inline HomingMissileManager_t2295200215 * get_instance_5() const { return ___instance_5; }
	inline HomingMissileManager_t2295200215 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(HomingMissileManager_t2295200215 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
