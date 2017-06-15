#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// MovingSpawnManager
struct MovingSpawnManager_t2417359772;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingSpawnManager
struct  MovingSpawnManager_t2417359772  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MovingSpawnManager::xBound
	float ___xBound_2;
	// System.Single MovingSpawnManager::yBound
	float ___yBound_3;
	// System.Single MovingSpawnManager::movingSpawnDelay
	float ___movingSpawnDelay_4;
	// System.Single MovingSpawnManager::promoAreaSpawnDelay
	float ___promoAreaSpawnDelay_5;
	// System.Boolean MovingSpawnManager::spawnEnabled
	bool ___spawnEnabled_6;
	// UnityEngine.UI.Text MovingSpawnManager::spawnTimerText
	Text_t356221433 * ___spawnTimerText_7;
	// System.Single MovingSpawnManager::toMovingSpawnTime
	float ___toMovingSpawnTime_8;
	// System.Single MovingSpawnManager::toPromoAreaSpawnTime
	float ___toPromoAreaSpawnTime_9;
	// System.Collections.IEnumerator MovingSpawnManager::cr1
	Il2CppObject * ___cr1_10;
	// UnityEngine.GameObject MovingSpawnManager::movingSpawn
	GameObject_t1756533147 * ___movingSpawn_11;
	// UnityEngine.GameObject MovingSpawnManager::promoArea
	GameObject_t1756533147 * ___promoArea_12;

public:
	inline static int32_t get_offset_of_xBound_2() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___xBound_2)); }
	inline float get_xBound_2() const { return ___xBound_2; }
	inline float* get_address_of_xBound_2() { return &___xBound_2; }
	inline void set_xBound_2(float value)
	{
		___xBound_2 = value;
	}

	inline static int32_t get_offset_of_yBound_3() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___yBound_3)); }
	inline float get_yBound_3() const { return ___yBound_3; }
	inline float* get_address_of_yBound_3() { return &___yBound_3; }
	inline void set_yBound_3(float value)
	{
		___yBound_3 = value;
	}

	inline static int32_t get_offset_of_movingSpawnDelay_4() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___movingSpawnDelay_4)); }
	inline float get_movingSpawnDelay_4() const { return ___movingSpawnDelay_4; }
	inline float* get_address_of_movingSpawnDelay_4() { return &___movingSpawnDelay_4; }
	inline void set_movingSpawnDelay_4(float value)
	{
		___movingSpawnDelay_4 = value;
	}

	inline static int32_t get_offset_of_promoAreaSpawnDelay_5() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___promoAreaSpawnDelay_5)); }
	inline float get_promoAreaSpawnDelay_5() const { return ___promoAreaSpawnDelay_5; }
	inline float* get_address_of_promoAreaSpawnDelay_5() { return &___promoAreaSpawnDelay_5; }
	inline void set_promoAreaSpawnDelay_5(float value)
	{
		___promoAreaSpawnDelay_5 = value;
	}

	inline static int32_t get_offset_of_spawnEnabled_6() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___spawnEnabled_6)); }
	inline bool get_spawnEnabled_6() const { return ___spawnEnabled_6; }
	inline bool* get_address_of_spawnEnabled_6() { return &___spawnEnabled_6; }
	inline void set_spawnEnabled_6(bool value)
	{
		___spawnEnabled_6 = value;
	}

	inline static int32_t get_offset_of_spawnTimerText_7() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___spawnTimerText_7)); }
	inline Text_t356221433 * get_spawnTimerText_7() const { return ___spawnTimerText_7; }
	inline Text_t356221433 ** get_address_of_spawnTimerText_7() { return &___spawnTimerText_7; }
	inline void set_spawnTimerText_7(Text_t356221433 * value)
	{
		___spawnTimerText_7 = value;
		Il2CppCodeGenWriteBarrier(&___spawnTimerText_7, value);
	}

	inline static int32_t get_offset_of_toMovingSpawnTime_8() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___toMovingSpawnTime_8)); }
	inline float get_toMovingSpawnTime_8() const { return ___toMovingSpawnTime_8; }
	inline float* get_address_of_toMovingSpawnTime_8() { return &___toMovingSpawnTime_8; }
	inline void set_toMovingSpawnTime_8(float value)
	{
		___toMovingSpawnTime_8 = value;
	}

	inline static int32_t get_offset_of_toPromoAreaSpawnTime_9() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___toPromoAreaSpawnTime_9)); }
	inline float get_toPromoAreaSpawnTime_9() const { return ___toPromoAreaSpawnTime_9; }
	inline float* get_address_of_toPromoAreaSpawnTime_9() { return &___toPromoAreaSpawnTime_9; }
	inline void set_toPromoAreaSpawnTime_9(float value)
	{
		___toPromoAreaSpawnTime_9 = value;
	}

	inline static int32_t get_offset_of_cr1_10() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___cr1_10)); }
	inline Il2CppObject * get_cr1_10() const { return ___cr1_10; }
	inline Il2CppObject ** get_address_of_cr1_10() { return &___cr1_10; }
	inline void set_cr1_10(Il2CppObject * value)
	{
		___cr1_10 = value;
		Il2CppCodeGenWriteBarrier(&___cr1_10, value);
	}

	inline static int32_t get_offset_of_movingSpawn_11() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___movingSpawn_11)); }
	inline GameObject_t1756533147 * get_movingSpawn_11() const { return ___movingSpawn_11; }
	inline GameObject_t1756533147 ** get_address_of_movingSpawn_11() { return &___movingSpawn_11; }
	inline void set_movingSpawn_11(GameObject_t1756533147 * value)
	{
		___movingSpawn_11 = value;
		Il2CppCodeGenWriteBarrier(&___movingSpawn_11, value);
	}

	inline static int32_t get_offset_of_promoArea_12() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772, ___promoArea_12)); }
	inline GameObject_t1756533147 * get_promoArea_12() const { return ___promoArea_12; }
	inline GameObject_t1756533147 ** get_address_of_promoArea_12() { return &___promoArea_12; }
	inline void set_promoArea_12(GameObject_t1756533147 * value)
	{
		___promoArea_12 = value;
		Il2CppCodeGenWriteBarrier(&___promoArea_12, value);
	}
};

struct MovingSpawnManager_t2417359772_StaticFields
{
public:
	// MovingSpawnManager MovingSpawnManager::singleton
	MovingSpawnManager_t2417359772 * ___singleton_13;

public:
	inline static int32_t get_offset_of_singleton_13() { return static_cast<int32_t>(offsetof(MovingSpawnManager_t2417359772_StaticFields, ___singleton_13)); }
	inline MovingSpawnManager_t2417359772 * get_singleton_13() const { return ___singleton_13; }
	inline MovingSpawnManager_t2417359772 ** get_address_of_singleton_13() { return &___singleton_13; }
	inline void set_singleton_13(MovingSpawnManager_t2417359772 * value)
	{
		___singleton_13 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
