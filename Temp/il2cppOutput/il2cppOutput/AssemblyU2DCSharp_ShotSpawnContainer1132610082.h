#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_PlayerShip_Weapons2322246681.h"

// System.Collections.Generic.List`1<ShotSpawn>
struct List_1_t3173386001;
// Powerup
struct Powerup_t2065360972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShotSpawnContainer
struct  ShotSpawnContainer_t1132610082  : public MonoBehaviour_t1158329972
{
public:
	// PlayerShip/Weapons ShotSpawnContainer::firingPowerupID
	int32_t ___firingPowerupID_2;
	// System.Collections.Generic.List`1<ShotSpawn> ShotSpawnContainer::shotSpawnList
	List_1_t3173386001 * ___shotSpawnList_3;
	// Powerup ShotSpawnContainer::activePowerup
	Powerup_t2065360972 * ___activePowerup_4;

public:
	inline static int32_t get_offset_of_firingPowerupID_2() { return static_cast<int32_t>(offsetof(ShotSpawnContainer_t1132610082, ___firingPowerupID_2)); }
	inline int32_t get_firingPowerupID_2() const { return ___firingPowerupID_2; }
	inline int32_t* get_address_of_firingPowerupID_2() { return &___firingPowerupID_2; }
	inline void set_firingPowerupID_2(int32_t value)
	{
		___firingPowerupID_2 = value;
	}

	inline static int32_t get_offset_of_shotSpawnList_3() { return static_cast<int32_t>(offsetof(ShotSpawnContainer_t1132610082, ___shotSpawnList_3)); }
	inline List_1_t3173386001 * get_shotSpawnList_3() const { return ___shotSpawnList_3; }
	inline List_1_t3173386001 ** get_address_of_shotSpawnList_3() { return &___shotSpawnList_3; }
	inline void set_shotSpawnList_3(List_1_t3173386001 * value)
	{
		___shotSpawnList_3 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawnList_3, value);
	}

	inline static int32_t get_offset_of_activePowerup_4() { return static_cast<int32_t>(offsetof(ShotSpawnContainer_t1132610082, ___activePowerup_4)); }
	inline Powerup_t2065360972 * get_activePowerup_4() const { return ___activePowerup_4; }
	inline Powerup_t2065360972 ** get_address_of_activePowerup_4() { return &___activePowerup_4; }
	inline void set_activePowerup_4(Powerup_t2065360972 * value)
	{
		___activePowerup_4 = value;
		Il2CppCodeGenWriteBarrier(&___activePowerup_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
