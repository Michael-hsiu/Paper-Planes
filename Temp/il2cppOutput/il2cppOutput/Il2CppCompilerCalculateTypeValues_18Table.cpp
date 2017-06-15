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
#include "AssemblyU2DCSharp_MissileCountScrObj778806930.h"
#include "AssemblyU2DCSharp_MissileDamageScrObj902716884.h"
#include "AssemblyU2DCSharp_MissileSpawnChanceScrObj3625258158.h"
#include "AssemblyU2DCSharp_ShurikenDamageScrObj2417346697.h"
#include "AssemblyU2DCSharp_ShurikenDurationScrObj3847286678.h"
#include "AssemblyU2DCSharp_ShurikenScrObj3401882274.h"
#include "AssemblyU2DCSharp_ShurikenSizeScrObj981510943.h"
#include "AssemblyU2DCSharp_UpgradableScriptableObject868707505.h"
#include "AssemblyU2DCSharp_ShopSlot3244405576.h"
#include "AssemblyU2DCSharp_UpgradesListPanel2766084149.h"
#include "AssemblyU2DCSharp_AssassinCollisionHelper4288875097.h"
#include "AssemblyU2DCSharp_AssassinShip2748391195.h"
#include "AssemblyU2DCSharp_AssassinShip_U3CBeginRushU3Ec__I1047657164.h"
#include "AssemblyU2DCSharp_BomberBoss2837930630.h"
#include "AssemblyU2DCSharp_BomberBossFS1557404523.h"
#include "AssemblyU2DCSharp_BomberBossMS1557404518.h"
#include "AssemblyU2DCSharp_BomberCollisionHelper3244898343.h"
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
#include "AssemblyU2DCSharp_EMPWaveShot2076594555.h"
#include "AssemblyU2DCSharp_EMPWaveShot_U3CEnableEMPEffectU33358050089.h"
#include "AssemblyU2DCSharp_EMPWaveShot_U3CDestroyAfterLifeT2972101807.h"
#include "AssemblyU2DCSharp_EMPWaveShotSPawn3273819302.h"
#include "AssemblyU2DCSharp_HitColliderHelper4166833467.h"
#include "AssemblyU2DCSharp_MissileBoss3625044575.h"
#include "AssemblyU2DCSharp_MissileBoss_U3CUseAttackU3Ec__It1741746758.h"
#include "AssemblyU2DCSharp_MissileBossMS1520441901.h"
#include "AssemblyU2DCSharp_MissileBossMS_U3CIdleU3Ec__Itera1753533553.h"
#include "AssemblyU2DCSharp_MissileBossMS_U3CReversingDirect1702872242.h"
#include "AssemblyU2DCSharp_PawnFS635543851.h"
#include "AssemblyU2DCSharp_PawnMS635543862.h"
#include "AssemblyU2DCSharp_PawnShip2860244988.h"
#include "AssemblyU2DCSharp_FiringRangeCollider590635936.h"
#include "AssemblyU2DCSharp_FiringMode2712036264.h"
#include "AssemblyU2DCSharp_RangedFS70446120.h"
#include "AssemblyU2DCSharp_RangedMS70446111.h"
#include "AssemblyU2DCSharp_RangedShip2972560139.h"
#include "AssemblyU2DCSharp_SafeDistanceCollider3820573338.h"
#include "AssemblyU2DCSharp_BulletHellPatternGenerator1973225052.h"
#include "AssemblyU2DCSharp_BulletHellShotSpawn1128810710.h"
#include "AssemblyU2DCSharp_BulletHellShotSpawn_U3CRotateOve3544277110.h"
#include "AssemblyU2DCSharp_BulletHellShotSpawn_U3CUseBullet2732007661.h"
#include "AssemblyU2DCSharp_BulletHellShotSpawnListWrapper2523926223.h"
#include "AssemblyU2DCSharp_LaserCollider169564817.h"
#include "AssemblyU2DCSharp_SniperBoss228994654.h"
#include "AssemblyU2DCSharp_SniperBossFS1623985397.h"
#include "AssemblyU2DCSharp_SniperBossFS_U3CTeleportU3Ec__It3667423494.h"
#include "AssemblyU2DCSharp_SniperBossFS_U3CBulletHellAttack2745956767.h"
#include "AssemblyU2DCSharp_SniperBossFS_U3CLaserAttackU3Ec_3825935412.h"
#include "AssemblyU2DCSharp_SniperBossFS_U3CSummonMobsAttack3829431262.h"
#include "AssemblyU2DCSharp_SniperBossFiringDistanceCollider1849705062.h"
#include "AssemblyU2DCSharp_SniperBossMS1623985390.h"
#include "AssemblyU2DCSharp_SniperBossMS_U3CLaserMovementU3E1316140438.h"
#include "AssemblyU2DCSharp_SniperBossSafeDistanceCollider2654728940.h"
#include "AssemblyU2DCSharp_Turret2838438942.h"
#include "AssemblyU2DCSharp_Turret_U3CFlickerHitU3Ec__Iterat3926461967.h"
#include "AssemblyU2DCSharp_Turret_U3CBurstFireU3Ec__Iterato2713063737.h"
#include "AssemblyU2DCSharp_FSMManager117649813.h"
#include "AssemblyU2DCSharp_AttackStatus977837830.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"
#include "AssemblyU2DCSharp_AIInput860244006.h"
#include "AssemblyU2DCSharp_AIInput_U3CDisableControlsRoutin1212722860.h"
#include "AssemblyU2DCSharp_AIInput_U3CStartDashU3Ec__Iterat1769187671.h"
#include "AssemblyU2DCSharp_Constants2437308775.h"
#include "AssemblyU2DCSharp_DontDestroy3901757661.h"
#include "AssemblyU2DCSharp_EnemySquad4216482410.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "AssemblyU2DCSharp_GameManager_StartingNewLevel2169014082.h"
#include "AssemblyU2DCSharp_GameManager_EndingLevel3444020161.h"
#include "AssemblyU2DCSharp_GameManager_RecordingEnemyKill1296856205.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"
#include "AssemblyU2DCSharp_InputManager1610719423.h"
#include "AssemblyU2DCSharp_LevelData4104249894.h"
#include "AssemblyU2DCSharp_EnemyType756400788.h"
#include "AssemblyU2DCSharp_PlayerInput2764056259.h"
#include "AssemblyU2DCSharp_PowerupSpawner3879613040.h"
#include "AssemblyU2DCSharp_PowerupSpawner_U3CStartSpawningP2164395182.h"
#include "AssemblyU2DCSharp_ExtendedCollections_EnemyTypeCou1290104454.h"
#include "AssemblyU2DCSharp_StartMenuManager799697518.h"
#include "AssemblyU2DCSharp_UIManager2519183485.h"
#include "AssemblyU2DCSharp_UIManager_U3CLerpHealthBarU3Ec__2607648627.h"
#include "AssemblyU2DCSharp_UIManager_U3CIncreaseLevelRoutin3896221398.h"
#include "AssemblyU2DCSharp_AbstractShip2730254364.h"
#include "AssemblyU2DCSharp_BulletHellShot740257393.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (MissileCountScrObj_t778806930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1800[2] = 
{
	MissileCountScrObj_t778806930::get_offset_of_pricesList_9(),
	MissileCountScrObj_t778806930::get_offset_of_numMissilesList_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (MissileDamageScrObj_t902716884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[2] = 
{
	MissileDamageScrObj_t902716884::get_offset_of_pricesList_9(),
	MissileDamageScrObj_t902716884::get_offset_of_damagesList_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (MissileSpawnChanceScrObj_t3625258158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1802[2] = 
{
	MissileSpawnChanceScrObj_t3625258158::get_offset_of_pricesList_9(),
	MissileSpawnChanceScrObj_t3625258158::get_offset_of_spawnChancesList_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (ShurikenDamageScrObj_t2417346697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[2] = 
{
	ShurikenDamageScrObj_t2417346697::get_offset_of_pricesList_9(),
	ShurikenDamageScrObj_t2417346697::get_offset_of_damagesList_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (ShurikenDurationScrObj_t3847286678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1804[2] = 
{
	ShurikenDurationScrObj_t3847286678::get_offset_of_pricesList_9(),
	ShurikenDurationScrObj_t3847286678::get_offset_of_durationList_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (ShurikenScrObj_t3401882274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1805[8] = 
{
	ShurikenScrObj_t3401882274::get_offset_of_damage_3(),
	ShurikenScrObj_t3401882274::get_offset_of_duration_4(),
	ShurikenScrObj_t3401882274::get_offset_of_damageBoundary_5(),
	ShurikenScrObj_t3401882274::get_offset_of_sizeMultiplier_6(),
	ShurikenScrObj_t3401882274::get_offset_of_shuriken_7(),
	ShurikenScrObj_t3401882274::get_offset_of_damageStr_8(),
	ShurikenScrObj_t3401882274::get_offset_of_durationStr_9(),
	ShurikenScrObj_t3401882274::get_offset_of_shurikenSizeStr_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (ShurikenSizeScrObj_t981510943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1806[3] = 
{
	ShurikenSizeScrObj_t981510943::get_offset_of_pricesList_9(),
	ShurikenSizeScrObj_t981510943::get_offset_of_sizesList_10(),
	ShurikenSizeScrObj_t981510943::get_offset_of_damageBoundariesList_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (UpgradableScriptableObject_t868707505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[7] = 
{
	UpgradableScriptableObject_t868707505::get_offset_of_powerupName_2(),
	UpgradableScriptableObject_t868707505::get_offset_of_powerupPrice_3(),
	UpgradableScriptableObject_t868707505::get_offset_of_powerupInfo_4(),
	UpgradableScriptableObject_t868707505::get_offset_of_currLvl_5(),
	UpgradableScriptableObject_t868707505::get_offset_of_MAX_LEVEL_6(),
	UpgradableScriptableObject_t868707505::get_offset_of_id_7(),
	UpgradableScriptableObject_t868707505::get_offset_of_parentPowerup_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (ShopSlot_t3244405576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1808[3] = 
{
	ShopSlot_t3244405576::get_offset_of_id_2(),
	ShopSlot_t3244405576::get_offset_of_upgrade_3(),
	ShopSlot_t3244405576::get_offset_of_nameText_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (UpgradesListPanel_t2766084149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1809[2] = 
{
	UpgradesListPanel_t2766084149::get_offset_of_gridLayoutGroup_2(),
	UpgradesListPanel_t2766084149::get_offset_of_cellPrefab_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (AssassinCollisionHelper_t4288875097), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (AssassinShip_t2748391195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[12] = 
{
	AssassinShip_t2748391195::get_offset_of_detectionDist_20(),
	AssassinShip_t2748391195::get_offset_of_rushDelay_21(),
	AssassinShip_t2748391195::get_offset_of_rushSpeed_22(),
	AssassinShip_t2748391195::get_offset_of_rushDist_23(),
	AssassinShip_t2748391195::get_offset_of_timeBtwnAtk_24(),
	AssassinShip_t2748391195::get_offset_of_startTargeting_25(),
	AssassinShip_t2748391195::get_offset_of_isAttacking_26(),
	AssassinShip_t2748391195::get_offset_of_onStandby_27(),
	AssassinShip_t2748391195::get_offset_of_currPos_28(),
	AssassinShip_t2748391195::get_offset_of_playerPos_29(),
	AssassinShip_t2748391195::get_offset_of_playerDir_30(),
	AssassinShip_t2748391195::get_offset_of_offset_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (U3CBeginRushU3Ec__Iterator0_t1047657164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1812[6] = 
{
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U3CplayerRotU3E__0_0(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U3CdesiredPosU3E__0_1(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U24this_2(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U24current_3(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U24disposing_4(),
	U3CBeginRushU3Ec__Iterator0_t1047657164::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (BomberBoss_t2837930630), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[1] = 
{
	BomberBoss_t2837930630::get_offset_of_nextAttackTime_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (BomberBossFS_t1557404523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1814[6] = 
{
	BomberBossFS_t1557404523::get_offset_of_attackStatus_2(),
	BomberBossFS_t1557404523::get_offset_of_bomberBoss_3(),
	BomberBossFS_t1557404523::get_offset_of_U3CModeU3Ek__BackingField_4(),
	BomberBossFS_t1557404523::get_offset_of_endTime_5(),
	BomberBossFS_t1557404523::get_offset_of_bulletHellActive_6(),
	BomberBossFS_t1557404523::get_offset_of_bulletHellDuration_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (BomberBossMS_t1557404518), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[3] = 
{
	BomberBossMS_t1557404518::get_offset_of_direction_2(),
	BomberBossMS_t1557404518::get_offset_of_U3CDirectionU3Ek__BackingField_3(),
	BomberBossMS_t1557404518::get_offset_of_bomberBoss_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (BomberCollisionHelper_t3244898343), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (BomberFS_t3114205696), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[2] = 
{
	BomberFS_t3114205696::get_offset_of_mode_2(),
	BomberFS_t3114205696::get_offset_of_bs_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (BomberMS_t3114205689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[2] = 
{
	BomberMS_t3114205689::get_offset_of_direction_2(),
	BomberMS_t3114205689::get_offset_of_bs_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (BomberShip_t3698202601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1819[9] = 
{
	BomberShip_t3698202601::get_offset_of_moveState_20(),
	BomberShip_t3698202601::get_offset_of_firingState_21(),
	BomberShip_t3698202601::get_offset_of_explosionDamage_22(),
	BomberShip_t3698202601::get_offset_of_explosionDelay_23(),
	BomberShip_t3698202601::get_offset_of_damageRange_24(),
	BomberShip_t3698202601::get_offset_of_rotationFactor_25(),
	BomberShip_t3698202601::get_offset_of_isExploding_26(),
	BomberShip_t3698202601::get_offset_of_explosionActive_27(),
	BomberShip_t3698202601::get_offset_of_rb_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (U3CBeginExplosionU3Ec__Iterator0_t1411948243), -1, sizeof(U3CBeginExplosionU3Ec__Iterator0_t1411948243_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1820[8] = 
{
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U3ChitCollidersU3E__0_0(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U3CtargetsU3E__0_1(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24locvar0_2(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24this_3(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24current_4(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24disposing_5(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243::get_offset_of_U24PC_6(),
	U3CBeginExplosionU3Ec__Iterator0_t1411948243_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (DoT_t774520913), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1821[3] = 
{
	DoT_t774520913::get_offset_of_go_2(),
	DoT_t774520913::get_offset_of_damage_3(),
	DoT_t774520913::get_offset_of_damageDelay_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (U3CDamageU3Ec__Iterator0_t3373058226), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[4] = 
{
	U3CDamageU3Ec__Iterator0_t3373058226::get_offset_of_U24this_0(),
	U3CDamageU3Ec__Iterator0_t3373058226::get_offset_of_U24current_1(),
	U3CDamageU3Ec__Iterator0_t3373058226::get_offset_of_U24disposing_2(),
	U3CDamageU3Ec__Iterator0_t3373058226::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (DropShip_t1455526841), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1823[8] = 
{
	DropShip_t1455526841::get_offset_of_shipToSpawn_20(),
	DropShip_t1455526841::get_offset_of_timeUntilNextSpawnMode_21(),
	DropShip_t1455526841::get_offset_of_spawnModeDuration_22(),
	DropShip_t1455526841::get_offset_of_timeBetweenSpawns_23(),
	DropShip_t1455526841::get_offset_of_deathSpawnCount_24(),
	DropShip_t1455526841::get_offset_of_isSpawning_25(),
	DropShip_t1455526841::get_offset_of_offset_26(),
	DropShip_t1455526841::get_offset_of_nextSpawn_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (U3CStartSpawningU3Ec__Iterator0_t4163143846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1824[5] = 
{
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U24this_1(),
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U24current_2(),
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U24disposing_3(),
	U3CStartSpawningU3Ec__Iterator0_t4163143846::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (EnemyShip_t2799675162), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (MediShip_t3670713973), -1, sizeof(MediShip_t3670713973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1826[9] = 
{
	MediShip_t3670713973::get_offset_of_buffRange_20(),
	MediShip_t3670713973::get_offset_of_healRange_21(),
	MediShip_t3670713973::get_offset_of_followDistance_22(),
	MediShip_t3670713973::get_offset_of_hitColliders_23(),
	MediShip_t3670713973::get_offset_of_currTargets_24(),
	MediShip_t3670713973::get_offset_of_prevTargets_25(),
	MediShip_t3670713973::get_offset_of_toDebuff_26(),
	MediShip_t3670713973::get_offset_of_offset_27(),
	MediShip_t3670713973_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (U3CSeekHealTargetU3Ec__Iterator0_t3292336308), -1, sizeof(U3CSeekHealTargetU3Ec__Iterator0_t3292336308_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1827[7] = 
{
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U3CmostDamagedU3E__1_0(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24locvar0_1(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24this_2(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24current_3(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24disposing_4(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308::get_offset_of_U24PC_5(),
	U3CSeekHealTargetU3Ec__Iterator0_t3292336308_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (EMPWaveShot_t2076594555), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1828[8] = 
{
	EMPWaveShot_t2076594555::get_offset_of_shotSpawn_2(),
	EMPWaveShot_t2076594555::get_offset_of_waveDamage_3(),
	EMPWaveShot_t2076594555::get_offset_of_speed_4(),
	EMPWaveShot_t2076594555::get_offset_of_speedMultiplier_5(),
	EMPWaveShot_t2076594555::get_offset_of_lifeTime_6(),
	EMPWaveShot_t2076594555::get_offset_of_knockbackForce_7(),
	EMPWaveShot_t2076594555::get_offset_of_debugExplosion_8(),
	EMPWaveShot_t2076594555::get_offset_of_rb_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (U3CEnableEMPEffectU3Ec__Iterator0_t3358050089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[4] = 
{
	U3CEnableEMPEffectU3Ec__Iterator0_t3358050089::get_offset_of_U24this_0(),
	U3CEnableEMPEffectU3Ec__Iterator0_t3358050089::get_offset_of_U24current_1(),
	U3CEnableEMPEffectU3Ec__Iterator0_t3358050089::get_offset_of_U24disposing_2(),
	U3CEnableEMPEffectU3Ec__Iterator0_t3358050089::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (U3CDestroyAfterLifeTimeU3Ec__Iterator1_t2972101807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[5] = 
{
	U3CDestroyAfterLifeTimeU3Ec__Iterator1_t2972101807::get_offset_of_lifeTime_0(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator1_t2972101807::get_offset_of_U24this_1(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator1_t2972101807::get_offset_of_U24current_2(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator1_t2972101807::get_offset_of_U24disposing_3(),
	U3CDestroyAfterLifeTimeU3Ec__Iterator1_t2972101807::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (EMPWaveShotSPawn_t3273819302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1831[3] = 
{
	EMPWaveShotSPawn_t3273819302::get_offset_of_waveShot_4(),
	EMPWaveShotSPawn_t3273819302::get_offset_of_waveShotEnabled_5(),
	EMPWaveShotSPawn_t3273819302::get_offset_of_waveShotCounter_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (HitColliderHelper_t4166833467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1832[1] = 
{
	HitColliderHelper_t4166833467::get_offset_of_enemy_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (MissileBoss_t3625044575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1833[19] = 
{
	MissileBoss_t3625044575::get_offset_of_senseRadius_20(),
	MissileBoss_t3625044575::get_offset_of_missileDelay_21(),
	MissileBoss_t3625044575::get_offset_of_atkTimeRange_22(),
	MissileBoss_t3625044575::get_offset_of_missileAtkTime_23(),
	MissileBoss_t3625044575::get_offset_of_spinAtkTime_24(),
	MissileBoss_t3625044575::get_offset_of_rotFactor_25(),
	MissileBoss_t3625044575::get_offset_of_atkPrefFactor_26(),
	MissileBoss_t3625044575::get_offset_of_sqMoveDist_27(),
	MissileBoss_t3625044575::get_offset_of_spinAtkRadius_28(),
	MissileBoss_t3625044575::get_offset_of_numMissileAtks_29(),
	MissileBoss_t3625044575::get_offset_of_numSpinAtks_30(),
	MissileBoss_t3625044575::get_offset_of_attacking_31(),
	MissileBoss_t3625044575::get_offset_of_usingSpinAtk_32(),
	MissileBoss_t3625044575::get_offset_of_straightMissile_33(),
	MissileBoss_t3625044575::get_offset_of_empWave_34(),
	MissileBoss_t3625044575::get_offset_of_targetRot_35(),
	MissileBoss_t3625044575::get_offset_of_empWaveShotSpawn_36(),
	MissileBoss_t3625044575::get_offset_of_nextAtkTime_37(),
	MissileBoss_t3625044575::get_offset_of_missileSpawns_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (U3CUseAttackU3Ec__Iterator0_t1741746758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[15] = 
{
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3ClastMissileIdU3E__1_0(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CrandomSpawnU3E__1_1(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CatkIDU3E__2_2(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3ColdRotationSpeedU3E__2_3(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CendTimeU3E__3_4(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CrandomIdU3E__4_5(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24locvar0_6(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3ColdSpinAtkRadiusU3E__5_7(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CtempRotFactorU3E__5_8(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CendTimeU3E__5_9(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U3CwaveCountU3E__5_10(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24this_11(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24current_12(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24disposing_13(),
	U3CUseAttackU3Ec__Iterator0_t1741746758::get_offset_of_U24PC_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (MissileBossMS_t1520441901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1835[20] = 
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
	MissileBossMS_t1520441901::get_offset_of_desiredRotation_17(),
	MissileBossMS_t1520441901::get_offset_of_shouldRotate_18(),
	MissileBossMS_t1520441901::get_offset_of_maxHeadingChange_19(),
	MissileBossMS_t1520441901::get_offset_of_reversingDirection_20(),
	MissileBossMS_t1520441901::get_offset_of_missileBoss_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (U3CIdleU3Ec__Iterator0_t1753533553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1836[5] = 
{
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_s_0(),
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_U24this_1(),
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_U24current_2(),
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_U24disposing_3(),
	U3CIdleU3Ec__Iterator0_t1753533553::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (U3CReversingDirectionU3Ec__Iterator1_t1702872242), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1837[4] = 
{
	U3CReversingDirectionU3Ec__Iterator1_t1702872242::get_offset_of_U24this_0(),
	U3CReversingDirectionU3Ec__Iterator1_t1702872242::get_offset_of_U24current_1(),
	U3CReversingDirectionU3Ec__Iterator1_t1702872242::get_offset_of_U24disposing_2(),
	U3CReversingDirectionU3Ec__Iterator1_t1702872242::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (PawnFS_t635543851), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1838[2] = 
{
	PawnFS_t635543851::get_offset_of_mode_2(),
	PawnFS_t635543851::get_offset_of_pawnShip_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (PawnMS_t635543862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1839[2] = 
{
	PawnMS_t635543862::get_offset_of_direction_2(),
	PawnMS_t635543862::get_offset_of_pawnShip_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (PawnShip_t2860244988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1840[2] = 
{
	PawnShip_t2860244988::get_offset_of_moveState_20(),
	PawnShip_t2860244988::get_offset_of_touchDamage_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (FiringRangeCollider_t590635936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1841[1] = 
{
	FiringRangeCollider_t590635936::get_offset_of_targetInRange_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (FiringMode_t2712036264)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1842[3] = 
{
	FiringMode_t2712036264::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (RangedFS_t70446120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1843[2] = 
{
	RangedFS_t70446120::get_offset_of_mode_2(),
	RangedFS_t70446120::get_offset_of_rangedShip_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (RangedMS_t70446111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1844[2] = 
{
	RangedMS_t70446111::get_offset_of_direction_2(),
	RangedMS_t70446111::get_offset_of_rangedShip_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (RangedShip_t2972560139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1845[7] = 
{
	RangedShip_t2972560139::get_offset_of_moveState_28(),
	RangedShip_t2972560139::get_offset_of_firingState_29(),
	RangedShip_t2972560139::get_offset_of_firingRangeColliders_30(),
	RangedShip_t2972560139::get_offset_of_safeDistanceColliders_31(),
	RangedShip_t2972560139::get_offset_of_offsetY_32(),
	RangedShip_t2972560139::get_offset_of_sqFireDist_33(),
	RangedShip_t2972560139::get_offset_of_sqMoveDist_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (SafeDistanceCollider_t3820573338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1846[1] = 
{
	SafeDistanceCollider_t3820573338::get_offset_of_safeDist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (BulletHellPatternGenerator_t1973225052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1847[3] = 
{
	BulletHellPatternGenerator_t1973225052::get_offset_of_listOfListOfBulletHellShotSpawns_2(),
	BulletHellPatternGenerator_t1973225052::get_offset_of_generatedRotationAngle_3(),
	BulletHellPatternGenerator_t1973225052::get_offset_of_numAnglesGenerated_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (BulletHellShotSpawn_t1128810710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1848[15] = 
{
	BulletHellShotSpawn_t1128810710::get_offset_of_bulletHellProjectile_4(),
	BulletHellShotSpawn_t1128810710::get_offset_of_bulletHellPatternGenerator_5(),
	BulletHellShotSpawn_t1128810710::get_offset_of_rotationSpeed_6(),
	BulletHellShotSpawn_t1128810710::get_offset_of_numRotations_7(),
	BulletHellShotSpawn_t1128810710::get_offset_of_isFirstRotation_8(),
	BulletHellShotSpawn_t1128810710::get_offset_of_rotationAngle_9(),
	BulletHellShotSpawn_t1128810710::get_offset_of_rotationAngleCopy_10(),
	BulletHellShotSpawn_t1128810710::get_offset_of_desiredRotation_11(),
	BulletHellShotSpawn_t1128810710::get_offset_of_currRotation_12(),
	BulletHellShotSpawn_t1128810710::get_offset_of_posQuat_13(),
	BulletHellShotSpawn_t1128810710::get_offset_of_negQuat_14(),
	BulletHellShotSpawn_t1128810710::get_offset_of_oldForward_15(),
	BulletHellShotSpawn_t1128810710::get_offset_of_generatedPattern_16(),
	BulletHellShotSpawn_t1128810710::get_offset_of_delayBtwnShots_17(),
	BulletHellShotSpawn_t1128810710::get_offset_of_bulletHellRoutine_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (U3CRotateOverTimeU3Ec__Iterator0_t3544277110), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1849[5] = 
{
	U3CRotateOverTimeU3Ec__Iterator0_t3544277110::get_offset_of_endTime_0(),
	U3CRotateOverTimeU3Ec__Iterator0_t3544277110::get_offset_of_U24this_1(),
	U3CRotateOverTimeU3Ec__Iterator0_t3544277110::get_offset_of_U24current_2(),
	U3CRotateOverTimeU3Ec__Iterator0_t3544277110::get_offset_of_U24disposing_3(),
	U3CRotateOverTimeU3Ec__Iterator0_t3544277110::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (U3CUseBulletHellAttackRoutineU3Ec__Iterator1_t2732007661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1850[5] = 
{
	U3CUseBulletHellAttackRoutineU3Ec__Iterator1_t2732007661::get_offset_of_endTime_0(),
	U3CUseBulletHellAttackRoutineU3Ec__Iterator1_t2732007661::get_offset_of_U24this_1(),
	U3CUseBulletHellAttackRoutineU3Ec__Iterator1_t2732007661::get_offset_of_U24current_2(),
	U3CUseBulletHellAttackRoutineU3Ec__Iterator1_t2732007661::get_offset_of_U24disposing_3(),
	U3CUseBulletHellAttackRoutineU3Ec__Iterator1_t2732007661::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (BulletHellShotSpawnListWrapper_t2523926223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1851[1] = 
{
	BulletHellShotSpawnListWrapper_t2523926223::get_offset_of_pair_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (LaserCollider_t169564817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1852[4] = 
{
	LaserCollider_t169564817::get_offset_of_dmg_2(),
	LaserCollider_t169564817::get_offset_of_dmgDelay_3(),
	LaserCollider_t169564817::get_offset_of_nextDmgTime_4(),
	LaserCollider_t169564817::get_offset_of_laserCollider_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (SniperBoss_t228994654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1853[11] = 
{
	SniperBoss_t228994654::get_offset_of_sqDist_20(),
	SniperBoss_t228994654::get_offset_of_spawnDelay_21(),
	SniperBoss_t228994654::get_offset_of_safetyDist_22(),
	SniperBoss_t228994654::get_offset_of_teleDelay_23(),
	SniperBoss_t228994654::get_offset_of_teleCooldown_24(),
	SniperBoss_t228994654::get_offset_of_postTeleDelay_25(),
	SniperBoss_t228994654::get_offset_of_teleportActive_26(),
	SniperBoss_t228994654::get_offset_of_nextAttackTime_27(),
	SniperBoss_t228994654::get_offset_of_explAtkActive_28(),
	SniperBoss_t228994654::get_offset_of_teleRoutine_29(),
	SniperBoss_t228994654::get_offset_of_laserRoutine_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (SniperBossFS_t1623985397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1854[28] = 
{
	SniperBossFS_t1623985397::get_offset_of_attackStatus_2(),
	SniperBossFS_t1623985397::get_offset_of_laserChargeTime_3(),
	SniperBossFS_t1623985397::get_offset_of_laserEmitTime_4(),
	SniperBossFS_t1623985397::get_offset_of_laserResetDelayTime_5(),
	SniperBossFS_t1623985397::get_offset_of_laserActive_6(),
	SniperBossFS_t1623985397::get_offset_of_bulletHellDuration_7(),
	SniperBossFS_t1623985397::get_offset_of_bulletHellActive_8(),
	SniperBossFS_t1623985397::get_offset_of_bulletHellShotSpawns_9(),
	SniperBossFS_t1623985397::get_offset_of_numAttacks_10(),
	SniperBossFS_t1623985397::get_offset_of_numRotations_11(),
	SniperBossFS_t1623985397::get_offset_of_rotationLength_12(),
	SniperBossFS_t1623985397::get_offset_of_endTime_13(),
	SniperBossFS_t1623985397::get_offset_of_sniperBoss_14(),
	SniperBossFS_t1623985397::get_offset_of_laserAttackRoutine_15(),
	SniperBossFS_t1623985397::get_offset_of_bulletHellAttackRoutine_16(),
	SniperBossFS_t1623985397::get_offset_of_teleportRoutine_17(),
	SniperBossFS_t1623985397::get_offset_of_teleportActive_18(),
	SniperBossFS_t1623985397::get_offset_of_teleDelay_19(),
	SniperBossFS_t1623985397::get_offset_of_teleCooldown_20(),
	SniperBossFS_t1623985397::get_offset_of_postTeleDelay_21(),
	SniperBossFS_t1623985397::get_offset_of_teleMarker_22(),
	SniperBossFS_t1623985397::get_offset_of_teleportLocation_23(),
	SniperBossFS_t1623985397::get_offset_of_activeTeleMarker_24(),
	SniperBossFS_t1623985397::get_offset_of_laserCollider_25(),
	SniperBossFS_t1623985397::get_offset_of_mapCollider_26(),
	SniperBossFS_t1623985397::get_offset_of_xBound_27(),
	SniperBossFS_t1623985397::get_offset_of_yBound_28(),
	SniperBossFS_t1623985397::get_offset_of_U3CModeU3Ek__BackingField_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (U3CTeleportU3Ec__Iterator0_t3667423494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1855[4] = 
{
	U3CTeleportU3Ec__Iterator0_t3667423494::get_offset_of_U24this_0(),
	U3CTeleportU3Ec__Iterator0_t3667423494::get_offset_of_U24current_1(),
	U3CTeleportU3Ec__Iterator0_t3667423494::get_offset_of_U24disposing_2(),
	U3CTeleportU3Ec__Iterator0_t3667423494::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (U3CBulletHellAttackU3Ec__Iterator1_t2745956767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1856[5] = 
{
	U3CBulletHellAttackU3Ec__Iterator1_t2745956767::get_offset_of_U24locvar0_0(),
	U3CBulletHellAttackU3Ec__Iterator1_t2745956767::get_offset_of_U24this_1(),
	U3CBulletHellAttackU3Ec__Iterator1_t2745956767::get_offset_of_U24current_2(),
	U3CBulletHellAttackU3Ec__Iterator1_t2745956767::get_offset_of_U24disposing_3(),
	U3CBulletHellAttackU3Ec__Iterator1_t2745956767::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (U3CLaserAttackU3Ec__Iterator2_t3825935412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1857[5] = 
{
	U3CLaserAttackU3Ec__Iterator2_t3825935412::get_offset_of_U3CiU3E__1_0(),
	U3CLaserAttackU3Ec__Iterator2_t3825935412::get_offset_of_U24this_1(),
	U3CLaserAttackU3Ec__Iterator2_t3825935412::get_offset_of_U24current_2(),
	U3CLaserAttackU3Ec__Iterator2_t3825935412::get_offset_of_U24disposing_3(),
	U3CLaserAttackU3Ec__Iterator2_t3825935412::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (U3CSummonMobsAttackU3Ec__Iterator3_t3829431262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[3] = 
{
	U3CSummonMobsAttackU3Ec__Iterator3_t3829431262::get_offset_of_U24current_0(),
	U3CSummonMobsAttackU3Ec__Iterator3_t3829431262::get_offset_of_U24disposing_1(),
	U3CSummonMobsAttackU3Ec__Iterator3_t3829431262::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (SniperBossFiringDistanceCollider_t1849705062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1859[2] = 
{
	SniperBossFiringDistanceCollider_t1849705062::get_offset_of_moveState_2(),
	SniperBossFiringDistanceCollider_t1849705062::get_offset_of_capsuleCollider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (SniperBossMS_t1623985390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1860[16] = 
{
	SniperBossMS_t1623985390::get_offset_of_direction_2(),
	SniperBossMS_t1623985390::get_offset_of_safeDistanceColliderActive_3(),
	SniperBossMS_t1623985390::get_offset_of_laserMovementActive_4(),
	SniperBossMS_t1623985390::get_offset_of_bulletHellMovementActive_5(),
	SniperBossMS_t1623985390::get_offset_of_teleportMovementActive_6(),
	SniperBossMS_t1623985390::get_offset_of_laserRotationSpeed_7(),
	SniperBossMS_t1623985390::get_offset_of_xBound_8(),
	SniperBossMS_t1623985390::get_offset_of_yBound_9(),
	SniperBossMS_t1623985390::get_offset_of_moveStateOverridden_10(),
	SniperBossMS_t1623985390::get_offset_of_laserRoutine_11(),
	SniperBossMS_t1623985390::get_offset_of_mapCollider_12(),
	SniperBossMS_t1623985390::get_offset_of_bossHitCollider_13(),
	SniperBossMS_t1623985390::get_offset_of_bossOriginalColor_14(),
	SniperBossMS_t1623985390::get_offset_of_stealthColor_15(),
	SniperBossMS_t1623985390::get_offset_of_spriteRenderer_16(),
	SniperBossMS_t1623985390::get_offset_of_sniperBoss_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (U3CLaserMovementU3Ec__Iterator0_t1316140438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1861[7] = 
{
	U3CLaserMovementU3Ec__Iterator0_t1316140438::get_offset_of_U3CrandomValueU3E__1_0(),
	U3CLaserMovementU3Ec__Iterator0_t1316140438::get_offset_of_U3CrotSpeedU3E__1_1(),
	U3CLaserMovementU3Ec__Iterator0_t1316140438::get_offset_of_endTime_2(),
	U3CLaserMovementU3Ec__Iterator0_t1316140438::get_offset_of_U24this_3(),
	U3CLaserMovementU3Ec__Iterator0_t1316140438::get_offset_of_U24current_4(),
	U3CLaserMovementU3Ec__Iterator0_t1316140438::get_offset_of_U24disposing_5(),
	U3CLaserMovementU3Ec__Iterator0_t1316140438::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (SniperBossSafeDistanceCollider_t2654728940), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1862[2] = 
{
	SniperBossSafeDistanceCollider_t2654728940::get_offset_of_moveState_2(),
	SniperBossSafeDistanceCollider_t2654728940::get_offset_of_sniperBoss_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (Turret_t2838438942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[22] = 
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
	Turret_t2838438942::get_offset_of_hitFlickerRoutine_20(),
	Turret_t2838438942::get_offset_of_startColor_21(),
	Turret_t2838438942::get_offset_of_sprite_22(),
	Turret_t2838438942::get_offset_of_flickerTime_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (U3CFlickerHitU3Ec__Iterator0_t3926461967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1864[5] = 
{
	U3CFlickerHitU3Ec__Iterator0_t3926461967::get_offset_of_U3CflickerColorU3E__0_0(),
	U3CFlickerHitU3Ec__Iterator0_t3926461967::get_offset_of_U24this_1(),
	U3CFlickerHitU3Ec__Iterator0_t3926461967::get_offset_of_U24current_2(),
	U3CFlickerHitU3Ec__Iterator0_t3926461967::get_offset_of_U24disposing_3(),
	U3CFlickerHitU3Ec__Iterator0_t3926461967::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (U3CBurstFireU3Ec__Iterator1_t2713063737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1865[5] = 
{
	U3CBurstFireU3Ec__Iterator1_t2713063737::get_offset_of_U3CroundsLeftU3E__1_0(),
	U3CBurstFireU3Ec__Iterator1_t2713063737::get_offset_of_U24this_1(),
	U3CBurstFireU3Ec__Iterator1_t2713063737::get_offset_of_U24current_2(),
	U3CBurstFireU3Ec__Iterator1_t2713063737::get_offset_of_U24disposing_3(),
	U3CBurstFireU3Ec__Iterator1_t2713063737::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (FSMManager_t117649813), -1, sizeof(FSMManager_t117649813_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1866[2] = 
{
	FSMManager_t117649813::get_offset_of_player_2(),
	FSMManager_t117649813_StaticFields::get_offset_of_instance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (AttackStatus_t977837830)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1869[6] = 
{
	AttackStatus_t977837830::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (Direction_t4219104283)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1871[14] = 
{
	Direction_t4219104283::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (AIInput_t860244006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1872[7] = 
{
	AIInput_t860244006::get_offset_of_controlsEnabled_2(),
	AIInput_t860244006::get_offset_of_disableTime_3(),
	AIInput_t860244006::get_offset_of_savedVelocity_4(),
	AIInput_t860244006::get_offset_of_lastDashVelocity_5(),
	AIInput_t860244006::get_offset_of_cr1_6(),
	AIInput_t860244006::get_offset_of_virtualJoystickMove_7(),
	AIInput_t860244006::get_offset_of_virtualJoystickRotate_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1873[4] = 
{
	U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860::get_offset_of_U24this_0(),
	U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860::get_offset_of_U24current_1(),
	U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860::get_offset_of_U24disposing_2(),
	U3CDisableControlsRoutineU3Ec__Iterator0_t1212722860::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (U3CStartDashU3Ec__Iterator1_t1769187671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1874[7] = 
{
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_player_0(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U3CforceToAddU3E__0_1(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U3CposU3E__0_2(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U24this_3(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U24current_4(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U24disposing_5(),
	U3CStartDashU3Ec__Iterator1_t1769187671::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (Constants_t2437308775), -1, sizeof(Constants_t2437308775_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1875[29] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (DontDestroy_t3901757661), -1, sizeof(DontDestroy_t3901757661_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1876[2] = 
{
	DontDestroy_t3901757661_StaticFields::get_offset_of_instance_2(),
	DontDestroy_t3901757661::get_offset_of_id_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (EnemySquad_t4216482410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1877[1] = 
{
	EnemySquad_t4216482410::get_offset_of_enemyCounts_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (GameManager_t2252321495), -1, sizeof(GameManager_t2252321495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1878[36] = 
{
	GameManager_t2252321495::get_offset_of_playerShip_2(),
	GameManager_t2252321495::get_offset_of_normalSS_3(),
	GameManager_t2252321495::get_offset_of_powerupSpawner_4(),
	GameManager_t2252321495::get_offset_of_movingSpawnManager_5(),
	GameManager_t2252321495::get_offset_of_levelActive_6(),
	GameManager_t2252321495::get_offset_of_playerHealth_7(),
	GameManager_t2252321495::get_offset_of_playerMaxHealth_8(),
	GameManager_t2252321495::get_offset_of_playerScore_9(),
	GameManager_t2252321495::get_offset_of_targetScore_10(),
	GameManager_t2252321495::get_offset_of_playerBalance_11(),
	GameManager_t2252321495::get_offset_of_playerDamage_12(),
	GameManager_t2252321495::get_offset_of_scoreMultiplier_13(),
	GameManager_t2252321495::get_offset_of_axisInput_14(),
	GameManager_t2252321495::get_offset_of_turnInput_15(),
	GameManager_t2252321495::get_offset_of_speedCapped_16(),
	GameManager_t2252321495::get_offset_of_isDashing_17(),
	GameManager_t2252321495::get_offset_of_isBurstRushing_18(),
	GameManager_t2252321495::get_offset_of_onDashCooldown_19(),
	GameManager_t2252321495::get_offset_of_numDashes_20(),
	GameManager_t2252321495::get_offset_of_homingMissileLevel_21(),
	GameManager_t2252321495::get_offset_of_burstRushLevel_22(),
	GameManager_t2252321495::get_offset_of_dashLevel_23(),
	GameManager_t2252321495::get_offset_of_shurikenLevel_24(),
	GameManager_t2252321495::get_offset_of_tripMineLevel_25(),
	GameManager_t2252321495::get_offset_of_waveShotLevel_26(),
	GameManager_t2252321495::get_offset_of_dualFireLevel_27(),
	GameManager_t2252321495::get_offset_of_triFireLevel_28(),
	GameManager_t2252321495::get_offset_of_mapCollider_29(),
	GameManager_t2252321495::get_offset_of_rushes_30(),
	GameManager_t2252321495::get_offset_of_uiElements_31(),
	GameManager_t2252321495::get_offset_of_StartLevelEvent_32(),
	GameManager_t2252321495::get_offset_of_EndLevelEvent_33(),
	GameManager_t2252321495::get_offset_of_RecordingEnemyKillEvent_34(),
	GameManager_t2252321495::get_offset_of_currLevel_35(),
	GameManager_t2252321495::get_offset_of_scoreBoundaries_36(),
	GameManager_t2252321495_StaticFields::get_offset_of_singleton_37(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { sizeof (StartingNewLevel_t2169014082), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (EndingLevel_t3444020161), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (RecordingEnemyKill_t1296856205), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (GameState_t1561012519)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1882[4] = 
{
	GameState_t1561012519::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (InputManager_t1610719423), -1, sizeof(InputManager_t1610719423_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1884[2] = 
{
	InputManager_t1610719423::get_offset_of_inputComponent_2(),
	InputManager_t1610719423_StaticFields::get_offset_of_instance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (LevelData_t4104249894), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1885[4] = 
{
	LevelData_t4104249894::get_offset_of_currLevel_2(),
	LevelData_t4104249894::get_offset_of_enemyCounts_3(),
	LevelData_t4104249894::get_offset_of_movingEnemySpawn_4(),
	LevelData_t4104249894::get_offset_of_powerups_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (EnemyType_t756400788)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1886[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (PlayerInput_t2764056259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1887[1] = 
{
	PlayerInput_t2764056259::get_offset_of_speed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (PowerupSpawner_t3879613040), -1, sizeof(PowerupSpawner_t3879613040_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1888[12] = 
{
	PowerupSpawner_t3879613040::get_offset_of_xBoundLeft_2(),
	PowerupSpawner_t3879613040::get_offset_of_xBoundRight_3(),
	PowerupSpawner_t3879613040::get_offset_of_yBoundLeft_4(),
	PowerupSpawner_t3879613040::get_offset_of_yBoundRight_5(),
	PowerupSpawner_t3879613040::get_offset_of_spawnDelay_6(),
	PowerupSpawner_t3879613040::get_offset_of_spawnEnabled_7(),
	PowerupSpawner_t3879613040::get_offset_of_numPowerupsSpawned_8(),
	PowerupSpawner_t3879613040::get_offset_of_powerupSpawnRoutine_9(),
	PowerupSpawner_t3879613040::get_offset_of_cr2_10(),
	PowerupSpawner_t3879613040::get_offset_of_powerups_11(),
	PowerupSpawner_t3879613040::get_offset_of_enemyShips_12(),
	PowerupSpawner_t3879613040_StaticFields::get_offset_of_singleton_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (U3CStartSpawningPowerupsU3Ec__Iterator0_t2164395182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1889[5] = 
{
	U3CStartSpawningPowerupsU3Ec__Iterator0_t2164395182::get_offset_of_U3CspawnLocU3E__1_0(),
	U3CStartSpawningPowerupsU3Ec__Iterator0_t2164395182::get_offset_of_U24this_1(),
	U3CStartSpawningPowerupsU3Ec__Iterator0_t2164395182::get_offset_of_U24current_2(),
	U3CStartSpawningPowerupsU3Ec__Iterator0_t2164395182::get_offset_of_U24disposing_3(),
	U3CStartSpawningPowerupsU3Ec__Iterator0_t2164395182::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (EnemyTypeCountsDictionary_t1290104454), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1891[10] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1892[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1893[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (StartMenuManager_t799697518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (UIManager_t2519183485), -1, sizeof(UIManager_t2519183485_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1895[34] = 
{
	UIManager_t2519183485::get_offset_of_scoreText_2(),
	UIManager_t2519183485::get_offset_of_scoreGoalText_3(),
	UIManager_t2519183485::get_offset_of_levelText_4(),
	UIManager_t2519183485::get_offset_of_healthText_5(),
	UIManager_t2519183485::get_offset_of_dashStoreText_6(),
	UIManager_t2519183485::get_offset_of_burshRushText_7(),
	UIManager_t2519183485::get_offset_of_healthBar_8(),
	UIManager_t2519183485::get_offset_of_continueScreen_9(),
	UIManager_t2519183485::get_offset_of_startGameButton_10(),
	UIManager_t2519183485::get_offset_of_shopButton_11(),
	UIManager_t2519183485::get_offset_of_scaleY_12(),
	UIManager_t2519183485::get_offset_of_levelGoalText_13(),
	UIManager_t2519183485::get_offset_of_levelEndText_14(),
	UIManager_t2519183485::get_offset_of_levelGoalRoutine_15(),
	UIManager_t2519183485::get_offset_of_levelEndRoutine_16(),
	UIManager_t2519183485::get_offset_of_displayLength_17(),
	UIManager_t2519183485::get_offset_of_startHealth_18(),
	UIManager_t2519183485::get_offset_of_endHealth_19(),
	UIManager_t2519183485::get_offset_of_healthStep_20(),
	UIManager_t2519183485::get_offset_of_lerpRatio_21(),
	UIManager_t2519183485::get_offset_of_oldScale_22(),
	UIManager_t2519183485::get_offset_of_newScale_23(),
	UIManager_t2519183485::get_offset_of_currLerpTime_24(),
	UIManager_t2519183485::get_offset_of_lerpInterval_25(),
	UIManager_t2519183485::get_offset_of_isLerping_26(),
	UIManager_t2519183485::get_offset_of_endHealthCopy_27(),
	UIManager_t2519183485::get_offset_of_ratio_28(),
	UIManager_t2519183485::get_offset_of_numDequeued_29(),
	UIManager_t2519183485::get_offset_of_numTimesHealthUpdated_30(),
	UIManager_t2519183485::get_offset_of_damageQueue_31(),
	UIManager_t2519183485::get_offset_of_targetEndHealth_32(),
	UIManager_t2519183485::get_offset_of_peekValue_33(),
	UIManager_t2519183485::get_offset_of_currentMin_34(),
	UIManager_t2519183485_StaticFields::get_offset_of_singleton_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1896 = { sizeof (U3CLerpHealthBarU3Ec__Iterator0_t2607648627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1896[8] = 
{
	U3CLerpHealthBarU3Ec__Iterator0_t2607648627::get_offset_of_U3CkeepCollectingValuesU3E__0_0(),
	U3CLerpHealthBarU3Ec__Iterator0_t2607648627::get_offset_of_U3CworkingLerpIntervalU3E__0_1(),
	U3CLerpHealthBarU3Ec__Iterator0_t2607648627::get_offset_of_U3CtimeFactorU3E__0_2(),
	U3CLerpHealthBarU3Ec__Iterator0_t2607648627::get_offset_of_U3ClerpSpedUpU3E__0_3(),
	U3CLerpHealthBarU3Ec__Iterator0_t2607648627::get_offset_of_U24this_4(),
	U3CLerpHealthBarU3Ec__Iterator0_t2607648627::get_offset_of_U24current_5(),
	U3CLerpHealthBarU3Ec__Iterator0_t2607648627::get_offset_of_U24disposing_6(),
	U3CLerpHealthBarU3Ec__Iterator0_t2607648627::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1897 = { sizeof (U3CIncreaseLevelRoutineU3Ec__Iterator1_t3896221398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1897[7] = 
{
	U3CIncreaseLevelRoutineU3Ec__Iterator1_t3896221398::get_offset_of_currLevel_0(),
	U3CIncreaseLevelRoutineU3Ec__Iterator1_t3896221398::get_offset_of_U3CgoalTextU3E__1_1(),
	U3CIncreaseLevelRoutineU3Ec__Iterator1_t3896221398::get_offset_of_U3CgoalTextU3E__2_2(),
	U3CIncreaseLevelRoutineU3Ec__Iterator1_t3896221398::get_offset_of_U24this_3(),
	U3CIncreaseLevelRoutineU3Ec__Iterator1_t3896221398::get_offset_of_U24current_4(),
	U3CIncreaseLevelRoutineU3Ec__Iterator1_t3896221398::get_offset_of_U24disposing_5(),
	U3CIncreaseLevelRoutineU3Ec__Iterator1_t3896221398::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1898 = { sizeof (AbstractShip_t2730254364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1898[3] = 
{
	AbstractShip_t2730254364::get_offset_of_enemyType_2(),
	AbstractShip_t2730254364::get_offset_of_moveState_3(),
	AbstractShip_t2730254364::get_offset_of_fireState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1899 = { sizeof (BulletHellShot_t740257393), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
