#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "AssemblyU2DCSharp_Ship1116303770.h"

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
	float ___sqDist_15;
	// System.Single SniperBoss::spawnDelay
	float ___spawnDelay_16;
	// System.Single SniperBoss::safetyDist
	float ___safetyDist_17;
	// System.Single SniperBoss::teleDelay
	float ___teleDelay_18;
	// System.Single SniperBoss::teleCooldown
	float ___teleCooldown_19;
	// System.Single SniperBoss::postTeleDelay
	float ___postTeleDelay_20;
	// System.Boolean SniperBoss::teleportActive
	bool ___teleportActive_21;
	// System.Single SniperBoss::laserChargeTime
	float ___laserChargeTime_22;
	// System.Single SniperBoss::laserEmitTime
	float ___laserEmitTime_23;
	// System.Boolean SniperBoss::laserActive
	bool ___laserActive_24;
	// System.Boolean SniperBoss::isAtking
	bool ___isAtking_25;
	// System.Int32 SniperBoss::numAtks
	int32_t ___numAtks_26;
	// System.Boolean SniperBoss::explAtkActive
	bool ___explAtkActive_27;
	// System.Single SniperBoss::endTime
	float ___endTime_28;
	// System.Single SniperBoss::xBound
	float ___xBound_29;
	// System.Single SniperBoss::yBound
	float ___yBound_30;
	// System.Boolean SniperBoss::spawnEnabled
	bool ___spawnEnabled_31;
	// UnityEngine.Collider SniperBoss::mapCollider
	Collider_t3497673348 * ___mapCollider_32;
	// UnityEngine.GameObject SniperBoss::laserCollider
	GameObject_t1756533147 * ___laserCollider_33;
	// UnityEngine.GameObject SniperBoss::teleMarker
	GameObject_t1756533147 * ___teleMarker_34;
	// System.Single SniperBoss::nextAtkTime
	float ___nextAtkTime_35;
	// System.Collections.IEnumerator SniperBoss::teleRoutine
	Il2CppObject * ___teleRoutine_36;
	// System.Collections.IEnumerator SniperBoss::laserRoutine
	Il2CppObject * ___laserRoutine_37;

