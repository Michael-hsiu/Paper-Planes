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
// BurstRushManager
struct BurstRushManager_t1694550503;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BurstRushManager
struct  BurstRushManager_t1694550503  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BurstRushManager::burstChargeColliders
	GameObject_t1756533147 * ___burstChargeColliders_2;
	// UnityEngine.GameObject BurstRushManager::burstRushColliders
	GameObject_t1756533147 * ___burstRushColliders_3;

public:
	inline static int32_t get_offset_of_burstChargeColliders_2() { return static_cast<int32_t>(offsetof(BurstRushManager_t1694550503, ___burstChargeColliders_2)); }
	inline GameObject_t1756533147 * get_burstChargeColliders_2() const { return ___burstChargeColliders_2; }
	inline GameObject_t1756533147 ** get_address_of_burstChargeColliders_2() { return &___burstChargeColliders_2; }
	inline void set_burstChargeColliders_2(GameObject_t1756533147 * value)
	{
		___burstChargeColliders_2 = value;
		Il2CppCodeGenWriteBarrier(&___burstChargeColliders_2, value);
	}

	inline static int32_t get_offset_of_burstRushColliders_3() { return static_cast<int32_t>(offsetof(BurstRushManager_t1694550503, ___burstRushColliders_3)); }
	inline GameObject_t1756533147 * get_burstRushColliders_3() const { return ___burstRushColliders_3; }
	inline GameObject_t1756533147 ** get_address_of_burstRushColliders_3() { return &___burstRushColliders_3; }
	inline void set_burstRushColliders_3(GameObject_t1756533147 * value)
	{
		___burstRushColliders_3 = value;
		Il2CppCodeGenWriteBarrier(&___burstRushColliders_3, value);
	}
};

struct BurstRushManager_t1694550503_StaticFields
{
public:
	// BurstRushManager BurstRushManager::instance
	BurstRushManager_t1694550503 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(BurstRushManager_t1694550503_StaticFields, ___instance_4)); }
	inline BurstRushManager_t1694550503 * get_instance_4() const { return ___instance_4; }
	inline BurstRushManager_t1694550503 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(BurstRushManager_t1694550503 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
