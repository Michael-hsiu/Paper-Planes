#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_DashState223559211.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DashAbility
struct  DashAbility_t1993643330  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DashAbility::player
	GameObject_t1756533147 * ___player_2;
	// DashState DashAbility::dashState
	int32_t ___dashState_3;
	// System.Single DashAbility::dashTimer
	float ___dashTimer_4;
	// System.Single DashAbility::maxDash
	float ___maxDash_5;
	// UnityEngine.Vector2 DashAbility::savedVelocity
	Vector2_t2243707579  ___savedVelocity_6;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(DashAbility_t1993643330, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_dashState_3() { return static_cast<int32_t>(offsetof(DashAbility_t1993643330, ___dashState_3)); }
	inline int32_t get_dashState_3() const { return ___dashState_3; }
	inline int32_t* get_address_of_dashState_3() { return &___dashState_3; }
	inline void set_dashState_3(int32_t value)
	{
		___dashState_3 = value;
	}

	inline static int32_t get_offset_of_dashTimer_4() { return static_cast<int32_t>(offsetof(DashAbility_t1993643330, ___dashTimer_4)); }
	inline float get_dashTimer_4() const { return ___dashTimer_4; }
	inline float* get_address_of_dashTimer_4() { return &___dashTimer_4; }
	inline void set_dashTimer_4(float value)
	{
		___dashTimer_4 = value;
	}

	inline static int32_t get_offset_of_maxDash_5() { return static_cast<int32_t>(offsetof(DashAbility_t1993643330, ___maxDash_5)); }
	inline float get_maxDash_5() const { return ___maxDash_5; }
	inline float* get_address_of_maxDash_5() { return &___maxDash_5; }
	inline void set_maxDash_5(float value)
	{
		___maxDash_5 = value;
	}

	inline static int32_t get_offset_of_savedVelocity_6() { return static_cast<int32_t>(offsetof(DashAbility_t1993643330, ___savedVelocity_6)); }
	inline Vector2_t2243707579  get_savedVelocity_6() const { return ___savedVelocity_6; }
	inline Vector2_t2243707579 * get_address_of_savedVelocity_6() { return &___savedVelocity_6; }
	inline void set_savedVelocity_6(Vector2_t2243707579  value)
	{
		___savedVelocity_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
