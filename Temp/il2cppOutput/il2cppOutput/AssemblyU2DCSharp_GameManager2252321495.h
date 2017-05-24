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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PowerupSpawner
struct PowerupSpawner_t3879613040;
// MovingSpawnManager
struct MovingSpawnManager_t2417359772;
// LevelData[]
struct LevelDataU5BU5D_t3098837635;
// LevelData
struct LevelData_t4104249894;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<Row>
struct List_1_t143642632;
// UnityEngine.Collider
struct Collider_t3497673348;
// GameManager/StartALevel
struct StartALevel_t3422349679;
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
	// UnityEngine.GameObject GameManager::normalSS
	GameObject_t1756533147 * ___normalSS_3;
	// System.Int32 GameManager::playerHealth
	int32_t ___playerHealth_4;
	// System.Int32 GameManager::playerScore
	int32_t ___playerScore_5;
	// System.Int32 GameManager::playerBalance
	int32_t ___playerBalance_6;
	// System.Int32 GameManager::playerDamage
	int32_t ___playerDamage_7;
	// System.Int32 GameManager::scoreMultiplier
	int32_t ___scoreMultiplier_8;
	// System.Boolean GameManager::axisInput
	bool ___axisInput_9;
	// System.Boolean GameManager::speedCapped
	bool ___speedCapped_10;
	// System.Boolean GameManager::isDashing
	bool ___isDashing_11;
	// System.Boolean GameManager::onDashCooldown
	bool ___onDashCooldown_12;
	// System.Int32 GameManager::dashes
	int32_t ___dashes_13;
	// PowerupSpawner GameManager::powerupSpawner
	PowerupSpawner_t3879613040 * ___powerupSpawner_14;
	// MovingSpawnManager GameManager::movingSpawnManager
	MovingSpawnManager_t2417359772 * ___movingSpawnManager_15;
	// System.Int32 GameManager::homingMissileLevel
	int32_t ___homingMissileLevel_16;
	// System.Int32 GameManager::burstRushLevel
	int32_t ___burstRushLevel_17;
	// System.Int32 GameManager::dashLevel
	int32_t ___dashLevel_18;
	// System.Int32 GameManager::shurikenLevel
	int32_t ___shurikenLevel_19;
	// System.Int32 GameManager::tripMineLevel
	int32_t ___tripMineLevel_20;
	// System.Int32 GameManager::waveShotLevel
	int32_t ___waveShotLevel_21;
	// System.Int32 GameManager::dualFireLevel
	int32_t ___dualFireLevel_22;
	// System.Int32 GameManager::triFireLevel
	int32_t ___triFireLevel_23;
	// UnityEngine.GameObject GameManager::homingMissilePowerup
	GameObject_t1756533147 * ___homingMissilePowerup_24;
	// UnityEngine.GameObject GameManager::burstRushPowerup
	GameObject_t1756533147 * ___burstRushPowerup_25;
	// UnityEngine.GameObject GameManager::dashPowerup
	GameObject_t1756533147 * ___dashPowerup_26;
	// UnityEngine.GameObject GameManager::shurikenPowerup
	GameObject_t1756533147 * ___shurikenPowerup_27;
	// UnityEngine.GameObject GameManager::tripMinePowerup
	GameObject_t1756533147 * ___tripMinePowerup_28;
	// UnityEngine.GameObject GameManager::waveShotPowerup
	GameObject_t1756533147 * ___waveShotPowerup_29;
	// UnityEngine.GameObject GameManager::dualFirePowerup
	GameObject_t1756533147 * ___dualFirePowerup_30;
	// UnityEngine.GameObject GameManager::triFirePowerup
	GameObject_t1756533147 * ___triFirePowerup_31;
	// LevelData[] GameManager::levels
	LevelDataU5BU5D_t3098837635* ___levels_32;
	// LevelData GameManager::activeLevel
	LevelData_t4104249894 * ___activeLevel_33;
	// System.Int32 GameManager::activeLevelNum
	int32_t ___activeLevelNum_34;
	// System.Boolean GameManager::lvlActive
	bool ___lvlActive_35;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::currLvlSpawners
	List_1_t1125654279 * ___currLvlSpawners_36;
	// System.Collections.Generic.List`1<Row> GameManager::levelSpawners
	List_1_t143642632 * ___levelSpawners_37;
	// UnityEngine.Collider GameManager::mapCollider
	Collider_t3497673348 * ___mapCollider_38;
	// GameManager/StartALevel GameManager::startLevelEvent
	StartALevel_t3422349679 * ___startLevelEvent_39;
	// System.Int32 GameManager::pawnsLeft
	int32_t ___pawnsLeft_40;
	// System.Int32 GameManager::rangedLeft
	int32_t ___rangedLeft_41;
	// System.Int32 GameManager::medicsLeft
	int32_t ___medicsLeft_42;
	// System.Int32 GameManager::turretsLeft
	int32_t ___turretsLeft_43;
	// System.Int32 GameManager::dropshipsLeft
	int32_t ___dropshipsLeft_44;
	// System.Int32 GameManager::assassinsLeft
	int32_t ___assassinsLeft_45;
	// System.Int32 GameManager::bombersLeft
	int32_t ___bombersLeft_46;
	// System.Collections.Generic.Queue`1<BurstRushPowerup> GameManager::rushes
	Queue_1_t2634246579 * ___rushes_47;
	// UnityEngine.GameObject GameManager::shopButton
	GameObject_t1756533147 * ___shopButton_48;
	// UnityEngine.GameObject GameManager::uiElements
	GameObject_t1756533147 * ___uiElements_49;
	// GameState GameManager::<GameState>k__BackingField
	int32_t ___U3CGameStateU3Ek__BackingField_51;

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

	inline static int32_t get_offset_of_playerHealth_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerHealth_4)); }
	inline int32_t get_playerHealth_4() const { return ___playerHealth_4; }
	inline int32_t* get_address_of_playerHealth_4() { return &___playerHealth_4; }
	inline void set_playerHealth_4(int32_t value)
	{
		___playerHealth_4 = value;
	}

	inline static int32_t get_offset_of_playerScore_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerScore_5)); }
	inline int32_t get_playerScore_5() const { return ___playerScore_5; }
	inline int32_t* get_address_of_playerScore_5() { return &___playerScore_5; }
	inline void set_playerScore_5(int32_t value)
	{
		___playerScore_5 = value;
	}

	inline static int32_t get_offset_of_playerBalance_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerBalance_6)); }
	inline int32_t get_playerBalance_6() const { return ___playerBalance_6; }
	inline int32_t* get_address_of_playerBalance_6() { return &___playerBalance_6; }
	inline void set_playerBalance_6(int32_t value)
	{
		___playerBalance_6 = value;
	}

	inline static int32_t get_offset_of_playerDamage_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerDamage_7)); }
	inline int32_t get_playerDamage_7() const { return ___playerDamage_7; }
	inline int32_t* get_address_of_playerDamage_7() { return &___playerDamage_7; }
	inline void set_playerDamage_7(int32_t value)
	{
		___playerDamage_7 = value;
	}

	inline static int32_t get_offset_of_scoreMultiplier_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___scoreMultiplier_8)); }
	inline int32_t get_scoreMultiplier_8() const { return ___scoreMultiplier_8; }
	inline int32_t* get_address_of_scoreMultiplier_8() { return &___scoreMultiplier_8; }
	inline void set_scoreMultiplier_8(int32_t value)
	{
		___scoreMultiplier_8 = value;
	}

	inline static int32_t get_offset_of_axisInput_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___axisInput_9)); }
	inline bool get_axisInput_9() const { return ___axisInput_9; }
	inline bool* get_address_of_axisInput_9() { return &___axisInput_9; }
	inline void set_axisInput_9(bool value)
	{
		___axisInput_9 = value;
	}

	inline static int32_t get_offset_of_speedCapped_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___speedCapped_10)); }
	inline bool get_speedCapped_10() const { return ___speedCapped_10; }
	inline bool* get_address_of_speedCapped_10() { return &___speedCapped_10; }
	inline void set_speedCapped_10(bool value)
	{
		___speedCapped_10 = value;
	}

	inline static int32_t get_offset_of_isDashing_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___isDashing_11)); }
	inline bool get_isDashing_11() const { return ___isDashing_11; }
	inline bool* get_address_of_isDashing_11() { return &___isDashing_11; }
	inline void set_isDashing_11(bool value)
	{
		___isDashing_11 = value;
	}

	inline static int32_t get_offset_of_onDashCooldown_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___onDashCooldown_12)); }
	inline bool get_onDashCooldown_12() const { return ___onDashCooldown_12; }
	inline bool* get_address_of_onDashCooldown_12() { return &___onDashCooldown_12; }
	inline void set_onDashCooldown_12(bool value)
	{
		___onDashCooldown_12 = value;
	}

	inline static int32_t get_offset_of_dashes_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dashes_13)); }
	inline int32_t get_dashes_13() const { return ___dashes_13; }
	inline int32_t* get_address_of_dashes_13() { return &___dashes_13; }
	inline void set_dashes_13(int32_t value)
	{
		___dashes_13 = value;
	}

	inline static int32_t get_offset_of_powerupSpawner_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___powerupSpawner_14)); }
	inline PowerupSpawner_t3879613040 * get_powerupSpawner_14() const { return ___powerupSpawner_14; }
	inline PowerupSpawner_t3879613040 ** get_address_of_powerupSpawner_14() { return &___powerupSpawner_14; }
	inline void set_powerupSpawner_14(PowerupSpawner_t3879613040 * value)
	{
		___powerupSpawner_14 = value;
		Il2CppCodeGenWriteBarrier(&___powerupSpawner_14, value);
	}

	inline static int32_t get_offset_of_movingSpawnManager_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___movingSpawnManager_15)); }
	inline MovingSpawnManager_t2417359772 * get_movingSpawnManager_15() const { return ___movingSpawnManager_15; }
	inline MovingSpawnManager_t2417359772 ** get_address_of_movingSpawnManager_15() { return &___movingSpawnManager_15; }
	inline void set_movingSpawnManager_15(MovingSpawnManager_t2417359772 * value)
	{
		___movingSpawnManager_15 = value;
		Il2CppCodeGenWriteBarrier(&___movingSpawnManager_15, value);
	}

	inline static int32_t get_offset_of_homingMissileLevel_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___homingMissileLevel_16)); }
	inline int32_t get_homingMissileLevel_16() const { return ___homingMissileLevel_16; }
	inline int32_t* get_address_of_homingMissileLevel_16() { return &___homingMissileLevel_16; }
	inline void set_homingMissileLevel_16(int32_t value)
	{
		___homingMissileLevel_16 = value;
	}

	inline static int32_t get_offset_of_burstRushLevel_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___burstRushLevel_17)); }
	inline int32_t get_burstRushLevel_17() const { return ___burstRushLevel_17; }
	inline int32_t* get_address_of_burstRushLevel_17() { return &___burstRushLevel_17; }
	inline void set_burstRushLevel_17(int32_t value)
	{
		___burstRushLevel_17 = value;
	}

	inline static int32_t get_offset_of_dashLevel_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dashLevel_18)); }
	inline int32_t get_dashLevel_18() const { return ___dashLevel_18; }
	inline int32_t* get_address_of_dashLevel_18() { return &___dashLevel_18; }
	inline void set_dashLevel_18(int32_t value)
	{
		___dashLevel_18 = value;
	}

	inline static int32_t get_offset_of_shurikenLevel_19() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___shurikenLevel_19)); }
	inline int32_t get_shurikenLevel_19() const { return ___shurikenLevel_19; }
	inline int32_t* get_address_of_shurikenLevel_19() { return &___shurikenLevel_19; }
	inline void set_shurikenLevel_19(int32_t value)
	{
		___shurikenLevel_19 = value;
	}

	inline static int32_t get_offset_of_tripMineLevel_20() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___tripMineLevel_20)); }
	inline int32_t get_tripMineLevel_20() const { return ___tripMineLevel_20; }
	inline int32_t* get_address_of_tripMineLevel_20() { return &___tripMineLevel_20; }
	inline void set_tripMineLevel_20(int32_t value)
	{
		___tripMineLevel_20 = value;
	}

	inline static int32_t get_offset_of_waveShotLevel_21() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___waveShotLevel_21)); }
	inline int32_t get_waveShotLevel_21() const { return ___waveShotLevel_21; }
	inline int32_t* get_address_of_waveShotLevel_21() { return &___waveShotLevel_21; }
	inline void set_waveShotLevel_21(int32_t value)
	{
		___waveShotLevel_21 = value;
	}

	inline static int32_t get_offset_of_dualFireLevel_22() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dualFireLevel_22)); }
	inline int32_t get_dualFireLevel_22() const { return ___dualFireLevel_22; }
	inline int32_t* get_address_of_dualFireLevel_22() { return &___dualFireLevel_22; }
	inline void set_dualFireLevel_22(int32_t value)
	{
		___dualFireLevel_22 = value;
	}

	inline static int32_t get_offset_of_triFireLevel_23() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___triFireLevel_23)); }
	inline int32_t get_triFireLevel_23() const { return ___triFireLevel_23; }
	inline int32_t* get_address_of_triFireLevel_23() { return &___triFireLevel_23; }
	inline void set_triFireLevel_23(int32_t value)
	{
		___triFireLevel_23 = value;
	}

	inline static int32_t get_offset_of_homingMissilePowerup_24() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___homingMissilePowerup_24)); }
	inline GameObject_t1756533147 * get_homingMissilePowerup_24() const { return ___homingMissilePowerup_24; }
	inline GameObject_t1756533147 ** get_address_of_homingMissilePowerup_24() { return &___homingMissilePowerup_24; }
	inline void set_homingMissilePowerup_24(GameObject_t1756533147 * value)
	{
		___homingMissilePowerup_24 = value;
		Il2CppCodeGenWriteBarrier(&___homingMissilePowerup_24, value);
	}

	inline static int32_t get_offset_of_burstRushPowerup_25() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___burstRushPowerup_25)); }
	inline GameObject_t1756533147 * get_burstRushPowerup_25() const { return ___burstRushPowerup_25; }
	inline GameObject_t1756533147 ** get_address_of_burstRushPowerup_25() { return &___burstRushPowerup_25; }
	inline void set_burstRushPowerup_25(GameObject_t1756533147 * value)
	{
		___burstRushPowerup_25 = value;
		Il2CppCodeGenWriteBarrier(&___burstRushPowerup_25, value);
	}

	inline static int32_t get_offset_of_dashPowerup_26() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dashPowerup_26)); }
	inline GameObject_t1756533147 * get_dashPowerup_26() const { return ___dashPowerup_26; }
	inline GameObject_t1756533147 ** get_address_of_dashPowerup_26() { return &___dashPowerup_26; }
	inline void set_dashPowerup_26(GameObject_t1756533147 * value)
	{
		___dashPowerup_26 = value;
		Il2CppCodeGenWriteBarrier(&___dashPowerup_26, value);
	}

	inline static int32_t get_offset_of_shurikenPowerup_27() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___shurikenPowerup_27)); }
	inline GameObject_t1756533147 * get_shurikenPowerup_27() const { return ___shurikenPowerup_27; }
	inline GameObject_t1756533147 ** get_address_of_shurikenPowerup_27() { return &___shurikenPowerup_27; }
	inline void set_shurikenPowerup_27(GameObject_t1756533147 * value)
	{
		___shurikenPowerup_27 = value;
		Il2CppCodeGenWriteBarrier(&___shurikenPowerup_27, value);
	}

	inline static int32_t get_offset_of_tripMinePowerup_28() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___tripMinePowerup_28)); }
	inline GameObject_t1756533147 * get_tripMinePowerup_28() const { return ___tripMinePowerup_28; }
	inline GameObject_t1756533147 ** get_address_of_tripMinePowerup_28() { return &___tripMinePowerup_28; }
	inline void set_tripMinePowerup_28(GameObject_t1756533147 * value)
	{
		___tripMinePowerup_28 = value;
		Il2CppCodeGenWriteBarrier(&___tripMinePowerup_28, value);
	}

	inline static int32_t get_offset_of_waveShotPowerup_29() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___waveShotPowerup_29)); }
	inline GameObject_t1756533147 * get_waveShotPowerup_29() const { return ___waveShotPowerup_29; }
	inline GameObject_t1756533147 ** get_address_of_waveShotPowerup_29() { return &___waveShotPowerup_29; }
	inline void set_waveShotPowerup_29(GameObject_t1756533147 * value)
	{
		___waveShotPowerup_29 = value;
		Il2CppCodeGenWriteBarrier(&___waveShotPowerup_29, value);
	}

	inline static int32_t get_offset_of_dualFirePowerup_30() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dualFirePowerup_30)); }
	inline GameObject_t1756533147 * get_dualFirePowerup_30() const { return ___dualFirePowerup_30; }
	inline GameObject_t1756533147 ** get_address_of_dualFirePowerup_30() { return &___dualFirePowerup_30; }
	inline void set_dualFirePowerup_30(GameObject_t1756533147 * value)
	{
		___dualFirePowerup_30 = value;
		Il2CppCodeGenWriteBarrier(&___dualFirePowerup_30, value);
	}

	inline static int32_t get_offset_of_triFirePowerup_31() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___triFirePowerup_31)); }
	inline GameObject_t1756533147 * get_triFirePowerup_31() const { return ___triFirePowerup_31; }
	inline GameObject_t1756533147 ** get_address_of_triFirePowerup_31() { return &___triFirePowerup_31; }
	inline void set_triFirePowerup_31(GameObject_t1756533147 * value)
	{
		___triFirePowerup_31 = value;
		Il2CppCodeGenWriteBarrier(&___triFirePowerup_31, value);
	}

	inline static int32_t get_offset_of_levels_32() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___levels_32)); }
	inline LevelDataU5BU5D_t3098837635* get_levels_32() const { return ___levels_32; }
	inline LevelDataU5BU5D_t3098837635** get_address_of_levels_32() { return &___levels_32; }
	inline void set_levels_32(LevelDataU5BU5D_t3098837635* value)
	{
		___levels_32 = value;
		Il2CppCodeGenWriteBarrier(&___levels_32, value);
	}

	inline static int32_t get_offset_of_activeLevel_33() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___activeLevel_33)); }
	inline LevelData_t4104249894 * get_activeLevel_33() const { return ___activeLevel_33; }
	inline LevelData_t4104249894 ** get_address_of_activeLevel_33() { return &___activeLevel_33; }
	inline void set_activeLevel_33(LevelData_t4104249894 * value)
	{
		___activeLevel_33 = value;
		Il2CppCodeGenWriteBarrier(&___activeLevel_33, value);
	}

	inline static int32_t get_offset_of_activeLevelNum_34() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___activeLevelNum_34)); }
	inline int32_t get_activeLevelNum_34() const { return ___activeLevelNum_34; }
	inline int32_t* get_address_of_activeLevelNum_34() { return &___activeLevelNum_34; }
	inline void set_activeLevelNum_34(int32_t value)
	{
		___activeLevelNum_34 = value;
	}

	inline static int32_t get_offset_of_lvlActive_35() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lvlActive_35)); }
	inline bool get_lvlActive_35() const { return ___lvlActive_35; }
	inline bool* get_address_of_lvlActive_35() { return &___lvlActive_35; }
	inline void set_lvlActive_35(bool value)
	{
		___lvlActive_35 = value;
	}

	inline static int32_t get_offset_of_currLvlSpawners_36() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___currLvlSpawners_36)); }
	inline List_1_t1125654279 * get_currLvlSpawners_36() const { return ___currLvlSpawners_36; }
	inline List_1_t1125654279 ** get_address_of_currLvlSpawners_36() { return &___currLvlSpawners_36; }
	inline void set_currLvlSpawners_36(List_1_t1125654279 * value)
	{
		___currLvlSpawners_36 = value;
		Il2CppCodeGenWriteBarrier(&___currLvlSpawners_36, value);
	}

	inline static int32_t get_offset_of_levelSpawners_37() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___levelSpawners_37)); }
	inline List_1_t143642632 * get_levelSpawners_37() const { return ___levelSpawners_37; }
	inline List_1_t143642632 ** get_address_of_levelSpawners_37() { return &___levelSpawners_37; }
	inline void set_levelSpawners_37(List_1_t143642632 * value)
	{
		___levelSpawners_37 = value;
		Il2CppCodeGenWriteBarrier(&___levelSpawners_37, value);
	}

	inline static int32_t get_offset_of_mapCollider_38() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mapCollider_38)); }
	inline Collider_t3497673348 * get_mapCollider_38() const { return ___mapCollider_38; }
	inline Collider_t3497673348 ** get_address_of_mapCollider_38() { return &___mapCollider_38; }
	inline void set_mapCollider_38(Collider_t3497673348 * value)
	{
		___mapCollider_38 = value;
		Il2CppCodeGenWriteBarrier(&___mapCollider_38, value);
	}

	inline static int32_t get_offset_of_startLevelEvent_39() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___startLevelEvent_39)); }
	inline StartALevel_t3422349679 * get_startLevelEvent_39() const { return ___startLevelEvent_39; }
	inline StartALevel_t3422349679 ** get_address_of_startLevelEvent_39() { return &___startLevelEvent_39; }
	inline void set_startLevelEvent_39(StartALevel_t3422349679 * value)
	{
		___startLevelEvent_39 = value;
		Il2CppCodeGenWriteBarrier(&___startLevelEvent_39, value);
	}

	inline static int32_t get_offset_of_pawnsLeft_40() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___pawnsLeft_40)); }
	inline int32_t get_pawnsLeft_40() const { return ___pawnsLeft_40; }
	inline int32_t* get_address_of_pawnsLeft_40() { return &___pawnsLeft_40; }
	inline void set_pawnsLeft_40(int32_t value)
	{
		___pawnsLeft_40 = value;
	}

	inline static int32_t get_offset_of_rangedLeft_41() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___rangedLeft_41)); }
	inline int32_t get_rangedLeft_41() const { return ___rangedLeft_41; }
	inline int32_t* get_address_of_rangedLeft_41() { return &___rangedLeft_41; }
	inline void set_rangedLeft_41(int32_t value)
	{
		___rangedLeft_41 = value;
	}

	inline static int32_t get_offset_of_medicsLeft_42() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___medicsLeft_42)); }
	inline int32_t get_medicsLeft_42() const { return ___medicsLeft_42; }
	inline int32_t* get_address_of_medicsLeft_42() { return &___medicsLeft_42; }
	inline void set_medicsLeft_42(int32_t value)
	{
		___medicsLeft_42 = value;
	}

	inline static int32_t get_offset_of_turretsLeft_43() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___turretsLeft_43)); }
	inline int32_t get_turretsLeft_43() const { return ___turretsLeft_43; }
	inline int32_t* get_address_of_turretsLeft_43() { return &___turretsLeft_43; }
	inline void set_turretsLeft_43(int32_t value)
	{
		___turretsLeft_43 = value;
	}

	inline static int32_t get_offset_of_dropshipsLeft_44() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___dropshipsLeft_44)); }
	inline int32_t get_dropshipsLeft_44() const { return ___dropshipsLeft_44; }
	inline int32_t* get_address_of_dropshipsLeft_44() { return &___dropshipsLeft_44; }
	inline void set_dropshipsLeft_44(int32_t value)
	{
		___dropshipsLeft_44 = value;
	}

	inline static int32_t get_offset_of_assassinsLeft_45() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___assassinsLeft_45)); }
	inline int32_t get_assassinsLeft_45() const { return ___assassinsLeft_45; }
	inline int32_t* get_address_of_assassinsLeft_45() { return &___assassinsLeft_45; }
	inline void set_assassinsLeft_45(int32_t value)
	{
		___assassinsLeft_45 = value;
	}

	inline static int32_t get_offset_of_bombersLeft_46() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___bombersLeft_46)); }
	inline int32_t get_bombersLeft_46() const { return ___bombersLeft_46; }
	inline int32_t* get_address_of_bombersLeft_46() { return &___bombersLeft_46; }
	inline void set_bombersLeft_46(int32_t value)
	{
		___bombersLeft_46 = value;
	}

	inline static int32_t get_offset_of_rushes_47() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___rushes_47)); }
	inline Queue_1_t2634246579 * get_rushes_47() const { return ___rushes_47; }
	inline Queue_1_t2634246579 ** get_address_of_rushes_47() { return &___rushes_47; }
	inline void set_rushes_47(Queue_1_t2634246579 * value)
	{
		___rushes_47 = value;
		Il2CppCodeGenWriteBarrier(&___rushes_47, value);
	}

	inline static int32_t get_offset_of_shopButton_48() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___shopButton_48)); }
	inline GameObject_t1756533147 * get_shopButton_48() const { return ___shopButton_48; }
	inline GameObject_t1756533147 ** get_address_of_shopButton_48() { return &___shopButton_48; }
	inline void set_shopButton_48(GameObject_t1756533147 * value)
	{
		___shopButton_48 = value;
		Il2CppCodeGenWriteBarrier(&___shopButton_48, value);
	}

	inline static int32_t get_offset_of_uiElements_49() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___uiElements_49)); }
	inline GameObject_t1756533147 * get_uiElements_49() const { return ___uiElements_49; }
	inline GameObject_t1756533147 ** get_address_of_uiElements_49() { return &___uiElements_49; }
	inline void set_uiElements_49(GameObject_t1756533147 * value)
	{
		___uiElements_49 = value;
		Il2CppCodeGenWriteBarrier(&___uiElements_49, value);
	}

	inline static int32_t get_offset_of_U3CGameStateU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___U3CGameStateU3Ek__BackingField_51)); }
	inline int32_t get_U3CGameStateU3Ek__BackingField_51() const { return ___U3CGameStateU3Ek__BackingField_51; }
	inline int32_t* get_address_of_U3CGameStateU3Ek__BackingField_51() { return &___U3CGameStateU3Ek__BackingField_51; }
	inline void set_U3CGameStateU3Ek__BackingField_51(int32_t value)
	{
		___U3CGameStateU3Ek__BackingField_51 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::singleton
	GameManager_t2252321495 * ___singleton_50;

public:
	inline static int32_t get_offset_of_singleton_50() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___singleton_50)); }
	inline GameManager_t2252321495 * get_singleton_50() const { return ___singleton_50; }
	inline GameManager_t2252321495 ** get_address_of_singleton_50() { return &___singleton_50; }
	inline void set_singleton_50(GameManager_t2252321495 * value)
	{
		___singleton_50 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_50, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
