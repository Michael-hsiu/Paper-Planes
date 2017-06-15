#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PoolObject202793199.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DashPowerup
struct  DashPowerup_t3036178112  : public PoolObject_t202793199
{
public:
	// UnityEngine.GameObject DashPowerup::player
	GameObject_t1756533147 * ___player_2;
	// System.Boolean DashPowerup::isVisible
	bool ___isVisible_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(DashPowerup_t3036178112, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_isVisible_3() { return static_cast<int32_t>(offsetof(DashPowerup_t3036178112, ___isVisible_3)); }
	inline bool get_isVisible_3() const { return ___isVisible_3; }
	inline bool* get_address_of_isVisible_3() { return &___isVisible_3; }
	inline void set_isVisible_3(bool value)
	{
		___isVisible_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
