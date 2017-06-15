#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayerShip
struct PlayerShip_t2635532215;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PowerupSpawner
struct PowerupSpawner_t3879613040;
// MovingSpawnManager
struct MovingSpawnManager_t2417359772;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.Generic.Queue`1<BurstRushPowerup>
struct Queue_1_t2634246579;
// GameManager/StartingNewLevel
struct StartingNewLevel_t2169014082;
// GameManager/EndingLevel
struct EndingLevel_t3444020161;
// GameManager/RecordingEnemyKill
struct RecordingEnemyKill_t1296856205;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// GameManager
struct GameManager_t2252321495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// PlayerShip GameManager::playerShip
	PlayerShip_t2635532215 * ___playerShip_2;
	// UnityEngine.GameObject GameManager::normalSS
	GameObject_t1756533147 * ___normalSS_3;
	// PowerupSpawner GameManager::powerupSpawner
	PowerupSpawner_t3879613040 * ___powerupSpawner_4;
	// MovingSpawnManager GameManager::movingSpawnManager
	MovingSpawnManager_t2417359772 * ___movingSpawnManager_5;
	// System.Boolean GameManager::levelActive
	bool ___levelActive_6;
	// System.Int32 GameManager::playerHealth
	int32_t ___playerHealth_7;
	// System.Int32 GameManager::playerMaxHealth
	int32_t ___playerMaxHealth_8;
	// System.Int32 GameManager::playerScore
	int32_t ___playerScore_9;
	// System.Int32 GameManager::targetScore
	int32_t ___targetScore_10;
	// System.Int32 GameManager::playerBalance
	int32_t ___playerBalance_11;
	// System.Int32 GameManager::playerDamage
	int32_t ___playerDamage_12;
	// System.Int32 GameManager::scoreMultiplier
	int32_t ___scoreMultiplier_13;
	// System.Boolean GameManager::axisInput
	bool ___axisInput_14;
	// System.Boolean GameManager::turnInput
	bool ___turnInput_15;
	// System.Boolean GameManager::speedCapped
	bool ___speedCapped_16;
	// System.Boolean GameManager::isDashing
	bool ___isDashing_17;
	// System.Boolean GameManager::isBurstRushing
	bool ___isBurstRushing_18;
	// System.Boolean GameManager::onDashCooldown
	bool ___onDashCooldown_19;
	// System.Int32 GameManager::numDashes
	int32_t ___numDashes_20;
	// System.Int32 GameManager::homingMissileLevel
	int32_t ___homingMissileLevel_21;
	// System.Int32 GameManager::burstRushLevel
	int32_t ___burstRushLevel_22;
	// System.Int32 GameManager::dashLevel
	int32_t ___dashLevel_23;
	// System.Int32 GameManager::shurikenLevel
	int32_t ___shurikenLevel_24;
	// System.Int32 GameManager::tripMineLevel
	int32_t ___tripMineLevel_25;
	// System.Int32 GameManager::waveShotLevel
	int32_t ___waveShotLevel_26;
	// System.Int32 GameManager::dualFireLevel
	int32_t ___dualFireLevel_27;
	// System.Int32 GameManager::triFireLevel
	int32_t ___triFireLevel_28;
	// UnityEngine.Collider GameManager::mapCollider
	Collider_t3497673348 * ___mapCollider_29;
	// System.Collections.Generic.Queue`1<BurstRushPowerup> GameManager::rushes
	Queue_1_t2634246579 * ___rushes_30;
	// UnityEngine.GameObject GameManager::uiElements
	GameObject_t1756533147 * ___uiElements_31;
	// GameManager/StartingNewLevel GameManager::StartLevelEvent
	StartingNewLevel_t2169014082 * ___StartLevelEvent_32;
	// GameManager/EndingLevel GameManager::EndLevelEvent
	EndingLevel_t3444020161 * ___EndLevelEvent_33;
	// GameManager/RecordingEnemyKill GameManager::RecordingEnemyKillEvent
	RecordingEnemyKill_t1296856205 * ___RecordingEnemyKillEvent_34;
	// System.Int32 GameManager::currLevel
	int32_t ___currLevel_35;
	// System.Collections.Generic.List`1<System.Int32> GameManager::scoreBoundaries
	List_1_t1440998580 * ___scoreBoundaries_36;

