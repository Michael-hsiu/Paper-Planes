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

// UIManager
struct UIManager_t2519183485;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m896165536 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::StartLevel(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void UIManager_StartLevel_m1413237694 (UIManager_t2519183485 * __this, int32_t ___level0, int32_t ___pawnsLeft1, int32_t ___rangedLeft2, int32_t ___medicsLeft3, int32_t ___turretsLeft4, int32_t ___dropshipsLeft5, int32_t ___assassinsLeft6, int32_t ___bombersLeft7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::EndLevel(System.Int32)
extern "C"  void UIManager_EndLevel_m757363262 (UIManager_t2519183485 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::DisplayLevelGoalText(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Il2CppObject * UIManager_DisplayLevelGoalText_m2256534596 (UIManager_t2519183485 * __this, int32_t ___level0, int32_t ___pawnsLeft1, int32_t ___rangedLeft2, int32_t ___medicsLeft3, int32_t ___turretsLeft4, int32_t ___dropshipsLeft5, int32_t ___assassinsLeft6, int32_t ___bombersLeft7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::DisplayLevelEndText(System.Int32)
extern "C"  Il2CppObject * UIManager_DisplayLevelEndText_m2768669789 (UIManager_t2519183485 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIManager UIManager::get_Singleton()
extern "C"  UIManager_t2519183485 * UIManager_get_Singleton_m3882289760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Awake()
extern "C"  void UIManager_Awake_m979749961 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UpdateScore()
extern "C"  void UIManager_UpdateScore_m4288989173 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UpdateHealth()
extern "C"  void UIManager_UpdateHealth_m1879862397 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UpdateDashText(System.Int32)
extern "C"  void UIManager_UpdateDashText_m4142754599 (UIManager_t2519183485 * __this, int32_t ___dashes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UpdateBurstRushText()
extern "C"  void UIManager_UpdateBurstRushText_m1206363748 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
