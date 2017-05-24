#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameManager
struct GameManager_t2252321495;
// GameManager/StartALevel
struct StartALevel_t3422349679;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameManager_StartALevel3422349679.h"
#include "AssemblyU2DCSharp_EnemyType756400788.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::add_startLevelEvent(GameManager/StartALevel)
extern "C"  void GameManager_add_startLevelEvent_m2186463147 (GameManager_t2252321495 * __this, StartALevel_t3422349679 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::remove_startLevelEvent(GameManager/StartALevel)
extern "C"  void GameManager_remove_startLevelEvent_m4241239676 (GameManager_t2252321495 * __this, StartALevel_t3422349679 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m99497495 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::StartGame()
extern "C"  void GameManager_StartGame_m4019248290 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BeginLevel(System.Int32)
extern "C"  void GameManager_BeginLevel_m977208038 (GameManager_t2252321495 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::EndLevel(System.Int32)
extern "C"  void GameManager_EndLevel_m3367236246 (GameManager_t2252321495 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::RecordKill(EnemyType)
extern "C"  void GameManager_RecordKill_m868113259 (GameManager_t2252321495 * __this, int32_t ___et0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DisableSpawns()
extern "C"  void GameManager_DisableSpawns_m3141946528 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OpenShop()
extern "C"  void GameManager_OpenShop_m2538575782 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager GameManager::get_Singleton()
extern "C"  GameManager_t2252321495 * GameManager_get_Singleton_m2856865984 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2655388892 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::UpdateScore(System.Int32)
extern "C"  void GameManager_UpdateScore_m3269327852 (GameManager_t2252321495 * __this, int32_t ___ptIncrease0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Die()
extern "C"  void GameManager_Die_m2607125078 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DeductHealth()
extern "C"  void GameManager_DeductHealth_m9912721 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::HealthTest()
extern "C"  void GameManager_HealthTest_m968357200 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameState GameManager::get_GameState()
extern "C"  int32_t GameManager_get_GameState_m2339708320 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_GameState(GameState)
extern "C"  void GameManager_set_GameState_m4197401975 (GameManager_t2252321495 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
