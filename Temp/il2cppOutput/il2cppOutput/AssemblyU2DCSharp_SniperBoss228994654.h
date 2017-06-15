#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Ship1116303770.h"

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SniperBoss
struct  SniperBoss_t228994654  : public Ship_t1116303770
{
public:
	// System.Single SniperBoss::sqDist
	float ___sqDist_20;
	// System.Single SniperBoss::spawnDelay
	float ___spawnDelay_21;
	// System.Single SniperBoss::safetyDist
	float ___safetyDist_22;
	// System.Single SniperBoss::teleDelay
	float ___teleDelay_23;
	// System.Single SniperBoss::teleCooldown
	float ___teleCooldown_24;
	// System.Single SniperBoss::postTeleDelay
	float ___postTeleDelay_25;
	// System.Boolean SniperBoss::teleportActive
	bool ___teleportActive_26;
	// System.Single SniperBoss::nextAttackTime
	float ___nextAttackTime_27;
	// System.Boolean SniperBoss::explAtkActive
	bool ___explAtkActive_28;
	// System.Collections.IEnumerator SniperBoss::teleRoutine
	Il2CppObject * ___teleRoutine_29;
	// System.Collections.IEnumerator SniperBoss::laserRoutine
	Il2CppObject * ___laserRoutine_30;

public:
	inline static int32_t get_offset_of_sqDist_20() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___sqDist_20)); }
	inline float get_sqDist_20() const { return ___sqDist_20; }
	inline float* get_address_of_sqDist_20() { return &___sqDist_20; }
	inline void set_sqDist_20(float value)
	{
		___sqDist_20 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_21() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___spawnDelay_21)); }
	inline float get_spawnDelay_21() const { return ___spawnDelay_21; }
	inline float* get_address_of_spawnDelay_21() { return &___spawnDelay_21; }
	inline void set_spawnDelay_21(float value)
	{
		___spawnDelay_21 = value;
	}

	inline static int32_t get_offset_of_safetyDist_22() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___safetyDist_22)); }
	inline float get_safetyDist_22() const { return ___safetyDist_22; }
	inline float* get_address_of_safetyDist_22() { return &___safetyDist_22; }
	inline void set_safetyDist_22(float value)
	{
		___safetyDist_22 = value;
	}

	inline static int32_t get_offset_of_teleDelay_23() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleDelay_23)); }
	inline float get_teleDelay_23() const { return ___teleDelay_23; }
	inline float* get_address_of_teleDelay_23() { return &___teleDelay_23; }
	inline void set_teleDelay_23(float value)
	{
		___teleDelay_23 = value;
	}

	inline static int32_t get_offset_of_teleCooldown_24() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleCooldown_24)); }
	inline float get_teleCooldown_24() const { return ___teleCooldown_24; }
	inline float* get_address_of_teleCooldown_24() { return &___teleCooldown_24; }
	inline void set_teleCooldown_24(float value)
	{
		___teleCooldown_24 = value;
	}

	inline static int32_t get_offset_of_postTeleDelay_25() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___postTeleDelay_25)); }
	inline float get_postTeleDelay_25() const { return ___postTeleDelay_25; }
	inline float* get_address_of_postTeleDelay_25() { return &___postTeleDelay_25; }
	inline void set_postTeleDelay_25(float value)
	{
		___postTeleDelay_25 = value;
	}

	inline static int32_t get_offset_of_teleportActive_26() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleportActive_26)); }
	inline bool get_teleportActive_26() const { return ___teleportActive_26; }
	inline bool* get_address_of_teleportActive_26() { return &___teleportActive_26; }
	inline void set_teleportActive_26(bool value)
	{
		___teleportActive_26 = value;
	}

	inline static int32_t get_offset_of_nextAttackTime_27() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___nextAttackTime_27)); }
	inline float get_nextAttackTime_27() const { return ___nextAttackTime_27; }
	inline float* get_address_of_nextAttackTime_27() { return &___nextAttackTime_27; }
	inline void set_nextAttackTime_27(float value)
	{
		___nextAttackTime_27 = value;
	}

	inline static int32_t get_offset_of_explAtkActive_28() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___explAtkActive_28)); }
	inline bool get_explAtkActive_28() const { return ___explAtkActive_28; }
	inline bool* get_address_of_explAtkActive_28() { return &___explAtkActive_28; }
	inline void set_explAtkActive_28(bool value)
	{
		___explAtkActive_28 = value;
	}

	inline static int32_t get_offset_of_teleRoutine_29() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleRoutine_29)); }
	inline Il2CppObject * get_teleRoutine_29() const { return ___teleRoutine_29; }
	inline Il2CppObject ** get_address_of_teleRoutine_29() { return &___teleRoutine_29; }
	inline void set_teleRoutine_29(Il2CppObject * value)
	{
		___teleRoutine_29 = value;
		Il2CppCodeGenWriteBarrier(&___teleRoutine_29, value);
	}

	inline static int32_t get_offset_of_laserRoutine_30() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___laserRoutine_30)); }
	inline Il2CppObject * get_laserRoutine_30() const { return ___laserRoutine_30; }
	inline Il2CppObject ** get_address_of_laserRoutine_30() { return &___laserRoutine_30; }
	inline void set_laserRoutine_30(Il2CppObject * value)
	{
		___laserRoutine_30 = value;
		Il2CppCodeGenWriteBarrier(&___laserRoutine_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