public:
	inline static int32_t get_offset_of_sqDist_15() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___sqDist_15)); }
	inline float get_sqDist_15() const { return ___sqDist_15; }
	inline float* get_address_of_sqDist_15() { return &___sqDist_15; }
	inline void set_sqDist_15(float value)
	{
		___sqDist_15 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_16() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___spawnDelay_16)); }
	inline float get_spawnDelay_16() const { return ___spawnDelay_16; }
	inline float* get_address_of_spawnDelay_16() { return &___spawnDelay_16; }
	inline void set_spawnDelay_16(float value)
	{
		___spawnDelay_16 = value;
	}

	inline static int32_t get_offset_of_safetyDist_17() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___safetyDist_17)); }
	inline float get_safetyDist_17() const { return ___safetyDist_17; }
	inline float* get_address_of_safetyDist_17() { return &___safetyDist_17; }
	inline void set_safetyDist_17(float value)
	{
		___safetyDist_17 = value;
	}

	inline static int32_t get_offset_of_teleDelay_18() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleDelay_18)); }
	inline float get_teleDelay_18() const { return ___teleDelay_18; }
	inline float* get_address_of_teleDelay_18() { return &___teleDelay_18; }
	inline void set_teleDelay_18(float value)
	{
		___teleDelay_18 = value;
	}

	inline static int32_t get_offset_of_teleCooldown_19() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleCooldown_19)); }
	inline float get_teleCooldown_19() const { return ___teleCooldown_19; }
	inline float* get_address_of_teleCooldown_19() { return &___teleCooldown_19; }
	inline void set_teleCooldown_19(float value)
	{
		___teleCooldown_19 = value;
	}

	inline static int32_t get_offset_of_postTeleDelay_20() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___postTeleDelay_20)); }
	inline float get_postTeleDelay_20() const { return ___postTeleDelay_20; }
	inline float* get_address_of_postTeleDelay_20() { return &___postTeleDelay_20; }
	inline void set_postTeleDelay_20(float value)
	{
		___postTeleDelay_20 = value;
	}

	inline static int32_t get_offset_of_teleportActive_21() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleportActive_21)); }
	inline bool get_teleportActive_21() const { return ___teleportActive_21; }
	inline bool* get_address_of_teleportActive_21() { return &___teleportActive_21; }
	inline void set_teleportActive_21(bool value)
	{
		___teleportActive_21 = value;
	}

	inline static int32_t get_offset_of_laserChargeTime_22() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___laserChargeTime_22)); }
	inline float get_laserChargeTime_22() const { return ___laserChargeTime_22; }
	inline float* get_address_of_laserChargeTime_22() { return &___laserChargeTime_22; }
	inline void set_laserChargeTime_22(float value)
	{
		___laserChargeTime_22 = value;
	}

	inline static int32_t get_offset_of_laserEmitTime_23() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___laserEmitTime_23)); }
	inline float get_laserEmitTime_23() const { return ___laserEmitTime_23; }
	inline float* get_address_of_laserEmitTime_23() { return &___laserEmitTime_23; }
	inline void set_laserEmitTime_23(float value)
	{
		___laserEmitTime_23 = value;
	}

	inline static int32_t get_offset_of_laserActive_24() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___laserActive_24)); }
	inline bool get_laserActive_24() const { return ___laserActive_24; }
	inline bool* get_address_of_laserActive_24() { return &___laserActive_24; }
	inline void set_laserActive_24(bool value)
	{
		___laserActive_24 = value;
	}

	inline static int32_t get_offset_of_isAtking_25() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___isAtking_25)); }
	inline bool get_isAtking_25() const { return ___isAtking_25; }
	inline bool* get_address_of_isAtking_25() { return &___isAtking_25; }
	inline void set_isAtking_25(bool value)
	{
		___isAtking_25 = value;
	}

	inline static int32_t get_offset_of_numAtks_26() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___numAtks_26)); }
	inline int32_t get_numAtks_26() const { return ___numAtks_26; }
	inline int32_t* get_address_of_numAtks_26() { return &___numAtks_26; }
	inline void set_numAtks_26(int32_t value)
	{
		___numAtks_26 = value;
	}

	inline static int32_t get_offset_of_explAtkActive_27() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___explAtkActive_27)); }
	inline bool get_explAtkActive_27() const { return ___explAtkActive_27; }
	inline bool* get_address_of_explAtkActive_27() { return &___explAtkActive_27; }
	inline void set_explAtkActive_27(bool value)
	{
		___explAtkActive_27 = value;
	}

	inline static int32_t get_offset_of_endTime_28() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___endTime_28)); }
	inline float get_endTime_28() const { return ___endTime_28; }
	inline float* get_address_of_endTime_28() { return &___endTime_28; }
	inline void set_endTime_28(float value)
	{
		___endTime_28 = value;
	}

	inline static int32_t get_offset_of_xBound_29() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___xBound_29)); }
	inline float get_xBound_29() const { return ___xBound_29; }
	inline float* get_address_of_xBound_29() { return &___xBound_29; }
	inline void set_xBound_29(float value)
	{
		___xBound_29 = value;
	}

	inline static int32_t get_offset_of_yBound_30() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___yBound_30)); }
	inline float get_yBound_30() const { return ___yBound_30; }
	inline float* get_address_of_yBound_30() { return &___yBound_30; }
	inline void set_yBound_30(float value)
	{
		___yBound_30 = value;
	}

	inline static int32_t get_offset_of_spawnEnabled_31() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___spawnEnabled_31)); }
	inline bool get_spawnEnabled_31() const { return ___spawnEnabled_31; }
	inline bool* get_address_of_spawnEnabled_31() { return &___spawnEnabled_31; }
	inline void set_spawnEnabled_31(bool value)
	{
		___spawnEnabled_31 = value;
	}

	inline static int32_t get_offset_of_mapCollider_32() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___mapCollider_32)); }
	inline Collider_t3497673348 * get_mapCollider_32() const { return ___mapCollider_32; }
	inline Collider_t3497673348 ** get_address_of_mapCollider_32() { return &___mapCollider_32; }
	inline void set_mapCollider_32(Collider_t3497673348 * value)
	{
		___mapCollider_32 = value;
		Il2CppCodeGenWriteBarrier(&___mapCollider_32, value);
	}

	inline static int32_t get_offset_of_laserCollider_33() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___laserCollider_33)); }
	inline GameObject_t1756533147 * get_laserCollider_33() const { return ___laserCollider_33; }
	inline GameObject_t1756533147 ** get_address_of_laserCollider_33() { return &___laserCollider_33; }
	inline void set_laserCollider_33(GameObject_t1756533147 * value)
	{
		___laserCollider_33 = value;
		Il2CppCodeGenWriteBarrier(&___laserCollider_33, value);
	}

	inline static int32_t get_offset_of_teleMarker_34() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleMarker_34)); }
	inline GameObject_t1756533147 * get_teleMarker_34() const { return ___teleMarker_34; }
	inline GameObject_t1756533147 ** get_address_of_teleMarker_34() { return &___teleMarker_34; }
	inline void set_teleMarker_34(GameObject_t1756533147 * value)
	{
		___teleMarker_34 = value;
		Il2CppCodeGenWriteBarrier(&___teleMarker_34, value);
	}

	inline static int32_t get_offset_of_nextAtkTime_35() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___nextAtkTime_35)); }
	inline float get_nextAtkTime_35() const { return ___nextAtkTime_35; }
	inline float* get_address_of_nextAtkTime_35() { return &___nextAtkTime_35; }
	inline void set_nextAtkTime_35(float value)
	{
		___nextAtkTime_35 = value;
	}

	inline static int32_t get_offset_of_teleRoutine_36() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___teleRoutine_36)); }
	inline Il2CppObject * get_teleRoutine_36() const { return ___teleRoutine_36; }
	inline Il2CppObject ** get_address_of_teleRoutine_36() { return &___teleRoutine_36; }
	inline void set_teleRoutine_36(Il2CppObject * value)
	{
		___teleRoutine_36 = value;
		Il2CppCodeGenWriteBarrier(&___teleRoutine_36, value);
	}

	inline static int32_t get_offset_of_laserRoutine_37() { return static_cast<int32_t>(offsetof(SniperBoss_t228994654, ___laserRoutine_37)); }
	inline Il2CppObject * get_laserRoutine_37() const { return ___laserRoutine_37; }
	inline Il2CppObject ** get_address_of_laserRoutine_37() { return &___laserRoutine_37; }
	inline void set_laserRoutine_37(Il2CppObject * value)
	{
		___laserRoutine_37 = value;
		Il2CppCodeGenWriteBarrier(&___laserRoutine_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
