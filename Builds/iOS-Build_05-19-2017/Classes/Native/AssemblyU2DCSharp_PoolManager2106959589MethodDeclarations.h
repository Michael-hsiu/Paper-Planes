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

// PoolManager
struct PoolManager_t2106959589;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PoolObject
struct PoolObject_t202793199;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void PoolManager::.ctor()
extern "C"  void PoolManager__ctor_m2013835340 (PoolManager_t2106959589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PoolManager PoolManager::get_Instance()
extern "C"  PoolManager_t2106959589 * PoolManager_get_Instance_m687273074 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::CreatePool(UnityEngine.GameObject,System.Int32)
extern "C"  void PoolManager_CreatePool_m242699969 (PoolManager_t2106959589 * __this, GameObject_t1756533147 * ___prefab0, int32_t ___poolSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::ReuseObject(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void PoolManager_ReuseObject_m1138423051 (PoolManager_t2106959589 * __this, GameObject_t1756533147 * ___prefab0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PoolObject PoolManager::ReuseObjectRef(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  PoolObject_t202793199 * PoolManager_ReuseObjectRef_m766847270 (PoolManager_t2106959589 * __this, GameObject_t1756533147 * ___prefab0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
