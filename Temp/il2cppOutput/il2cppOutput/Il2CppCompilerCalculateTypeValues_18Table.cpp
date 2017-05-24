#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WaveShot4261945459.h"
#include "AssemblyU2DCSharp_WaveShot_U3CDestroyAfterLifeTimeU211350342.h"
#include "AssemblyU2DCSharp_WaveShotSpawn601994640.h"
#include "AssemblyU2DCSharp_MainMenu4009084430.h"
#include "AssemblyU2DCSharp_PauseMenu2596728003.h"
#include "AssemblyU2DCSharp_PowerupHolder2490551786.h"
#include "AssemblyU2DCSharp_ShopMenu2948784613.h"
#include "AssemblyU2DCSharp_ShopMenu_U3CIndividualPowerupPre3906237326.h"
#include "AssemblyU2DCSharp_BurstChargeColliders3288508547.h"
#include "AssemblyU2DCSharp_BurstRushCollider2521001464.h"
#include "AssemblyU2DCSharp_BurstRushManager1694550503.h"
#include "AssemblyU2DCSharp_BurstRushPowerup2814589744.h"
#include "AssemblyU2DCSharp_BurstRushPowerup_U3CStartChargeU1319837322.h"
#include "AssemblyU2DCSharp_BurstRushPowerup_U3CStartRushU3Ec358529499.h"
#include "AssemblyU2DCSharp_DashAbility1993643330.h"
#include "AssemblyU2DCSharp_DashState223559211.h"
#include "AssemblyU2DCSharp_DashPowerup3036178112.h"
#include "AssemblyU2DCSharp_DualFirePowerup2827626406.h"
#include "AssemblyU2DCSharp_HomingMissilePowerup3348687296.h"
#include "AssemblyU2DCSharp_Mine2729441277.h"
#include "AssemblyU2DCSharp_Mine_U3CCircularRotateU3Ec__Iter2167126757.h"
#include "AssemblyU2DCSharp_Missile813944928.h"
#include "AssemblyU2DCSharp_Missile_U3CSeekAndMoveU3Ec__Iter1588482346.h"
#include "AssemblyU2DCSharp_Missile_U3CDamageDelayU3Ec__Iter1788117821.h"
#include "AssemblyU2DCSharp_PlayerStraightMissile771456871.h"
#include "AssemblyU2DCSharp_Powerup2065360972.h"
#include "AssemblyU2DCSharp_PowerupManager1742038315.h"
#include "AssemblyU2DCSharp_PowerupScriptableObject1415146708.h"
#include "AssemblyU2DCSharp_ScoreMultiplierPowerup2255546723.h"
#include "AssemblyU2DCSharp_ShurikenObj3227405676.h"
#include "AssemblyU2DCSharp_ShurikenObj_U3CCircularRotateU3Ec471411774.h"
#include "AssemblyU2DCSharp_ShurikenObj_U3CDamageDelayU3Ec__I213916723.h"
#include "AssemblyU2DCSharp_ShurikenPowerup748303341.h"
#include "AssemblyU2DCSharp_ShurikenPowerup_U3CBeginCountdownU72049679.h"
#include "AssemblyU2DCSharp_SideMissilePowerup2763409259.h"
#include "AssemblyU2DCSharp_StraightMissile1639712682.h"
#include "AssemblyU2DCSharp_TriFirePowerup218398003.h"
#include "AssemblyU2DCSharp_TripMineWeapon4010445916.h"
#include "AssemblyU2DCSharp_TripMineWeapon_U3CBeginCountdown1984220940.h"
#include "AssemblyU2DCSharp_WaveShotPowerup1909494417.h"
#include "AssemblyU2DCSharp_SpecialWeapons1455949192.h"
#include "AssemblyU2DCSharp_WeaponsManager3151090140.h"
#include "AssemblyU2DCSharp_CollisionHelperBomberType947044979.h"
#include "AssemblyU2DCSharp_EnemyManagerBomberType3128208288.h"
#include "AssemblyU2DCSharp_EnemyMovementBomberType436096734.h"
#include "AssemblyU2DCSharp_EnemyMovementBomberType_U3CBeginE787871658.h"
#include "AssemblyU2DCSharp_EnemyManagerCollisionType3110909189.h"
#include "AssemblyU2DCSharp_EnemyMovementCollisionType1487527125.h"
#include "AssemblyU2DCSharp_EnemyManagerRangedType2461668628.h"
#include "AssemblyU2DCSharp_EnemyMovementDistanceType2816956290.h"
#include "AssemblyU2DCSharp_EnemyShootingDistanceType3850811550.h"
#include "AssemblyU2DCSharp_PlayerMovement3166138480.h"
#include "AssemblyU2DCSharp_PlayerShooting3959056376.h"
#include "AssemblyU2DCSharp_DropShipSpawn1841476170.h"
#include "AssemblyU2DCSharp_EnemySpawnCappedTemplate446895980.h"
#include "AssemblyU2DCSharp_EnemySpawnCappedTemplate_U3CWaitA622200115.h"
#include "AssemblyU2DCSharp_EnemySpawnTemplate4133663547.h"
#include "AssemblyU2DCSharp_EnemySpawnTemplate_U3CWaitAndFir2546928863.h"
#include "AssemblyU2DCSharp_MovingSpawn1342199589.h"
#include "AssemblyU2DCSharp_MovingSpawn_U3CWaitAndFireU3Ec__1752015193.h"
#include "AssemblyU2DCSharp_MovingSpawnManager2417359772.h"
#include "AssemblyU2DCSharp_MovingSpawnManager_U3CStartSpawn4085926021.h"
#include "AssemblyU2DCSharp_PromotionArea1239961636.h"
#include "AssemblyU2DCSharp_ColliderHelper3166917508.h"
#include "AssemblyU2DCSharp_EngineUpdate2765210485.h"
#include "AssemblyU2DCSharp_HealthPickup1380905078.h"
#include "AssemblyU2DCSharp_ParticleSystemAutoDestroy725210834.h"
#include "AssemblyU2DCSharp_RotationUpdate148547071.h"
#include "AssemblyU2DCSharp_ShotMover2453521817.h"
#include "AssemblyU2DCSharp_SpawnersDontDestroy2337667420.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1486305137.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3113433916.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (WaveShot_t4261945459), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1800[7] = 
{
	WaveShot_t4261945459::get_offset_of_shotSpawn_2(),
	WaveShot_t4261945459::get_offset_of_shotDamage_3(),
	WaveShot_t4261945459::get_offset_of_speed_4(),
	WaveShot_t4261945459::get_offset_of_speedMultiplier_5(),
	WaveShot_t4261945459::get_offset_of_lifeTime_6(),
	WaveShot_t4261945459::get_offset_of_debugExplosion_7(),
	WaveShot_t4261945459::get_offset_of_rb_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[5] = 
{
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_lifeTime_0(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_U24this_1(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_U24current_2(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_U24disposing_3(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (WaveShotSpawn_t601994640), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1802[4] = 
{
	WaveShotSpawn_t601994640::get_offset_of_waveShot_4(),
	WaveShotSpawn_t601994640::get_offset_of_straightMissile_5(),
	WaveShotSpawn_t601994640::get_offset_of_waveShotEnabled_6(),
	WaveShotSpawn_t601994640::get_offset_of_waveShotCounter_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (MainMenu_t4009084430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (PauseMenu_t2596728003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1809[2] = 
{
	PauseMenu_t2596728003::get_offset_of_pauseMenu_2(),
	PauseMenu_t2596728003::get_offset_of_paused_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (PowerupHolder_t2490551786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1810[2] = 
{
	PowerupHolder_t2490551786::get_offset_of_powerup_2(),
	PowerupHolder_t2490551786::get_offset_of_SHOP_MENU_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (ShopMenu_t2948784613), -1, sizeof(ShopMenu_t2948784613_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1811[24] = 
{
	ShopMenu_t2948784613::get_offset_of_shopBaseUI_2(),
	ShopMenu_t2948784613::get_offset_of_welcomeScreen_3(),
	ShopMenu_t2948784613::get_offset_of_shipUpgrades_4(),
	ShopMenu_t2948784613::get_offset_of_powerupUpgrades_5(),
	ShopMenu_t2948784613::get_offset_of_specificPowerupUpgrades_6(),
	ShopMenu_t2948784613::get_offset_of_exitButton_7(),
	ShopMenu_t2948784613::get_offset_of_upgradesListPanel_8(),
	ShopMenu_t2948784613::get_offset_of_shopSlot_9(),
	ShopMenu_t2948784613::get_offset_of_playerBalance_10(),
	ShopMenu_t2948784613::get_offset_of_shopInfoPanel_11(),
	ShopMenu_t2948784613::get_offset_of_buyButton_12(),
	ShopMenu_t2948784613::get_offset_of_currActiveUpgrade_13(),
	ShopMenu_t2948784613::get_offset_of_currButton_14(),
	ShopMenu_t2948784613::get_offset_of_upgradeName_15(),
	ShopMenu_t2948784613::get_offset_of_upgradePrice_16(),
	ShopMenu_t2948784613::get_offset_of_upgradeInfo_17(),
	ShopMenu_t2948784613::get_offset_of_upgradeSprite_18(),
	ShopMenu_t2948784613::get_offset_of_activeScreen_19(),
	ShopMenu_t2948784613::get_offset_of_screenStack_20(),
	ShopMenu_t2948784613::get_offset_of_isOpen_21(),
	ShopMenu_t2948784613::get_offset_of_activeSlots_22(),
	ShopMenu_t2948784613::get_offset_of_visitedPowerupSlots_23(),
	ShopMenu_t2948784613::get_offset_of_activePowerupHolder_24(),
	ShopMenu_t2948784613_StaticFields::get_offset_of_instance_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (U3CIndividualPowerupPressedU3Ec__AnonStorey0_t3906237326), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1812[2] = 
{
	U3CIndividualPowerupPressedU3Ec__AnonStorey0_t3906237326::get_offset_of_currSlot_0(),
	U3CIndividualPowerupPressedU3Ec__AnonStorey0_t3906237326::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (BurstChargeColliders_t3288508547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[2] = 
{
	BurstChargeColliders_t3288508547::get_offset_of_explosion_2(),
	BurstChargeColliders_t3288508547::get_offset_of_dmg_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (BurstRushCollider_t2521001464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1814[2] = 
{
	BurstRushCollider_t2521001464::get_offset_of_explosion_2(),
	BurstRushCollider_t2521001464::get_offset_of_dmg_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (BurstRushManager_t1694550503), -1, sizeof(BurstRushManager_t1694550503_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1815[3] = 
{
	BurstRushManager_t1694550503::get_offset_of_burstChargeColliders_2(),
	BurstRushManager_t1694550503::get_offset_of_burstRushColliders_3(),
	BurstRushManager_t1694550503_StaticFields::get_offset_of_instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (BurstRushPowerup_t2814589744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[14] = 
{
	BurstRushPowerup_t2814589744::get_offset_of_burstChargeColliders_2(),
	BurstRushPowerup_t2814589744::get_offset_of_burstRushColliders_3(),
	BurstRushPowerup_t2814589744::get_offset_of_isActive_4(),
	BurstRushPowerup_t2814589744::get_offset_of_isCharging_5(),
	BurstRushPowerup_t2814589744::get_offset_of_chargeTime_6(),
	BurstRushPowerup_t2814589744::get_offset_of_rushTime_7(),
	BurstRushPowerup_t2814589744::get_offset_of_thrust_8(),
	BurstRushPowerup_t2814589744::get_offset_of_radius_9(),
	BurstRushPowerup_t2814589744::get_offset_of_colliders_10(),
	BurstRushPowerup_t2814589744::get_offset_of_isVisible_11(),
	BurstRushPowerup_t2814589744::get_offset_of_cr1_12(),
	BurstRushPowerup_t2814589744::get_offset_of_cr2_13(),
	BurstRushPowerup_t2814589744::get_offset_of_player_14(),
	BurstRushPowerup_t2814589744::get_offset_of_id_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (U3CStartChargeU3Ec__Iterator0_t1319837322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[4] = 
{
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24this_0(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24current_1(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24disposing_2(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (U3CStartRushU3Ec__Iterator1_t358529499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[4] = 
{
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24this_0(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24current_1(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24disposing_2(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (DashAbility_t1993643330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1819[5] = 
{
	DashAbility_t1993643330::get_offset_of_player_2(),
	DashAbility_t1993643330::get_offset_of_dashState_3(),
	DashAbility_t1993643330::get_offset_of_dashTimer_4(),
	DashAbility_t1993643330::get_offset_of_maxDash_5(),
	DashAbility_t1993643330::get_offset_of_savedVelocity_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (DashState_t223559211)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1820[4] = 
{
	DashState_t223559211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (DashPowerup_t3036178112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1821[2] = 
{
	DashPowerup_t3036178112::get_offset_of_player_2(),
	DashPowerup_t3036178112::get_offset_of_isVisible_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (DualFirePowerup_t2827626406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[1] = 
{
	DualFirePowerup_t2827626406::get_offset_of_id_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (HomingMissilePowerup_t3348687296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1823[3] = 
{
	HomingMissilePowerup_t3348687296::get_offset_of_missileSpawn_9(),
	HomingMissilePowerup_t3348687296::get_offset_of_missile_10(),
	HomingMissilePowerup_t3348687296::get_offset_of_specPowerupData_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (Mine_t2729441277), -1, sizeof(Mine_t2729441277_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1824[6] = 
{
	Mine_t2729441277::get_offset_of_explosion_2(),
	Mine_t2729441277::get_offset_of_rotationFactor_3(),
	Mine_t2729441277::get_offset_of_explosionDmg_4(),
	Mine_t2729441277::get_offset_of_dmgRange_5(),
	Mine_t2729441277::get_offset_of_cr_6(),
	Mine_t2729441277_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (U3CCircularRotateU3Ec__Iterator0_t2167126757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1825[4] = 
{
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24this_0(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24current_1(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24disposing_2(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (Missile_t813944928), -1, sizeof(Missile_t813944928_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1826[15] = 
{
	Missile_t813944928::get_offset_of_missileData_2(),
	Missile_t813944928::get_offset_of_explosion_3(),
	Missile_t813944928::get_offset_of_target_4(),
	Missile_t813944928::get_offset_of_damageRange_5(),
	Missile_t813944928::get_offset_of_rotationSpeed_6(),
	Missile_t813944928::get_offset_of_speed_7(),
	Missile_t813944928::get_offset_of_dmgDelay_8(),
	Missile_t813944928::get_offset_of_seekingTarget_9(),
	Missile_t813944928::get_offset_of_noEnemies_10(),
	Missile_t813944928::get_offset_of_seekDelay_11(),
	Missile_t813944928::get_offset_of_randomVal_12(),
	Missile_t813944928::get_offset_of_canDmg_13(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_14(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_15(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (U3CSeekAndMoveU3Ec__Iterator0_t1588482346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1827[4] = 
{
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24this_0(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24current_1(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24disposing_2(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (U3CDamageDelayU3Ec__Iterator1_t1788117821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1828[5] = 
{
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_dmgDelay_0(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24this_1(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24current_2(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24disposing_3(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (PlayerStraightMissile_t771456871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[3] = 
{
	PlayerStraightMissile_t771456871::get_offset_of_thrust_2(),
	PlayerStraightMissile_t771456871::get_offset_of_missileDmg_3(),
	PlayerStraightMissile_t771456871::get_offset_of_explosion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (Powerup_t2065360972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[7] = 
{
	Powerup_t2065360972::get_offset_of_powerupData_2(),
	Powerup_t2065360972::get_offset_of_player_3(),
	Powerup_t2065360972::get_offset_of_prevSS_4(),
	Powerup_t2065360972::get_offset_of_powerDuration_5(),
	Powerup_t2065360972::get_offset_of_endTime_6(),
	Powerup_t2065360972::get_offset_of_timeObtained_7(),
	Powerup_t2065360972::get_offset_of_isVisible_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (PowerupManager_t1742038315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (PowerupScriptableObject_t1415146708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1832[1] = 
{
	PowerupScriptableObject_t1415146708::get_offset_of_upgradeList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (ScoreMultiplierPowerup_t2255546723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (ShurikenObj_t3227405676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[8] = 
{
	ShurikenObj_t3227405676::get_offset_of_explosion_2(),
	ShurikenObj_t3227405676::get_offset_of_dmg_3(),
	ShurikenObj_t3227405676::get_offset_of_rotationFactor_4(),
	ShurikenObj_t3227405676::get_offset_of_dmgDelay_5(),
	ShurikenObj_t3227405676::get_offset_of_cr_6(),
	ShurikenObj_t3227405676::get_offset_of_dd_7(),
	ShurikenObj_t3227405676::get_offset_of_canDmg_8(),
	ShurikenObj_t3227405676::get_offset_of_lifetime_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (U3CCircularRotateU3Ec__Iterator0_t471411774), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1835[5] = 
{
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U3CdeathTimeU3E__0_0(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24this_1(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24current_2(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24disposing_3(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (U3CDamageDelayU3Ec__Iterator1_t213916723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1836[5] = 
{
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_dmgDelay_0(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24this_1(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24current_2(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24disposing_3(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (ShurikenPowerup_t748303341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1837[7] = 
{
	ShurikenPowerup_t748303341::get_offset_of_shuriken_2(),
	ShurikenPowerup_t748303341::get_offset_of_player_3(),
	ShurikenPowerup_t748303341::get_offset_of_isVisible_4(),
	ShurikenPowerup_t748303341::get_offset_of_lifeTime_5(),
	ShurikenPowerup_t748303341::get_offset_of_cr_6(),
	ShurikenPowerup_t748303341::get_offset_of_sken_7(),
	ShurikenPowerup_t748303341::get_offset_of_id_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (U3CBeginCountdownU3Ec__Iterator0_t72049679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1838[5] = 
{
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_lifeTime_0(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24this_1(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24current_2(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24disposing_3(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (SideMissilePowerup_t2763409259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (StraightMissile_t1639712682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1840[3] = 
{
	StraightMissile_t1639712682::get_offset_of_thrust_2(),
	StraightMissile_t1639712682::get_offset_of_missileDmg_3(),
	StraightMissile_t1639712682::get_offset_of_explosion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (TriFirePowerup_t218398003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1841[1] = 
{
	TriFirePowerup_t218398003::get_offset_of_id_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (TripMineWeapon_t4010445916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1842[8] = 
{
	TripMineWeapon_t4010445916::get_offset_of_mine_2(),
	TripMineWeapon_t4010445916::get_offset_of_radius_3(),
	TripMineWeapon_t4010445916::get_offset_of_mineFuse_4(),
	TripMineWeapon_t4010445916::get_offset_of_mines_5(),
	TripMineWeapon_t4010445916::get_offset_of_isVisible_6(),
	TripMineWeapon_t4010445916::get_offset_of_cr_7(),
	TripMineWeapon_t4010445916::get_offset_of_player_8(),
	TripMineWeapon_t4010445916::get_offset_of_id_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (U3CBeginCountdownU3Ec__Iterator0_t1984220940), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1843[6] = 
{
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_mineFuse_0(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24locvar0_1(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24this_2(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24current_3(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24disposing_4(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (WaveShotPowerup_t1909494417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (SpecialWeapons_t1455949192)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1845[5] = 
{
	SpecialWeapons_t1455949192::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (WeaponsManager_t3151090140), -1, sizeof(WeaponsManager_t3151090140_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1846[1] = 
{
	WeaponsManager_t3151090140_StaticFields::get_offset_of__instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (CollisionHelperBomberType_t947044979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1847[1] = 
{
	CollisionHelperBomberType_t947044979::get_offset_of_player_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (EnemyManagerBomberType_t3128208288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1848[6] = 
{
	EnemyManagerBomberType_t3128208288::get_offset_of_explosion_2(),
	EnemyManagerBomberType_t3128208288::get_offset_of_enemyHealth_3(),
	EnemyManagerBomberType_t3128208288::get_offset_of_shotDamage_4(),
	EnemyManagerBomberType_t3128208288::get_offset_of_enemyPoints_5(),
	EnemyManagerBomberType_t3128208288::get_offset_of_player_6(),
	EnemyManagerBomberType_t3128208288::get_offset_of_rb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (EnemyMovementBomberType_t436096734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1849[6] = 
{
	EnemyMovementBomberType_t436096734::get_offset_of_speed_2(),
	EnemyMovementBomberType_t436096734::get_offset_of_rotationSpeed_3(),
	EnemyMovementBomberType_t436096734::get_offset_of_target_4(),
	EnemyMovementBomberType_t436096734::get_offset_of_isExploding_5(),
	EnemyMovementBomberType_t436096734::get_offset_of_initialPos_6(),
	EnemyMovementBomberType_t436096734::get_offset_of_explosionActive_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (U3CBeginExplosionU3Ec__Iterator0_t787871658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1850[5] = 
{
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U3CexplosionU3E__0_0(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24this_1(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24current_2(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24disposing_3(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (EnemyManagerCollisionType_t3110909189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1851[4] = 
{
	EnemyManagerCollisionType_t3110909189::get_offset_of_explosion_2(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_enemyHealth_3(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_shotDamage_4(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_enemyPoints_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (EnemyMovementCollisionType_t1487527125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1852[5] = 
{
	EnemyMovementCollisionType_t1487527125::get_offset_of_speed_2(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_rotationSpeed_3(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_target_4(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_initialPos_5(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (EnemyManagerRangedType_t2461668628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1853[4] = 
{
	EnemyManagerRangedType_t2461668628::get_offset_of_explosion_2(),
	EnemyManagerRangedType_t2461668628::get_offset_of_enemyHealth_3(),
	EnemyManagerRangedType_t2461668628::get_offset_of_shotDamage_4(),
	EnemyManagerRangedType_t2461668628::get_offset_of_enemyPoints_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (EnemyMovementDistanceType_t2816956290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1854[5] = 
{
	EnemyMovementDistanceType_t2816956290::get_offset_of_speed_2(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_rotationSpeed_3(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_target_4(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_initialPos_5(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (EnemyShootingDistanceType_t3850811550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1855[5] = 
{
	EnemyShootingDistanceType_t3850811550::get_offset_of_shot_2(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_shotSpawn_3(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_fireRate_4(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_nextFire_5(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_speed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (PlayerMovement_t3166138480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1856[2] = 
{
	PlayerMovement_t3166138480::get_offset_of_speed_2(),
	PlayerMovement_t3166138480::get_offset_of_rb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (PlayerShooting_t3959056376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1857[5] = 
{
	PlayerShooting_t3959056376::get_offset_of_shot_2(),
	PlayerShooting_t3959056376::get_offset_of_shotSpawn_3(),
	PlayerShooting_t3959056376::get_offset_of_fireRate_4(),
	PlayerShooting_t3959056376::get_offset_of_nextFire_5(),
	PlayerShooting_t3959056376::get_offset_of_speed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (DropShipSpawn_t1841476170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[1] = 
{
	DropShipSpawn_t1841476170::get_offset_of_shipToSpawn_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (EnemySpawnCappedTemplate_t446895980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1859[6] = 
{
	EnemySpawnCappedTemplate_t446895980::get_offset_of_enemy_2(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_spawnDelay_3(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_maxEnemies_4(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_coroutine_5(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_numEnemies_6(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_spawnContainer_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (U3CWaitAndSpawnU3Ec__Iterator0_t622200115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1860[6] = 
{
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U3CfillSizeU3E__0_0(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_spawnDelay_1(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24this_2(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24current_3(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24disposing_4(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (EnemySpawnTemplate_t4133663547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1861[8] = 
{
	EnemySpawnTemplate_t4133663547::get_offset_of_enemy_2(),
	EnemySpawnTemplate_t4133663547::get_offset_of_spawnDelay_3(),
	EnemySpawnTemplate_t4133663547::get_offset_of_spawnRadius_4(),
	EnemySpawnTemplate_t4133663547::get_offset_of_startSpawning_5(),
	EnemySpawnTemplate_t4133663547::get_offset_of_spawnAngle_6(),
	EnemySpawnTemplate_t4133663547::get_offset_of_cr_7(),
	EnemySpawnTemplate_t4133663547::get_offset_of_numEnemies_8(),
	EnemySpawnTemplate_t4133663547::get_offset_of_spawnContainer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (U3CWaitAndFireU3Ec__Iterator0_t2546928863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1862[12] = 
{
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CplayerU3E__0_0(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CtargetU3E__1_1(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CrandomPosU3E__2_2(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CspawnedEnemyU3E__3_3(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CdistU3E__4_4(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CzAngleU3E__5_5(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CdesiredRotationU3E__6_6(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_spawnDelay_7(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U24this_8(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U24current_9(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U24disposing_10(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U24PC_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (MovingSpawn_t1342199589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[12] = 
{
	MovingSpawn_t1342199589::get_offset_of_enemyTypes_2(),
	MovingSpawn_t1342199589::get_offset_of_spawnDelay_3(),
	MovingSpawn_t1342199589::get_offset_of_spawnRadius_4(),
	MovingSpawn_t1342199589::get_offset_of_startSpawning_5(),
	MovingSpawn_t1342199589::get_offset_of_dict_6(),
	MovingSpawn_t1342199589::get_offset_of_squadTotal_7(),
	MovingSpawn_t1342199589::get_offset_of_player_8(),
	MovingSpawn_t1342199589::get_offset_of_wasReused_9(),
	MovingSpawn_t1342199589::get_offset_of_spawnAngle_10(),
	MovingSpawn_t1342199589::get_offset_of_cr_11(),
	MovingSpawn_t1342199589::get_offset_of_numEnemies_12(),
	MovingSpawn_t1342199589::get_offset_of_spawnContainer_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (U3CWaitAndFireU3Ec__Iterator0_t1752015193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1864[8] = 
{
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U3CtargetU3E__0_0(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U3CrandTypeU3E__1_1(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U3CprefabRefU3E__2_2(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_spawnDelay_3(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U24this_4(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U24current_5(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U24disposing_6(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (MovingSpawnManager_t2417359772), -1, sizeof(MovingSpawnManager_t2417359772_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1865[12] = 
{
	MovingSpawnManager_t2417359772::get_offset_of_xBound_2(),
	MovingSpawnManager_t2417359772::get_offset_of_yBound_3(),
	MovingSpawnManager_t2417359772::get_offset_of_movingSpawnDelay_4(),
	MovingSpawnManager_t2417359772::get_offset_of_promoAreaSpawnDelay_5(),
	MovingSpawnManager_t2417359772::get_offset_of_spawnEnabled_6(),
	MovingSpawnManager_t2417359772::get_offset_of_spawnTimerText_7(),
	MovingSpawnManager_t2417359772::get_offset_of_toMovingSpawnTime_8(),
	MovingSpawnManager_t2417359772::get_offset_of_toPromoAreaSpawnTime_9(),
	MovingSpawnManager_t2417359772::get_offset_of_cr1_10(),
	MovingSpawnManager_t2417359772::get_offset_of_movingSpawn_11(),
	MovingSpawnManager_t2417359772::get_offset_of_promoArea_12(),
	MovingSpawnManager_t2417359772_StaticFields::get_offset_of_singleton_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (U3CStartSpawningU3Ec__Iterator0_t4085926021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1866[6] = 
{
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U3CspawnLocU3E__0_0(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U3CspawnLocU3E__1_1(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24this_2(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24current_3(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24disposing_4(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (PromotionArea_t1239961636), -1, sizeof(PromotionArea_t1239961636_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1867[6] = 
{
	PromotionArea_t1239961636::get_offset_of_attrRadius_2(),
	PromotionArea_t1239961636::get_offset_of_smooth_3(),
	PromotionArea_t1239961636::get_offset_of_quota_4(),
	PromotionArea_t1239961636::get_offset_of_minibosses_5(),
	PromotionArea_t1239961636::get_offset_of_quotaText_6(),
	PromotionArea_t1239961636_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (ColliderHelper_t3166917508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1868[1] = 
{
	ColliderHelper_t3166917508::get_offset_of_explosion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (EngineUpdate_t2765210485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1869[1] = 
{
	EngineUpdate_t2765210485::get_offset_of_playerTransform_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (HealthPickup_t1380905078), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1870[1] = 
{
	HealthPickup_t1380905078::get_offset_of_healthAmnt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (ParticleSystemAutoDestroy_t725210834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1871[1] = 
{
	ParticleSystemAutoDestroy_t725210834::get_offset_of_ps_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (RotationUpdate_t148547071), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1872[1] = 
{
	RotationUpdate_t148547071::get_offset_of_targetRotation_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (ShotMover_t2453521817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1873[2] = 
{
	ShotMover_t2453521817::get_offset_of_speed_2(),
	ShotMover_t2453521817::get_offset_of_lifeTime_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (SpawnersDontDestroy_t2337667420), -1, sizeof(SpawnersDontDestroy_t2337667420_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1874[1] = 
{
	SpawnersDontDestroy_t2337667420_StaticFields::get_offset_of_instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305142), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1875[1] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (U24ArrayTypeU3D288_t3113433916)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D288_t3113433916 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