public:
	inline static int32_t get_offset_of_playerShip_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerShip_2)); }
	inline PlayerShip_t2635532215 * get_playerShip_2() const { return ___playerShip_2; }
	inline PlayerShip_t2635532215 ** get_address_of_playerShip_2() { return &___playerShip_2; }
	inline void set_playerShip_2(PlayerShip_t2635532215 * value)
	{
		___playerShip_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerShip_2, value);
	}

	inline static int32_t get_offset_of_normalSS_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___normalSS_3)); }
	inline GameObject_t1756533147 * get_normalSS_3() const { return ___normalSS_3; }
	inline GameObject_t1756533147 ** get_address_of_normalSS_3() { return &___normalSS_3; }
	inline void set_normalSS_3(GameObject_t1756533147 * value)
	{
		___normalSS_3 = value;
		Il2CppCodeGenWriteBarrier(&___normalSS_3, value);
	}

	inline static int32_t get_offset_of_powerupSpawner_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___powerupSpawner_4)); }
	inline PowerupSpawner_t3879613040 * get_powerupSpawner_4() const { return ___powerupSpawner_4; }
	inline PowerupSpawner_t3879613040 ** get_address_of_powerupSpawner_4() { return &___powerupSpawner_4; }
	inline void set_powerupSpawner_4(PowerupSpawner_t3879613040 * value)
	{
		___powerupSpawner_4 = value;
		Il2CppCodeGenWriteBarrier(&___powerupSpawner_4, value);
	}

	inline static int32_t get_offset_of_movingSpawnManager_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___movingSpawnManager_5)); }
	inline MovingSpawnManager_t2417359772 * get_movingSpawnManager_5() const { return ___movingSpawnManager_5; }
	inline MovingSpawnManager_t2417359772 ** get_address_of_movingSpawnManager_5() { return &___movingSpawnManager_5; }
	inline void set_movingSpawnManager_5(MovingSpawnManager_t2417359772 * value)
	{
		___movingSpawnManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___movingSpawnManager_5, value);
	}

	inline static int32_t get_offset_of_levelActive_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___levelActive_6)); }
	inline bool get_levelActive_6() const { return ___levelActive_6; }
	inline bool* get_address_of_levelActive_6() { return &___levelActive_6; }
	inline void set_levelActive_6(bool value)
	{
		___levelActive_6 = value;
	}

	inline static int32_t get_offset_of_playerHealth_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerHealth_7)); }
	inline int32_t get_playerHealth_7() const { return ___playerHealth_7; }
	inline int32_t* get_address_of_playerHealth_7() { return &___playerHealth_7; }
	inline void set_playerHealth_7(int32_t value)
	{
		___playerHealth_7 = value;
	}

	inline static int32_t get_offset_of_playerMaxHealth_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerMaxHealth_8)); }
	inline int32_t get_playerMaxHealth_8() const { return ___playerMaxHealth_8; }
	inline int32_t* get_address_of_playerMaxHealth_8() { return &___playerMaxHealth_8; }
	inline void set_playerMaxHealth_8(int32_t value)
	{
		___playerMaxHealth_8 = value;
	}

	inline static int32_t get_offset_of_playerScore_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerScore_9)); }
	inline int32_t get_playerScore_9() const { return ___playerScore_9; }
	inline int32_t* get_address_of_playerScore_9() { return &___playerScore_9; }
	inline void set_playerScore_9(int32_t value)
	{
		___playerScore_9 = value;
	}

	inline static int32_t get_offset_of_targetScore_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___targetScore_10)); }
	inline int32_t get_targetScore_10() const { return ___targetScore_10; }
	inline int32_t* get_address_of_targetScore_10() { return &___targetScore_10; }
	inline void set_targetScore_10(int32_t value)
	{
		___targetScore_10 = value;
	}

	inline static int32_t get_offset_of_playerBalance_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerBalance_11)); }
	inline int32_t get_playerBalance_11() const { return ___playerBalance_11; }
	inline int32_t* get_address_of_playerBalance_11() { return &___playerBalance_11; }
	inline void set_playerBalance_11(int32_t value)
	{
		___playerBalance_11 = value;
	}

	inline static int32_t get_offset_of_playerDamage_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerDamage_12)); }
	inline int32_t get_playerDamage_12() const { return ___playerDamage_12; }
	inline int32_t* get_address_of_playerDamage_12() { return &___playerDamage_12; }
	inline void set_playerDamage_12(int32_t value)
	{
		___playerDamage_12 = value;
	}

	inline static int32_t get_offset_of_scoreMultiplier_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___scoreMultiplier_13)); }
	inline int32_t get_scoreMultiplier_13() const { return ___scoreMultiplier_13; }
	inline int32_t* get_address_of_scoreMultiplier_13() { return &___scoreMultiplier_13; }
	inline void set_scoreMultiplier_13(int32_t value)
	{
		___scoreMultiplier_13 = value;
	}

	inline static int32_t get_offset_of_axisInput_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___axisInput_14)); }
	inline bool get_axisInput_14() const { return ___axisInput_14; }
	inline bool* get_address_of_axisInput_14() { return &___axisInput_14; }
	inline void set_axisInput_14(bool value)
	{
		___axisInput_14 = value;
	}

	inline static int32_t get_offset_of_turnInput_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___turnInput_15)); }
	inline bool get_turnInput_15() const { return ___turnInput_15; }
	inline bool* get_address_of_turnInput_15() { return &___turnInput_15; }
	inline void set_turnInput_15(bool value)
	{
		___turnInput_15 = value;
	}

	inline static int32_t get_offset_of_speedCapped_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___speedCapped_16)); }
	inline bool get_speedCapped_16() const { return ___speedCapped_16; }
	inline bool* get_address_of_speedCapped_16() { return &___speedCapped_16; }
	inline void set_speedCapped_16(bool value)
	{
		___speedCapped_16 = value;
	}

	inline static int32_t get_offset_of_isDashing_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___isDashing_17)); }
	inline bool get_isDashing_17() const { return ___isDashing_17; }
	inline bool* get_address_of_isDashing_17() { return &___isDashing_17; }
	inline void set_isDashing_17(bool value)
	{
		___isDashing_17 = value;
	}

	inline static int32_t get_offset_of_isBurstRushing_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___isBurstRushing_18)); }
	inline bool get_isBurstRushing_18() const { return ___isBurstRushing_18; }
	inline bool* get_address_of_isBurstRushing_18() { return &___isBurstRushing_18; }
	inline void set_isBurstRushing_18(bool value)
	{
		___isBurstRushing_18 = value;
	}

	inline static int32_t get_offset_of_onDashCooldown_19() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___onDashCooldown_19)); }
	inline bool get_onDashCooldown_19() const { return ___onDashCooldown_19; }
	inline bool* get_address_of_onDashCooldown_19() { return &___onDashCooldown_19; }
	inline void set_onDashCooldown_19(bool value)
	{
		___onDashCooldown_19 = value;
	}

	inline static int32_t get_offset_of_numDashes_20() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___numDashes_20)); }
	inline int32_t get_numDashes_20() const { return ___numDashes_20; }
	inline int32_t* get_address_of_numDashes_20() { return &___numDashes_20; }
	inline void set_numDashes_20(int32_t value)
	{
		___numDashes_20 = value;
	}

	inline static int32_t get_offset_of_homingMissileLevel_21() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___homingMissileLevel_21)); }
	inline int32_t get_homingMissileLevel_21() const { return ___homingMissileLevel_21; }
	inline int32_t* get_address_of_homingMissileLevel_21() { return &___homingMissileLevel_21; }
	inline void set_homingMissileLevel_21(int32_t value)
	{
		___homingMissileLevel_21 = value;
	}

	inline static int32_t get_offset_of_burstRushLevel_22() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___burstRushLevel_22)); }
	inline int32_t get_burstRushLevel_22() const { return ___burstRushLevel_22; }
	inline int32_t* get_address_of_burstRushLevel_22() { return &___burstRushLevel_22; }
	inline void set_burstRushLevel_22(int32_t value)
	{
		___burstRushLevel_22 = value;
	}

	inline static int32_t get_offset_of_dashLevel_23() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dashLevel_23)); }
	inline int32_t get_dashLevel_23() const { return ___dashLevel_23; }
	inline int32_t* get_address_of_dashLevel_23() { return &___dashLevel_23; }
	inline void set_dashLevel_23(int32_t value)
	{
		___dashLevel_23 = value;
	}

	inline static int32_t get_offset_of_shurikenLevel_24() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___shurikenLevel_24)); }
	inline int32_t get_shurikenLevel_24() const { return ___shurikenLevel_24; }
	inline int32_t* get_address_of_shurikenLevel_24() { return &___shurikenLevel_24; }
	inline void set_shurikenLevel_24(int32_t value)
	{
		___shurikenLevel_24 = value;
	}

	inline static int32_t get_offset_of_tripMineLevel_25() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___tripMineLevel_25)); }
	inline int32_t get_tripMineLevel_25() const { return ___tripMineLevel_25; }
	inline int32_t* get_address_of_tripMineLevel_25() { return &___tripMineLevel_25; }
	inline void set_tripMineLevel_25(int32_t value)
	{
		___tripMineLevel_25 = value;
	}

	inline static int32_t get_offset_of_waveShotLevel_26() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___waveShotLevel_26)); }
	inline int32_t get_waveShotLevel_26() const { return ___waveShotLevel_26; }
	inline int32_t* get_address_of_waveShotLevel_26() { return &___waveShotLevel_26; }
	inline void set_waveShotLevel_26(int32_t value)
	{
		___waveShotLevel_26 = value;
	}

	inline static int32_t get_offset_of_dualFireLevel_27() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dualFireLevel_27)); }
	inline int32_t get_dualFireLevel_27() const { return ___dualFireLevel_27; }
	inline int32_t* get_address_of_dualFireLevel_27() { return &___dualFireLevel_27; }
	inline void set_dualFireLevel_27(int32_t value)
	{
		___dualFireLevel_27 = value;
	}

	inline static int32_t get_offset_of_triFireLevel_28() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___triFireLevel_28)); }
	inline int32_t get_triFireLevel_28() const { return ___triFireLevel_28; }
	inline int32_t* get_address_of_triFireLevel_28() { return &___triFireLevel_28; }
	inline void set_triFireLevel_28(int32_t value)
	{
		___triFireLevel_28 = value;
	}

	inline static int32_t get_offset_of_mapCollider_29() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mapCollider_29)); }
	inline Collider_t3497673348 * get_mapCollider_29() const { return ___mapCollider_29; }
	inline Collider_t3497673348 ** get_address_of_mapCollider_29() { return &___mapCollider_29; }
	inline void set_mapCollider_29(Collider_t3497673348 * value)
	{
		___mapCollider_29 = value;
		Il2CppCodeGenWriteBarrier(&___mapCollider_29, value);
	}

	inline static int32_t get_offset_of_rushes_30() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___rushes_30)); }
	inline Queue_1_t2634246579 * get_rushes_30() const { return ___rushes_30; }
	inline Queue_1_t2634246579 ** get_address_of_rushes_30() { return &___rushes_30; }
	inline void set_rushes_30(Queue_1_t2634246579 * value)
	{
		___rushes_30 = value;
		Il2CppCodeGenWriteBarrier(&___rushes_30, value);
	}

	inline static int32_t get_offset_of_uiElements_31() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___uiElements_31)); }
	inline GameObject_t1756533147 * get_uiElements_31() const { return ___uiElements_31; }
	inline GameObject_t1756533147 ** get_address_of_uiElements_31() { return &___uiElements_31; }
	inline void set_uiElements_31(GameObject_t1756533147 * value)
	{
		___uiElements_31 = value;
		Il2CppCodeGenWriteBarrier(&___uiElements_31, value);
	}

	inline static int32_t get_offset_of_StartLevelEvent_32() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___StartLevelEvent_32)); }
	inline StartingNewLevel_t2169014082 * get_StartLevelEvent_32() const { return ___StartLevelEvent_32; }
	inline StartingNewLevel_t2169014082 ** get_address_of_StartLevelEvent_32() { return &___StartLevelEvent_32; }
	inline void set_StartLevelEvent_32(StartingNewLevel_t2169014082 * value)
	{
		___StartLevelEvent_32 = value;
		Il2CppCodeGenWriteBarrier(&___StartLevelEvent_32, value);
	}

	inline static int32_t get_offset_of_EndLevelEvent_33() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___EndLevelEvent_33)); }
	inline EndingLevel_t3444020161 * get_EndLevelEvent_33() const { return ___EndLevelEvent_33; }
	inline EndingLevel_t3444020161 ** get_address_of_EndLevelEvent_33() { return &___EndLevelEvent_33; }
	inline void set_EndLevelEvent_33(EndingLevel_t3444020161 * value)
	{
		___EndLevelEvent_33 = value;
		Il2CppCodeGenWriteBarrier(&___EndLevelEvent_33, value);
	}

	inline static int32_t get_offset_of_RecordingEnemyKillEvent_34() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___RecordingEnemyKillEvent_34)); }
	inline RecordingEnemyKill_t1296856205 * get_RecordingEnemyKillEvent_34() const { return ___RecordingEnemyKillEvent_34; }
	inline RecordingEnemyKill_t1296856205 ** get_address_of_RecordingEnemyKillEvent_34() { return &___RecordingEnemyKillEvent_34; }
	inline void set_RecordingEnemyKillEvent_34(RecordingEnemyKill_t1296856205 * value)
	{
		___RecordingEnemyKillEvent_34 = value;
		Il2CppCodeGenWriteBarrier(&___RecordingEnemyKillEvent_34, value);
	}

	inline static int32_t get_offset_of_currLevel_35() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___currLevel_35)); }
	inline int32_t get_currLevel_35() const { return ___currLevel_35; }
	inline int32_t* get_address_of_currLevel_35() { return &___currLevel_35; }
	inline void set_currLevel_35(int32_t value)
	{
		___currLevel_35 = value;
	}

	inline static int32_t get_offset_of_scoreBoundaries_36() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___scoreBoundaries_36)); }
	inline List_1_t1440998580 * get_scoreBoundaries_36() const { return ___scoreBoundaries_36; }
	inline List_1_t1440998580 ** get_address_of_scoreBoundaries_36() { return &___scoreBoundaries_36; }
	inline void set_scoreBoundaries_36(List_1_t1440998580 * value)
	{
		___scoreBoundaries_36 = value;
		Il2CppCodeGenWriteBarrier(&___scoreBoundaries_36, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::singleton
	GameManager_t2252321495 * ___singleton_37;

public:
	inline static int32_t get_offset_of_singleton_37() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___singleton_37)); }
	inline GameManager_t2252321495 * get_singleton_37() const { return ___singleton_37; }
	inline GameManager_t2252321495 ** get_address_of_singleton_37() { return &___singleton_37; }
	inline void set_singleton_37(GameManager_t2252321495 * value)
	{
		___singleton_37 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
