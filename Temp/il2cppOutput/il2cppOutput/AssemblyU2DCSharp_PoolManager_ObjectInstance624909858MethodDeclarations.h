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

// PoolManager/ObjectInstance
struct ObjectInstance_t624909858;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void PoolManager/ObjectInstance::.ctor(UnityEngine.GameObject)
extern "C"  void ObjectInstance__ctor_m1297024195 (ObjectInstance_t624909858 * __this, GameObject_t1756533147 * ___objectInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager/ObjectInstance::Reuse(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void ObjectInstance_Reuse_m554448429 (ObjectInstance_t624909858 * __this, Vector3_t2243707580  ___position0, Quaternion_t4030073918  ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager/ObjectInstance::SetParent(UnityEngine.Transform)
extern "C"  void ObjectInstance_SetParent_m3555394154 (ObjectInstance_t624909858 * __this, Transform_t3275118058 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
