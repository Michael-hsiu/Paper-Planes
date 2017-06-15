#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AttackStatus977837830.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_FiringMode2712036264.h"

// System.Collections.Generic.List`1<ShotSpawn>
struct List_1_t3173386001;
// SniperBoss
struct SniperBoss_t228994654;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PoolObject
struct PoolObject_t202793199;
// UnityEngine.Collider
struct Collider_t3497673348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SniperBossFS
struct  SniperBossFS_t1623985397  : public MonoBehaviour_t1158329972
{
public:
	// AttackStatus SniperBossFS::attackStatus
	int32_t ___attackStatus_2;
	// System.Single SniperBossFS::laserChargeTime
	float ___laserChargeTime_3;
	// System.Single SniperBossFS::laserEmitTime
	float ___laserEmitTime_4;
	// System.Single SniperBossFS::laserResetDelayTime
	float ___laserResetDelayTime_5;
	// System.Boolean SniperBossFS::laserActive
	bool ___laserActive_6;
	// System.Single SniperBossFS::bulletHellDuration
	float ___bulletHellDuration_7;
	// System.Boolean SniperBossFS::bulletHellActive
	bool ___bulletHellActive_8;
	// System.Collections.Generic.List`1<ShotSpawn> SniperBossFS::bulletHellShotSpawns
	List_1_t3173386001 * ___bulletHellShotSpawns_9;
	// System.Single SniperBossFS::numAttacks
	float ___numAttacks_10;
	// System.Single SniperBossFS::numRotations
	float ___numRotations_11;
	// System.Single SniperBossFS::rotationLength
	float ___rotationLength_12;
	// System.Single SniperBossFS::endTime
	float ___endTime_13;
	// SniperBoss SniperBossFS::sniperBoss
	SniperBoss_t228994654 * ___sniperBoss_14;
	// System.Collections.IEnumerator SniperBossFS::laserAttackRoutine
	Il2CppObject * ___laserAttackRoutine_15;
	// System.Collections.IEnumerator SniperBossFS::bulletHellAttackRoutine
	Il2CppObject * ___bulletHellAttackRoutine_16;
	// System.Collections.IEnumerator SniperBossFS::teleportRoutine
	Il2CppObject * ___teleportRoutine_17;
	// System.Boolean SniperBossFS::teleportActive
	bool ___teleportActive_18;
	// System.Single SniperBossFS::teleDelay
	float ___teleDelay_19;
	// System.Single SniperBossFS::teleCooldown
	float ___teleCooldown_20;
	// System.Single SniperBossFS::postTeleDelay
	float ___postTeleDelay_21;
	// UnityEngine.GameObject SniperBossFS::teleMarker
	GameObject_t1756533147 * ___teleMarker_22;
	// UnityEngine.Vector3 SniperBossFS::teleportLocation
	Vector3_t2243707580  ___teleportLocation_23;
	// PoolObject SniperBossFS::activeTeleMarker
	PoolObject_t202793199 * ___activeTeleMarker_24;
	// UnityEngine.GameObject SniperBossFS::laserCollider
	GameObject_t1756533147 * ___laserCollider_25;
	// UnityEngine.Collider SniperBossFS::mapCollider
	Collider_t3497673348 * ___mapCollider_26;
	// System.Single SniperBossFS::xBound
	float ___xBound_27;
	// System.Single SniperBossFS::yBound
	float ___yBound_28;
	// FiringMode SniperBossFS::<Mode>k__BackingField
	int32_t ___U3CModeU3Ek__BackingField_29;

public:
	inline static int32_t get_offset_of_attackStatus_2() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___attackStatus_2)); }
	inline int32_t get_attackStatus_2() const { return ___attackStatus_2; }
	inline int32_t* get_address_of_attackStatus_2() { return &___attackStatus_2; }
	inline void set_attackStatus_2(int32_t value)
	{
		___attackStatus_2 = value;
	}

	inline static int32_t get_offset_of_laserChargeTime_3() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___laserChargeTime_3)); }
	inline float get_laserChargeTime_3() const { return ___laserChargeTime_3; }
	inline float* get_address_of_laserChargeTime_3() { return &___laserChargeTime_3; }
	inline void set_laserChargeTime_3(float value)
	{
		___laserChargeTime_3 = value;
	}

	inline static int32_t get_offset_of_laserEmitTime_4() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___laserEmitTime_4)); }
	inline float get_laserEmitTime_4() const { return ___laserEmitTime_4; }
	inline float* get_address_of_laserEmitTime_4() { return &___laserEmitTime_4; }
	inline void set_laserEmitTime_4(float value)
	{
		___laserEmitTime_4 = value;
	}

	inline static int32_t get_offset_of_laserResetDelayTime_5() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___laserResetDelayTime_5)); }
	inline float get_laserResetDelayTime_5() const { return ___laserResetDelayTime_5; }
	inline float* get_address_of_laserResetDelayTime_5() { return &___laserResetDelayTime_5; }
	inline void set_laserResetDelayTime_5(float value)
	{
		___laserResetDelayTime_5 = value;
	}

	inline static int32_t get_offset_of_laserActive_6() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___laserActive_6)); }
	inline bool get_laserActive_6() const { return ___laserActive_6; }
	inline bool* get_address_of_laserActive_6() { return &___laserActive_6; }
	inline void set_laserActive_6(bool value)
	{
		___laserActive_6 = value;
	}

	inline static int32_t get_offset_of_bulletHellDuration_7() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___bulletHellDuration_7)); }
	inline float get_bulletHellDuration_7() const { return ___bulletHellDuration_7; }
	inline float* get_address_of_bulletHellDuration_7() { return &___bulletHellDuration_7; }
	inline void set_bulletHellDuration_7(float value)
	{
		___bulletHellDuration_7 = value;
	}

	inline static int32_t get_offset_of_bulletHellActive_8() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___bulletHellActive_8)); }
	inline bool get_bulletHellActive_8() const { return ___bulletHellActive_8; }
	inline bool* get_address_of_bulletHellActive_8() { return &___bulletHellActive_8; }
	inline void set_bulletHellActive_8(bool value)
	{
		___bulletHellActive_8 = value;
	}

	inline static int32_t get_offset_of_bulletHellShotSpawns_9() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___bulletHellShotSpawns_9)); }
	inline List_1_t3173386001 * get_bulletHellShotSpawns_9() const { return ___bulletHellShotSpawns_9; }
	inline List_1_t3173386001 ** get_address_of_bulletHellShotSpawns_9() { return &___bulletHellShotSpawns_9; }
	inline void set_bulletHellShotSpawns_9(List_1_t3173386001 * value)
	{
		___bulletHellShotSpawns_9 = value;
		Il2CppCodeGenWriteBarrier(&___bulletHellShotSpawns_9, value);
	}

	inline static int32_t get_offset_of_numAttacks_10() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___numAttacks_10)); }
	inline float get_numAttacks_10() const { return ___numAttacks_10; }
	inline float* get_address_of_numAttacks_10() { return &___numAttacks_10; }
	inline void set_numAttacks_10(float value)
	{
		___numAttacks_10 = value;
	}

	inline static int32_t get_offset_of_numRotations_11() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___numRotations_11)); }
	inline float get_numRotations_11() const { return ___numRotations_11; }
	inline float* get_address_of_numRotations_11() { return &___numRotations_11; }
	inline void set_numRotations_11(float value)
	{
		___numRotations_11 = value;
	}

	inline static int32_t get_offset_of_rotationLength_12() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___rotationLength_12)); }
	inline float get_rotationLength_12() const { return ___rotationLength_12; }
	inline float* get_address_of_rotationLength_12() { return &___rotationLength_12; }
	inline void set_rotationLength_12(float value)
	{
		___rotationLength_12 = value;
	}

	inline static int32_t get_offset_of_endTime_13() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___endTime_13)); }
	inline float get_endTime_13() const { return ___endTime_13; }
	inline float* get_address_of_endTime_13() { return &___endTime_13; }
	inline void set_endTime_13(float value)
	{
		___endTime_13 = value;
	}

	inline static int32_t get_offset_of_sniperBoss_14() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___sniperBoss_14)); }
	inline SniperBoss_t228994654 * get_sniperBoss_14() const { return ___sniperBoss_14; }
	inline SniperBoss_t228994654 ** get_address_of_sniperBoss_14() { return &___sniperBoss_14; }
	inline void set_sniperBoss_14(SniperBoss_t228994654 * value)
	{
		___sniperBoss_14 = value;
		Il2CppCodeGenWriteBarrier(&___sniperBoss_14, value);
	}

	inline static int32_t get_offset_of_laserAttackRoutine_15() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___laserAttackRoutine_15)); }
	inline Il2CppObject * get_laserAttackRoutine_15() const { return ___laserAttackRoutine_15; }
	inline Il2CppObject ** get_address_of_laserAttackRoutine_15() { return &___laserAttackRoutine_15; }
	inline void set_laserAttackRoutine_15(Il2CppObject * value)
	{
		___laserAttackRoutine_15 = value;
		Il2CppCodeGenWriteBarrier(&___laserAttackRoutine_15, value);
	}

	inline static int32_t get_offset_of_bulletHellAttackRoutine_16() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___bulletHellAttackRoutine_16)); }
	inline Il2CppObject * get_bulletHellAttackRoutine_16() const { return ___bulletHellAttackRoutine_16; }
	inline Il2CppObject ** get_address_of_bulletHellAttackRoutine_16() { return &___bulletHellAttackRoutine_16; }
	inline void set_bulletHellAttackRoutine_16(Il2CppObject * value)
	{
		___bulletHellAttackRoutine_16 = value;
		Il2CppCodeGenWriteBarrier(&___bulletHellAttackRoutine_16, value);
	}

	inline static int32_t get_offset_of_teleportRoutine_17() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___teleportRoutine_17)); }
	inline Il2CppObject * get_teleportRoutine_17() const { return ___teleportRoutine_17; }
	inline Il2CppObject ** get_address_of_teleportRoutine_17() { return &___teleportRoutine_17; }
	inline void set_teleportRoutine_17(Il2CppObject * value)
	{
		___teleportRoutine_17 = value;
		Il2CppCodeGenWriteBarrier(&___teleportRoutine_17, value);
	}

	inline static int32_t get_offset_of_teleportActive_18() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___teleportActive_18)); }
	inline bool get_teleportActive_18() const { return ___teleportActive_18; }
	inline bool* get_address_of_teleportActive_18() { return &___teleportActive_18; }
	inline void set_teleportActive_18(bool value)
	{
		___teleportActive_18 = value;
	}

	inline static int32_t get_offset_of_teleDelay_19() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___teleDelay_19)); }
	inline float get_teleDelay_19() const { return ___teleDelay_19; }
	inline float* get_address_of_teleDelay_19() { return &___teleDelay_19; }
	inline void set_teleDelay_19(float value)
	{
		___teleDelay_19 = value;
	}

	inline static int32_t get_offset_of_teleCooldown_20() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___teleCooldown_20)); }
	inline float get_teleCooldown_20() const { return ___teleCooldown_20; }
	inline float* get_address_of_teleCooldown_20() { return &___teleCooldown_20; }
	inline void set_teleCooldown_20(float value)
	{
		___teleCooldown_20 = value;
	}

	inline static int32_t get_offset_of_postTeleDelay_21() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___postTeleDelay_21)); }
	inline float get_postTeleDelay_21() const { return ___postTeleDelay_21; }
	inline float* get_address_of_postTeleDelay_21() { return &___postTeleDelay_21; }
	inline void set_postTeleDelay_21(float value)
	{
		___postTeleDelay_21 = value;
	}

	inline static int32_t get_offset_of_teleMarker_22() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___teleMarker_22)); }
	inline GameObject_t1756533147 * get_teleMarker_22() const { return ___teleMarker_22; }
	inline GameObject_t1756533147 ** get_address_of_teleMarker_22() { return &___teleMarker_22; }
	inline void set_teleMarker_22(GameObject_t1756533147 * value)
	{
		___teleMarker_22 = value;
		Il2CppCodeGenWriteBarrier(&___teleMarker_22, value);
	}

	inline static int32_t get_offset_of_teleportLocation_23() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___teleportLocation_23)); }
	inline Vector3_t2243707580  get_teleportLocation_23() const { return ___teleportLocation_23; }
	inline Vector3_t2243707580 * get_address_of_teleportLocation_23() { return &___teleportLocation_23; }
	inline void set_teleportLocation_23(Vector3_t2243707580  value)
	{
		___teleportLocation_23 = value;
	}

	inline static int32_t get_offset_of_activeTeleMarker_24() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___activeTeleMarker_24)); }
	inline PoolObject_t202793199 * get_activeTeleMarker_24() const { return ___activeTeleMarker_24; }
	inline PoolObject_t202793199 ** get_address_of_activeTeleMarker_24() { return &___activeTeleMarker_24; }
	inline void set_activeTeleMarker_24(PoolObject_t202793199 * value)
	{
		___activeTeleMarker_24 = value;
		Il2CppCodeGenWriteBarrier(&___activeTeleMarker_24, value);
	}

	inline static int32_t get_offset_of_laserCollider_25() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___laserCollider_25)); }
	inline GameObject_t1756533147 * get_laserCollider_25() const { return ___laserCollider_25; }
	inline GameObject_t1756533147 ** get_address_of_laserCollider_25() { return &___laserCollider_25; }
	inline void set_laserCollider_25(GameObject_t1756533147 * value)
	{
		___laserCollider_25 = value;
		Il2CppCodeGenWriteBarrier(&___laserCollider_25, value);
	}

	inline static int32_t get_offset_of_mapCollider_26() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___mapCollider_26)); }
	inline Collider_t3497673348 * get_mapCollider_26() const { return ___mapCollider_26; }
	inline Collider_t3497673348 ** get_address_of_mapCollider_26() { return &___mapCollider_26; }
	inline void set_mapCollider_26(Collider_t3497673348 * value)
	{
		___mapCollider_26 = value;
		Il2CppCodeGenWriteBarrier(&___mapCollider_26, value);
	}

	inline static int32_t get_offset_of_xBound_27() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___xBound_27)); }
	inline float get_xBound_27() const { return ___xBound_27; }
	inline float* get_address_of_xBound_27() { return &___xBound_27; }
	inline void set_xBound_27(float value)
	{
		___xBound_27 = value;
	}

	inline static int32_t get_offset_of_yBound_28() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___yBound_28)); }
	inline float get_yBound_28() const { return ___yBound_28; }
	inline float* get_address_of_yBound_28() { return &___yBound_28; }
	inline void set_yBound_28(float value)
	{
		___yBound_28 = value;
	}

	inline static int32_t get_offset_of_U3CModeU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(SniperBossFS_t1623985397, ___U3CModeU3Ek__BackingField_29)); }
	inline int32_t get_U3CModeU3Ek__BackingField_29() const { return ___U3CModeU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CModeU3Ek__BackingField_29() { return &___U3CModeU3Ek__BackingField_29; }
	inline void set_U3CModeU3Ek__BackingField_29(int32_t value)
	{
		___U3CModeU3Ek__BackingField_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
