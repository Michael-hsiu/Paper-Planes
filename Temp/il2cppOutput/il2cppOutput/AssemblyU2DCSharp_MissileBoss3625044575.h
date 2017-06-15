#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Ship1116303770.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<Row>
struct List_1_t143642632;




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
	float ___senseRadius_20;
	// System.Single MissileBoss::missileDelay
	float ___missileDelay_21;
	// System.Single MissileBoss::atkTimeRange
	float ___atkTimeRange_22;
	// System.Single MissileBoss::missileAtkTime
	float ___missileAtkTime_23;
	// System.Single MissileBoss::spinAtkTime
	float ___spinAtkTime_24;
	// System.Single MissileBoss::rotFactor
	float ___rotFactor_25;
	// System.Single MissileBoss::atkPrefFactor
	float ___atkPrefFactor_26;
	// System.Single MissileBoss::sqMoveDist
	float ___sqMoveDist_27;
	// System.Single MissileBoss::spinAtkRadius
	float ___spinAtkRadius_28;
	// System.Int32 MissileBoss::numMissileAtks
	int32_t ___numMissileAtks_29;
	// System.Int32 MissileBoss::numSpinAtks
	int32_t ___numSpinAtks_30;
	// System.Boolean MissileBoss::attacking
	bool ___attacking_31;
	// System.Boolean MissileBoss::usingSpinAtk
	bool ___usingSpinAtk_32;
	// UnityEngine.GameObject MissileBoss::straightMissile
	GameObject_t1756533147 * ___straightMissile_33;
	// UnityEngine.GameObject MissileBoss::empWave
	GameObject_t1756533147 * ___empWave_34;
	// UnityEngine.GameObject MissileBoss::targetRot
	GameObject_t1756533147 * ___targetRot_35;
	// UnityEngine.GameObject MissileBoss::empWaveShotSpawn
	GameObject_t1756533147 * ___empWaveShotSpawn_36;
	// System.Single MissileBoss::nextAtkTime
	float ___nextAtkTime_37;
	// System.Collections.Generic.List`1<Row> MissileBoss::missileSpawns
	List_1_t143642632 * ___missileSpawns_38;

