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
#include "AssemblyU2DCSharp_MainMenu4009084430.h"
#include "AssemblyU2DCSharp_PauseMenu2596728003.h"
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
#include "AssemblyU2DCSharp_HomingMissileManager2295200215.h"
#include "AssemblyU2DCSharp_HomingMissilePowerup3348687296.h"
#include "AssemblyU2DCSharp_Mine2729441277.h"
#include "AssemblyU2DCSharp_Mine_U3CCircularRotateU3Ec__Iter2167126757.h"
#include "AssemblyU2DCSharp_Missile813944928.h"
#include "AssemblyU2DCSharp_Missile_U3CSeekAndMoveU3Ec__Iter1588482346.h"
#include "AssemblyU2DCSharp_Missile_U3CDamageDelayU3Ec__Iter1788117821.h"
#include "AssemblyU2DCSharp_PlayerStraightMissile771456871.h"
#include "AssemblyU2DCSharp_Powerup2065360972.h"
#include "AssemblyU2DCSharp_PowerupManager1742038315.h"
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
#include "AssemblyU2DCSharp_ColliderHelper3166917508.h"
#include "AssemblyU2DCSharp_EngineUpdate2765210485.h"
#include "AssemblyU2DCSharp_HealthPickup1380905078.h"
#include "AssemblyU2DCSharp_ParticleSystemAutoDestroy725210834.h"
#include "AssemblyU2DCSharp_RotationUpdate148547071.h"
#include "AssemblyU2DCSharp_ShotMover2453521817.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1486305137.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3113433916.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_4242205806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2109168246.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2405545793.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1041372534.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CustomJoystick_FourW1585647557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3911078641.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2940155202.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3259949230.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3467812574.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ThidPersonExampleCon2451368942.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Examples_Scenes_Touc3770268686.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Examples_Scenes_Touc1160835953.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_CnInputMa1621129062.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_VirtualAxi639041308.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_VirtualBu1816990431.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CommonOnScreenContro3519870829.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_Dpad2915111111.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_DpadAxis2553897428.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_Sensitive2097729064.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_SimpleBut3445824566.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_ControlMo2481721487.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_SimpleJoy3517917222.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_Touchpad4018445730.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (MainMenu_t4009084430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (PauseMenu_t2596728003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[2] = 
{
	PauseMenu_t2596728003::get_offset_of_pauseMenu_2(),
	PauseMenu_t2596728003::get_offset_of_paused_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (BurstChargeColliders_t3288508547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1804[2] = 
{
	BurstChargeColliders_t3288508547::get_offset_of_explosion_2(),
	BurstChargeColliders_t3288508547::get_offset_of_dmg_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (BurstRushCollider_t2521001464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1805[2] = 
{
	BurstRushCollider_t2521001464::get_offset_of_explosion_2(),
	BurstRushCollider_t2521001464::get_offset_of_dmg_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (BurstRushManager_t1694550503), -1, sizeof(BurstRushManager_t1694550503_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1806[3] = 
{
	BurstRushManager_t1694550503::get_offset_of_burstChargeColliders_2(),
	BurstRushManager_t1694550503::get_offset_of_burstRushColliders_3(),
	BurstRushManager_t1694550503_StaticFields::get_offset_of_instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (BurstRushPowerup_t2814589744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[14] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (U3CStartChargeU3Ec__Iterator0_t1319837322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1808[4] = 
{
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24this_0(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24current_1(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24disposing_2(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (U3CStartRushU3Ec__Iterator1_t358529499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1809[4] = 
{
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24this_0(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24current_1(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24disposing_2(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (DashAbility_t1993643330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1810[5] = 
{
	DashAbility_t1993643330::get_offset_of_player_2(),
	DashAbility_t1993643330::get_offset_of_dashState_3(),
	DashAbility_t1993643330::get_offset_of_dashTimer_4(),
	DashAbility_t1993643330::get_offset_of_maxDash_5(),
	DashAbility_t1993643330::get_offset_of_savedVelocity_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (DashState_t223559211)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1811[4] = 
{
	DashState_t223559211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (DashPowerup_t3036178112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1812[2] = 
{
	DashPowerup_t3036178112::get_offset_of_player_2(),
	DashPowerup_t3036178112::get_offset_of_isVisible_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (DualFirePowerup_t2827626406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[1] = 
{
	DualFirePowerup_t2827626406::get_offset_of_id_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (HomingMissileManager_t2295200215), -1, sizeof(HomingMissileManager_t2295200215_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1814[4] = 
{
	HomingMissileManager_t2295200215::get_offset_of_missileSpawn_2(),
	HomingMissileManager_t2295200215::get_offset_of_missile_3(),
	HomingMissileManager_t2295200215::get_offset_of_player_4(),
	HomingMissileManager_t2295200215_StaticFields::get_offset_of_instance_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (HomingMissilePowerup_t3348687296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[1] = 
{
	HomingMissilePowerup_t3348687296::get_offset_of_numMissiles_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (Mine_t2729441277), -1, sizeof(Mine_t2729441277_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1816[6] = 
{
	Mine_t2729441277::get_offset_of_explosion_2(),
	Mine_t2729441277::get_offset_of_rotationFactor_3(),
	Mine_t2729441277::get_offset_of_explosionDmg_4(),
	Mine_t2729441277::get_offset_of_dmgRange_5(),
	Mine_t2729441277::get_offset_of_cr_6(),
	Mine_t2729441277_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (U3CCircularRotateU3Ec__Iterator0_t2167126757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[4] = 
{
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24this_0(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24current_1(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24disposing_2(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (Missile_t813944928), -1, sizeof(Missile_t813944928_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1818[14] = 
{
	Missile_t813944928::get_offset_of_explosion_2(),
	Missile_t813944928::get_offset_of_target_3(),
	Missile_t813944928::get_offset_of_damage_4(),
	Missile_t813944928::get_offset_of_damageRange_5(),
	Missile_t813944928::get_offset_of_rotationSpeed_6(),
	Missile_t813944928::get_offset_of_speed_7(),
	Missile_t813944928::get_offset_of_dmgDelay_8(),
	Missile_t813944928::get_offset_of_seekingTarget_9(),
	Missile_t813944928::get_offset_of_noEnemies_10(),
	Missile_t813944928::get_offset_of_seekDelay_11(),
	Missile_t813944928::get_offset_of_canDmg_12(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_13(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_14(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (U3CSeekAndMoveU3Ec__Iterator0_t1588482346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1819[4] = 
{
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24this_0(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24current_1(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24disposing_2(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (U3CDamageDelayU3Ec__Iterator1_t1788117821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1820[5] = 
{
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_dmgDelay_0(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24this_1(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24current_2(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24disposing_3(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (PlayerStraightMissile_t771456871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1821[3] = 
{
	PlayerStraightMissile_t771456871::get_offset_of_thrust_2(),
	PlayerStraightMissile_t771456871::get_offset_of_missileDmg_3(),
	PlayerStraightMissile_t771456871::get_offset_of_explosion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (Powerup_t2065360972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[6] = 
{
	Powerup_t2065360972::get_offset_of_player_2(),
	Powerup_t2065360972::get_offset_of_prevSS_3(),
	Powerup_t2065360972::get_offset_of_powerDuration_4(),
	Powerup_t2065360972::get_offset_of_endTime_5(),
	Powerup_t2065360972::get_offset_of_timeObtained_6(),
	Powerup_t2065360972::get_offset_of_isVisible_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (PowerupManager_t1742038315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (ScoreMultiplierPowerup_t2255546723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (ShurikenObj_t3227405676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1825[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (U3CCircularRotateU3Ec__Iterator0_t471411774), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1826[5] = 
{
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U3CdeathTimeU3E__0_0(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24this_1(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24current_2(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24disposing_3(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (U3CDamageDelayU3Ec__Iterator1_t213916723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1827[5] = 
{
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_dmgDelay_0(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24this_1(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24current_2(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24disposing_3(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (ShurikenPowerup_t748303341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1828[7] = 
{
	ShurikenPowerup_t748303341::get_offset_of_shuriken_2(),
	ShurikenPowerup_t748303341::get_offset_of_player_3(),
	ShurikenPowerup_t748303341::get_offset_of_isVisible_4(),
	ShurikenPowerup_t748303341::get_offset_of_lifeTime_5(),
	ShurikenPowerup_t748303341::get_offset_of_cr_6(),
	ShurikenPowerup_t748303341::get_offset_of_sken_7(),
	ShurikenPowerup_t748303341::get_offset_of_id_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (U3CBeginCountdownU3Ec__Iterator0_t72049679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[5] = 
{
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_lifeTime_0(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24this_1(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24current_2(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24disposing_3(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (SideMissilePowerup_t2763409259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (StraightMissile_t1639712682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1831[3] = 
{
	StraightMissile_t1639712682::get_offset_of_thrust_2(),
	StraightMissile_t1639712682::get_offset_of_missileDmg_3(),
	StraightMissile_t1639712682::get_offset_of_explosion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (TriFirePowerup_t218398003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1832[1] = 
{
	TriFirePowerup_t218398003::get_offset_of_id_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (TripMineWeapon_t4010445916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1833[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (U3CBeginCountdownU3Ec__Iterator0_t1984220940), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[6] = 
{
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_mineFuse_0(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24locvar0_1(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24this_2(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24current_3(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24disposing_4(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (WaveShotPowerup_t1909494417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (SpecialWeapons_t1455949192)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1836[5] = 
{
	SpecialWeapons_t1455949192::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (WeaponsManager_t3151090140), -1, sizeof(WeaponsManager_t3151090140_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1837[1] = 
{
	WeaponsManager_t3151090140_StaticFields::get_offset_of__instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (CollisionHelperBomberType_t947044979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1838[1] = 
{
	CollisionHelperBomberType_t947044979::get_offset_of_player_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (EnemyManagerBomberType_t3128208288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1839[6] = 
{
	EnemyManagerBomberType_t3128208288::get_offset_of_explosion_2(),
	EnemyManagerBomberType_t3128208288::get_offset_of_enemyHealth_3(),
	EnemyManagerBomberType_t3128208288::get_offset_of_shotDamage_4(),
	EnemyManagerBomberType_t3128208288::get_offset_of_enemyPoints_5(),
	EnemyManagerBomberType_t3128208288::get_offset_of_player_6(),
	EnemyManagerBomberType_t3128208288::get_offset_of_rb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (EnemyMovementBomberType_t436096734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1840[6] = 
{
	EnemyMovementBomberType_t436096734::get_offset_of_speed_2(),
	EnemyMovementBomberType_t436096734::get_offset_of_rotationSpeed_3(),
	EnemyMovementBomberType_t436096734::get_offset_of_target_4(),
	EnemyMovementBomberType_t436096734::get_offset_of_isExploding_5(),
	EnemyMovementBomberType_t436096734::get_offset_of_initialPos_6(),
	EnemyMovementBomberType_t436096734::get_offset_of_explosionActive_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (U3CBeginExplosionU3Ec__Iterator0_t787871658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1841[5] = 
{
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U3CexplosionU3E__0_0(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24this_1(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24current_2(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24disposing_3(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (EnemyManagerCollisionType_t3110909189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1842[4] = 
{
	EnemyManagerCollisionType_t3110909189::get_offset_of_explosion_2(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_enemyHealth_3(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_shotDamage_4(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_enemyPoints_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (EnemyMovementCollisionType_t1487527125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1843[5] = 
{
	EnemyMovementCollisionType_t1487527125::get_offset_of_speed_2(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_rotationSpeed_3(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_target_4(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_initialPos_5(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (EnemyManagerRangedType_t2461668628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1844[4] = 
{
	EnemyManagerRangedType_t2461668628::get_offset_of_explosion_2(),
	EnemyManagerRangedType_t2461668628::get_offset_of_enemyHealth_3(),
	EnemyManagerRangedType_t2461668628::get_offset_of_shotDamage_4(),
	EnemyManagerRangedType_t2461668628::get_offset_of_enemyPoints_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (EnemyMovementDistanceType_t2816956290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1845[5] = 
{
	EnemyMovementDistanceType_t2816956290::get_offset_of_speed_2(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_rotationSpeed_3(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_target_4(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_initialPos_5(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (EnemyShootingDistanceType_t3850811550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1846[5] = 
{
	EnemyShootingDistanceType_t3850811550::get_offset_of_shot_2(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_shotSpawn_3(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_fireRate_4(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_nextFire_5(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_speed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (PlayerMovement_t3166138480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1847[2] = 
{
	PlayerMovement_t3166138480::get_offset_of_speed_2(),
	PlayerMovement_t3166138480::get_offset_of_rb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (PlayerShooting_t3959056376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1848[5] = 
{
	PlayerShooting_t3959056376::get_offset_of_shot_2(),
	PlayerShooting_t3959056376::get_offset_of_shotSpawn_3(),
	PlayerShooting_t3959056376::get_offset_of_fireRate_4(),
	PlayerShooting_t3959056376::get_offset_of_nextFire_5(),
	PlayerShooting_t3959056376::get_offset_of_speed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (DropShipSpawn_t1841476170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1849[1] = 
{
	DropShipSpawn_t1841476170::get_offset_of_shipToSpawn_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (EnemySpawnCappedTemplate_t446895980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1850[6] = 
{
	EnemySpawnCappedTemplate_t446895980::get_offset_of_enemy_2(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_spawnDelay_3(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_maxEnemies_4(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_coroutine_5(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_numEnemies_6(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_spawnContainer_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (U3CWaitAndSpawnU3Ec__Iterator0_t622200115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1851[6] = 
{
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U3CfillSizeU3E__0_0(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_spawnDelay_1(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24this_2(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24current_3(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24disposing_4(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (EnemySpawnTemplate_t4133663547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1852[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (U3CWaitAndFireU3Ec__Iterator0_t2546928863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1853[12] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (MovingSpawn_t1342199589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1854[12] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (U3CWaitAndFireU3Ec__Iterator0_t1752015193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1855[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (MovingSpawnManager_t2417359772), -1, sizeof(MovingSpawnManager_t2417359772_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1856[12] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (U3CStartSpawningU3Ec__Iterator0_t4085926021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1857[6] = 
{
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U3CspawnLocU3E__0_0(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U3CspawnLocU3E__1_1(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24this_2(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24current_3(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24disposing_4(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (ColliderHelper_t3166917508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[1] = 
{
	ColliderHelper_t3166917508::get_offset_of_explosion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (EngineUpdate_t2765210485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1859[1] = 
{
	EngineUpdate_t2765210485::get_offset_of_playerTransform_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (HealthPickup_t1380905078), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1860[1] = 
{
	HealthPickup_t1380905078::get_offset_of_healthAmnt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (ParticleSystemAutoDestroy_t725210834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1861[1] = 
{
	ParticleSystemAutoDestroy_t725210834::get_offset_of_ps_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (RotationUpdate_t148547071), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1862[1] = 
{
	RotationUpdate_t148547071::get_offset_of_targetRotation_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (ShotMover_t2453521817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[2] = 
{
	ShotMover_t2453521817::get_offset_of_speed_2(),
	ShotMover_t2453521817::get_offset_of_lifeTime_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305142), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1864[1] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (U24ArrayTypeU3D288_t3113433916)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D288_t3113433916 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (U3CModuleU3E_t3783534222), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (Camera2DFollow_t4242205806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1867[9] = 
{
	Camera2DFollow_t4242205806::get_offset_of_target_2(),
	Camera2DFollow_t4242205806::get_offset_of_damping_3(),
	Camera2DFollow_t4242205806::get_offset_of_lookAheadFactor_4(),
	Camera2DFollow_t4242205806::get_offset_of_lookAheadReturnSpeed_5(),
	Camera2DFollow_t4242205806::get_offset_of_lookAheadMoveThreshold_6(),
	Camera2DFollow_t4242205806::get_offset_of_m_OffsetZ_7(),
	Camera2DFollow_t4242205806::get_offset_of_m_LastTargetPosition_8(),
	Camera2DFollow_t4242205806::get_offset_of_m_CurrentVelocity_9(),
	Camera2DFollow_t4242205806::get_offset_of_m_LookAheadPos_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (Platformer2DUserControl_t2109168246), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1868[2] = 
{
	Platformer2DUserControl_t2109168246::get_offset_of_m_Character_2(),
	Platformer2DUserControl_t2109168246::get_offset_of_m_Jump_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (PlatformerCharacter2D_t2405545793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1869[10] = 
{
	PlatformerCharacter2D_t2405545793::get_offset_of_m_MaxSpeed_2(),
	PlatformerCharacter2D_t2405545793::get_offset_of_m_JumpForce_3(),
	PlatformerCharacter2D_t2405545793::get_offset_of_m_AirControl_4(),
	PlatformerCharacter2D_t2405545793::get_offset_of_m_WhatIsGround_5(),
	PlatformerCharacter2D_t2405545793::get_offset_of_m_GroundCheck_6(),
	0,
	PlatformerCharacter2D_t2405545793::get_offset_of_m_Grounded_8(),
	PlatformerCharacter2D_t2405545793::get_offset_of_m_Anim_9(),
	PlatformerCharacter2D_t2405545793::get_offset_of_m_Rigidbody2D_10(),
	PlatformerCharacter2D_t2405545793::get_offset_of_m_FacingRight_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (Restarter_t1041372534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (FourWayController_t1585647557), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1871[2] = 
{
	FourWayController_t1585647557::get_offset_of_directionalVectors_2(),
	FourWayController_t1585647557::get_offset_of__mainCameraTransform_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (AbstractTargetFollower_t3911078641), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1872[4] = 
{
	AbstractTargetFollower_t3911078641::get_offset_of_m_Target_2(),
	AbstractTargetFollower_t3911078641::get_offset_of_m_AutoTargetPlayer_3(),
	AbstractTargetFollower_t3911078641::get_offset_of_m_UpdateType_4(),
	AbstractTargetFollower_t3911078641::get_offset_of_targetRigidbody_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (UpdateType_t2940155202)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1873[4] = 
{
	UpdateType_t2940155202::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (AutoCam_t3259949230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1874[12] = 
{
	AutoCam_t3259949230::get_offset_of_m_MoveSpeed_9(),
	AutoCam_t3259949230::get_offset_of_m_TurnSpeed_10(),
	AutoCam_t3259949230::get_offset_of_m_RollSpeed_11(),
	AutoCam_t3259949230::get_offset_of_m_FollowVelocity_12(),
	AutoCam_t3259949230::get_offset_of_m_FollowTilt_13(),
	AutoCam_t3259949230::get_offset_of_m_SpinTurnLimit_14(),
	AutoCam_t3259949230::get_offset_of_m_TargetVelocityLowerLimit_15(),
	AutoCam_t3259949230::get_offset_of_m_SmoothTurnTime_16(),
	AutoCam_t3259949230::get_offset_of_m_LastFlatAngle_17(),
	AutoCam_t3259949230::get_offset_of_m_CurrentTurnAmount_18(),
	AutoCam_t3259949230::get_offset_of_m_TurnSpeedVelocityChange_19(),
	AutoCam_t3259949230::get_offset_of_m_RollUp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (PivotBasedCameraRig_t3467812574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1875[3] = 
{
	PivotBasedCameraRig_t3467812574::get_offset_of_m_Cam_6(),
	PivotBasedCameraRig_t3467812574::get_offset_of_m_Pivot_7(),
	PivotBasedCameraRig_t3467812574::get_offset_of_m_LastTargetPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (ThidPersonExampleController_t2451368942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1876[4] = 
{
	ThidPersonExampleController_t2451368942::get_offset_of_MovementSpeed_2(),
	ThidPersonExampleController_t2451368942::get_offset_of__mainCameraTransform_3(),
	ThidPersonExampleController_t2451368942::get_offset_of__transform_4(),
	ThidPersonExampleController_t2451368942::get_offset_of__characterController_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (RotateCamera_t3770268686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1877[2] = 
{
	RotateCamera_t3770268686::get_offset_of_RotationSpeed_2(),
	RotateCamera_t3770268686::get_offset_of_OriginTransform_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (RotationConstraint_t1160835953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1878[7] = 
{
	RotationConstraint_t1160835953::get_offset_of_Min_2(),
	RotationConstraint_t1160835953::get_offset_of_Max_3(),
	RotationConstraint_t1160835953::get_offset_of__transformCache_4(),
	RotationConstraint_t1160835953::get_offset_of__minQuaternion_5(),
	RotationConstraint_t1160835953::get_offset_of__maxQuaternion_6(),
	RotationConstraint_t1160835953::get_offset_of__rotateAround_7(),
	RotationConstraint_t1160835953::get_offset_of__range_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { sizeof (CnInputManager_t1621129062), -1, sizeof(CnInputManager_t1621129062_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1879[3] = 
{
	CnInputManager_t1621129062_StaticFields::get_offset_of__instance_0(),
	CnInputManager_t1621129062::get_offset_of__virtualAxisDictionary_1(),
	CnInputManager_t1621129062::get_offset_of__virtualButtonsDictionary_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (VirtualAxis_t639041308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1880[2] = 
{
	VirtualAxis_t639041308::get_offset_of_U3CNameU3Ek__BackingField_0(),
	VirtualAxis_t639041308::get_offset_of_U3CValueU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (VirtualButton_t1816990431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1881[4] = 
{
	VirtualButton_t1816990431::get_offset_of_U3CNameU3Ek__BackingField_0(),
	VirtualButton_t1816990431::get_offset_of_U3CIsPressedU3Ek__BackingField_1(),
	VirtualButton_t1816990431::get_offset_of__lastPressedFrame_2(),
	VirtualButton_t1816990431::get_offset_of__lastReleasedFrame_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (CommonOnScreenControl_t3519870829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (Dpad_t2915111111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1883[2] = 
{
	Dpad_t2915111111::get_offset_of_DpadAxis_2(),
	Dpad_t2915111111::get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (DpadAxis_t2553897428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1884[5] = 
{
	DpadAxis_t2553897428::get_offset_of_AxisName_2(),
	DpadAxis_t2553897428::get_offset_of_AxisMultiplier_3(),
	DpadAxis_t2553897428::get_offset_of_U3CRectTransformU3Ek__BackingField_4(),
	DpadAxis_t2553897428::get_offset_of_U3CLastFingerIdU3Ek__BackingField_5(),
	DpadAxis_t2553897428::get_offset_of__virtualAxis_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (SensitiveJoystick_t2097729064), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1885[1] = 
{
	SensitiveJoystick_t2097729064::get_offset_of_SensitivityCurve_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (SimpleButton_t3445824566), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1886[2] = 
{
	SimpleButton_t3445824566::get_offset_of_ButtonName_2(),
	SimpleButton_t3445824566::get_offset_of__virtualButton_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (ControlMovementDirection_t2481721487)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1887[4] = 
{
	ControlMovementDirection_t2481721487::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (SimpleJoystick_t3517917222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1888[19] = 
{
	SimpleJoystick_t3517917222::get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_2(),
	SimpleJoystick_t3517917222::get_offset_of_MovementRange_3(),
	SimpleJoystick_t3517917222::get_offset_of_HorizontalAxisName_4(),
	SimpleJoystick_t3517917222::get_offset_of_VerticalAxisName_5(),
	SimpleJoystick_t3517917222::get_offset_of_HideOnRelease_6(),
	SimpleJoystick_t3517917222::get_offset_of_MoveBase_7(),
	SimpleJoystick_t3517917222::get_offset_of_SnapsToFinger_8(),
	SimpleJoystick_t3517917222::get_offset_of_JoystickMoveAxis_9(),
	SimpleJoystick_t3517917222::get_offset_of_JoystickBase_10(),
	SimpleJoystick_t3517917222::get_offset_of_Stick_11(),
	SimpleJoystick_t3517917222::get_offset_of_TouchZone_12(),
	SimpleJoystick_t3517917222::get_offset_of__initialStickPosition_13(),
	SimpleJoystick_t3517917222::get_offset_of__intermediateStickPosition_14(),
	SimpleJoystick_t3517917222::get_offset_of__initialBasePosition_15(),
	SimpleJoystick_t3517917222::get_offset_of__baseTransform_16(),
	SimpleJoystick_t3517917222::get_offset_of__stickTransform_17(),
	SimpleJoystick_t3517917222::get_offset_of__oneOverMovementRange_18(),
	SimpleJoystick_t3517917222::get_offset_of_HorizintalAxis_19(),
	SimpleJoystick_t3517917222::get_offset_of_VerticalAxis_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (Touchpad_t4018445730), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1889[10] = 
{
	Touchpad_t4018445730::get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_2(),
	Touchpad_t4018445730::get_offset_of_HorizontalAxisName_3(),
	Touchpad_t4018445730::get_offset_of_VerticalAxisName_4(),
	Touchpad_t4018445730::get_offset_of_PreserveInertia_5(),
	Touchpad_t4018445730::get_offset_of_Friction_6(),
	Touchpad_t4018445730::get_offset_of__horizintalAxis_7(),
	Touchpad_t4018445730::get_offset_of__verticalAxis_8(),
	Touchpad_t4018445730::get_offset_of__lastDragFrameNumber_9(),
	Touchpad_t4018445730::get_offset_of__isCurrentlyTweaking_10(),
	Touchpad_t4018445730::get_offset_of_ControlMoveAxis_11(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
