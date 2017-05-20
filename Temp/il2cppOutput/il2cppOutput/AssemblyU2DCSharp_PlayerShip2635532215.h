#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InputComponent
struct InputComponent_t1734991399;
// System.Collections.Generic.Stack`1<PlayerShip/SSContainer>
struct Stack_1_t1375135873;
// System.Collections.Generic.Dictionary`2<PlayerShip/Weapons,PlayerShip/SSContainer>
struct Dictionary_2_t3622891029;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "AssemblyU2DCSharp_FiringShip3666415697.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShip
struct  PlayerShip_t2635532215  : public FiringShip_t3666415697
{
public:
	// InputComponent PlayerShip::input
	Il2CppObject * ___input_23;
	// System.Collections.Generic.Stack`1<PlayerShip/SSContainer> PlayerShip::activeSS
	Stack_1_t1375135873 * ___activeSS_24;
	// System.Collections.Generic.Dictionary`2<PlayerShip/Weapons,PlayerShip/SSContainer> PlayerShip::ssDict
	Dictionary_2_t3622891029 * ___ssDict_25;
	// UnityEngine.Rigidbody PlayerShip::rb
	Rigidbody_t4233889191 * ___rb_26;
	// System.Single PlayerShip::maxForward
	float ___maxForward_27;
	// System.Single PlayerShip::colliderRadius
	float ___colliderRadius_28;
	// System.Int32 PlayerShip::numShots
	int32_t ___numShots_29;
	// System.Boolean PlayerShip::dashStarted
	bool ___dashStarted_30;
	// System.Single PlayerShip::dashEndTime
	float ___dashEndTime_31;
	// System.Single PlayerShip::thrust
	float ___thrust_32;
	// System.Single PlayerShip::maxDash
	float ___maxDash_33;
	// System.Single PlayerShip::dashDuration
	float ___dashDuration_34;
	// System.Boolean PlayerShip::rushStarted
	bool ___rushStarted_35;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerShip::waveSpawns
	List_1_t1125654279 * ___waveSpawns_36;
	// System.Boolean PlayerShip::waveShotEnabled
	bool ___waveShotEnabled_37;
	// System.Single PlayerShip::waveRandomVal
	float ___waveRandomVal_38;
	// System.Single PlayerShip::waveChance
	float ___waveChance_39;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerShip::sideMissileSpawns
	List_1_t1125654279 * ___sideMissileSpawns_40;
	// System.Boolean PlayerShip::sideMissileEnabled
	bool ___sideMissileEnabled_41;
	// System.Single PlayerShip::sideMissileRandomVal
	float ___sideMissileRandomVal_42;
	// System.Single PlayerShip::sideMissileChance
	float ___sideMissileChance_43;

public:
	inline static int32_t get_offset_of_input_23() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___input_23)); }
	inline Il2CppObject * get_input_23() const { return ___input_23; }
	inline Il2CppObject ** get_address_of_input_23() { return &___input_23; }
	inline void set_input_23(Il2CppObject * value)
	{
		___input_23 = value;
		Il2CppCodeGenWriteBarrier(&___input_23, value);
	}

	inline static int32_t get_offset_of_activeSS_24() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___activeSS_24)); }
	inline Stack_1_t1375135873 * get_activeSS_24() const { return ___activeSS_24; }
	inline Stack_1_t1375135873 ** get_address_of_activeSS_24() { return &___activeSS_24; }
	inline void set_activeSS_24(Stack_1_t1375135873 * value)
	{
		___activeSS_24 = value;
		Il2CppCodeGenWriteBarrier(&___activeSS_24, value);
	}

	inline static int32_t get_offset_of_ssDict_25() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___ssDict_25)); }
	inline Dictionary_2_t3622891029 * get_ssDict_25() const { return ___ssDict_25; }
	inline Dictionary_2_t3622891029 ** get_address_of_ssDict_25() { return &___ssDict_25; }
	inline void set_ssDict_25(Dictionary_2_t3622891029 * value)
	{
		___ssDict_25 = value;
		Il2CppCodeGenWriteBarrier(&___ssDict_25, value);
	}

	inline static int32_t get_offset_of_rb_26() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___rb_26)); }
	inline Rigidbody_t4233889191 * get_rb_26() const { return ___rb_26; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_26() { return &___rb_26; }
	inline void set_rb_26(Rigidbody_t4233889191 * value)
	{
		___rb_26 = value;
		Il2CppCodeGenWriteBarrier(&___rb_26, value);
	}

	inline static int32_t get_offset_of_maxForward_27() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___maxForward_27)); }
	inline float get_maxForward_27() const { return ___maxForward_27; }
	inline float* get_address_of_maxForward_27() { return &___maxForward_27; }
	inline void set_maxForward_27(float value)
	{
		___maxForward_27 = value;
	}

	inline static int32_t get_offset_of_colliderRadius_28() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___colliderRadius_28)); }
	inline float get_colliderRadius_28() const { return ___colliderRadius_28; }
	inline float* get_address_of_colliderRadius_28() { return &___colliderRadius_28; }
	inline void set_colliderRadius_28(float value)
	{
		___colliderRadius_28 = value;
	}

	inline static int32_t get_offset_of_numShots_29() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___numShots_29)); }
	inline int32_t get_numShots_29() const { return ___numShots_29; }
	inline int32_t* get_address_of_numShots_29() { return &___numShots_29; }
	inline void set_numShots_29(int32_t value)
	{
		___numShots_29 = value;
	}

	inline static int32_t get_offset_of_dashStarted_30() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___dashStarted_30)); }
	inline bool get_dashStarted_30() const { return ___dashStarted_30; }
	inline bool* get_address_of_dashStarted_30() { return &___dashStarted_30; }
	inline void set_dashStarted_30(bool value)
	{
		___dashStarted_30 = value;
	}

	inline static int32_t get_offset_of_dashEndTime_31() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___dashEndTime_31)); }
	inline float get_dashEndTime_31() const { return ___dashEndTime_31; }
	inline float* get_address_of_dashEndTime_31() { return &___dashEndTime_31; }
	inline void set_dashEndTime_31(float value)
	{
		___dashEndTime_31 = value;
	}

	inline static int32_t get_offset_of_thrust_32() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___thrust_32)); }
	inline float get_thrust_32() const { return ___thrust_32; }
	inline float* get_address_of_thrust_32() { return &___thrust_32; }
	inline void set_thrust_32(float value)
	{
		___thrust_32 = value;
	}

	inline static int32_t get_offset_of_maxDash_33() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___maxDash_33)); }
	inline float get_maxDash_33() const { return ___maxDash_33; }
	inline float* get_address_of_maxDash_33() { return &___maxDash_33; }
	inline void set_maxDash_33(float value)
	{
		___maxDash_33 = value;
	}

	inline static int32_t get_offset_of_dashDuration_34() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___dashDuration_34)); }
	inline float get_dashDuration_34() const { return ___dashDuration_34; }
	inline float* get_address_of_dashDuration_34() { return &___dashDuration_34; }
	inline void set_dashDuration_34(float value)
	{
		___dashDuration_34 = value;
	}

	inline static int32_t get_offset_of_rushStarted_35() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___rushStarted_35)); }
	inline bool get_rushStarted_35() const { return ___rushStarted_35; }
	inline bool* get_address_of_rushStarted_35() { return &___rushStarted_35; }
	inline void set_rushStarted_35(bool value)
	{
		___rushStarted_35 = value;
	}

	inline static int32_t get_offset_of_waveSpawns_36() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___waveSpawns_36)); }
	inline List_1_t1125654279 * get_waveSpawns_36() const { return ___waveSpawns_36; }
	inline List_1_t1125654279 ** get_address_of_waveSpawns_36() { return &___waveSpawns_36; }
	inline void set_waveSpawns_36(List_1_t1125654279 * value)
	{
		___waveSpawns_36 = value;
		Il2CppCodeGenWriteBarrier(&___waveSpawns_36, value);
	}

	inline static int32_t get_offset_of_waveShotEnabled_37() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___waveShotEnabled_37)); }
	inline bool get_waveShotEnabled_37() const { return ___waveShotEnabled_37; }
	inline bool* get_address_of_waveShotEnabled_37() { return &___waveShotEnabled_37; }
	inline void set_waveShotEnabled_37(bool value)
	{
		___waveShotEnabled_37 = value;
	}

	inline static int32_t get_offset_of_waveRandomVal_38() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___waveRandomVal_38)); }
	inline float get_waveRandomVal_38() const { return ___waveRandomVal_38; }
	inline float* get_address_of_waveRandomVal_38() { return &___waveRandomVal_38; }
	inline void set_waveRandomVal_38(float value)
	{
		___waveRandomVal_38 = value;
	}

	inline static int32_t get_offset_of_waveChance_39() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___waveChance_39)); }
	inline float get_waveChance_39() const { return ___waveChance_39; }
	inline float* get_address_of_waveChance_39() { return &___waveChance_39; }
	inline void set_waveChance_39(float value)
	{
		___waveChance_39 = value;
	}

	inline static int32_t get_offset_of_sideMissileSpawns_40() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___sideMissileSpawns_40)); }
	inline List_1_t1125654279 * get_sideMissileSpawns_40() const { return ___sideMissileSpawns_40; }
	inline List_1_t1125654279 ** get_address_of_sideMissileSpawns_40() { return &___sideMissileSpawns_40; }
	inline void set_sideMissileSpawns_40(List_1_t1125654279 * value)
	{
		___sideMissileSpawns_40 = value;
		Il2CppCodeGenWriteBarrier(&___sideMissileSpawns_40, value);
	}

	inline static int32_t get_offset_of_sideMissileEnabled_41() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___sideMissileEnabled_41)); }
	inline bool get_sideMissileEnabled_41() const { return ___sideMissileEnabled_41; }
	inline bool* get_address_of_sideMissileEnabled_41() { return &___sideMissileEnabled_41; }
	inline void set_sideMissileEnabled_41(bool value)
	{
		___sideMissileEnabled_41 = value;
	}

	inline static int32_t get_offset_of_sideMissileRandomVal_42() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___sideMissileRandomVal_42)); }
	inline float get_sideMissileRandomVal_42() const { return ___sideMissileRandomVal_42; }
	inline float* get_address_of_sideMissileRandomVal_42() { return &___sideMissileRandomVal_42; }
	inline void set_sideMissileRandomVal_42(float value)
	{
		___sideMissileRandomVal_42 = value;
	}

	inline static int32_t get_offset_of_sideMissileChance_43() { return static_cast<int32_t>(offsetof(PlayerShip_t2635532215, ___sideMissileChance_43)); }
	inline float get_sideMissileChance_43() const { return ___sideMissileChance_43; }
	inline float* get_address_of_sideMissileChance_43() { return &___sideMissileChance_43; }
	inline void set_sideMissileChance_43(float value)
	{
		___sideMissileChance_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
