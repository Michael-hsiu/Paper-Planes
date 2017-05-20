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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t2866794480;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject> Utils::GetChildren(UnityEngine.GameObject)
extern "C"  List_1_t1125654279 * Utils_GetChildren_m1454198854 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> Utils::GetChildrenHelper(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  List_1_t1125654279 * Utils_GetChildrenHelper_m2692624328 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, List_1_t1125654279 * ___list1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider> Utils::GetColliders(UnityEngine.GameObject)
extern "C"  List_1_t2866794480 * Utils_GetColliders_m823793927 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider> Utils::GetCollidersHelper(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.Collider>)
extern "C"  List_1_t2866794480 * Utils_GetCollidersHelper_m1182230444 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, List_1_t2866794480 * ___list1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Utils::FindChildWithTag(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * Utils_FindChildWithTag_m2097227790 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, String_t* ___tag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Utils::RandomPos(UnityEngine.Transform,System.Single)
extern "C"  Vector3_t2243707580  Utils_RandomPos_m4234426527 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, float ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utils::SquaredEuclideanDistance(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  float Utils_SquaredEuclideanDistance_m2841688474 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___t10, GameObject_t1756533147 * ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::KillAllEnemies()
extern "C"  void Utils_KillAllEnemies_m797471335 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::DisableChildren(UnityEngine.GameObject)
extern "C"  void Utils_DisableChildren_m704331667 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::DisablePowerups()
extern "C"  void Utils_DisablePowerups_m353609985 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utils::Mod(System.Single,System.Single)
extern "C"  float Utils_Mod_m544546708 (Il2CppObject * __this /* static, unused */, float ___a0, float ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
