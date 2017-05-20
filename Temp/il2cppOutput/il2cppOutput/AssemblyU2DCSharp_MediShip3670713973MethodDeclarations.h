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

// MediShip
struct MediShip_t3670713973;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void MediShip::.ctor()
extern "C"  void MediShip__ctor_m3513593558 (MediShip_t3670713973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::Start()
extern "C"  void MediShip_Start_m2863457238 (MediShip_t3670713973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::Update()
extern "C"  void MediShip_Update_m43915317 (MediShip_t3670713973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::OnDrawGizmos()
extern "C"  void MediShip_OnDrawGizmos_m2989708144 (MediShip_t3670713973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::Initialize()
extern "C"  void MediShip_Initialize_m137510046 (MediShip_t3670713973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::Move()
extern "C"  void MediShip_Move_m1489649473 (MediShip_t3670713973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void MediShip_OnTriggerEnter_m1413672370 (MediShip_t3670713973 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::BuffAllies()
extern "C"  void MediShip_BuffAllies_m1585309713 (MediShip_t3670713973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::HealAlly(UnityEngine.GameObject)
extern "C"  void MediShip_HealAlly_m1017272362 (MediShip_t3670713973 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediShip::MoveToAlly(UnityEngine.GameObject)
extern "C"  void MediShip_MoveToAlly_m927115944 (MediShip_t3670713973 * __this, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MediShip::SeekHealTarget()
extern "C"  Il2CppObject * MediShip_SeekHealTarget_m1369860699 (MediShip_t3670713973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MediShip::<BuffAllies>m__0(UnityEngine.Collider)
extern "C"  GameObject_t1756533147 * MediShip_U3CBuffAlliesU3Em__0_m1495078168 (Il2CppObject * __this /* static, unused */, Collider_t3497673348 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediShip::<BuffAllies>m__1(UnityEngine.GameObject)
extern "C"  bool MediShip_U3CBuffAlliesU3Em__1_m1482321331 (MediShip_t3670713973 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
