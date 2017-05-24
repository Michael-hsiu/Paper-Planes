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

// Missile
struct Missile_t813944928;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Missile::.ctor()
extern "C"  void Missile__ctor_m2545921555 (Missile_t813944928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Missile::OnEnable()
extern "C"  void Missile_OnEnable_m3474416807 (Missile_t813944928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Missile::Update()
extern "C"  void Missile_Update_m430249726 (Missile_t813944928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Missile::FindTarget()
extern "C"  void Missile_FindTarget_m348457915 (Missile_t813944928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Missile::SeekAndMove()
extern "C"  Il2CppObject * Missile_SeekAndMove_m606430283 (Missile_t813944928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Missile::Move()
extern "C"  void Missile_Move_m2463500374 (Missile_t813944928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Missile::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Missile_OnTriggerEnter_m450134967 (Missile_t813944928 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Missile::DamageDelay(System.Single)
extern "C"  Il2CppObject * Missile_DamageDelay_m1356503688 (Missile_t813944928 * __this, float ___dmgDelay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Missile::OnObjectReuse()
extern "C"  void Missile_OnObjectReuse_m2623014027 (Missile_t813944928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Missile::<FindTarget>m__0(UnityEngine.Collider)
extern "C"  GameObject_t1756533147 * Missile_U3CFindTargetU3Em__0_m2508153550 (Il2CppObject * __this /* static, unused */, Collider_t3497673348 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Missile::<FindTarget>m__1(UnityEngine.GameObject)
extern "C"  bool Missile_U3CFindTargetU3Em__1_m2075843817 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Missile::<FindTarget>m__2(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * Missile_U3CFindTargetU3Em__2_m1008925397 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
