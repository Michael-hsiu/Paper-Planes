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

// Mine
struct Mine_t2729441277;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void Mine::.ctor()
extern "C"  void Mine__ctor_m3433837326 (Mine_t2729441277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::OnEnable()
extern "C"  void Mine_OnEnable_m4162637694 (Mine_t2729441277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Mine_OnTriggerEnter_m2533208202 (Mine_t2729441277 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::DamageArea()
extern "C"  void Mine_DamageArea_m2317746668 (Mine_t2729441277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::Explode()
extern "C"  void Mine_Explode_m3980615919 (Mine_t2729441277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mine::CircularRotate()
extern "C"  Il2CppObject * Mine_CircularRotate_m1792453494 (Mine_t2729441277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Mine::<DamageArea>m__0(UnityEngine.Collider)
extern "C"  GameObject_t1756533147 * Mine_U3CDamageAreaU3Em__0_m1509741885 (Il2CppObject * __this /* static, unused */, Collider_t3497673348 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
