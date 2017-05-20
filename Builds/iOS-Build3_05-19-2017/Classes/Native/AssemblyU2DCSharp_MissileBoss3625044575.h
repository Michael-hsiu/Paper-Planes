#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<Row>
struct List_1_t143642632;

#include "AssemblyU2DCSharp_Ship1116303770.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissileBoss
struct  MissileBoss_t3625044575  : public Ship_t1116303770
{
public:
	// System.Single MissileBoss::senseRadius
	float ___senseRadius_15;
	// System.Single MissileBoss::missileDelay
	float ___missileDelay_16;
	// System.Single MissileBoss::atkTimeRange
	float ___atkTimeRange_17;
	// System.Single MissileBoss::missileAtkTime
	float ___missileAtkTime_18;
	// System.Single MissileBoss::spinAtkTime
	float ___spinAtkTime_19;
	// System.Single MissileBoss::rotFactor
	float ___rotFactor_20;
	// System.Single MissileBoss::atkPrefFactor
	float ___atkPrefFactor_21;
	// System.Single MissileBoss::sqMoveDist
	float ___sqMoveDist_22;
	// System.Single MissileBoss::spinAtkRadius
	float ___spinAtkRadius_23;
	// System.Int32 MissileBoss::numMissileAtks
	int32_t ___numMissileAtks_24;
	// System.Int32 MissileBoss::numSpinAtks
	int32_t ___numSpinAtks_25;
	// System.Boolean MissileBoss::attacking
	bool ___attacking_26;
	// System.Boolean MissileBoss::usingSpinAtk
	bool ___usingSpinAtk_27;
	// UnityEngine.GameObject MissileBoss::straightMissile
	GameObject_t1756533147 * ___straightMissile_28;
	// UnityEngine.GameObject MissileBoss::targetRot
	GameObject_t1756533147 * ___targetRot_29;
	// System.Single MissileBoss::nextAtkTime
	float ___nextAtkTime_30;
	// System.Collections.Generic.List`1<Row> MissileBoss::missileSpawns
	List_1_t143642632 * ___missileSpawns_31;

public:
	inline static int32_t get_offset_of_senseRadius_15() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___senseRadius_15)); }
	inline float get_senseRadius_15() const { return ___senseRadius_15; }
	inline float* get_address_of_senseRadius_15() { return &___senseRadius_15; }
	inline void set_senseRadius_15(float value)
	{
		___senseRadius_15 = value;
	}

	inline static int32_t get_offset_of_missileDelay_16() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___missileDelay_16)); }
	inline float get_missileDelay_16() const { return ___missileDelay_16; }
	inline float* get_address_of_missileDelay_16() { return &___missileDelay_16; }
	inline void set_missileDelay_16(float value)
	{
		___missileDelay_16 = value;
	}

	inline static int32_t get_offset_of_atkTimeRange_17() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___atkTimeRange_17)); }
	inline float get_atkTimeRange_17() const { return ___atkTimeRange_17; }
	inline float* get_address_of_atkTimeRange_17() { return &___atkTimeRange_17; }
	inline void set_atkTimeRange_17(float value)
	{
		___atkTimeRange_17 = value;
	}

	inline static int32_t get_offset_of_missileAtkTime_18() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___missileAtkTime_18)); }
	inline float get_missileAtkTime_18() const { return ___missileAtkTime_18; }
	inline float* get_address_of_missileAtkTime_18() { return &___missileAtkTime_18; }
	inline void set_missileAtkTime_18(float value)
	{
		___missileAtkTime_18 = value;
	}

	inline static int32_t get_offset_of_spinAtkTime_19() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___spinAtkTime_19)); }
	inline float get_spinAtkTime_19() const { return ___spinAtkTime_19; }
	inline float* get_address_of_spinAtkTime_19() { return &___spinAtkTime_19; }
	inline void set_spinAtkTime_19(float value)
	{
		___spinAtkTime_19 = value;
	}

	inline static int32_t get_offset_of_rotFactor_20() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___rotFactor_20)); }
	inline float get_rotFactor_20() const { return ___rotFactor_20; }
	inline float* get_address_of_rotFactor_20() { return &___rotFactor_20; }
	inline void set_rotFactor_20(float value)
	{
		___rotFactor_20 = value;
	}

	inline static int32_t get_offset_of_atkPrefFactor_21() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___atkPrefFactor_21)); }
	inline float get_atkPrefFactor_21() const { return ___atkPrefFactor_21; }
	inline float* get_address_of_atkPrefFactor_21() { return &___atkPrefFactor_21; }
	inline void set_atkPrefFactor_21(float value)
	{
		___atkPrefFactor_21 = value;
	}

	inline static int32_t get_offset_of_sqMoveDist_22() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___sqMoveDist_22)); }
	inline float get_sqMoveDist_22() const { return ___sqMoveDist_22; }
	inline float* get_address_of_sqMoveDist_22() { return &___sqMoveDist_22; }
	inline void set_sqMoveDist_22(float value)
	{
		___sqMoveDist_22 = value;
	}

	inline static int32_t get_offset_of_spinAtkRadius_23() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___spinAtkRadius_23)); }
	inline float get_spinAtkRadius_23() const { return ___spinAtkRadius_23; }
	inline float* get_address_of_spinAtkRadius_23() { return &___spinAtkRadius_23; }
	inline void set_spinAtkRadius_23(float value)
	{
		___spinAtkRadius_23 = value;
	}

	inline static int32_t get_offset_of_numMissileAtks_24() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___numMissileAtks_24)); }
	inline int32_t get_numMissileAtks_24() const { return ___numMissileAtks_24; }
	inline int32_t* get_address_of_numMissileAtks_24() { return &___numMissileAtks_24; }
	inline void set_numMissileAtks_24(int32_t value)
	{
		___numMissileAtks_24 = value;
	}

	inline static int32_t get_offset_of_numSpinAtks_25() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___numSpinAtks_25)); }
	inline int32_t get_numSpinAtks_25() const { return ___numSpinAtks_25; }
	inline int32_t* get_address_of_numSpinAtks_25() { return &___numSpinAtks_25; }
	inline void set_numSpinAtks_25(int32_t value)
	{
		___numSpinAtks_25 = value;
	}

	inline static int32_t get_offset_of_attacking_26() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___attacking_26)); }
	inline bool get_attacking_26() const { return ___attacking_26; }
	inline bool* get_address_of_attacking_26() { return &___attacking_26; }
	inline void set_attacking_26(bool value)
	{
		___attacking_26 = value;
	}

	inline static int32_t get_offset_of_usingSpinAtk_27() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___usingSpinAtk_27)); }
	inline bool get_usingSpinAtk_27() const { return ___usingSpinAtk_27; }
	inline bool* get_address_of_usingSpinAtk_27() { return &___usingSpinAtk_27; }
	inline void set_usingSpinAtk_27(bool value)
	{
		___usingSpinAtk_27 = value;
	}

	inline static int32_t get_offset_of_straightMissile_28() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___straightMissile_28)); }
	inline GameObject_t1756533147 * get_straightMissile_28() const { return ___straightMissile_28; }
	inline GameObject_t1756533147 ** get_address_of_straightMissile_28() { return &___straightMissile_28; }
	inline void set_straightMissile_28(GameObject_t1756533147 * value)
	{
		___straightMissile_28 = value;
		Il2CppCodeGenWriteBarrier(&___straightMissile_28, value);
	}

	inline static int32_t get_offset_of_targetRot_29() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___targetRot_29)); }
	inline GameObject_t1756533147 * get_targetRot_29() const { return ___targetRot_29; }
	inline GameObject_t1756533147 ** get_address_of_targetRot_29() { return &___targetRot_29; }
	inline void set_targetRot_29(GameObject_t1756533147 * value)
	{
		___targetRot_29 = value;
		Il2CppCodeGenWriteBarrier(&___targetRot_29, value);
	}

	inline static int32_t get_offset_of_nextAtkTime_30() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___nextAtkTime_30)); }
	inline float get_nextAtkTime_30() const { return ___nextAtkTime_30; }
	inline float* get_address_of_nextAtkTime_30() { return &___nextAtkTime_30; }
	inline void set_nextAtkTime_30(float value)
	{
		___nextAtkTime_30 = value;
	}

	inline static int32_t get_offset_of_missileSpawns_31() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___missileSpawns_31)); }
	inline List_1_t143642632 * get_missileSpawns_31() const { return ___missileSpawns_31; }
	inline List_1_t143642632 ** get_address_of_missileSpawns_31() { return &___missileSpawns_31; }
	inline void set_missileSpawns_31(List_1_t143642632 * value)
	{
		___missileSpawns_31 = value;
		Il2CppCodeGenWriteBarrier(&___missileSpawns_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
