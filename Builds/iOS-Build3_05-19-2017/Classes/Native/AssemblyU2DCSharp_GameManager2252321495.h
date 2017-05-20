#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerShip
struct PlayerShip_t2635532215;
// PowerupSpawner
struct PowerupSpawner_t3879613040;
// MovingSpawnManager
struct MovingSpawnManager_t2417359772;
// UnityEngine.Collider
struct Collider_t3497673348;
// LevelData[]
struct LevelDataU5BU5D_t3098837635;
// LevelData
struct LevelData_t4104249894;
// GameManager/StartALevel
struct StartALevel_t3422349679;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<Row>
struct List_1_t143642632;
// System.Collections.Generic.Queue`1<BurstRushPowerup>
struct Queue_1_t2634246579;
// GameManager
struct GameManager_t2252321495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"

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
	// System.Int32 GameManager::playerHealth
	int32_t ___playerHealth_3;
	// System.Int32 GameManager::playerScore
	int32_t ___playerScore_4;
	// System.Int32 GameManager::playerDamage
	int32_t ___playerDamage_5;
	// System.Int32 GameManager::scoreMultiplier
	int32_t ___scoreMultiplier_6;
	// System.Boolean GameManager::axisInput
	bool ___axisInput_7;
	// System.Boolean GameManager::speedCapped
	bool ___speedCapped_8;
	// System.Boolean GameManager::isDashing
	bool ___isDashing_9;
	// System.Boolean GameManager::onDashCooldown
	bool ___onDashCooldown_10;
	// System.Int32 GameManager::dashes
	int32_t ___dashes_11;
	// PowerupSpawner GameManager::powerupSpawner
	PowerupSpawner_t3879613040 * ___powerupSpawner_12;
	// MovingSpawnManager GameManager::movingSpawnManager
	MovingSpawnManager_t2417359772 * ___movingSpawnManager_13;
	// UnityEngine.Collider GameManager::mapCollider
	Collider_t3497673348 * ___mapCollider_14;
	// LevelData[] GameManager::levels
	LevelDataU5BU5D_t3098837635* ___levels_15;
	// LevelData GameManager::activeLevel
	LevelData_t4104249894 * ___activeLevel_16;
	// System.Int32 GameManager::activeLevelNum
	int32_t ___activeLevelNum_17;
	// GameManager/StartALevel GameManager::startLevelEvent
	StartALevel_t3422349679 * ___startLevelEvent_18;
	// System.Int32 GameManager::pawnsLeft
	int32_t ___pawnsLeft_19;
	// System.Int32 GameManager::rangedLeft
	int32_t ___rangedLeft_20;
	// System.Int32 GameManager::medicsLeft
	int32_t ___medicsLeft_21;
	// System.Int32 GameManager::turretsLeft
	int32_t ___turretsLeft_22;
	// System.Int32 GameManager::dropshipsLeft
	int32_t ___dropshipsLeft_23;
	// System.Int32 GameManager::assassinsLeft
	int32_t ___assassinsLeft_24;
	// System.Int32 GameManager::bombersLeft
	int32_t ___bombersLeft_25;
	// System.Boolean GameManager::lvlActive
	bool ___lvlActive_26;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::currLvlSpawners
	List_1_t1125654279 * ___currLvlSpawners_27;
	// System.Collections.Generic.List`1<Row> GameManager::levelSpawners
	List_1_t143642632 * ___levelSpawners_28;
	// System.Collections.Generic.Queue`1<BurstRushPowerup> GameManager::rushes
	Queue_1_t2634246579 * ___rushes_29;
	// GameState GameManager::<GameState>k__BackingField
	int32_t ___U3CGameStateU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of_playerShip_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerShip_2)); }
	inline PlayerShip_t2635532215 * get_playerShip_2() const { return ___playerShip_2; }
	inline PlayerShip_t2635532215 ** get_address_of_playerShip_2() { return &___playerShip_2; }
	inline void set_playerShip_2(PlayerShip_t2635532215 * value)
	{
		___playerShip_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerShip_2, value);
	}

	inline static int32_t get_offset_of_playerHealth_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerHealth_3)); }
	inline int32_t get_playerHealth_3() const { return ___playerHealth_3; }
	inline int32_t* get_address_of_playerHealth_3() { return &___playerHealth_3; }
	inline void set_playerHealth_3(int32_t value)
	{
		___playerHealth_3 = value;
	}

	inline static int32_t get_offset_of_playerScore_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerScore_4)); }
	inline int32_t get_playerScore_4() const { return ___playerScore_4; }
	inline int32_t* get_address_of_playerScore_4() { return &___playerScore_4; }
	inline void set_playerScore_4(int32_t value)
	{
		___playerScore_4 = value;
	}

	inline static int32_t get_offset_of_playerDamage_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerDamage_5)); }
	inline int32_t get_playerDamage_5() const { return ___playerDamage_5; }
	inline int32_t* get_address_of_playerDamage_5() { return &___playerDamage_5; }
	inline void set_playerDamage_5(int32_t value)
	{
		___playerDamage_5 = value;
	}

	inline static int32_t get_offset_of_scoreMultiplier_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___scoreMultiplier_6)); }
	inline int32_t get_scoreMultiplier_6() const { return ___scoreMultiplier_6; }
	inline int32_t* get_address_of_scoreMultiplier_6() { return &___scoreMultiplier_6; }
	inline void set_scoreMultiplier_6(int32_t value)
	{
		___scoreMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_axisInput_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___axisInput_7)); }
	inline bool get_axisInput_7() const { return ___axisInput_7; }
	inline bool* get_address_of_axisInput_7() { return &___axisInput_7; }
	inline void set_axisInput_7(bool value)
	{
		___axisInput_7 = value;
	}

	inline static int32_t get_offset_of_speedCapped_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___speedCapped_8)); }
	inline bool get_speedCapped_8() const { return ___speedCapped_8; }
	inline bool* get_address_of_speedCapped_8() { return &___speedCapped_8; }
	inline void set_speedCapped_8(bool value)
	{
		___speedCapped_8 = value;
	}

	inline static int32_t get_offset_of_isDashing_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___isDashing_9)); }
	inline bool get_isDashing_9() const { return ___isDashing_9; }
	inline bool* get_address_of_isDashing_9() { return &___isDashing_9; }
	inline void set_isDashing_9(bool value)
	{
		___isDashing_9 = value;
	}

	inline static int32_t get_offset_of_onDashCooldown_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___onDashCooldown_10)); }
	inline bool get_onDashCooldown_10() const { return ___onDashCooldown_10; }
	inline bool* get_address_of_onDashCooldown_10() { return &___onDashCooldown_10; }
	inline void set_onDashCooldown_10(bool value)
	{
		___onDashCooldown_10 = value;
	}

	inline static int32_t get_offset_of_dashes_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dashes_11)); }
	inline int32_t get_dashes_11() const { return ___dashes_11; }
	inline int32_t* get_address_of_dashes_11() { return &___dashes_11; }
	inline void set_dashes_11(int32_t value)
	{
		___dashes_11 = value;
	}

	inline static int32_t get_offset_of_powerupSpawner_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___powerupSpawner_12)); }
	inline PowerupSpawner_t3879613040 * get_powerupSpawner_12() const { return ___powerupSpawner_12; }
	inline PowerupSpawner_t3879613040 ** get_address_of_powerupSpawner_12() { return &___powerupSpawner_12; }
	inline void set_powerupSpawner_12(PowerupSpawner_t3879613040 * value)
	{
		___powerupSpawner_12 = value;
		Il2CppCodeGenWriteBarrier(&___powerupSpawner_12, value);
	}

	inline static int32_t get_offset_of_movingSpawnManager_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___movingSpawnManager_13)); }
	inline MovingSpawnManager_t2417359772 * get_movingSpawnManager_13() const { return ___movingSpawnManager_13; }
	inline MovingSpawnManager_t2417359772 ** get_address_of_movingSpawnManager_13() { return &___movingSpawnManager_13; }
	inline void set_movingSpawnManager_13(MovingSpawnManager_t2417359772 * value)
	{
		___movingSpawnManager_13 = value;
		Il2CppCodeGenWriteBarrier(&___movingSpawnManager_13, value);
	}

	inline static int32_t get_offset_of_mapCollider_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mapCollider_14)); }
	inline Collider_t3497673348 * get_mapCollider_14() const { return ___mapCollider_14; }
	inline Collider_t3497673348 ** get_address_of_mapCollider_14() { return &___mapCollider_14; }
	inline void set_mapCollider_14(Collider_t3497673348 * value)
	{
		___mapCollider_14 = value;
		Il2CppCodeGenWriteBarrier(&___mapCollider_14, value);
	}

	inline static int32_t get_offset_of_levels_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___levels_15)); }
	inline LevelDataU5BU5D_t3098837635* get_levels_15() const { return ___levels_15; }
	inline LevelDataU5BU5D_t3098837635** get_address_of_levels_15() { return &___levels_15; }
	inline void set_levels_15(LevelDataU5BU5D_t3098837635* value)
	{
		___levels_15 = value;
		Il2CppCodeGenWriteBarrier(&___levels_15, value);
	}

	inline static int32_t get_offset_of_activeLevel_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___activeLevel_16)); }
	inline LevelData_t4104249894 * get_activeLevel_16() const { return ___activeLevel_16; }
	inline LevelData_t4104249894 ** get_address_of_activeLevel_16() { return &___activeLevel_16; }
	inline void set_activeLevel_16(LevelData_t4104249894 * value)
	{
		___activeLevel_16 = value;
		Il2CppCodeGenWriteBarrier(&___activeLevel_16, value);
	}

	inline static int32_t get_offset_of_activeLevelNum_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___activeLevelNum_17)); }
	inline int32_t get_activeLevelNum_17() const { return ___activeLevelNum_17; }
	inline int32_t* get_address_of_activeLevelNum_17() { return &___activeLevelNum_17; }
	inline void set_activeLevelNum_17(int32_t value)
	{
		___activeLevelNum_17 = value;
	}

	inline static int32_t get_offset_of_startLevelEvent_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___startLevelEvent_18)); }
	inline StartALevel_t3422349679 * get_startLevelEvent_18() const { return ___startLevelEvent_18; }
	inline StartALevel_t3422349679 ** get_address_of_startLevelEvent_18() { return &___startLevelEvent_18; }
	inline void set_startLevelEvent_18(StartALevel_t3422349679 * value)
	{
		___startLevelEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___startLevelEvent_18, value);
	}

	inline static int32_t get_offset_of_pawnsLeft_19() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___pawnsLeft_19)); }
	inline int32_t get_pawnsLeft_19() const { return ___pawnsLeft_19; }
	inline int32_t* get_address_of_pawnsLeft_19() { return &___pawnsLeft_19; }
	inline void set_pawnsLeft_19(int32_t value)
	{
		___pawnsLeft_19 = value;
	}

	inline static int32_t get_offset_of_rangedLeft_20() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___rangedLeft_20)); }
	inline int32_t get_rangedLeft_20() const { return ___rangedLeft_20; }
	inline int32_t* get_address_of_rangedLeft_20() { return &___rangedLeft_20; }
	inline void set_rangedLeft_20(int32_t value)
	{
		___rangedLeft_20 = value;
	}

	inline static int32_t get_offset_of_medicsLeft_21() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___medicsLeft_21)); }
	inline int32_t get_medicsLeft_21() const { return ___medicsLeft_21; }
	inline int32_t* get_address_of_medicsLeft_21() { return &___medicsLeft_21; }
	inline void set_medicsLeft_21(int32_t value)
	{
		___medicsLeft_21 = value;
	}

	inline static int32_t get_offset_of_turretsLeft_22() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___turretsLeft_22)); }
	inline int32_t get_turretsLeft_22() const { return ___turretsLeft_22; }
	inline int32_t* get_address_of_turretsLeft_22() { return &___turretsLeft_22; }
	inline void set_turretsLeft_22(int32_t value)
	{
		___turretsLeft_22 = value;
	}

	inline static int32_t get_offset_of_dropshipsLeft_23() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dropshipsLeft_23)); }
	inline int32_t get_dropshipsLeft_23() const { return ___dropshipsLeft_23; }
	inline int32_t* get_address_of_dropshipsLeft_23() { return &___dropshipsLeft_23; }
	inline void set_dropshipsLeft_23(int32_t value)
	{
		___dropshipsLeft_23 = value;
	}

	inline static int32_t get_offset_of_assassinsLeft_24() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___assassinsLeft_24)); }
	inline int32_t get_assassinsLeft_24() const { return ___assassinsLeft_24; }
	inline int32_t* get_address_of_assassinsLeft_24() { return &___assassinsLeft_24; }
	inline void set_assassinsLeft_24(int32_t value)
	{
		___assassinsLeft_24 = value;
	}

	inline static int32_t get_offset_of_bombersLeft_25() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___bombersLeft_25)); }
	inline int32_t get_bombersLeft_25() const { return ___bombersLeft_25; }
	inline int32_t* get_address_of_bombersLeft_25() { return &___bombersLeft_25; }
	inline void set_bombersLeft_25(int32_t value)
	{
		___bombersLeft_25 = value;
	}

	inline static int32_t get_offset_of_lvlActive_26() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lvlActive_26)); }
	inline bool get_lvlActive_26() const { return ___lvlActive_26; }
	inline bool* get_address_of_lvlActive_26() { return &___lvlActive_26; }
	inline void set_lvlActive_26(bool value)
	{
		___lvlActive_26 = value;
	}

	inline static int32_t get_offset_of_currLvlSpawners_27() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___currLvlSpawners_27)); }
	inline List_1_t1125654279 * get_currLvlSpawners_27() const { return ___currLvlSpawners_27; }
	inline List_1_t1125654279 ** get_address_of_currLvlSpawners_27() { return &___currLvlSpawners_27; }
	inline void set_currLvlSpawners_27(List_1_t1125654279 * value)
	{
		___currLvlSpawners_27 = value;
		Il2CppCodeGenWriteBarrier(&___currLvlSpawners_27, value);
	}

	inline static int32_t get_offset_of_levelSpawners_28() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___levelSpawners_28)); }
	inline List_1_t143642632 * get_levelSpawners_28() const { return ___levelSpawners_28; }
	inline List_1_t143642632 ** get_address_of_levelSpawners_28() { return &___levelSpawners_28; }
	inline void set_levelSpawners_28(List_1_t143642632 * value)
	{
		___levelSpawners_28 = value;
		Il2CppCodeGenWriteBarrier(&___levelSpawners_28, value);
	}

	inline static int32_t get_offset_of_rushes_29() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___rushes_29)); }
	inline Queue_1_t2634246579 * get_rushes_29() const { return ___rushes_29; }
	inline Queue_1_t2634246579 ** get_address_of_rushes_29() { return &___rushes_29; }
	inline void set_rushes_29(Queue_1_t2634246579 * value)
	{
		___rushes_29 = value;
		Il2CppCodeGenWriteBarrier(&___rushes_29, value);
	}

	inline static int32_t get_offset_of_U3CGameStateU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___U3CGameStateU3Ek__BackingField_31)); }
	inline int32_t get_U3CGameStateU3Ek__BackingField_31() const { return ___U3CGameStateU3Ek__BackingField_31; }
	inline int32_t* get_address_of_U3CGameStateU3Ek__BackingField_31() { return &___U3CGameStateU3Ek__BackingField_31; }
	inline void set_U3CGameStateU3Ek__BackingField_31(int32_t value)
	{
		___U3CGameStateU3Ek__BackingField_31 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::singleton
	GameManager_t2252321495 * ___singleton_30;

public:
	inline static int32_t get_offset_of_singleton_30() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___singleton_30)); }
	inline GameManager_t2252321495 * get_singleton_30() const { return ___singleton_30; }
	inline GameManager_t2252321495 ** get_address_of_singleton_30() { return &___singleton_30; }
	inline void set_singleton_30(GameManager_t2252321495 * value)
	{
		___singleton_30 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
