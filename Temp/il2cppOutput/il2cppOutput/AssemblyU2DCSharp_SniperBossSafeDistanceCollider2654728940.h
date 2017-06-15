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
// SniperBoss
struct SniperBoss_t228994654;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SniperBossSafeDistanceCollider
struct  SniperBossSafeDistanceCollider_t2654728940  : public MonoBehaviour_t1158329972
{
public:
	// SniperBossMS SniperBossSafeDistanceCollider::moveState
	SniperBossMS_t1623985390 * ___moveState_2;
	// SniperBoss SniperBossSafeDistanceCollider::sniperBoss
	SniperBoss_t228994654 * ___sniperBoss_3;

public:
	inline static int32_t get_offset_of_moveState_2() { return static_cast<int32_t>(offsetof(SniperBossSafeDistanceCollider_t2654728940, ___moveState_2)); }
	inline SniperBossMS_t1623985390 * get_moveState_2() const { return ___moveState_2; }
	inline SniperBossMS_t1623985390 ** get_address_of_moveState_2() { return &___moveState_2; }
	inline void set_moveState_2(SniperBossMS_t1623985390 * value)
	{
		___moveState_2 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_2, value);
	}

	inline static int32_t get_offset_of_sniperBoss_3() { return static_cast<int32_t>(offsetof(SniperBossSafeDistanceCollider_t2654728940, ___sniperBoss_3)); }
	inline SniperBoss_t228994654 * get_sniperBoss_3() const { return ___sniperBoss_3; }
	inline SniperBoss_t228994654 ** get_address_of_sniperBoss_3() { return &___sniperBoss_3; }
	inline void set_sniperBoss_3(SniperBoss_t228994654 * value)
	{
		___sniperBoss_3 = value;
		Il2CppCodeGenWriteBarrier(&___sniperBoss_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
