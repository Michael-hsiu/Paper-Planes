#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// SniperBoss
struct SniperBoss_t228994654;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SniperBossMS
struct  SniperBossMS_t1623985390  : public MonoBehaviour_t1158329972
{
public:
	// Direction SniperBossMS::direction
	int32_t ___direction_2;
	// System.Boolean SniperBossMS::safeDistanceColliderActive
	bool ___safeDistanceColliderActive_3;
	// System.Boolean SniperBossMS::laserMovementActive
	bool ___laserMovementActive_4;
	// System.Boolean SniperBossMS::bulletHellMovementActive
	bool ___bulletHellMovementActive_5;
	// System.Boolean SniperBossMS::teleportMovementActive
	bool ___teleportMovementActive_6;
	// System.Single SniperBossMS::laserRotationSpeed
	float ___laserRotationSpeed_7;
	// System.Single SniperBossMS::xBound
	float ___xBound_8;
	// System.Single SniperBossMS::yBound
	float ___yBound_9;
	// System.Boolean SniperBossMS::moveStateOverridden
	bool ___moveStateOverridden_10;
	// System.Collections.IEnumerator SniperBossMS::laserRoutine
	Il2CppObject * ___laserRoutine_11;
	// UnityEngine.Collider SniperBossMS::mapCollider
	Collider_t3497673348 * ___mapCollider_12;
	// UnityEngine.Collider SniperBossMS::bossHitCollider
	Collider_t3497673348 * ___bossHitCollider_13;
	// UnityEngine.Color SniperBossMS::bossOriginalColor
	Color_t2020392075  ___bossOriginalColor_14;
	// UnityEngine.Color SniperBossMS::stealthColor
	Color_t2020392075  ___stealthColor_15;
	// UnityEngine.SpriteRenderer SniperBossMS::spriteRenderer
	SpriteRenderer_t1209076198 * ___spriteRenderer_16;
	// SniperBoss SniperBossMS::sniperBoss
	SniperBoss_t228994654 * ___sniperBoss_17;

public:
	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___direction_2)); }
	inline int32_t get_direction_2() const { return ___direction_2; }
	inline int32_t* get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(int32_t value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_safeDistanceColliderActive_3() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___safeDistanceColliderActive_3)); }
	inline bool get_safeDistanceColliderActive_3() const { return ___safeDistanceColliderActive_3; }
	inline bool* get_address_of_safeDistanceColliderActive_3() { return &___safeDistanceColliderActive_3; }
	inline void set_safeDistanceColliderActive_3(bool value)
	{
		___safeDistanceColliderActive_3 = value;
	}

	inline static int32_t get_offset_of_laserMovementActive_4() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___laserMovementActive_4)); }
	inline bool get_laserMovementActive_4() const { return ___laserMovementActive_4; }
	inline bool* get_address_of_laserMovementActive_4() { return &___laserMovementActive_4; }
	inline void set_laserMovementActive_4(bool value)
	{
		___laserMovementActive_4 = value;
	}

	inline static int32_t get_offset_of_bulletHellMovementActive_5() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___bulletHellMovementActive_5)); }
	inline bool get_bulletHellMovementActive_5() const { return ___bulletHellMovementActive_5; }
	inline bool* get_address_of_bulletHellMovementActive_5() { return &___bulletHellMovementActive_5; }
	inline void set_bulletHellMovementActive_5(bool value)
	{
		___bulletHellMovementActive_5 = value;
	}

	inline static int32_t get_offset_of_teleportMovementActive_6() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___teleportMovementActive_6)); }
	inline bool get_teleportMovementActive_6() const { return ___teleportMovementActive_6; }
	inline bool* get_address_of_teleportMovementActive_6() { return &___teleportMovementActive_6; }
	inline void set_teleportMovementActive_6(bool value)
	{
		___teleportMovementActive_6 = value;
	}

	inline static int32_t get_offset_of_laserRotationSpeed_7() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___laserRotationSpeed_7)); }
	inline float get_laserRotationSpeed_7() const { return ___laserRotationSpeed_7; }
	inline float* get_address_of_laserRotationSpeed_7() { return &___laserRotationSpeed_7; }
	inline void set_laserRotationSpeed_7(float value)
	{
		___laserRotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_xBound_8() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___xBound_8)); }
	inline float get_xBound_8() const { return ___xBound_8; }
	inline float* get_address_of_xBound_8() { return &___xBound_8; }
	inline void set_xBound_8(float value)
	{
		___xBound_8 = value;
	}

	inline static int32_t get_offset_of_yBound_9() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___yBound_9)); }
	inline float get_yBound_9() const { return ___yBound_9; }
	inline float* get_address_of_yBound_9() { return &___yBound_9; }
	inline void set_yBound_9(float value)
	{
		___yBound_9 = value;
	}

	inline static int32_t get_offset_of_moveStateOverridden_10() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___moveStateOverridden_10)); }
	inline bool get_moveStateOverridden_10() const { return ___moveStateOverridden_10; }
	inline bool* get_address_of_moveStateOverridden_10() { return &___moveStateOverridden_10; }
	inline void set_moveStateOverridden_10(bool value)
	{
		___moveStateOverridden_10 = value;
	}

	inline static int32_t get_offset_of_laserRoutine_11() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___laserRoutine_11)); }
	inline Il2CppObject * get_laserRoutine_11() const { return ___laserRoutine_11; }
	inline Il2CppObject ** get_address_of_laserRoutine_11() { return &___laserRoutine_11; }
	inline void set_laserRoutine_11(Il2CppObject * value)
	{
		___laserRoutine_11 = value;
		Il2CppCodeGenWriteBarrier(&___laserRoutine_11, value);
	}

	inline static int32_t get_offset_of_mapCollider_12() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___mapCollider_12)); }
	inline Collider_t3497673348 * get_mapCollider_12() const { return ___mapCollider_12; }
	inline Collider_t3497673348 ** get_address_of_mapCollider_12() { return &___mapCollider_12; }
	inline void set_mapCollider_12(Collider_t3497673348 * value)
	{
		___mapCollider_12 = value;
		Il2CppCodeGenWriteBarrier(&___mapCollider_12, value);
	}

	inline static int32_t get_offset_of_bossHitCollider_13() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___bossHitCollider_13)); }
	inline Collider_t3497673348 * get_bossHitCollider_13() const { return ___bossHitCollider_13; }
	inline Collider_t3497673348 ** get_address_of_bossHitCollider_13() { return &___bossHitCollider_13; }
	inline void set_bossHitCollider_13(Collider_t3497673348 * value)
	{
		___bossHitCollider_13 = value;
		Il2CppCodeGenWriteBarrier(&___bossHitCollider_13, value);
	}

	inline static int32_t get_offset_of_bossOriginalColor_14() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___bossOriginalColor_14)); }
	inline Color_t2020392075  get_bossOriginalColor_14() const { return ___bossOriginalColor_14; }
	inline Color_t2020392075 * get_address_of_bossOriginalColor_14() { return &___bossOriginalColor_14; }
	inline void set_bossOriginalColor_14(Color_t2020392075  value)
	{
		___bossOriginalColor_14 = value;
	}

	inline static int32_t get_offset_of_stealthColor_15() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___stealthColor_15)); }
	inline Color_t2020392075  get_stealthColor_15() const { return ___stealthColor_15; }
	inline Color_t2020392075 * get_address_of_stealthColor_15() { return &___stealthColor_15; }
	inline void set_stealthColor_15(Color_t2020392075  value)
	{
		___stealthColor_15 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_16() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___spriteRenderer_16)); }
	inline SpriteRenderer_t1209076198 * get_spriteRenderer_16() const { return ___spriteRenderer_16; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRenderer_16() { return &___spriteRenderer_16; }
	inline void set_spriteRenderer_16(SpriteRenderer_t1209076198 * value)
	{
		___spriteRenderer_16 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_16, value);
	}

	inline static int32_t get_offset_of_sniperBoss_17() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___sniperBoss_17)); }
	inline SniperBoss_t228994654 * get_sniperBoss_17() const { return ___sniperBoss_17; }
	inline SniperBoss_t228994654 ** get_address_of_sniperBoss_17() { return &___sniperBoss_17; }
	inline void set_sniperBoss_17(SniperBoss_t228994654 * value)
	{
		___sniperBoss_17 = value;
		Il2CppCodeGenWriteBarrier(&___sniperBoss_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
