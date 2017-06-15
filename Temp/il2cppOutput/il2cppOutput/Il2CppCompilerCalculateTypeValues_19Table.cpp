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
#include "AssemblyU2DCSharp_DictRow2722648356.h"
#include "AssemblyU2DCSharp_DictRow_TeamHolder1859884362.h"
#include "AssemblyU2DCSharp_Drawing2795064638.h"
#include "AssemblyU2DCSharp_DropShipShotSpawn31279474.h"
#include "AssemblyU2DCSharp_FOV2D3710553267.h"
#include "AssemblyU2DCSharp_FasterShot1611607913.h"
#include "AssemblyU2DCSharp_FiringShip3666415697.h"
#include "AssemblyU2DCSharp_GamePoolManager3812348435.h"
#include "AssemblyU2DCSharp_PlayerShip2635532215.h"
#include "AssemblyU2DCSharp_PlayerShip_Weapons2322246681.h"
#include "AssemblyU2DCSharp_PlayerShip_U3CFlickerHitU3Ec__It2045787566.h"
#include "AssemblyU2DCSharp_PlayerShotSpawn2770260632.h"
#include "AssemblyU2DCSharp_PoolManager2106959589.h"
#include "AssemblyU2DCSharp_PoolManager_ObjectInstance624909858.h"
#include "AssemblyU2DCSharp_PoolObject202793199.h"
#include "AssemblyU2DCSharp_Row774521500.h"
#include "AssemblyU2DCSharp_Shields928117030.h"
#include "AssemblyU2DCSharp_Shields_U3CActivateShieldU3Ec__I3809566534.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"
#include "AssemblyU2DCSharp_Ship_U3CFlickerHitU3Ec__Iterator3909002685.h"
#include "AssemblyU2DCSharp_Shot3441902592.h"
#include "AssemblyU2DCSharp_Shot_U3CDestroyAfterLifeTimeU3Ec2828819667.h"
#include "AssemblyU2DCSharp_ShotSpawn3804264869.h"
#include "AssemblyU2DCSharp_ShotSpawnContainer1132610082.h"
#include "AssemblyU2DCSharp_TeleMarker3300282242.h"
#include "AssemblyU2DCSharp_TurretShotSpawn2021278641.h"
#include "AssemblyU2DCSharp_Utils4194145797.h"
#include "AssemblyU2DCSharp_WaveShot4261945459.h"
#include "AssemblyU2DCSharp_WaveShot_U3CDestroyAfterLifeTimeU211350342.h"
#include "AssemblyU2DCSharp_WaveShotSpawn601994640.h"
#include "AssemblyU2DCSharp_ContinueScreen3714933611.h"
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
#include "AssemblyU2DCSharp_EnemySpawner2939277584.h"
#include "AssemblyU2DCSharp_EnemySpawner_U3CStartSpawningEne1382053875.h"
#include "AssemblyU2DCSharp_MovingSpawn1342199589.h"
#include "AssemblyU2DCSharp_MovingSpawn_U3CWaitAndFireU3Ec__1752015193.h"
#include "AssemblyU2DCSharp_MovingSpawnManager2417359772.h"
#include "AssemblyU2DCSharp_MovingSpawnManager_U3CStartSpawn4085926021.h"
#include "AssemblyU2DCSharp_PromotionArea1239961636.h"
#include "AssemblyU2DCSharp_ColliderHelper3166917508.h"
#include "AssemblyU2DCSharp_EngineUpdate2765210485.h"
#include "AssemblyU2DCSharp_HealthPickup1380905078.h"
#include "AssemblyU2DCSharp_ParticleSystemAutoDestroy725210834.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (DictRow_t2722648356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1900[1] = 
{
	DictRow_t2722648356::get_offset_of_dictRow_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (TeamHolder_t1859884362), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1901[1] = 
{
	TeamHolder_t1859884362::get_offset_of_dict_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (Drawing_t2795064638), -1, sizeof(Drawing_t2795064638_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1902[5] = 
{
	Drawing_t2795064638_StaticFields::get_offset_of_aaLineTex_0(),
	Drawing_t2795064638_StaticFields::get_offset_of_lineTex_1(),
	Drawing_t2795064638_StaticFields::get_offset_of_blitMaterial_2(),
	Drawing_t2795064638_StaticFields::get_offset_of_blendMaterial_3(),
	Drawing_t2795064638_StaticFields::get_offset_of_lineRect_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (DropShipShotSpawn_t31279474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[3] = 
{
	DropShipShotSpawn_t31279474::get_offset_of_targetRotation_2(),
	DropShipShotSpawn_t31279474::get_offset_of_multiFire_3(),
	DropShipShotSpawn_t31279474::get_offset_of_shotContainer_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (FOV2D_t3710553267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[6] = 
{
	FOV2D_t3710553267::get_offset_of_radius_2(),
	FOV2D_t3710553267::get_offset_of_fov_3(),
	FOV2D_t3710553267::get_offset_of_direction_4(),
	FOV2D_t3710553267::get_offset_of_testPoint_5(),
	FOV2D_t3710553267::get_offset_of_leftLineFOV_6(),
	FOV2D_t3710553267::get_offset_of_rightLineFOV_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (FasterShot_t1611607913), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[6] = 
{
	FasterShot_t1611607913::get_offset_of_shotSpawn_2(),
	FasterShot_t1611607913::get_offset_of_shotDamage_3(),
	FasterShot_t1611607913::get_offset_of_speed_4(),
	FasterShot_t1611607913::get_offset_of_speedMultiplier_5(),
	FasterShot_t1611607913::get_offset_of_lifeTime_6(),
	FasterShot_t1611607913::get_offset_of_rb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (FiringShip_t3666415697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[8] = 
{
	FiringShip_t3666415697::get_offset_of_shot_20(),
	FiringShip_t3666415697::get_offset_of_fasterShot_21(),
	FiringShip_t3666415697::get_offset_of_shotSpawn_22(),
	FiringShip_t3666415697::get_offset_of_shotDamage_23(),
	FiringShip_t3666415697::get_offset_of_fireRate_24(),
	FiringShip_t3666415697::get_offset_of_nextFire_25(),
	FiringShip_t3666415697::get_offset_of_buffedFiringRateFactor_26(),
	FiringShip_t3666415697::get_offset_of_isFiringBuffed_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (GamePoolManager_t3812348435), -1, sizeof(GamePoolManager_t3812348435_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1907[36] = 
{
	GamePoolManager_t3812348435_StaticFields::get_offset_of_singleton_2(),
	GamePoolManager_t3812348435::get_offset_of_playerSingleShot_3(),
	GamePoolManager_t3812348435::get_offset_of_playerDualShot_4(),
	GamePoolManager_t3812348435::get_offset_of_playerTriShot_5(),
	GamePoolManager_t3812348435::get_offset_of_playerUltiShot_6(),
	GamePoolManager_t3812348435::get_offset_of_enemySingleShot_7(),
	GamePoolManager_t3812348435::get_offset_of_enemyFasterShot_8(),
	GamePoolManager_t3812348435::get_offset_of_enemyBulletHellShot_9(),
	GamePoolManager_t3812348435::get_offset_of_firingPowerup_10(),
	GamePoolManager_t3812348435::get_offset_of_waveShotPowerup_11(),
	GamePoolManager_t3812348435::get_offset_of_burstRushPowerup_12(),
	GamePoolManager_t3812348435::get_offset_of_dashPowerup_13(),
	GamePoolManager_t3812348435::get_offset_of_homingMissilePowerup_14(),
	GamePoolManager_t3812348435::get_offset_of_scoreMultPowerup_15(),
	GamePoolManager_t3812348435::get_offset_of_shurikenPowerup_16(),
	GamePoolManager_t3812348435::get_offset_of_tripMinePowerup_17(),
	GamePoolManager_t3812348435::get_offset_of_sideMissilePowerup_18(),
	GamePoolManager_t3812348435::get_offset_of_healthPack_19(),
	GamePoolManager_t3812348435::get_offset_of_tripMines_20(),
	GamePoolManager_t3812348435::get_offset_of_shurikenObj_21(),
	GamePoolManager_t3812348435::get_offset_of_waveShot_22(),
	GamePoolManager_t3812348435::get_offset_of_missiles_23(),
	GamePoolManager_t3812348435::get_offset_of_straightMissiles_24(),
	GamePoolManager_t3812348435::get_offset_of_playerStraightMissiles_25(),
	GamePoolManager_t3812348435::get_offset_of_empWaveShot_26(),
	GamePoolManager_t3812348435::get_offset_of_teleMarker_27(),
	GamePoolManager_t3812348435::get_offset_of_pawnShip_28(),
	GamePoolManager_t3812348435::get_offset_of_rangedShip_29(),
	GamePoolManager_t3812348435::get_offset_of_mediShip_30(),
	GamePoolManager_t3812348435::get_offset_of_turret_31(),
	GamePoolManager_t3812348435::get_offset_of_dropShip_32(),
	GamePoolManager_t3812348435::get_offset_of_assassinShip_33(),
	GamePoolManager_t3812348435::get_offset_of_bomberShip_34(),
	GamePoolManager_t3812348435::get_offset_of_missileBoss_35(),
	GamePoolManager_t3812348435::get_offset_of_sniperBoss_36(),
	GamePoolManager_t3812348435::get_offset_of_rangedTest_37(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (PlayerShip_t2635532215), -1, sizeof(PlayerShip_t2635532215_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1908[27] = 
{
	PlayerShip_t2635532215::get_offset_of_firingPowerupExpirationTime_28(),
	PlayerShip_t2635532215::get_offset_of_shotSpawnContainers_29(),
	PlayerShip_t2635532215::get_offset_of_activeShotSpawnContainer_30(),
	PlayerShip_t2635532215::get_offset_of_shotSpawnStack_31(),
	PlayerShip_t2635532215::get_offset_of_shotSpawnDictionary_32(),
	PlayerShip_t2635532215::get_offset_of_numShots_33(),
	PlayerShip_t2635532215::get_offset_of_dashStarted_34(),
	PlayerShip_t2635532215::get_offset_of_dashEndTime_35(),
	PlayerShip_t2635532215::get_offset_of_thrust_36(),
	PlayerShip_t2635532215::get_offset_of_maxDash_37(),
	PlayerShip_t2635532215::get_offset_of_dashDuration_38(),
	PlayerShip_t2635532215::get_offset_of_rushStarted_39(),
	PlayerShip_t2635532215::get_offset_of_waveSpawns_40(),
	PlayerShip_t2635532215::get_offset_of_waveShotEnabled_41(),
	PlayerShip_t2635532215::get_offset_of_waveRandomVal_42(),
	PlayerShip_t2635532215::get_offset_of_waveChance_43(),
	PlayerShip_t2635532215::get_offset_of_sideMissileSpawns_44(),
	PlayerShip_t2635532215::get_offset_of_sideMissileEnabled_45(),
	PlayerShip_t2635532215::get_offset_of_sideMissileRandomVal_46(),
	PlayerShip_t2635532215::get_offset_of_sideMissileChance_47(),
	PlayerShip_t2635532215::get_offset_of_firingRig_48(),
	PlayerShip_t2635532215::get_offset_of_chargeColliderRig_49(),
	PlayerShip_t2635532215::get_offset_of_input_50(),
	PlayerShip_t2635532215::get_offset_of_rb_51(),
	PlayerShip_t2635532215::get_offset_of_maxForward_52(),
	PlayerShip_t2635532215::get_offset_of_colliderRadius_53(),
	PlayerShip_t2635532215_StaticFields::get_offset_of_singleton_54(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (Weapons_t2322246681)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1909[6] = 
{
	Weapons_t2322246681::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (U3CFlickerHitU3Ec__Iterator0_t2045787566), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[5] = 
{
	U3CFlickerHitU3Ec__Iterator0_t2045787566::get_offset_of_U3CflickerColorU3E__0_0(),
	U3CFlickerHitU3Ec__Iterator0_t2045787566::get_offset_of_U24this_1(),
	U3CFlickerHitU3Ec__Iterator0_t2045787566::get_offset_of_U24current_2(),
	U3CFlickerHitU3Ec__Iterator0_t2045787566::get_offset_of_U24disposing_3(),
	U3CFlickerHitU3Ec__Iterator0_t2045787566::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (PlayerShotSpawn_t2770260632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[12] = 
{
	PlayerShotSpawn_t2770260632::get_offset_of_firingAngle_4(),
	PlayerShotSpawn_t2770260632::get_offset_of_ultiShotInterval_5(),
	PlayerShotSpawn_t2770260632::get_offset_of_waveShotInterval_6(),
	PlayerShotSpawn_t2770260632::get_offset_of_shotCounter_7(),
	PlayerShotSpawn_t2770260632::get_offset_of_waveShotCounter_8(),
	PlayerShotSpawn_t2770260632::get_offset_of_ultimateShotEnabled_9(),
	PlayerShotSpawn_t2770260632::get_offset_of_waveShotEnabled_10(),
	PlayerShotSpawn_t2770260632::get_offset_of_shot_11(),
	PlayerShotSpawn_t2770260632::get_offset_of_fasterShot_12(),
	PlayerShotSpawn_t2770260632::get_offset_of_ultimateShot_13(),
	PlayerShotSpawn_t2770260632::get_offset_of_waveShot_14(),
	PlayerShotSpawn_t2770260632::get_offset_of_missile_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (PoolManager_t2106959589), -1, sizeof(PoolManager_t2106959589_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1912[2] = 
{
	PoolManager_t2106959589::get_offset_of_poolDictionary_2(),
	PoolManager_t2106959589_StaticFields::get_offset_of__instance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (ObjectInstance_t624909858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[4] = 
{
	ObjectInstance_t624909858::get_offset_of_gameObject_0(),
	ObjectInstance_t624909858::get_offset_of_transform_1(),
	ObjectInstance_t624909858::get_offset_of_hasPoolObjectComponent_2(),
	ObjectInstance_t624909858::get_offset_of_poolObjectScript_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (PoolObject_t202793199), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (Row_t774521500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1915[1] = 
{
	Row_t774521500::get_offset_of_row_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (Shields_t928117030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1916[3] = 
{
	Shields_t928117030::get_offset_of_shieldHealth_2(),
	Shields_t928117030::get_offset_of_shieldDuration_3(),
	Shields_t928117030::get_offset_of_spriteColor_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (U3CActivateShieldU3Ec__Iterator0_t3809566534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1917[4] = 
{
	U3CActivateShieldU3Ec__Iterator0_t3809566534::get_offset_of_U24this_0(),
	U3CActivateShieldU3Ec__Iterator0_t3809566534::get_offset_of_U24current_1(),
	U3CActivateShieldU3Ec__Iterator0_t3809566534::get_offset_of_U24disposing_2(),
	U3CActivateShieldU3Ec__Iterator0_t3809566534::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (Ship_t1116303770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1918[15] = 
{
	Ship_t1116303770::get_offset_of_target_5(),
	Ship_t1116303770::get_offset_of_explosion_6(),
	Ship_t1116303770::get_offset_of_moveFactor_7(),
	Ship_t1116303770::get_offset_of_speed_8(),
	Ship_t1116303770::get_offset_of_rotationSpeed_9(),
	Ship_t1116303770::get_offset_of_health_10(),
	Ship_t1116303770::get_offset_of_enemyPoints_11(),
	Ship_t1116303770::get_offset_of_isSpeedBuffed_12(),
	Ship_t1116303770::get_offset_of_buffedSpeedFactor_13(),
	Ship_t1116303770::get_offset_of_isMarked_14(),
	Ship_t1116303770::get_offset_of_initialPos_15(),
	Ship_t1116303770::get_offset_of_hitFlickerRoutine_16(),
	Ship_t1116303770::get_offset_of_startColor_17(),
	Ship_t1116303770::get_offset_of_sprite_18(),
	Ship_t1116303770::get_offset_of_flickerTime_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (U3CFlickerHitU3Ec__Iterator0_t3909002685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1919[5] = 
{
	U3CFlickerHitU3Ec__Iterator0_t3909002685::get_offset_of_U3CflickerColorU3E__0_0(),
	U3CFlickerHitU3Ec__Iterator0_t3909002685::get_offset_of_U24this_1(),
	U3CFlickerHitU3Ec__Iterator0_t3909002685::get_offset_of_U24current_2(),
	U3CFlickerHitU3Ec__Iterator0_t3909002685::get_offset_of_U24disposing_3(),
	U3CFlickerHitU3Ec__Iterator0_t3909002685::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (Shot_t3441902592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1920[6] = 
{
	Shot_t3441902592::get_offset_of_shotSpawn_2(),
	Shot_t3441902592::get_offset_of_shotDamage_3(),
	Shot_t3441902592::get_offset_of_speed_4(),
	Shot_t3441902592::get_offset_of_speedMultiplier_5(),
	Shot_t3441902592::get_offset_of_lifeTime_6(),
	Shot_t3441902592::get_offset_of_rb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1921[5] = 
{
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_lifeTime_0(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_U24this_1(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_U24current_2(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_U24disposing_3(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (ShotSpawn_t3804264869), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1922[2] = 
{
	ShotSpawn_t3804264869::get_offset_of_targetRotation_2(),
	ShotSpawn_t3804264869::get_offset_of_multiFire_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (ShotSpawnContainer_t1132610082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1923[3] = 
{
	ShotSpawnContainer_t1132610082::get_offset_of_firingPowerupID_2(),
	ShotSpawnContainer_t1132610082::get_offset_of_shotSpawnList_3(),
	ShotSpawnContainer_t1132610082::get_offset_of_activePowerup_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (TeleMarker_t3300282242), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (TurretShotSpawn_t2021278641), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1925[4] = 
{
	TurretShotSpawn_t2021278641::get_offset_of_targetRotation_2(),
	TurretShotSpawn_t2021278641::get_offset_of_multiFire_3(),
	TurretShotSpawn_t2021278641::get_offset_of_armed_4(),
	TurretShotSpawn_t2021278641::get_offset_of_shotContainer_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (Utils_t4194145797), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (WaveShot_t4261945459), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1927[7] = 
{
	WaveShot_t4261945459::get_offset_of_shotSpawn_2(),
	WaveShot_t4261945459::get_offset_of_shotDamage_3(),
	WaveShot_t4261945459::get_offset_of_speed_4(),
	WaveShot_t4261945459::get_offset_of_speedMultiplier_5(),
	WaveShot_t4261945459::get_offset_of_lifeTime_6(),
	WaveShot_t4261945459::get_offset_of_debugExplosion_7(),
	WaveShot_t4261945459::get_offset_of_rb_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1928[5] = 
{
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_lifeTime_0(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_U24this_1(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_U24current_2(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_U24disposing_3(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t211350342::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (WaveShotSpawn_t601994640), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1929[4] = 
{
	WaveShotSpawn_t601994640::get_offset_of_waveShot_4(),
	WaveShotSpawn_t601994640::get_offset_of_straightMissile_5(),
	WaveShotSpawn_t601994640::get_offset_of_waveShotEnabled_6(),
	WaveShotSpawn_t601994640::get_offset_of_waveShotCounter_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (ContinueScreen_t3714933611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1935[9] = 
{
	ContinueScreen_t3714933611::get_offset_of_victoryScreen_2(),
	ContinueScreen_t3714933611::get_offset_of_failureScreen_3(),
	ContinueScreen_t3714933611::get_offset_of_enemiesDefeatedText_4(),
	ContinueScreen_t3714933611::get_offset_of_powerupsObtainedText_5(),
	ContinueScreen_t3714933611::get_offset_of_totalCrystalsText_6(),
	ContinueScreen_t3714933611::get_offset_of_victoryShopButton_7(),
	ContinueScreen_t3714933611::get_offset_of_victoryContButton_8(),
	ContinueScreen_t3714933611::get_offset_of_failureShopButton_9(),
	ContinueScreen_t3714933611::get_offset_of_failureRetryButton_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (MainMenu_t4009084430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (PauseMenu_t2596728003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1937[2] = 
{
	PauseMenu_t2596728003::get_offset_of_pauseMenu_2(),
	PauseMenu_t2596728003::get_offset_of_paused_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (PowerupHolder_t2490551786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1938[2] = 
{
	PowerupHolder_t2490551786::get_offset_of_powerup_2(),
	PowerupHolder_t2490551786::get_offset_of_SHOP_MENU_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (ShopMenu_t2948784613), -1, sizeof(ShopMenu_t2948784613_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1939[24] = 
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
	ShopMenu_t2948784613::get_offset_of_maxLevelPanel_12(),
	ShopMenu_t2948784613::get_offset_of_buyButton_13(),
	ShopMenu_t2948784613::get_offset_of_currActiveUpgrade_14(),
	ShopMenu_t2948784613::get_offset_of_currButton_15(),
	ShopMenu_t2948784613::get_offset_of_upgradeName_16(),
	ShopMenu_t2948784613::get_offset_of_upgradePrice_17(),
	ShopMenu_t2948784613::get_offset_of_upgradeInfo_18(),
	ShopMenu_t2948784613::get_offset_of_upgradeSprite_19(),
	ShopMenu_t2948784613::get_offset_of_activeScreen_20(),
	ShopMenu_t2948784613::get_offset_of_screenStack_21(),
	ShopMenu_t2948784613::get_offset_of_isOpen_22(),
	ShopMenu_t2948784613::get_offset_of_activeSlots_23(),
	ShopMenu_t2948784613::get_offset_of_activePowerupHolder_24(),
	ShopMenu_t2948784613_StaticFields::get_offset_of_instance_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (U3CIndividualPowerupPressedU3Ec__AnonStorey0_t3906237326), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[2] = 
{
	U3CIndividualPowerupPressedU3Ec__AnonStorey0_t3906237326::get_offset_of_currSlot_0(),
	U3CIndividualPowerupPressedU3Ec__AnonStorey0_t3906237326::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (BurstChargeColliders_t3288508547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1941[2] = 
{
	BurstChargeColliders_t3288508547::get_offset_of_explosion_2(),
	BurstChargeColliders_t3288508547::get_offset_of_dmg_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (BurstRushCollider_t2521001464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1942[2] = 
{
	BurstRushCollider_t2521001464::get_offset_of_explosion_2(),
	BurstRushCollider_t2521001464::get_offset_of_dmg_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (BurstRushManager_t1694550503), -1, sizeof(BurstRushManager_t1694550503_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1943[3] = 
{
	BurstRushManager_t1694550503::get_offset_of_burstChargeColliders_2(),
	BurstRushManager_t1694550503::get_offset_of_burstRushColliders_3(),
	BurstRushManager_t1694550503_StaticFields::get_offset_of_instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (BurstRushPowerup_t2814589744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1944[15] = 
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
	BurstRushPowerup_t2814589744::get_offset_of_chargeRoutine_12(),
	BurstRushPowerup_t2814589744::get_offset_of_rushRoutine_13(),
	BurstRushPowerup_t2814589744::get_offset_of_player_14(),
	BurstRushPowerup_t2814589744::get_offset_of_oldVelocity_15(),
	BurstRushPowerup_t2814589744::get_offset_of_id_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (U3CStartChargeU3Ec__Iterator0_t1319837322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1945[4] = 
{
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24this_0(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24current_1(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24disposing_2(),
	U3CStartChargeU3Ec__Iterator0_t1319837322::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (U3CStartRushU3Ec__Iterator1_t358529499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1946[4] = 
{
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24this_0(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24current_1(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24disposing_2(),
	U3CStartRushU3Ec__Iterator1_t358529499::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (DashAbility_t1993643330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1947[5] = 
{
	DashAbility_t1993643330::get_offset_of_player_2(),
	DashAbility_t1993643330::get_offset_of_dashState_3(),
	DashAbility_t1993643330::get_offset_of_dashTimer_4(),
	DashAbility_t1993643330::get_offset_of_maxDash_5(),
	DashAbility_t1993643330::get_offset_of_savedVelocity_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (DashState_t223559211)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1948[4] = 
{
	DashState_t223559211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (DashPowerup_t3036178112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1949[2] = 
{
	DashPowerup_t3036178112::get_offset_of_player_2(),
	DashPowerup_t3036178112::get_offset_of_isVisible_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (HomingMissilePowerup_t3348687296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1950[2] = 
{
	HomingMissilePowerup_t3348687296::get_offset_of_missileSpawn_9(),
	HomingMissilePowerup_t3348687296::get_offset_of_missile_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (Mine_t2729441277), -1, sizeof(Mine_t2729441277_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1951[6] = 
{
	Mine_t2729441277::get_offset_of_explosion_2(),
	Mine_t2729441277::get_offset_of_rotationFactor_3(),
	Mine_t2729441277::get_offset_of_explosionDmg_4(),
	Mine_t2729441277::get_offset_of_dmgRange_5(),
	Mine_t2729441277::get_offset_of_cr_6(),
	Mine_t2729441277_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (U3CCircularRotateU3Ec__Iterator0_t2167126757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1952[4] = 
{
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24this_0(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24current_1(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24disposing_2(),
	U3CCircularRotateU3Ec__Iterator0_t2167126757::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { sizeof (Missile_t813944928), -1, sizeof(Missile_t813944928_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1953[16] = 
{
	Missile_t813944928::get_offset_of_powerupData_2(),
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
	Missile_t813944928::get_offset_of_spawnChance_13(),
	Missile_t813944928::get_offset_of_canDmg_14(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_15(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_16(),
	Missile_t813944928_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (U3CSeekAndMoveU3Ec__Iterator0_t1588482346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1954[4] = 
{
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24this_0(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24current_1(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24disposing_2(),
	U3CSeekAndMoveU3Ec__Iterator0_t1588482346::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (U3CDamageDelayU3Ec__Iterator1_t1788117821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1955[5] = 
{
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_dmgDelay_0(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24this_1(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24current_2(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24disposing_3(),
	U3CDamageDelayU3Ec__Iterator1_t1788117821::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (PlayerStraightMissile_t771456871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1956[3] = 
{
	PlayerStraightMissile_t771456871::get_offset_of_thrust_2(),
	PlayerStraightMissile_t771456871::get_offset_of_missileDmg_3(),
	PlayerStraightMissile_t771456871::get_offset_of_explosion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (Powerup_t2065360972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1957[7] = 
{
	Powerup_t2065360972::get_offset_of_powerupData_2(),
	Powerup_t2065360972::get_offset_of_player_3(),
	Powerup_t2065360972::get_offset_of_prevSS_4(),
	Powerup_t2065360972::get_offset_of_powerDuration_5(),
	Powerup_t2065360972::get_offset_of_endTime_6(),
	Powerup_t2065360972::get_offset_of_timeObtained_7(),
	Powerup_t2065360972::get_offset_of_isVisible_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (PowerupManager_t1742038315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { sizeof (PowerupScriptableObject_t1415146708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1959[1] = 
{
	PowerupScriptableObject_t1415146708::get_offset_of_upgradeList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { sizeof (ScoreMultiplierPowerup_t2255546723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { sizeof (ShurikenObj_t3227405676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1961[12] = 
{
	ShurikenObj_t3227405676::get_offset_of_powerupData_2(),
	ShurikenObj_t3227405676::get_offset_of_explosion_3(),
	ShurikenObj_t3227405676::get_offset_of_rotationFactor_4(),
	ShurikenObj_t3227405676::get_offset_of_damageDealt_5(),
	ShurikenObj_t3227405676::get_offset_of_growTimeMult_6(),
	ShurikenObj_t3227405676::get_offset_of_MAX_SIZE_7(),
	ShurikenObj_t3227405676::get_offset_of_dmgDone_8(),
	ShurikenObj_t3227405676::get_offset_of_growingBigger_9(),
	ShurikenObj_t3227405676::get_offset_of_dmgDelay_10(),
	ShurikenObj_t3227405676::get_offset_of_canDmg_11(),
	ShurikenObj_t3227405676::get_offset_of_cr_12(),
	ShurikenObj_t3227405676::get_offset_of_dd_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (U3CCircularRotateU3Ec__Iterator0_t471411774), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1962[5] = 
{
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U3CdeathTimeU3E__0_0(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24this_1(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24current_2(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24disposing_3(),
	U3CCircularRotateU3Ec__Iterator0_t471411774::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (U3CDamageDelayU3Ec__Iterator1_t213916723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1963[5] = 
{
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_dmgDelay_0(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24this_1(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24current_2(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24disposing_3(),
	U3CDamageDelayU3Ec__Iterator1_t213916723::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { sizeof (ShurikenPowerup_t748303341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1964[5] = 
{
	ShurikenPowerup_t748303341::get_offset_of_shuriken_9(),
	ShurikenPowerup_t748303341::get_offset_of_lifeTime_10(),
	ShurikenPowerup_t748303341::get_offset_of_cr_11(),
	ShurikenPowerup_t748303341::get_offset_of_sken_12(),
	ShurikenPowerup_t748303341::get_offset_of_id_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (U3CBeginCountdownU3Ec__Iterator0_t72049679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1965[5] = 
{
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_lifeTime_0(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24this_1(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24current_2(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24disposing_3(),
	U3CBeginCountdownU3Ec__Iterator0_t72049679::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { sizeof (SideMissilePowerup_t2763409259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { sizeof (StraightMissile_t1639712682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1967[3] = 
{
	StraightMissile_t1639712682::get_offset_of_thrust_2(),
	StraightMissile_t1639712682::get_offset_of_missileDmg_3(),
	StraightMissile_t1639712682::get_offset_of_explosion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (TripMineWeapon_t4010445916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1968[9] = 
{
	TripMineWeapon_t4010445916::get_offset_of_mine_2(),
	TripMineWeapon_t4010445916::get_offset_of_radius_3(),
	TripMineWeapon_t4010445916::get_offset_of_mineFuse_4(),
	TripMineWeapon_t4010445916::get_offset_of_explosionForce_5(),
	TripMineWeapon_t4010445916::get_offset_of_mines_6(),
	TripMineWeapon_t4010445916::get_offset_of_isVisible_7(),
	TripMineWeapon_t4010445916::get_offset_of_cr_8(),
	TripMineWeapon_t4010445916::get_offset_of_player_9(),
	TripMineWeapon_t4010445916::get_offset_of_id_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (U3CBeginCountdownU3Ec__Iterator0_t1984220940), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1969[6] = 
{
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_mineFuse_0(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24locvar0_1(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24this_2(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24current_3(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24disposing_4(),
	U3CBeginCountdownU3Ec__Iterator0_t1984220940::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (WaveShotPowerup_t1909494417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (SpecialWeapons_t1455949192)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1971[5] = 
{
	SpecialWeapons_t1455949192::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (WeaponsManager_t3151090140), -1, sizeof(WeaponsManager_t3151090140_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1972[1] = 
{
	WeaponsManager_t3151090140_StaticFields::get_offset_of__instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (CollisionHelperBomberType_t947044979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1973[1] = 
{
	CollisionHelperBomberType_t947044979::get_offset_of_player_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (EnemyManagerBomberType_t3128208288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1974[6] = 
{
	EnemyManagerBomberType_t3128208288::get_offset_of_explosion_2(),
	EnemyManagerBomberType_t3128208288::get_offset_of_enemyHealth_3(),
	EnemyManagerBomberType_t3128208288::get_offset_of_shotDamage_4(),
	EnemyManagerBomberType_t3128208288::get_offset_of_enemyPoints_5(),
	EnemyManagerBomberType_t3128208288::get_offset_of_player_6(),
	EnemyManagerBomberType_t3128208288::get_offset_of_rb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (EnemyMovementBomberType_t436096734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1975[6] = 
{
	EnemyMovementBomberType_t436096734::get_offset_of_speed_2(),
	EnemyMovementBomberType_t436096734::get_offset_of_rotationSpeed_3(),
	EnemyMovementBomberType_t436096734::get_offset_of_target_4(),
	EnemyMovementBomberType_t436096734::get_offset_of_isExploding_5(),
	EnemyMovementBomberType_t436096734::get_offset_of_initialPos_6(),
	EnemyMovementBomberType_t436096734::get_offset_of_explosionActive_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { sizeof (U3CBeginExplosionU3Ec__Iterator0_t787871658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1976[5] = 
{
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U3CexplosionU3E__0_0(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24this_1(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24current_2(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24disposing_3(),
	U3CBeginExplosionU3Ec__Iterator0_t787871658::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (EnemyManagerCollisionType_t3110909189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1977[4] = 
{
	EnemyManagerCollisionType_t3110909189::get_offset_of_explosion_2(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_enemyHealth_3(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_shotDamage_4(),
	EnemyManagerCollisionType_t3110909189::get_offset_of_enemyPoints_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (EnemyMovementCollisionType_t1487527125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1978[5] = 
{
	EnemyMovementCollisionType_t1487527125::get_offset_of_speed_2(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_rotationSpeed_3(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_target_4(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_initialPos_5(),
	EnemyMovementCollisionType_t1487527125::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (EnemyManagerRangedType_t2461668628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1979[4] = 
{
	EnemyManagerRangedType_t2461668628::get_offset_of_explosion_2(),
	EnemyManagerRangedType_t2461668628::get_offset_of_enemyHealth_3(),
	EnemyManagerRangedType_t2461668628::get_offset_of_shotDamage_4(),
	EnemyManagerRangedType_t2461668628::get_offset_of_enemyPoints_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (EnemyMovementDistanceType_t2816956290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1980[5] = 
{
	EnemyMovementDistanceType_t2816956290::get_offset_of_speed_2(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_rotationSpeed_3(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_target_4(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_initialPos_5(),
	EnemyMovementDistanceType_t2816956290::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { sizeof (EnemyShootingDistanceType_t3850811550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1981[5] = 
{
	EnemyShootingDistanceType_t3850811550::get_offset_of_shot_2(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_shotSpawn_3(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_fireRate_4(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_nextFire_5(),
	EnemyShootingDistanceType_t3850811550::get_offset_of_speed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { sizeof (PlayerMovement_t3166138480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1982[2] = 
{
	PlayerMovement_t3166138480::get_offset_of_speed_2(),
	PlayerMovement_t3166138480::get_offset_of_rb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { sizeof (PlayerShooting_t3959056376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1983[5] = 
{
	PlayerShooting_t3959056376::get_offset_of_shot_2(),
	PlayerShooting_t3959056376::get_offset_of_shotSpawn_3(),
	PlayerShooting_t3959056376::get_offset_of_fireRate_4(),
	PlayerShooting_t3959056376::get_offset_of_nextFire_5(),
	PlayerShooting_t3959056376::get_offset_of_speed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (DropShipSpawn_t1841476170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1984[1] = 
{
	DropShipSpawn_t1841476170::get_offset_of_shipToSpawn_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (EnemySpawnCappedTemplate_t446895980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1985[6] = 
{
	EnemySpawnCappedTemplate_t446895980::get_offset_of_enemy_2(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_spawnDelay_3(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_maxEnemies_4(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_coroutine_5(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_numEnemies_6(),
	EnemySpawnCappedTemplate_t446895980::get_offset_of_spawnContainer_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (U3CWaitAndSpawnU3Ec__Iterator0_t622200115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1986[6] = 
{
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U3CfillSizeU3E__1_0(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_spawnDelay_1(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24this_2(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24current_3(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24disposing_4(),
	U3CWaitAndSpawnU3Ec__Iterator0_t622200115::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { sizeof (EnemySpawnTemplate_t4133663547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1987[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (U3CWaitAndFireU3Ec__Iterator0_t2546928863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1988[12] = 
{
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CplayerU3E__0_0(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CtargetU3E__1_1(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CrandomPosU3E__2_2(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CspawnedEnemyU3E__2_3(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CdistU3E__2_4(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CzAngleU3E__2_5(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U3CdesiredRotationU3E__2_6(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_spawnDelay_7(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U24this_8(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U24current_9(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U24disposing_10(),
	U3CWaitAndFireU3Ec__Iterator0_t2546928863::get_offset_of_U24PC_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (EnemySpawner_t2939277584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1989[24] = 
{
	EnemySpawner_t2939277584::get_offset_of_xBound_2(),
	EnemySpawner_t2939277584::get_offset_of_yBound_3(),
	EnemySpawner_t2939277584::get_offset_of_spawnDelay_4(),
	EnemySpawner_t2939277584::get_offset_of_spawnEnabled_5(),
	EnemySpawner_t2939277584::get_offset_of_currLevel_6(),
	EnemySpawner_t2939277584::get_offset_of_bossSpawnEnabled_7(),
	EnemySpawner_t2939277584::get_offset_of_MAX_PAWNS_8(),
	EnemySpawner_t2939277584::get_offset_of_MAX_RANGED_9(),
	EnemySpawner_t2939277584::get_offset_of_MAX_BOMBERS_10(),
	EnemySpawner_t2939277584::get_offset_of_MAX_DROPSHIPS_11(),
	EnemySpawner_t2939277584::get_offset_of_MAX_MEDICS_12(),
	EnemySpawner_t2939277584::get_offset_of_MAX_TURRETS_13(),
	EnemySpawner_t2939277584::get_offset_of_MAX_ASSASSINS_14(),
	EnemySpawner_t2939277584::get_offset_of_MAX_BOSSES_15(),
	EnemySpawner_t2939277584::get_offset_of_NUM_PAWNS_ALIVE_16(),
	EnemySpawner_t2939277584::get_offset_of_NUM_RANGED_ALIVE_17(),
	EnemySpawner_t2939277584::get_offset_of_NUM_BOMBERS_ALIVE_18(),
	EnemySpawner_t2939277584::get_offset_of_NUM_DROPSHIPS_ALIVE_19(),
	EnemySpawner_t2939277584::get_offset_of_NUM_MEDICS_ALIVE_20(),
	EnemySpawner_t2939277584::get_offset_of_NUM_TURRETS_ALIVE_21(),
	EnemySpawner_t2939277584::get_offset_of_NUM_ASSASSINS_ALIVE_22(),
	EnemySpawner_t2939277584::get_offset_of_NUM_BOSSES_ALIVE_23(),
	EnemySpawner_t2939277584::get_offset_of_enemySpawnRoutine_24(),
	EnemySpawner_t2939277584::get_offset_of_enemyShips_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1990[8] = 
{
	U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875::get_offset_of_U3CspawnLocU3E__1_0(),
	U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875::get_offset_of_U3CenemyShipU3E__1_1(),
	U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875::get_offset_of_U3CenemyTypeU3E__1_2(),
	U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875::get_offset_of_U3CalreadySpawnedMaxU3E__1_3(),
	U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875::get_offset_of_U24this_4(),
	U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875::get_offset_of_U24current_5(),
	U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875::get_offset_of_U24disposing_6(),
	U3CStartSpawningEnemiesU3Ec__Iterator0_t1382053875::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (MovingSpawn_t1342199589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1991[12] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (U3CWaitAndFireU3Ec__Iterator0_t1752015193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1992[8] = 
{
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U3CtargetU3E__1_0(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U3CrandTypeU3E__2_1(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U3CprefabRefU3E__2_2(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_spawnDelay_3(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U24this_4(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U24current_5(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U24disposing_6(),
	U3CWaitAndFireU3Ec__Iterator0_t1752015193::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (MovingSpawnManager_t2417359772), -1, sizeof(MovingSpawnManager_t2417359772_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1993[12] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (U3CStartSpawningU3Ec__Iterator0_t4085926021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1994[4] = 
{
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24this_0(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24current_1(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24disposing_2(),
	U3CStartSpawningU3Ec__Iterator0_t4085926021::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (PromotionArea_t1239961636), -1, sizeof(PromotionArea_t1239961636_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1995[6] = 
{
	PromotionArea_t1239961636::get_offset_of_attrRadius_2(),
	PromotionArea_t1239961636::get_offset_of_smooth_3(),
	PromotionArea_t1239961636::get_offset_of_quota_4(),
	PromotionArea_t1239961636::get_offset_of_minibosses_5(),
	PromotionArea_t1239961636::get_offset_of_quotaText_6(),
	PromotionArea_t1239961636_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (ColliderHelper_t3166917508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1996[1] = 
{
	ColliderHelper_t3166917508::get_offset_of_explosion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (EngineUpdate_t2765210485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1997[1] = 
{
	EngineUpdate_t2765210485::get_offset_of_playerTransform_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (HealthPickup_t1380905078), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1998[1] = 
{
	HealthPickup_t1380905078::get_offset_of_healthAmnt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (ParticleSystemAutoDestroy_t725210834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1999[1] = 
{
	ParticleSystemAutoDestroy_t725210834::get_offset_of_ps_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