public:
	inline static int32_t get_offset_of_senseRadius_20() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___senseRadius_20)); }
	inline float get_senseRadius_20() const { return ___senseRadius_20; }
	inline float* get_address_of_senseRadius_20() { return &___senseRadius_20; }
	inline void set_senseRadius_20(float value)
	{
		___senseRadius_20 = value;
	}

	inline static int32_t get_offset_of_missileDelay_21() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___missileDelay_21)); }
	inline float get_missileDelay_21() const { return ___missileDelay_21; }
	inline float* get_address_of_missileDelay_21() { return &___missileDelay_21; }
	inline void set_missileDelay_21(float value)
	{
		___missileDelay_21 = value;
	}

	inline static int32_t get_offset_of_atkTimeRange_22() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___atkTimeRange_22)); }
	inline float get_atkTimeRange_22() const { return ___atkTimeRange_22; }
	inline float* get_address_of_atkTimeRange_22() { return &___atkTimeRange_22; }
	inline void set_atkTimeRange_22(float value)
	{
		___atkTimeRange_22 = value;
	}

	inline static int32_t get_offset_of_missileAtkTime_23() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___missileAtkTime_23)); }
	inline float get_missileAtkTime_23() const { return ___missileAtkTime_23; }
	inline float* get_address_of_missileAtkTime_23() { return &___missileAtkTime_23; }
	inline void set_missileAtkTime_23(float value)
	{
		___missileAtkTime_23 = value;
	}

	inline static int32_t get_offset_of_spinAtkTime_24() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___spinAtkTime_24)); }
	inline float get_spinAtkTime_24() const { return ___spinAtkTime_24; }
	inline float* get_address_of_spinAtkTime_24() { return &___spinAtkTime_24; }
	inline void set_spinAtkTime_24(float value)
	{
		___spinAtkTime_24 = value;
	}

	inline static int32_t get_offset_of_rotFactor_25() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___rotFactor_25)); }
	inline float get_rotFactor_25() const { return ___rotFactor_25; }
	inline float* get_address_of_rotFactor_25() { return &___rotFactor_25; }
	inline void set_rotFactor_25(float value)
	{
		___rotFactor_25 = value;
	}

	inline static int32_t get_offset_of_atkPrefFactor_26() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___atkPrefFactor_26)); }
	inline float get_atkPrefFactor_26() const { return ___atkPrefFactor_26; }
	inline float* get_address_of_atkPrefFactor_26() { return &___atkPrefFactor_26; }
	inline void set_atkPrefFactor_26(float value)
	{
		___atkPrefFactor_26 = value;
	}

	inline static int32_t get_offset_of_sqMoveDist_27() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___sqMoveDist_27)); }
	inline float get_sqMoveDist_27() const { return ___sqMoveDist_27; }
	inline float* get_address_of_sqMoveDist_27() { return &___sqMoveDist_27; }
	inline void set_sqMoveDist_27(float value)
	{
		___sqMoveDist_27 = value;
	}

	inline static int32_t get_offset_of_spinAtkRadius_28() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___spinAtkRadius_28)); }
	inline float get_spinAtkRadius_28() const { return ___spinAtkRadius_28; }
	inline float* get_address_of_spinAtkRadius_28() { return &___spinAtkRadius_28; }
	inline void set_spinAtkRadius_28(float value)
	{
		___spinAtkRadius_28 = value;
	}

	inline static int32_t get_offset_of_numMissileAtks_29() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___numMissileAtks_29)); }
	inline int32_t get_numMissileAtks_29() const { return ___numMissileAtks_29; }
	inline int32_t* get_address_of_numMissileAtks_29() { return &___numMissileAtks_29; }
	inline void set_numMissileAtks_29(int32_t value)
	{
		___numMissileAtks_29 = value;
	}

	inline static int32_t get_offset_of_numSpinAtks_30() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___numSpinAtks_30)); }
	inline int32_t get_numSpinAtks_30() const { return ___numSpinAtks_30; }
	inline int32_t* get_address_of_numSpinAtks_30() { return &___numSpinAtks_30; }
	inline void set_numSpinAtks_30(int32_t value)
	{
		___numSpinAtks_30 = value;
	}

	inline static int32_t get_offset_of_attacking_31() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___attacking_31)); }
	inline bool get_attacking_31() const { return ___attacking_31; }
	inline bool* get_address_of_attacking_31() { return &___attacking_31; }
	inline void set_attacking_31(bool value)
	{
		___attacking_31 = value;
	}

	inline static int32_t get_offset_of_usingSpinAtk_32() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___usingSpinAtk_32)); }
	inline bool get_usingSpinAtk_32() const { return ___usingSpinAtk_32; }
	inline bool* get_address_of_usingSpinAtk_32() { return &___usingSpinAtk_32; }
	inline void set_usingSpinAtk_32(bool value)
	{
		___usingSpinAtk_32 = value;
	}

	inline static int32_t get_offset_of_straightMissile_33() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___straightMissile_33)); }
	inline GameObject_t1756533147 * get_straightMissile_33() const { return ___straightMissile_33; }
	inline GameObject_t1756533147 ** get_address_of_straightMissile_33() { return &___straightMissile_33; }
	inline void set_straightMissile_33(GameObject_t1756533147 * value)
	{
		___straightMissile_33 = value;
		Il2CppCodeGenWriteBarrier(&___straightMissile_33, value);
	}

	inline static int32_t get_offset_of_empWave_34() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___empWave_34)); }
	inline GameObject_t1756533147 * get_empWave_34() const { return ___empWave_34; }
	inline GameObject_t1756533147 ** get_address_of_empWave_34() { return &___empWave_34; }
	inline void set_empWave_34(GameObject_t1756533147 * value)
	{
		___empWave_34 = value;
		Il2CppCodeGenWriteBarrier(&___empWave_34, value);
	}

	inline static int32_t get_offset_of_targetRot_35() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___targetRot_35)); }
	inline GameObject_t1756533147 * get_targetRot_35() const { return ___targetRot_35; }
	inline GameObject_t1756533147 ** get_address_of_targetRot_35() { return &___targetRot_35; }
	inline void set_targetRot_35(GameObject_t1756533147 * value)
	{
		___targetRot_35 = value;
		Il2CppCodeGenWriteBarrier(&___targetRot_35, value);
	}

	inline static int32_t get_offset_of_empWaveShotSpawn_36() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___empWaveShotSpawn_36)); }
	inline GameObject_t1756533147 * get_empWaveShotSpawn_36() const { return ___empWaveShotSpawn_36; }
	inline GameObject_t1756533147 ** get_address_of_empWaveShotSpawn_36() { return &___empWaveShotSpawn_36; }
	inline void set_empWaveShotSpawn_36(GameObject_t1756533147 * value)
	{
		___empWaveShotSpawn_36 = value;
		Il2CppCodeGenWriteBarrier(&___empWaveShotSpawn_36, value);
	}

	inline static int32_t get_offset_of_nextAtkTime_37() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___nextAtkTime_37)); }
	inline float get_nextAtkTime_37() const { return ___nextAtkTime_37; }
	inline float* get_address_of_nextAtkTime_37() { return &___nextAtkTime_37; }
	inline void set_nextAtkTime_37(float value)
	{
		___nextAtkTime_37 = value;
	}

	inline static int32_t get_offset_of_missileSpawns_38() { return static_cast<int32_t>(offsetof(MissileBoss_t3625044575, ___missileSpawns_38)); }
	inline List_1_t143642632 * get_missileSpawns_38() const { return ___missileSpawns_38; }
	inline List_1_t143642632 ** get_address_of_missileSpawns_38() { return &___missileSpawns_38; }
	inline void set_missileSpawns_38(List_1_t143642632 * value)
	{
		___missileSpawns_38 = value;
		Il2CppCodeGenWriteBarrier(&___missileSpawns_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
