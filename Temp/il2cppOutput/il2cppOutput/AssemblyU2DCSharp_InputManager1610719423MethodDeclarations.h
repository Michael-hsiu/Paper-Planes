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

// InputManager
struct InputManager_t1610719423;
// InputComponent
struct InputComponent_t1734991399;

#include "codegen/il2cpp-codegen.h"

// System.Void InputManager::.ctor()
extern "C"  void InputManager__ctor_m782694114 (InputManager_t1610719423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InputManager InputManager::get_Instance()
extern "C"  InputManager_t1610719423 * InputManager_get_Instance_m2574167580 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputManager::Awake()
extern "C"  void InputManager_Awake_m1409123551 (InputManager_t1610719423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InputComponent InputManager::GetActiveInput()
extern "C"  Il2CppObject * InputManager_GetActiveInput_m2838317368 (InputManager_t1610719423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
