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
#include "AssemblyU2DCSharp_VirtualJoystick1639799649.h"
#include "AssemblyU2DCSharp_ManagerDontDestroy1459143374.h"
#include "AssemblyU2DCSharp_HomingMissileScrObj255876665.h"
#include "AssemblyU2DCSharp_MissileCountScrObj778806930.h"
#include "AssemblyU2DCSharp_MissileDamageScrObj902716884.h"
#include "AssemblyU2DCSharp_UpgradableScriptableObject868707505.h"
#include "AssemblyU2DCSharp_ShopSlot3244405576.h"
#include "AssemblyU2DCSharp_AssassinCollisionHelper4288875097.h"
#include "AssemblyU2DCSharp_AssassinShip2748391195.h"
#include "AssemblyU2DCSharp_AssassinShip_U3CBeginRushU3Ec__I1047657164.h"
#include "AssemblyU2DCSharp_BomberFS3114205696.h"
#include "AssemblyU2DCSharp_BomberMS3114205689.h"
#include "AssemblyU2DCSharp_BomberShip3698202601.h"
#include "AssemblyU2DCSharp_BomberShip_U3CBeginExplosionU3Ec1411948243.h"
#include "AssemblyU2DCSharp_DoT774520913.h"
#include "AssemblyU2DCSharp_DoT_U3CDamageU3Ec__Iterator03373058226.h"
#include "AssemblyU2DCSharp_DropShip1455526841.h"
#include "AssemblyU2DCSharp_DropShip_U3CStartSpawningU3Ec__I4163143846.h"
#include "AssemblyU2DCSharp_EnemyShip2799675162.h"
#include "AssemblyU2DCSharp_MediShip3670713973.h"
#include "AssemblyU2DCSharp_MediShip_U3CSeekHealTargetU3Ec__3292336308.h"
#include "AssemblyU2DCSharp_HitColliderHelper4166833467.h"
#include "AssemblyU2DCSharp_MissileBoss3625044575.h"
#include "AssemblyU2DCSharp_MissileBoss_U3CUseAttackU3Ec__It1741746758.h"
#include "AssemblyU2DCSharp_MissileBossMS1520441901.h"
#include "AssemblyU2DCSharp_MissileBossMS_U3CIdleU3Ec__Itera1753533553.h"
#include "AssemblyU2DCSharp_MissileBossMS_U3CWanderU3Ec__Ite2240433919.h"
#include "AssemblyU2DCSharp_PawnFS635543851.h"
#include "AssemblyU2DCSharp_PawnMS635543862.h"
#include "AssemblyU2DCSharp_PawnShip2860244988.h"
#include "AssemblyU2DCSharp_BomberCollisionHelper3244898343.h"
#include "AssemblyU2DCSharp_FiringRangeCollider590635936.h"
#include "AssemblyU2DCSharp_FiringMode2712036264.h"
#include "AssemblyU2DCSharp_RangedFS70446120.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"
#include "AssemblyU2DCSharp_RangedMS70446111.h"
#include "AssemblyU2DCSharp_RangedShip2972560139.h"
#include "AssemblyU2DCSharp_SafeDistanceCollider3820573338.h"
#include "AssemblyU2DCSharp_LaserCollider169564817.h"
#include "AssemblyU2DCSharp_SniperBoss228994654.h"
#include "AssemblyU2DCSharp_SniperBoss_U3CTeleportU3Ec__Iter1585513213.h"
#include "AssemblyU2DCSharp_SniperBoss_U3CUseLaserU3Ec__Iter3119269731.h"
#include "AssemblyU2DCSharp_SniperBoss_U3CUseExplosivesU3Ec_1461971717.h"
#include "AssemblyU2DCSharp_SniperBoss_U3CUseAttackU3Ec__Ite1172963180.h"
#include "AssemblyU2DCSharp_SniperBossMS1623985390.h"
#include "AssemblyU2DCSharp_Turret2838438942.h"
#include "AssemblyU2DCSharp_Turret_U3CBurstFireU3Ec__Iterato4279147678.h"
#include "AssemblyU2DCSharp_FSMManager117649813.h"
#include "AssemblyU2DCSharp_AIInput860244006.h"
#include "AssemblyU2DCSharp_AIInput_U3CDisableControlsRoutin1212722860.h"
#include "AssemblyU2DCSharp_AIInput_U3CStartDashU3Ec__Iterat1769187671.h"
#include "AssemblyU2DCSharp_Constants2437308775.h"
#include "AssemblyU2DCSharp_DontDestroy3901757661.h"
#include "AssemblyU2DCSharp_EnemySquad4216482410.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "AssemblyU2DCSharp_GameManager_StartALevel3422349679.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"
#include "AssemblyU2DCSharp_InputManager1610719423.h"
#include "AssemblyU2DCSharp_LevelData4104249894.h"
#include "AssemblyU2DCSharp_EnemyType756400788.h"
#include "AssemblyU2DCSharp_PlayerInput2764056259.h"
#include "AssemblyU2DCSharp_PowerupSpawner3879613040.h"
#include "AssemblyU2DCSharp_PowerupSpawner_U3CStartSpawningU2204890035.h"
#include "AssemblyU2DCSharp_ExtendedCollections_EnemyTypeCou1290104454.h"
#include "AssemblyU2DCSharp_StartMenuManager799697518.h"
#include "AssemblyU2DCSharp_UIManager2519183485.h"
#include "AssemblyU2DCSharp_UIManager_U3CDisplayLevelGoalTex1302268565.h"
#include "AssemblyU2DCSharp_UIManager_U3CDisplayLevelEndText3809030710.h"
#include "AssemblyU2DCSharp_AbstractShip2730254364.h"
#include "AssemblyU2DCSharp_DictRow2722648356.h"
#include "AssemblyU2DCSharp_DictRow_TeamHolder1859884362.h"
#include "AssemblyU2DCSharp_Drawing2795064638.h"
#include "AssemblyU2DCSharp_DropShipShotSpawn31279474.h"
#include "AssemblyU2DCSharp_FOV2D3710553267.h"
#include "AssemblyU2DCSharp_FasterShot1611607913.h"
#include "AssemblyU2DCSharp_FiringShip3666415697.h"
#include "AssemblyU2DCSharp_GamePoolManager3812348435.h"
#include "AssemblyU2DCSharp_PlayerShip2635532215.h"
#include "AssemblyU2DCSharp_PlayerShip_SSContainer287407719.h"
#include "AssemblyU2DCSharp_PlayerShip_Weapons2322246681.h"
#include "AssemblyU2DCSharp_PlayerShotSpawn2770260632.h"
#include "AssemblyU2DCSharp_PoolManager2106959589.h"
#include "AssemblyU2DCSharp_PoolManager_ObjectInstance624909858.h"
#include "AssemblyU2DCSharp_PoolObject202793199.h"
#include "AssemblyU2DCSharp_Row774521500.h"
#include "AssemblyU2DCSharp_Shields928117030.h"
#include "AssemblyU2DCSharp_Shields_U3CActivateShieldU3Ec__I3809566534.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"
#include "AssemblyU2DCSharp_Shot3441902592.h"
#include "AssemblyU2DCSharp_Shot_U3CDestroyAfterLifeTimeU3Ec2828819667.h"
#include "AssemblyU2DCSharp_ShotSpawn3804264869.h"
#include "AssemblyU2DCSharp_TurretShotSpawn2021278641.h"
#include "AssemblyU2DCSharp_Utils4194145797.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (VirtualJoystick_t1639799649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[3] = 
{
	VirtualJoystick_t1639799649::get_offset_of_bgImg_2(),
	VirtualJoystick_t1639799649::get_offset_of_joystickImg_3(),
	VirtualJoystick_t1639799649::get_offset_of_inputDirection_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (ManagerDontDestroy_t1459143374), -1, sizeof(ManagerDontDestroy_t1459143374_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1701[1] = 
{
	ManagerDontDestroy_t1459143374_StaticFields::get_offset_of_instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (HomingMissileScrObj_t255876665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[5] = 
{
	HomingMissileScrObj_t255876665::get_offset_of_damage_3(),
	HomingMissileScrObj_t255876665::get_offset_of_numMissiles_4(),
	HomingMissileScrObj_t255876665::get_offset_of_missileSpawnChance_5(),
	HomingMissileScrObj_t255876665::get_offset_of_missile_6(),
	HomingMissileScrObj_t255876665::get_offset_of_missileSpawnChanceList_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (MissileCountScrObj_t778806930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[2] = 
{
	MissileCountScrObj_t778806930::get_offset_of_pricesList_8(),
	MissileCountScrObj_t778806930::get_offset_of_numMissilesList_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (MissileDamageScrObj_t902716884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[2] = 
{
	MissileDamageScrObj_t902716884::get_offset_of_pricesList_8(),
	MissileDamageScrObj_t902716884::get_offset_of_damagesList_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (UpgradableScriptableObject_t868707505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1705[6] = 
{
	UpgradableScriptableObject_t868707505::get_offset_of_powerupName_2(),
	UpgradableScriptableObject_t868707505::get_offset_of_powerupPrice_3(),
	UpgradableScriptableObject_t868707505::get_offset_of_powerupInfo_4(),
	UpgradableScriptableObject_t868707505::get_offset_of_currLvl_5(),
	UpgradableScriptableObject_t868707505::get_offset_of_MAX_LEVEL_6(),
	UpgradableScriptableObject_t868707505::get_offset_of_parentPowerup_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (ShopSlot_t3244405576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[1] = 
{
	ShopSlot_t3244405576::get_offset_of_id_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (AssassinCollisionHelper_t4288875097), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (AssassinShip_t2748391195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[12] = 
{
	AssassinShip_t2748391195::get_offset_of_detectionDist_15(),
	AssassinShip_t2748391195::get_offset_of_rushDelay_16(),
	AssassinShip_t2748391195::get_offset_of_rushSpeed_17(),
	AssassinShip_t2748391195::get_offset_of_rushDist_18(),
	AssassinShip_t2748391195::get_offset_of_timeBtwnAtk_19(),
	AssassinShip_t2748391195::get_offset_of_startTargeting_20(),
	AssassinShip_t2748391195::get_offset_of_isAttacking_21(),
	AssassinShip_t2748391195::get_offset_of_onStandby_22(),
	AssassinShip_t2748391195::get_offset_of_currPos_23(),
	AssassinShip_t2748391195::get_offset_of_playerPos_24(),
	AssassinShip_t2748391195::get_offset_of_playerDir_25(),
	AssassinShip_t2748391195::get_offset_of_offset_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (U3CBeginRushU3Ec__Iterator0_t1047657164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[6] = 
{
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U3CplayerRotU3E__0_0(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U3CdesiredPosU3E__1_1(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U24this_2(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U24current_3(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U24disposing_4(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (BomberFS_t3114205696), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1710[2] = 
{
	BomberFS_t3114205696::get_offset_of_mode_2(),
	BomberFS_t3114205696::get_offset_of_bs_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (BomberMS_t3114205689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[2] = 
{
	BomberMS_t3114205689::get_offset_of_direction_2(),
	BomberMS_t3114205689::get_offset_of_bs_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (BomberShip_t3698202601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1712[9] = 
{
	BomberShip_t3698202601::get_offset_of_moveState_15(),
	BomberShip_t3698202601::get_offset_of_firingState_16(),
	BomberShip_t3698202601::get_offset_of_explosionDamage_17(),
	BomberShip_t3698202601::get_offset_of_explosionDelay_18(),
	BomberShip_t3698202601::get_offset_of_damageRange_19(),
	BomberShip_t3698202601::get_offset_of_rotationFactor_20(),
	BomberShip_t3698202601::get_offset_of_isExploding_21(),
	BomberShip_t3698202601::get_offset_of_explosionActive_22(),
	BomberShip_t3698202601::get_offset_of_rb_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (U3CBeginExplosionU3Ec__Iterator0_t1411948243), -1, sizeof(U3CBeginExplosionU3Ec__Iterator0_t1411948243_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1713[8] = 
{
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U3ChitCollidersU3E__0_0(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U3CtargetsU3E__1_1(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24locvar0_2(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24this_3(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24current_4(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24disposing_5(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24PC_6(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (DoT_t774520913), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1714[3] = 
{
	DoT_t774520913::get_offset_of_go_2(),
	DoT_t774520913::get_offset_of_damage_3(),
	DoT_t774520913::get_offset_of_damageDelay_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (U3CDamageU3Ec__Iterator0_t3373058226), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[4] = 
{
	U3CDamageU3Ec__Iterator0_t3373058226::get_offset_of_U24this_0(),
	U3CDamageU3Ec__Iterator0_t3373058226::get_offset_of_U24current_1(),
	U3CDamageU3Ec__Iterator0_t3373058226::get_offset_of_U24disposing_2(),
	U3CDamageU3Ec__Iterator0_t3373058226::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (DropShip_t1455526841), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1716[8] = 
{
	DropShip_t1455526841::get_offset_of_shipToSpawn_15(),
	DropShip_t1455526841::get_offset_of_timeUntilNextSpawnMode_16(),
	DropShip_t1455526841::get_offset_of_spawnModeDuration_17(),
	DropShip_t1455526841::get_offset_of_timeBetweenSpawns_18(),
	DropShip_t1455526841::get_offset_of_deathSpawnCount_19(),
	DropShip_t1455526841::get_offset_of_isSpawning_20(),
	DropShip_t1455526841::get_offset_of_offset_21(),
	DropShip_t1455526841::get_offset_of_nextSpawn_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (U3CStartSpawningU3Ec__Iterator0_t4163143846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1717[5] = 
{
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U24this_1(),
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U24current_2(),
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U24disposing_3(),
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (EnemyShip_t2799675162), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (MediShip_t3670713973), -1, sizeof(MediShip_t3670713973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1719[9] = 
{
	MediShip_t3670713973::get_offset_of_buffRange_15(),
	MediShip_t3670713973::get_offset_of_healRange_16(),
	MediShip_t3670713973::get_offset_of_followDistance_17(),
	MediShip_t3670713973::get_offset_of_hitColliders_18(),
	MediShip_t3670713973::get_offset_of_currTargets_19(),
	MediShip_t3670713973::get_offset_of_prevTargets_20(),
	MediShip_t3670713973::get_offset_of_toDebuff_21(),
	MediShip_t3670713973::get_offset_of_offset_22(),
	MediShip_t3670713973_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (U3CSeekHealTargetU3Ec__Iterator0_t3292336308), -1, sizeof(U3CSeekHealTargetU3Ec__Iterator0_t3292336308_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1720[7] = 
{
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U3CmostDamagedU3E__0_0(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24locvar0_1(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24this_2(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24current_3(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24disposing_4(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24PC_5(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (HitColliderHelper_t4166833467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[1] = 
{
	HitColliderHelper_t4166833467::get_offset_of_enemy_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (MissileBoss_t3625044575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1722[17] = 
{
	MissileBoss_t3625044575::get_offset_of_senseRadius_15(),
	MissileBoss_t3625044575::get_offset_of_missileDelay_16(),
	MissileBoss_t3625044575::get_offset_of_atkTimeRange_17(),
	MissileBoss_t3625044575::get_offset_of_missileAtkTime_18(),
	MissileBoss_t3625044575::get_offset_of_spinAtkTime_19(),
	MissileBoss_t3625044575::get_offset_of_rotFactor_20(),
	MissileBoss_t3625044575::get_offset_of_atkPrefFactor_21(),
	MissileBoss_t3625044575::get_offset_of_sqMoveDist_22(),
	MissileBoss_t3625044575::get_offset_of_spinAtkRadius_23(),
	MissileBoss_t3625044575::get_offset_of_numMissileAtks_24(),
	MissileBoss_t3625044575::get_offset_of_numSpinAtks_25(),
	MissileBoss_t3625044575::get_offset_of_attacking_26(),
	MissileBoss_t3625044575::get_offset_of_usingSpinAtk_27(),
	MissileBoss_t3625044575::get_offset_of_straightMissile_28(),
	MissileBoss_t3625044575::get_offset_of_targetRot_29(),
	MissileBoss_t3625044575::get_offset_of_nextAtkTime_30(),
	MissileBoss_t3625044575::get_offset_of_missileSpawns_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (U3CUseAttackU3Ec__Iterator0_t1741746758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1723[15] = 
{
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3ClastMissileIdU3E__0_0(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CrandomSpawnU3E__1_1(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CatkIDU3E__2_2(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CendTimeU3E__3_3(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CrandomIdU3E__4_4(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24locvar0_5(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3ColdSpinAtkRadiusU3E__5_6(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CtempRotFactorU3E__6_7(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CendTimeU3E__7_8(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3ColdRotU3E__8_9(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CwaveCountU3E__9_10(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24this_11(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24current_12(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24disposing_13(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24PC_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (MissileBossMS_t1520441901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1724[16] = 
{
	MissileBossMS_t1520441901::get_offset_of_direction_2(),
	MissileBossMS_t1520441901::get_offset_of_DIST_TO_CIRCLE_3(),
	MissileBossMS_t1520441901::get_offset_of_CIRCLE_RADIUS_4(),
	MissileBossMS_t1520441901::get_offset_of_ANGLE_CHANGE_5(),
	MissileBossMS_t1520441901::get_offset_of_displInterval_6(),
	MissileBossMS_t1520441901::get_offset_of_angleChange_7(),
	MissileBossMS_t1520441901::get_offset_of_rotSetOnce_8(),
	MissileBossMS_t1520441901::get_offset_of_startedWander_9(),
	MissileBossMS_t1520441901::get_offset_of_shouldWander_10(),
	MissileBossMS_t1520441901::get_offset_of_behaviorChangedOnce_11(),
	MissileBossMS_t1520441901::get_offset_of_wanderAngle_12(),
	MissileBossMS_t1520441901::get_offset_of_vel_13(),
	MissileBossMS_t1520441901::get_offset_of_circleCenter_14(),
	MissileBossMS_t1520441901::get_offset_of_displacement_15(),
	MissileBossMS_t1520441901::get_offset_of_oldVel_16(),
	MissileBossMS_t1520441901::get_offset_of_mb_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (U3CIdleU3Ec__Iterator0_t1753533553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1725[5] = 
{
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_s_0(),
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_U24this_1(),
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_U24current_2(),
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_U24disposing_3(),
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1726 = { sizeof (U3CWanderU3Ec__Iterator1_t2240433919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1726[8] = 
{
	U3CWanderU3Ec__Iterator1_t2240433919::get_offset_of_s_0(),
	U3CWanderU3Ec__Iterator1_t2240433919::get_offset_of_U3ColdAngleU3E__0_1(),
	U3CWanderU3Ec__Iterator1_t2240433919::get_offset_of_U3CangleDiffU3E__1_2(),
	U3CWanderU3Ec__Iterator1_t2240433919::get_offset_of_U3CwanderForceU3E__2_3(),
	U3CWanderU3Ec__Iterator1_t2240433919::get_offset_of_U24this_4(),
	U3CWanderU3Ec__Iterator1_t2240433919::get_offset_of_U24current_5(),
	U3CWanderU3Ec__Iterator1_t2240433919::get_offset_of_U24disposing_6(),
	U3CWanderU3Ec__Iterator1_t2240433919::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1727 = { sizeof (PawnFS_t635543851), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1727[2] = 
{
	PawnFS_t635543851::get_offset_of_mode_2(),
	PawnFS_t635543851::get_offset_of_ps_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1728 = { sizeof (PawnMS_t635543862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1728[2] = 
{
	PawnMS_t635543862::get_offset_of_direction_2(),
	PawnMS_t635543862::get_offset_of_ps_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1729 = { sizeof (PawnShip_t2860244988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1729[1] = 
{
	PawnShip_t2860244988::get_offset_of_moveState_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1730 = { sizeof (BomberCollisionHelper_t3244898343), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1731 = { sizeof (FiringRangeCollider_t590635936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1731[1] = 
{
	FiringRangeCollider_t590635936::get_offset_of_targetInRange_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1732 = { sizeof (FiringMode_t2712036264)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1732[3] = 
{
	FiringMode_t2712036264::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1733 = { sizeof (RangedFS_t70446120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1733[2] = 
{
	RangedFS_t70446120::get_offset_of_mode_2(),
	RangedFS_t70446120::get_offset_of_rs_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1734 = { sizeof (Direction_t4219104283)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1734[7] = 
{
	Direction_t4219104283::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1735 = { sizeof (RangedMS_t70446111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1735[2] = 
{
	RangedMS_t70446111::get_offset_of_direction_2(),
	RangedMS_t70446111::get_offset_of_rs_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1736 = { sizeof (RangedShip_t2972560139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1736[7] = 
{
	RangedShip_t2972560139::get_offset_of_moveState_23(),
	RangedShip_t2972560139::get_offset_of_firingState_24(),
	RangedShip_t2972560139::get_offset_of_firingRangeColliders_25(),
	RangedShip_t2972560139::get_offset_of_safeDistanceColliders_26(),
	RangedShip_t2972560139::get_offset_of_offsetY_27(),
	RangedShip_t2972560139::get_offset_of_sqFireDist_28(),
	RangedShip_t2972560139::get_offset_of_sqMoveDist_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1737 = { sizeof (SafeDistanceCollider_t3820573338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1737[1] = 
{
	SafeDistanceCollider_t3820573338::get_offset_of_safeDist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1738 = { sizeof (LaserCollider_t169564817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1738[4] = 
{
	LaserCollider_t169564817::get_offset_of_dmg_2(),
	LaserCollider_t169564817::get_offset_of_dmgDelay_3(),
	LaserCollider_t169564817::get_offset_of_nextDmgTime_4(),
	LaserCollider_t169564817::get_offset_of_laserCollider_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1739 = { sizeof (SniperBoss_t228994654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1739[23] = 
{
	SniperBoss_t228994654::get_offset_of_sqDist_15(),
	SniperBoss_t228994654::get_offset_of_spawnDelay_16(),
	SniperBoss_t228994654::get_offset_of_safetyDist_17(),
	SniperBoss_t228994654::get_offset_of_teleDelay_18(),
	SniperBoss_t228994654::get_offset_of_teleCooldown_19(),
	SniperBoss_t228994654::get_offset_of_postTeleDelay_20(),
	SniperBoss_t228994654::get_offset_of_teleportActive_21(),
	SniperBoss_t228994654::get_offset_of_laserChargeTime_22(),
	SniperBoss_t228994654::get_offset_of_laserEmitTime_23(),
	SniperBoss_t228994654::get_offset_of_laserActive_24(),
	SniperBoss_t228994654::get_offset_of_isAtking_25(),
	SniperBoss_t228994654::get_offset_of_numAtks_26(),
	SniperBoss_t228994654::get_offset_of_explAtkActive_27(),
	SniperBoss_t228994654::get_offset_of_endTime_28(),
	SniperBoss_t228994654::get_offset_of_xBound_29(),
	SniperBoss_t228994654::get_offset_of_yBound_30(),
	SniperBoss_t228994654::get_offset_of_spawnEnabled_31(),
	SniperBoss_t228994654::get_offset_of_mapCollider_32(),
	SniperBoss_t228994654::get_offset_of_laserCollider_33(),
	SniperBoss_t228994654::get_offset_of_teleMarker_34(),
	SniperBoss_t228994654::get_offset_of_nextAtkTime_35(),
	SniperBoss_t228994654::get_offset_of_teleRoutine_36(),
	SniperBoss_t228994654::get_offset_of_laserRoutine_37(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1740 = { sizeof (U3CTeleportU3Ec__Iterator0_t1585513213), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1740[6] = 
{
	U3CTeleportU3Ec__Iterator0_t1585513213::get_offset_of_U3CspawnLocU3E__0_0(),
	U3CTeleportU3Ec__Iterator0_t1585513213::get_offset_of_U3CgoU3E__1_1(),
	U3CTeleportU3Ec__Iterator0_t1585513213::get_offset_of_U24this_2(),
	U3CTeleportU3Ec__Iterator0_t1585513213::get_offset_of_U24current_3(),
	U3CTeleportU3Ec__Iterator0_t1585513213::get_offset_of_U24disposing_4(),
	U3CTeleportU3Ec__Iterator0_t1585513213::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1741 = { sizeof (U3CUseLaserU3Ec__Iterator1_t3119269731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1741[11] = 
{
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U3CturnTimeU3E__0_0(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U3CplayerDistU3E__1_1(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U3CzPlayerAngleU3E__2_2(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U3CrotU3E__3_3(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U3CchargeTimeU3E__4_4(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U3CtargetStartPosU3E__5_5(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U3CnewPosU3E__6_6(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U24this_7(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U24current_8(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U24disposing_9(),
	U3CUseLaserU3Ec__Iterator1_t3119269731::get_offset_of_U24PC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1742 = { sizeof (U3CUseExplosivesU3Ec__Iterator2_t1461971717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1742[4] = 
{
	U3CUseExplosivesU3Ec__Iterator2_t1461971717::get_offset_of_U24this_0(),
	U3CUseExplosivesU3Ec__Iterator2_t1461971717::get_offset_of_U24current_1(),
	U3CUseExplosivesU3Ec__Iterator2_t1461971717::get_offset_of_U24disposing_2(),
	U3CUseExplosivesU3Ec__Iterator2_t1461971717::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1743 = { sizeof (U3CUseAttackU3Ec__Iterator3_t1172963180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1743[4] = 
{
	U3CUseAttackU3Ec__Iterator3_t1172963180::get_offset_of_U24this_0(),
	U3CUseAttackU3Ec__Iterator3_t1172963180::get_offset_of_U24current_1(),
	U3CUseAttackU3Ec__Iterator3_t1172963180::get_offset_of_U24disposing_2(),
	U3CUseAttackU3Ec__Iterator3_t1172963180::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1744 = { sizeof (SniperBossMS_t1623985390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1744[2] = 
{
	SniperBossMS_t1623985390::get_offset_of_direction_2(),
	SniperBossMS_t1623985390::get_offset_of_sb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1745 = { sizeof (Turret_t2838438942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1745[18] = 
{
	Turret_t2838438942::get_offset_of_enemyType_2(),
	Turret_t2838438942::get_offset_of_target_3(),
	Turret_t2838438942::get_offset_of_isMarked_4(),
	Turret_t2838438942::get_offset_of_explosion_5(),
	Turret_t2838438942::get_offset_of_rotationSpeed_6(),
	Turret_t2838438942::get_offset_of_health_7(),
	Turret_t2838438942::get_offset_of_enemyPoints_8(),
	Turret_t2838438942::get_offset_of_shot_9(),
	Turret_t2838438942::get_offset_of_shotSpawn_10(),
	Turret_t2838438942::get_offset_of_shotDamage_11(),
	Turret_t2838438942::get_offset_of_fireRate_12(),
	Turret_t2838438942::get_offset_of_burstFireDelay_13(),
	Turret_t2838438942::get_offset_of_burstCount_14(),
	Turret_t2838438942::get_offset_of_fieldOfViewDegrees_15(),
	Turret_t2838438942::get_offset_of_visibilityDistance_16(),
	Turret_t2838438942::get_offset_of_nextFire_17(),
	Turret_t2838438942::get_offset_of_initialPos_18(),
	Turret_t2838438942::get_offset_of_initialRot_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1746 = { sizeof (U3CBurstFireU3Ec__Iterator0_t4279147678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1746[5] = 
{
	U3CBurstFireU3Ec__Iterator0_t4279147678::get_offset_of_U3CroundsLeftU3E__0_0(),
	U3CBurstFireU3Ec__Iterator0_t4279147678::get_offset_of_U24this_1(),
	U3CBurstFireU3Ec__Iterator0_t4279147678::get_offset_of_U24current_2(),
	U3CBurstFireU3Ec__Iterator0_t4279147678::get_offset_of_U24disposing_3(),
	U3CBurstFireU3Ec__Iterator0_t4279147678::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1747 = { sizeof (FSMManager_t117649813), -1, sizeof(FSMManager_t117649813_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1747[2] = 
{
	FSMManager_t117649813::get_offset_of_player_2(),
	FSMManager_t117649813_StaticFields::get_offset_of_instance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1748 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1749 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1750 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1751 = { sizeof (AIInput_t860244006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1751[5] = 
{
	AIInput_t860244006::get_offset_of_controlsEnabled_2(),
	AIInput_t860244006::get_offset_of_savedVelocity_3(),
	AIInput_t860244006::get_offset_of_lastDashVelocity_4(),
	AIInput_t860244006::get_offset_of_cr1_5(),
	AIInput_t860244006::get_offset_of_virtualJoystick_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1752 = { sizeof (U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1752[4] = 
{
	U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860::get_offset_of_U24this_0(),
	U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860::get_offset_of_U24current_1(),
	U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860::get_offset_of_U24disposing_2(),
	U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1753 = { sizeof (U3CStartDashU3Ec__Iterator1_t1769187671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1753[6] = 
{
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_player_0(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U3CforceToAddU3E__0_1(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U24this_2(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U24current_3(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U24disposing_4(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1754 = { sizeof (Constants_t2437308775), -1, sizeof(Constants_t2437308775_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1754[29] = 
{
	Constants_t2437308775_StaticFields::get_offset_of_PlayerTag_0(),
	Constants_t2437308775_StaticFields::get_offset_of_EnemyTag_1(),
	Constants_t2437308775_StaticFields::get_offset_of_BossTag_2(),
	Constants_t2437308775_StaticFields::get_offset_of_PickupTag_3(),
	Constants_t2437308775_StaticFields::get_offset_of_GameScene_4(),
	Constants_t2437308775_StaticFields::get_offset_of_MainMenu_5(),
	Constants_t2437308775_StaticFields::get_offset_of_CurrLevel_6(),
	Constants_t2437308775_StaticFields::get_offset_of_PlayerShot_7(),
	Constants_t2437308775_StaticFields::get_offset_of_PlayerColliders_8(),
	Constants_t2437308775_StaticFields::get_offset_of_EnemyShot_9(),
	Constants_t2437308775_StaticFields::get_offset_of_NormalSS_10(),
	Constants_t2437308775_StaticFields::get_offset_of_ParentSS_11(),
	Constants_t2437308775_StaticFields::get_offset_of_RushColliders_12(),
	Constants_t2437308775_StaticFields::get_offset_of_RushChargeColliders_13(),
	Constants_t2437308775_StaticFields::get_offset_of_RushThrustColliders_14(),
	Constants_t2437308775_StaticFields::get_offset_of_FiringRangeColliders_15(),
	Constants_t2437308775_StaticFields::get_offset_of_SafeDistanceColliders_16(),
	Constants_t2437308775_StaticFields::get_offset_of_Powerup_17(),
	Constants_t2437308775_StaticFields::get_offset_of_GameBorder_18(),
	Constants_t2437308775_StaticFields::get_offset_of_GameBorderTop_19(),
	Constants_t2437308775_StaticFields::get_offset_of_GameBorderSide_20(),
	Constants_t2437308775_StaticFields::get_offset_of_homingMissileLevel_21(),
	Constants_t2437308775_StaticFields::get_offset_of_burstRushLevel_22(),
	Constants_t2437308775_StaticFields::get_offset_of_dashLevel_23(),
	Constants_t2437308775_StaticFields::get_offset_of_shurikenLevel_24(),
	Constants_t2437308775_StaticFields::get_offset_of_tripMineLevel_25(),
	Constants_t2437308775_StaticFields::get_offset_of_waveShotLevel_26(),
	Constants_t2437308775_StaticFields::get_offset_of_dualFireLevel_27(),
	Constants_t2437308775_StaticFields::get_offset_of_triFireLevel_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1755 = { sizeof (DontDestroy_t3901757661), -1, sizeof(DontDestroy_t3901757661_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1755[2] = 
{
	DontDestroy_t3901757661_StaticFields::get_offset_of_instance_2(),
	DontDestroy_t3901757661::get_offset_of_id_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1756 = { sizeof (EnemySquad_t4216482410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1756[1] = 
{
	EnemySquad_t4216482410::get_offset_of_enemyCounts_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1757 = { sizeof (GameManager_t2252321495), -1, sizeof(GameManager_t2252321495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1757[50] = 
{
	GameManager_t2252321495::get_offset_of_playerShip_2(),
	GameManager_t2252321495::get_offset_of_normalSS_3(),
	GameManager_t2252321495::get_offset_of_playerHealth_4(),
	GameManager_t2252321495::get_offset_of_playerScore_5(),
	GameManager_t2252321495::get_offset_of_playerBalance_6(),
	GameManager_t2252321495::get_offset_of_playerDamage_7(),
	GameManager_t2252321495::get_offset_of_scoreMultiplier_8(),
	GameManager_t2252321495::get_offset_of_axisInput_9(),
	GameManager_t2252321495::get_offset_of_speedCapped_10(),
	GameManager_t2252321495::get_offset_of_isDashing_11(),
	GameManager_t2252321495::get_offset_of_onDashCooldown_12(),
	GameManager_t2252321495::get_offset_of_dashes_13(),
	GameManager_t2252321495::get_offset_of_powerupSpawner_14(),
	GameManager_t2252321495::get_offset_of_movingSpawnManager_15(),
	GameManager_t2252321495::get_offset_of_homingMissileLevel_16(),
	GameManager_t2252321495::get_offset_of_burstRushLevel_17(),
	GameManager_t2252321495::get_offset_of_dashLevel_18(),
	GameManager_t2252321495::get_offset_of_shurikenLevel_19(),
	GameManager_t2252321495::get_offset_of_tripMineLevel_20(),
	GameManager_t2252321495::get_offset_of_waveShotLevel_21(),
	GameManager_t2252321495::get_offset_of_dualFireLevel_22(),
	GameManager_t2252321495::get_offset_of_triFireLevel_23(),
	GameManager_t2252321495::get_offset_of_homingMissilePowerup_24(),
	GameManager_t2252321495::get_offset_of_burstRushPowerup_25(),
	GameManager_t2252321495::get_offset_of_dashPowerup_26(),
	GameManager_t2252321495::get_offset_of_shurikenPowerup_27(),
	GameManager_t2252321495::get_offset_of_tripMinePowerup_28(),
	GameManager_t2252321495::get_offset_of_waveShotPowerup_29(),
	GameManager_t2252321495::get_offset_of_dualFirePowerup_30(),
	GameManager_t2252321495::get_offset_of_triFirePowerup_31(),
	GameManager_t2252321495::get_offset_of_levels_32(),
	GameManager_t2252321495::get_offset_of_activeLevel_33(),
	GameManager_t2252321495::get_offset_of_activeLevelNum_34(),
	GameManager_t2252321495::get_offset_of_lvlActive_35(),
	GameManager_t2252321495::get_offset_of_currLvlSpawners_36(),
	GameManager_t2252321495::get_offset_of_levelSpawners_37(),
	GameManager_t2252321495::get_offset_of_mapCollider_38(),
	GameManager_t2252321495::get_offset_of_startLevelEvent_39(),
	GameManager_t2252321495::get_offset_of_pawnsLeft_40(),
	GameManager_t2252321495::get_offset_of_rangedLeft_41(),
	GameManager_t2252321495::get_offset_of_medicsLeft_42(),
	GameManager_t2252321495::get_offset_of_turretsLeft_43(),
	GameManager_t2252321495::get_offset_of_dropshipsLeft_44(),
	GameManager_t2252321495::get_offset_of_assassinsLeft_45(),
	GameManager_t2252321495::get_offset_of_bombersLeft_46(),
	GameManager_t2252321495::get_offset_of_rushes_47(),
	GameManager_t2252321495::get_offset_of_shopButton_48(),
	GameManager_t2252321495::get_offset_of_uiElements_49(),
	GameManager_t2252321495_StaticFields::get_offset_of_singleton_50(),
	GameManager_t2252321495::get_offset_of_U3CGameStateU3Ek__BackingField_51(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1758 = { sizeof (StartALevel_t3422349679), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1759 = { sizeof (GameState_t1561012519)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1759[4] = 
{
	GameState_t1561012519::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1760 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1761 = { sizeof (InputManager_t1610719423), -1, sizeof(InputManager_t1610719423_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1761[1] = 
{
	InputManager_t1610719423_StaticFields::get_offset_of_instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1762 = { sizeof (LevelData_t4104249894), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1762[4] = 
{
	LevelData_t4104249894::get_offset_of_currLevel_2(),
	LevelData_t4104249894::get_offset_of_enemyCounts_3(),
	LevelData_t4104249894::get_offset_of_movingEnemySpawn_4(),
	LevelData_t4104249894::get_offset_of_powerups_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1763 = { sizeof (EnemyType_t756400788)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1763[9] = 
{
	EnemyType_t756400788::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1764 = { sizeof (PlayerInput_t2764056259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1764[1] = 
{
	PlayerInput_t2764056259::get_offset_of_speed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1765 = { sizeof (PowerupSpawner_t3879613040), -1, sizeof(PowerupSpawner_t3879613040_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1765[8] = 
{
	PowerupSpawner_t3879613040::get_offset_of_xBound_2(),
	PowerupSpawner_t3879613040::get_offset_of_yBound_3(),
	PowerupSpawner_t3879613040::get_offset_of_spawnDelay_4(),
	PowerupSpawner_t3879613040::get_offset_of_spawnEnabled_5(),
	PowerupSpawner_t3879613040::get_offset_of_numPowerupsSpawned_6(),
	PowerupSpawner_t3879613040::get_offset_of_cr1_7(),
	PowerupSpawner_t3879613040::get_offset_of_powerups_8(),
	PowerupSpawner_t3879613040_StaticFields::get_offset_of_singleton_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1766 = { sizeof (U3CStartSpawningU3Ec__Iterator0_t2204890035), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1766[4] = 
{
	U3CStartSpawningU3Ec__Iterator0_t2204890035::get_offset_of_U24this_0(),
	U3CStartSpawningU3Ec__Iterator0_t2204890035::get_offset_of_U24current_1(),
	U3CStartSpawningU3Ec__Iterator0_t2204890035::get_offset_of_U24disposing_2(),
	U3CStartSpawningU3Ec__Iterator0_t2204890035::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1767 = { sizeof (EnemyTypeCountsDictionary_t1290104454), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1768 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1768[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1769 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1769[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1770 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1770[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1771 = { sizeof (StartMenuManager_t799697518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1772 = { sizeof (UIManager_t2519183485), -1, sizeof(UIManager_t2519183485_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1772[12] = 
{
	UIManager_t2519183485::get_offset_of_scoreText_2(),
	UIManager_t2519183485::get_offset_of_levelText_3(),
	UIManager_t2519183485::get_offset_of_healthText_4(),
	UIManager_t2519183485::get_offset_of_dashStoreText_5(),
	UIManager_t2519183485::get_offset_of_burshRushText_6(),
	UIManager_t2519183485::get_offset_of_levelGoalText_7(),
	UIManager_t2519183485::get_offset_of_levelEndText_8(),
	UIManager_t2519183485::get_offset_of_startGameText_9(),
	UIManager_t2519183485::get_offset_of_levelGoalCR_10(),
	UIManager_t2519183485::get_offset_of_levelEndCR_11(),
	UIManager_t2519183485::get_offset_of_displayLength_12(),
	UIManager_t2519183485_StaticFields::get_offset_of_singleton_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1773 = { sizeof (U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1773[13] = 
{
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_level_0(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_U3CgoalTextU3E__0_1(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_pawnsLeft_2(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_rangedLeft_3(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_medicsLeft_4(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_turretsLeft_5(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_dropshipsLeft_6(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_assassinsLeft_7(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_bombersLeft_8(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_U24this_9(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_U24current_10(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_U24disposing_11(),
	U3CDisplayLevelGoalTextU3Ec__Iterator0_t1302268565::get_offset_of_U24PC_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1774 = { sizeof (U3CDisplayLevelEndTextU3Ec__Iterator1_t3809030710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1774[5] = 
{
	U3CDisplayLevelEndTextU3Ec__Iterator1_t3809030710::get_offset_of_level_0(),
	U3CDisplayLevelEndTextU3Ec__Iterator1_t3809030710::get_offset_of_U24this_1(),
	U3CDisplayLevelEndTextU3Ec__Iterator1_t3809030710::get_offset_of_U24current_2(),
	U3CDisplayLevelEndTextU3Ec__Iterator1_t3809030710::get_offset_of_U24disposing_3(),
	U3CDisplayLevelEndTextU3Ec__Iterator1_t3809030710::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1775 = { sizeof (AbstractShip_t2730254364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1775[2] = 
{
	AbstractShip_t2730254364::get_offset_of_enemyType_2(),
	AbstractShip_t2730254364::get_offset_of_moveState_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1776 = { sizeof (DictRow_t2722648356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1776[1] = 
{
	DictRow_t2722648356::get_offset_of_dictRow_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1777 = { sizeof (TeamHolder_t1859884362), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1777[1] = 
{
	TeamHolder_t1859884362::get_offset_of_dict_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1778 = { sizeof (Drawing_t2795064638), -1, sizeof(Drawing_t2795064638_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1778[5] = 
{
	Drawing_t2795064638_StaticFields::get_offset_of_aaLineTex_0(),
	Drawing_t2795064638_StaticFields::get_offset_of_lineTex_1(),
	Drawing_t2795064638_StaticFields::get_offset_of_blitMaterial_2(),
	Drawing_t2795064638_StaticFields::get_offset_of_blendMaterial_3(),
	Drawing_t2795064638_StaticFields::get_offset_of_lineRect_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1779 = { sizeof (DropShipShotSpawn_t31279474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1779[3] = 
{
	DropShipShotSpawn_t31279474::get_offset_of_targetRotation_2(),
	DropShipShotSpawn_t31279474::get_offset_of_multiFire_3(),
	DropShipShotSpawn_t31279474::get_offset_of_shotContainer_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1780 = { sizeof (FOV2D_t3710553267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1780[6] = 
{
	FOV2D_t3710553267::get_offset_of_radius_2(),
	FOV2D_t3710553267::get_offset_of_fov_3(),
	FOV2D_t3710553267::get_offset_of_direction_4(),
	FOV2D_t3710553267::get_offset_of_testPoint_5(),
	FOV2D_t3710553267::get_offset_of_leftLineFOV_6(),
	FOV2D_t3710553267::get_offset_of_rightLineFOV_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1781 = { sizeof (FasterShot_t1611607913), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1781[6] = 
{
	FasterShot_t1611607913::get_offset_of_shotSpawn_2(),
	FasterShot_t1611607913::get_offset_of_shotDamage_3(),
	FasterShot_t1611607913::get_offset_of_speed_4(),
	FasterShot_t1611607913::get_offset_of_speedMultiplier_5(),
	FasterShot_t1611607913::get_offset_of_lifeTime_6(),
	FasterShot_t1611607913::get_offset_of_rb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1782 = { sizeof (FiringShip_t3666415697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1782[8] = 
{
	FiringShip_t3666415697::get_offset_of_shot_15(),
	FiringShip_t3666415697::get_offset_of_fasterShot_16(),
	FiringShip_t3666415697::get_offset_of_shotSpawn_17(),
	FiringShip_t3666415697::get_offset_of_shotDamage_18(),
	FiringShip_t3666415697::get_offset_of_fireRate_19(),
	FiringShip_t3666415697::get_offset_of_nextFire_20(),
	FiringShip_t3666415697::get_offset_of_buffedFiringRateFactor_21(),
	FiringShip_t3666415697::get_offset_of_isFiringBuffed_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1783 = { sizeof (GamePoolManager_t3812348435), -1, sizeof(GamePoolManager_t3812348435_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1783[32] = 
{
	GamePoolManager_t3812348435_StaticFields::get_offset_of_singleton_2(),
	GamePoolManager_t3812348435::get_offset_of_playerSingleShot_3(),
	GamePoolManager_t3812348435::get_offset_of_playerDualShot_4(),
	GamePoolManager_t3812348435::get_offset_of_playerTriShot_5(),
	GamePoolManager_t3812348435::get_offset_of_playerUltiShot_6(),
	GamePoolManager_t3812348435::get_offset_of_enemySingleShot_7(),
	GamePoolManager_t3812348435::get_offset_of_enemyFasterShot_8(),
	GamePoolManager_t3812348435::get_offset_of_dualShotPowerup_9(),
	GamePoolManager_t3812348435::get_offset_of_triShotPowerup_10(),
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
	GamePoolManager_t3812348435::get_offset_of_pawnShip_26(),
	GamePoolManager_t3812348435::get_offset_of_rangedShip_27(),
	GamePoolManager_t3812348435::get_offset_of_mediShip_28(),
	GamePoolManager_t3812348435::get_offset_of_turret_29(),
	GamePoolManager_t3812348435::get_offset_of_dropShip_30(),
	GamePoolManager_t3812348435::get_offset_of_assassinShip_31(),
	GamePoolManager_t3812348435::get_offset_of_bomberShip_32(),
	GamePoolManager_t3812348435::get_offset_of_rangedTest_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1784 = { sizeof (PlayerShip_t2635532215), -1, sizeof(PlayerShip_t2635532215_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1784[22] = 
{
	PlayerShip_t2635532215::get_offset_of_input_23(),
	PlayerShip_t2635532215::get_offset_of_activeSS_24(),
	PlayerShip_t2635532215::get_offset_of_ssDict_25(),
	PlayerShip_t2635532215::get_offset_of_rb_26(),
	PlayerShip_t2635532215::get_offset_of_maxForward_27(),
	PlayerShip_t2635532215::get_offset_of_colliderRadius_28(),
	PlayerShip_t2635532215::get_offset_of_numShots_29(),
	PlayerShip_t2635532215::get_offset_of_dashStarted_30(),
	PlayerShip_t2635532215::get_offset_of_dashEndTime_31(),
	PlayerShip_t2635532215::get_offset_of_thrust_32(),
	PlayerShip_t2635532215::get_offset_of_maxDash_33(),
	PlayerShip_t2635532215::get_offset_of_dashDuration_34(),
	PlayerShip_t2635532215::get_offset_of_rushStarted_35(),
	PlayerShip_t2635532215::get_offset_of_waveSpawns_36(),
	PlayerShip_t2635532215::get_offset_of_waveShotEnabled_37(),
	PlayerShip_t2635532215::get_offset_of_waveRandomVal_38(),
	PlayerShip_t2635532215::get_offset_of_waveChance_39(),
	PlayerShip_t2635532215::get_offset_of_sideMissileSpawns_40(),
	PlayerShip_t2635532215::get_offset_of_sideMissileEnabled_41(),
	PlayerShip_t2635532215::get_offset_of_sideMissileRandomVal_42(),
	PlayerShip_t2635532215::get_offset_of_sideMissileChance_43(),
	PlayerShip_t2635532215_StaticFields::get_offset_of_instance_44(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1785 = { sizeof (SSContainer_t287407719), -1, sizeof(SSContainer_t287407719_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1785[5] = 
{
	SSContainer_t287407719_StaticFields::get_offset_of_weaponTime_0(),
	SSContainer_t287407719::get_offset_of_id_1(),
	SSContainer_t287407719::get_offset_of_priority_2(),
	SSContainer_t287407719::get_offset_of_ss_3(),
	SSContainer_t287407719::get_offset_of_activePowerup_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1786 = { sizeof (Weapons_t2322246681)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1786[5] = 
{
	Weapons_t2322246681::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1787 = { sizeof (PlayerShotSpawn_t2770260632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1787[12] = 
{
	PlayerShotSpawn_t2770260632::get_offset_of_shot_4(),
	PlayerShotSpawn_t2770260632::get_offset_of_fasterShot_5(),
	PlayerShotSpawn_t2770260632::get_offset_of_ultimateShot_6(),
	PlayerShotSpawn_t2770260632::get_offset_of_waveShot_7(),
	PlayerShotSpawn_t2770260632::get_offset_of_missile_8(),
	PlayerShotSpawn_t2770260632::get_offset_of_ultimateShotEnabled_9(),
	PlayerShotSpawn_t2770260632::get_offset_of_waveShotEnabled_10(),
	PlayerShotSpawn_t2770260632::get_offset_of_multShotEnabled_11(),
	PlayerShotSpawn_t2770260632::get_offset_of_ultiShotInterval_12(),
	PlayerShotSpawn_t2770260632::get_offset_of_waveShotInterval_13(),
	PlayerShotSpawn_t2770260632::get_offset_of_shotCounter_14(),
	PlayerShotSpawn_t2770260632::get_offset_of_waveShotCounter_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1788 = { sizeof (PoolManager_t2106959589), -1, sizeof(PoolManager_t2106959589_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1788[2] = 
{
	PoolManager_t2106959589::get_offset_of_poolDictionary_2(),
	PoolManager_t2106959589_StaticFields::get_offset_of__instance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1789 = { sizeof (ObjectInstance_t624909858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1789[4] = 
{
	ObjectInstance_t624909858::get_offset_of_gameObject_0(),
	ObjectInstance_t624909858::get_offset_of_transform_1(),
	ObjectInstance_t624909858::get_offset_of_hasPoolObjectComponent_2(),
	ObjectInstance_t624909858::get_offset_of_poolObjectScript_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1790 = { sizeof (PoolObject_t202793199), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1791 = { sizeof (Row_t774521500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1791[1] = 
{
	Row_t774521500::get_offset_of_row_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1792 = { sizeof (Shields_t928117030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1792[3] = 
{
	Shields_t928117030::get_offset_of_shieldHealth_2(),
	Shields_t928117030::get_offset_of_shieldDuration_3(),
	Shields_t928117030::get_offset_of_spriteColor_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1793 = { sizeof (U3CActivateShieldU3Ec__Iterator0_t3809566534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1793[4] = 
{
	U3CActivateShieldU3Ec__Iterator0_t3809566534::get_offset_of_U24this_0(),
	U3CActivateShieldU3Ec__Iterator0_t3809566534::get_offset_of_U24current_1(),
	U3CActivateShieldU3Ec__Iterator0_t3809566534::get_offset_of_U24disposing_2(),
	U3CActivateShieldU3Ec__Iterator0_t3809566534::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1794 = { sizeof (Ship_t1116303770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1794[11] = 
{
	Ship_t1116303770::get_offset_of_target_4(),
	Ship_t1116303770::get_offset_of_explosion_5(),
	Ship_t1116303770::get_offset_of_moveFactor_6(),
	Ship_t1116303770::get_offset_of_speed_7(),
	Ship_t1116303770::get_offset_of_rotationSpeed_8(),
	Ship_t1116303770::get_offset_of_health_9(),
	Ship_t1116303770::get_offset_of_enemyPoints_10(),
	Ship_t1116303770::get_offset_of_isSpeedBuffed_11(),
	Ship_t1116303770::get_offset_of_buffedSpeedFactor_12(),
	Ship_t1116303770::get_offset_of_isMarked_13(),
	Ship_t1116303770::get_offset_of_initialPos_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1795 = { sizeof (Shot_t3441902592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1795[6] = 
{
	Shot_t3441902592::get_offset_of_shotSpawn_2(),
	Shot_t3441902592::get_offset_of_shotDamage_3(),
	Shot_t3441902592::get_offset_of_speed_4(),
	Shot_t3441902592::get_offset_of_speedMultiplier_5(),
	Shot_t3441902592::get_offset_of_lifeTime_6(),
	Shot_t3441902592::get_offset_of_rb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1796 = { sizeof (U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1796[5] = 
{
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_lifeTime_0(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_U24this_1(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_U24current_2(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_U24disposing_3(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator0_t2828819667::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1797 = { sizeof (ShotSpawn_t3804264869), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1797[2] = 
{
	ShotSpawn_t3804264869::get_offset_of_targetRotation_2(),
	ShotSpawn_t3804264869::get_offset_of_multiFire_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1798 = { sizeof (TurretShotSpawn_t2021278641), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1798[4] = 
{
	TurretShotSpawn_t2021278641::get_offset_of_targetRotation_2(),
	TurretShotSpawn_t2021278641::get_offset_of_multiFire_3(),
	TurretShotSpawn_t2021278641::get_offset_of_armed_4(),
	TurretShotSpawn_t2021278641::get_offset_of_shotContainer_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1799 = { sizeof (Utils_t4194145797), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
