#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_FiringShip3666415697.h"

// System.Collections.Generic.List`1<ShotSpawnContainer>
struct List_1_t501731214;
// ShotSpawnContainer
struct ShotSpawnContainer_t1132610082;
// System.Collections.Generic.Stack`1<ShotSpawnContainer>
struct Stack_1_t2220338236;
// System.Collections.Generic.Dictionary`2<PlayerShip/Weapons,ShotSpawnContainer>
struct Dictionary_2_t173126096;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// InputComponent
struct InputComponent_t1734991399;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// PlayerShip
struct PlayerShip_t2635532215;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShip
struct  PlayerShip_t2635532215  : public FiringShip_t3666415697
{
public:
	// System.Single PlayerShip::firingPowerupExpirationTime
	float ___firingPowerupExpirationTime_28;
	// System.Collections.Generic.List`1<ShotSpawnContainer> PlayerShip::shotSpawnContainers
	List_1_t501731214 * ___shotSpawnContainers_29;
	// ShotSpawnContainer PlayerShip::activeShotSpawnContainer
	ShotSpawnContainer_t1132610082 * ___activeShotSpawnContainer_30;
	// System.Collections.Generic.Stack`1<ShotSpawnContainer> PlayerShip::shotSpawnStack
	Stack_1_t2220338236 * ___shotSpawnStack_31;
	// System.Collections.Generic.Dictionary`2<PlayerShip/Weapons,ShotSpawnContainer> PlayerShip::shotSpawnDictionary
	Dictionary_2_t173126096 * ___shotSpawnDictionary_32;
	// System.Int32 PlayerShip::numShots
	int32_t ___numShots_33;
	// System.Boolean PlayerShip::dashStarted
	bool ___dashStarted_34;
	// System.Single PlayerShip::dashEndTime
	float ___dashEndTime_35;
	// System.Single PlayerShip::thrust
	float ___thrust_36;
	// System.Single PlayerShip::maxDash
	float ___maxDash_37;
	// System.Single PlayerShip::dashDuration
	float ___dashDuration_38;
	// System.Boolean PlayerShip::rushStarted
	bool ___rushStarted_39;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerShip::waveSpawns
	List_1_t1125654279 * ___waveSpawns_40;
	// System.Boolean PlayerShip::waveShotEnabled
	bool ___waveShotEnabled_41;
	// System.Single PlayerShip::waveRandomVal
	float ___waveRandomVal_42;
	// System.Single PlayerShip::waveChance
	float ___waveChance_43;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerShip::sideMissileSpawns
	List_1_t1125654279 * ___sideMissileSpawns_44;
	// System.Boolean PlayerShip::sideMissileEnabled
	bool ___sideMissileEnabled_45;
	// System.Single PlayerShip::sideMissileRandomVal
	float ___sideMissileRandomVal_46;
	// System.Single PlayerShip::sideMissileChance
	float ___sideMissileChance_47;
	// UnityEngine.GameObject PlayerShip::firingRig
	GameObject_t1756533147 * ___firingRig_48;
	// UnityEngine.GameObject PlayerShip::chargeColliderRig
	GameObject_t1756533147 * ___chargeColliderRig_49;
	// InputComponent PlayerShip::input
	Il2CppObject * ___input_50;
	// UnityEngine.Rigidbody PlayerShip::rb
	Rigidbody_t4233889191 * ___rb_51;
	// System.Single PlayerShip::maxForward
	float ___maxForward_52;
	// System.Single PlayerShip::colliderRadius
	float ___colliderRadius_53;

public:
	inline static int32_t get_offset_of_firingPowerupExpirationTime_28() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___firingPowerupExpirationTime_28)); }
	inline float get_firingPowerupExpirationTime_28() const { return ___firingPowerupExpirationTime_28; }
	inline float* get_address_of_firingPowerupExpirationTime_28() { return &___firingPowerupExpirationTime_28; }
	inline void set_firingPowerupExpirationTime_28(float value)
	{
		___firingPowerupExpirationTime_28 = value;
	}

	inline static int32_t get_offset_of_shotSpawnContainers_29() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___shotSpawnContainers_29)); }
	inline List_1_t501731214 * get_shotSpawnContainers_29() const { return ___shotSpawnContainers_29; }
	inline List_1_t501731214 ** get_address_of_shotSpawnContainers_29() { return &___shotSpawnContainers_29; }
	inline void set_shotSpawnContainers_29(List_1_t501731214 * value)
	{
		___shotSpawnContainers_29 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawnContainers_29, value);
	}

	inline static int32_t get_offset_of_activeShotSpawnContainer_30() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___activeShotSpawnContainer_30)); }
	inline ShotSpawnContainer_t1132610082 * get_activeShotSpawnContainer_30() const { return ___activeShotSpawnContainer_30; }
	inline ShotSpawnContainer_t1132610082 ** get_address_of_activeShotSpawnContainer_30() { return &___activeShotSpawnContainer_30; }
	inline void set_activeShotSpawnContainer_30(ShotSpawnContainer_t1132610082 * value)
	{
		___activeShotSpawnContainer_30 = value;
		Il2CppCodeGenWriteBarrier(&___activeShotSpawnContainer_30, value);
	}

	inline static int32_t get_offset_of_shotSpawnStack_31() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___shotSpawnStack_31)); }
	inline Stack_1_t2220338236 * get_shotSpawnStack_31() const { return ___shotSpawnStack_31; }
	inline Stack_1_t2220338236 ** get_address_of_shotSpawnStack_31() { return &___shotSpawnStack_31; }
	inline void set_shotSpawnStack_31(Stack_1_t2220338236 * value)
	{
		___shotSpawnStack_31 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawnStack_31, value);
	}

	inline static int32_t get_offset_of_shotSpawnDictionary_32() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___shotSpawnDictionary_32)); }
	inline Dictionary_2_t173126096 * get_shotSpawnDictionary_32() const { return ___shotSpawnDictionary_32; }
	inline Dictionary_2_t173126096 ** get_address_of_shotSpawnDictionary_32() { return &___shotSpawnDictionary_32; }
	inline void set_shotSpawnDictionary_32(Dictionary_2_t173126096 * value)
	{
		___shotSpawnDictionary_32 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawnDictionary_32, value);
	}

	inline static int32_t get_offset_of_numShots_33() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___numShots_33)); }
	inline int32_t get_numShots_33() const { return ___numShots_33; }
	inline int32_t* get_address_of_numShots_33() { return &___numShots_33; }
	inline void set_numShots_33(int32_t value)
	{
		___numShots_33 = value;
	}

	inline static int32_t get_offset_of_dashStarted_34() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___dashStarted_34)); }
	inline bool get_dashStarted_34() const { return ___dashStarted_34; }
	inline bool* get_address_of_dashStarted_34() { return &___dashStarted_34; }
	inline void set_dashStarted_34(bool value)
	{
		___dashStarted_34 = value;
	}

	inline static int32_t get_offset_of_dashEndTime_35() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___dashEndTime_35)); }
	inline float get_dashEndTime_35() const { return ___dashEndTime_35; }
	inline float* get_address_of_dashEndTime_35() { return &___dashEndTime_35; }
	inline void set_dashEndTime_35(float value)
	{
		___dashEndTime_35 = value;
	}

	inline static int32_t get_offset_of_thrust_36() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___thrust_36)); }
	inline float get_thrust_36() const { return ___thrust_36; }
	inline float* get_address_of_thrust_36() { return &___thrust_36; }
	inline void set_thrust_36(float value)
	{
		___thrust_36 = value;
	}

	inline static int32_t get_offset_of_maxDash_37() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___maxDash_37)); }
	inline float get_maxDash_37() const { return ___maxDash_37; }
	inline float* get_address_of_maxDash_37() { return &___maxDash_37; }
	inline void set_maxDash_37(float value)
	{
		___maxDash_37 = value;
	}

	inline static int32_t get_offset_of_dashDuration_38() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___dashDuration_38)); }
	inline float get_dashDuration_38() const { return ___dashDuration_38; }
	inline float* get_address_of_dashDuration_38() { return &___dashDuration_38; }
	inline void set_dashDuration_38(float value)
	{
		___dashDuration_38 = value;
	}

	inline static int32_t get_offset_of_rushStarted_39() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___rushStarted_39)); }
	inline bool get_rushStarted_39() const { return ___rushStarted_39; }
	inline bool* get_address_of_rushStarted_39() { return &___rushStarted_39; }
	inline void set_rushStarted_39(bool value)
	{
		___rushStarted_39 = value;
	}

	inline static int32_t get_offset_of_waveSpawns_40() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___waveSpawns_40)); }
	inline List_1_t1125654279 * get_waveSpawns_40() const { return ___waveSpawns_40; }
	inline List_1_t1125654279 ** get_address_of_waveSpawns_40() { return &___waveSpawns_40; }
	inline void set_waveSpawns_40(List_1_t1125654279 * value)
	{
		___waveSpawns_40 = value;
		Il2CppCodeGenWriteBarrier(&___waveSpawns_40, value);
	}

	inline static int32_t get_offset_of_waveShotEnabled_41() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___waveShotEnabled_41)); }
	inline bool get_waveShotEnabled_41() const { return ___waveShotEnabled_41; }
	inline bool* get_address_of_waveShotEnabled_41() { return &___waveShotEnabled_41; }
	inline void set_waveShotEnabled_41(bool value)
	{
		___waveShotEnabled_41 = value;
	}

	inline static int32_t get_offset_of_waveRandomVal_42() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___waveRandomVal_42)); }
	inline float get_waveRandomVal_42() const { return ___waveRandomVal_42; }
	inline float* get_address_of_waveRandomVal_42() { return &___waveRandomVal_42; }
	inline void set_waveRandomVal_42(float value)
	{
		___waveRandomVal_42 = value;
	}

	inline static int32_t get_offset_of_waveChance_43() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___waveChance_43)); }
	inline float get_waveChance_43() const { return ___waveChance_43; }
	inline float* get_address_of_waveChance_43() { return &___waveChance_43; }
	inline void set_waveChance_43(float value)
	{
		___waveChance_43 = value;
	}

	inline static int32_t get_offset_of_sideMissileSpawns_44() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___sideMissileSpawns_44)); }
	inline List_1_t1125654279 * get_sideMissileSpawns_44() const { return ___sideMissileSpawns_44; }
	inline List_1_t1125654279 ** get_address_of_sideMissileSpawns_44() { return &___sideMissileSpawns_44; }
	inline void set_sideMissileSpawns_44(List_1_t1125654279 * value)
	{
		___sideMissileSpawns_44 = value;
		Il2CppCodeGenWriteBarrier(&___sideMissileSpawns_44, value);
	}

	inline static int32_t get_offset_of_sideMissileEnabled_45() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___sideMissileEnabled_45)); }
	inline bool get_sideMissileEnabled_45() const { return ___sideMissileEnabled_45; }
	inline bool* get_address_of_sideMissileEnabled_45() { return &___sideMissileEnabled_45; }
	inline void set_sideMissileEnabled_45(bool value)
	{
		___sideMissileEnabled_45 = value;
	}

	inline static int32_t get_offset_of_sideMissileRandomVal_46() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___sideMissileRandomVal_46)); }
	inline float get_sideMissileRandomVal_46() const { return ___sideMissileRandomVal_46; }
	inline float* get_address_of_sideMissileRandomVal_46() { return &___sideMissileRandomVal_46; }
	inline void set_sideMissileRandomVal_46(float value)
	{
		___sideMissileRandomVal_46 = value;
	}

	inline static int32_t get_offset_of_sideMissileChance_47() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___sideMissileChance_47)); }
	inline float get_sideMissileChance_47() const { return ___sideMissileChance_47; }
	inline float* get_address_of_sideMissileChance_47() { return &___sideMissileChance_47; }
	inline void set_sideMissileChance_47(float value)
	{
		___sideMissileChance_47 = value;
	}

	inline static int32_t get_offset_of_firingRig_48() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___firingRig_48)); }
	inline GameObject_t1756533147 * get_firingRig_48() const { return ___firingRig_48; }
	inline GameObject_t1756533147 ** get_address_of_firingRig_48() { return &___firingRig_48; }
	inline void set_firingRig_48(GameObject_t1756533147 * value)
	{
		___firingRig_48 = value;
		Il2CppCodeGenWriteBarrier(&___firingRig_48, value);
	}

	inline static int32_t get_offset_of_chargeColliderRig_49() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___chargeColliderRig_49)); }
	inline GameObject_t1756533147 * get_chargeColliderRig_49() const { return ___chargeColliderRig_49; }
	inline GameObject_t1756533147 ** get_address_of_chargeColliderRig_49() { return &___chargeColliderRig_49; }
	inline void set_chargeColliderRig_49(GameObject_t1756533147 * value)
	{
		___chargeColliderRig_49 = value;
		Il2CppCodeGenWriteBarrier(&___chargeColliderRig_49, value);
	}

	inline static int32_t get_offset_of_input_50() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___input_50)); }
	inline Il2CppObject * get_input_50() const { return ___input_50; }
	inline Il2CppObject ** get_address_of_input_50() { return &___input_50; }
	inline void set_input_50(Il2CppObject * value)
	{
		___input_50 = value;
		Il2CppCodeGenWriteBarrier(&___input_50, value);
	}

	inline static int32_t get_offset_of_rb_51() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___rb_51)); }
	inline Rigidbody_t4233889191 * get_rb_51() const { return ___rb_51; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_51() { return &___rb_51; }
	inline void set_rb_51(Rigidbody_t4233889191 * value)
	{
		___rb_51 = value;
		Il2CppCodeGenWriteBarrier(&___rb_51, value);
	}

	inline static int32_t get_offset_of_maxForward_52() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___maxForward_52)); }
	inline float get_maxForward_52() const { return ___maxForward_52; }
	inline float* get_address_of_maxForward_52() { return &___maxForward_52; }
	inline void set_maxForward_52(float value)
	{
		___maxForward_52 = value;
	}

	inline static int32_t get_offset_of_colliderRadius_53() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___colliderRadius_53)); }
	inline float get_colliderRadius_53() const { return ___colliderRadius_53; }
	inline float* get_address_of_colliderRadius_53() { return &___colliderRadius_53; }
	inline void set_colliderRadius_53(float value)
	{
		___colliderRadius_53 = value;
	}
};

struct PlayerShip_t2635532215_StaticFields
{
public:
	// PlayerShip PlayerShip::singleton
	PlayerShip_t2635532215 * ___singleton_54;

public:
	inline static int32_t get_offset_of_singleton_54() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215_StaticFields, ___singleton_54)); }
	inline PlayerShip_t2635532215 * get_singleton_54() const { return ___singleton_54; }
	inline PlayerShip_t2635532215 ** get_address_of_singleton_54() { return &___singleton_54; }
	inline void set_singleton_54(PlayerShip_t2635532215 * value)
	{
		___singleton_54 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_54, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
