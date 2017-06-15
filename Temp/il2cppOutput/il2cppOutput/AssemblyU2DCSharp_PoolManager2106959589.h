#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<PoolManager/ObjectInstance>>
struct Dictionary_2_t3747359624;
// PoolManager
struct PoolManager_t2106959589;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PoolManager
struct  PoolManager_t2106959589  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<PoolManager/ObjectInstance>> PoolManager::poolDictionary
	Dictionary_2_t3747359624 * ___poolDictionary_2;

public:
	inline static int32_t get_offset_of_poolDictionary_2() { return static_cast<int32_t>(offsetof(PoolManager_t2106959589, ___poolDictionary_2)); }
	inline Dictionary_2_t3747359624 * get_poolDictionary_2() const { return ___poolDictionary_2; }
	inline Dictionary_2_t3747359624 ** get_address_of_poolDictionary_2() { return &___poolDictionary_2; }
	inline void set_poolDictionary_2(Dictionary_2_t3747359624 * value)
	{
		___poolDictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&___poolDictionary_2, value);
	}
};

struct PoolManager_t2106959589_StaticFields
{
public:
	// PoolManager PoolManager::_instance
	PoolManager_t2106959589 * ____instance_3;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(PoolManager_t2106959589_StaticFields, ____instance_3)); }
	inline PoolManager_t2106959589 * get__instance_3() const { return ____instance_3; }
	inline PoolManager_t2106959589 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(PoolManager_t2106959589 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
