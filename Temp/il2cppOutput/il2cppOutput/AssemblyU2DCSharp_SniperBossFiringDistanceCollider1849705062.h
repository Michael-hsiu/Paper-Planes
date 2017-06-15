#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SniperBossMS
struct SniperBossMS_t1623985390;
// UnityEngine.SphereCollider
struct SphereCollider_t1662511355;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SniperBossFiringDistanceCollider
struct  SniperBossFiringDistanceCollider_t1849705062  : public MonoBehaviour_t1158329972
{
public:
	// SniperBossMS SniperBossFiringDistanceCollider::moveState
	SniperBossMS_t1623985390 * ___moveState_2;
	// UnityEngine.SphereCollider SniperBossFiringDistanceCollider::capsuleCollider
	SphereCollider_t1662511355 * ___capsuleCollider_3;

public:
	inline static int32_t get_offset_of_moveState_2() { return static_cast<int32_t>(offsetof(SniperBossFiringDistanceCollider_t1849705062, ___moveState_2)); }
	inline SniperBossMS_t1623985390 * get_moveState_2() const { return ___moveState_2; }
	inline SniperBossMS_t1623985390 ** get_address_of_moveState_2() { return &___moveState_2; }
	inline void set_moveState_2(SniperBossMS_t1623985390 * value)
	{
		___moveState_2 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_2, value);
	}

	inline static int32_t get_offset_of_capsuleCollider_3() { return static_cast<int32_t>(offsetof(SniperBossFiringDistanceCollider_t1849705062, ___capsuleCollider_3)); }
	inline SphereCollider_t1662511355 * get_capsuleCollider_3() const { return ___capsuleCollider_3; }
	inline SphereCollider_t1662511355 ** get_address_of_capsuleCollider_3() { return &___capsuleCollider_3; }
	inline void set_capsuleCollider_3(SphereCollider_t1662511355 * value)
	{
		___capsuleCollider_3 = value;
		Il2CppCodeGenWriteBarrier(&___capsuleCollider_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
