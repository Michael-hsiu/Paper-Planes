#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerShotSpawn
struct PlayerShotSpawn_t2770260632;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// HomingMissileScrObj
struct HomingMissileScrObj_t255876665;

#include "AssemblyU2DCSharp_Powerup2065360972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomingMissilePowerup
struct  HomingMissilePowerup_t3348687296  : public Powerup_t2065360972
{
public:
	// PlayerShotSpawn HomingMissilePowerup::missileSpawn
	PlayerShotSpawn_t2770260632 * ___missileSpawn_9;
	// UnityEngine.GameObject HomingMissilePowerup::missile
	GameObject_t1756533147 * ___missile_10;
	// HomingMissileScrObj HomingMissilePowerup::specPowerupData
	HomingMissileScrObj_t255876665 * ___specPowerupData_11;

public:
	inline static int32_t get_offset_of_missileSpawn_9() { return static_cast<int32_t>(offsetof(HomingMissilePowerup_t3348687296, ___missileSpawn_9)); }
	inline PlayerShotSpawn_t2770260632 * get_missileSpawn_9() const { return ___missileSpawn_9; }
	inline PlayerShotSpawn_t2770260632 ** get_address_of_missileSpawn_9() { return &___missileSpawn_9; }
	inline void set_missileSpawn_9(PlayerShotSpawn_t2770260632 * value)
	{
		___missileSpawn_9 = value;
		Il2CppCodeGenWriteBarrier(&___missileSpawn_9, value);
	}

	inline static int32_t get_offset_of_missile_10() { return static_cast<int32_t>(offsetof(HomingMissilePowerup_t3348687296, ___missile_10)); }
	inline GameObject_t1756533147 * get_missile_10() const { return ___missile_10; }
	inline GameObject_t1756533147 ** get_address_of_missile_10() { return &___missile_10; }
	inline void set_missile_10(GameObject_t1756533147 * value)
	{
		___missile_10 = value;
		Il2CppCodeGenWriteBarrier(&___missile_10, value);
	}

	inline static int32_t get_offset_of_specPowerupData_11() { return static_cast<int32_t>(offsetof(HomingMissilePowerup_t3348687296, ___specPowerupData_11)); }
	inline HomingMissileScrObj_t255876665 * get_specPowerupData_11() const { return ___specPowerupData_11; }
	inline HomingMissileScrObj_t255876665 ** get_address_of_specPowerupData_11() { return &___specPowerupData_11; }
	inline void set_specPowerupData_11(HomingMissileScrObj_t255876665 * value)
	{
		___specPowerupData_11 = value;
		Il2CppCodeGenWriteBarrier(&___specPowerupData_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
