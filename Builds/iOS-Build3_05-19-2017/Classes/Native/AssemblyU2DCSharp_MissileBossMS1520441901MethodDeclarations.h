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

// MissileBossMS
struct MissileBossMS_t1520441901;
// Ship
struct Ship_t1116303770;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void MissileBossMS::.ctor()
extern "C"  void MissileBossMS__ctor_m319518620 (MissileBossMS_t1520441901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Direction MissileBossMS::get_Direction()
extern "C"  int32_t MissileBossMS_get_Direction_m3411359440 (MissileBossMS_t1520441901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::set_Direction(Direction)
extern "C"  void MissileBossMS_set_Direction_m3509833825 (MissileBossMS_t1520441901 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::EnterState(Ship)
extern "C"  void MissileBossMS_EnterState_m3882856777 (MissileBossMS_t1520441901 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::ExitState(Ship)
extern "C"  void MissileBossMS_ExitState_m3555618913 (MissileBossMS_t1520441901 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::UpdateState(Ship)
extern "C"  void MissileBossMS_UpdateState_m938390524 (MissileBossMS_t1520441901 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::CheckEnv(Ship)
extern "C"  void MissileBossMS_CheckEnv_m2336329805 (MissileBossMS_t1520441901 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissileBossMS::Idle(Ship)
extern "C"  Il2CppObject * MissileBossMS_Idle_m2756905126 (MissileBossMS_t1520441901 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissileBossMS::Wander(Ship)
extern "C"  Il2CppObject * MissileBossMS_Wander_m384781203 (MissileBossMS_t1520441901 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MissileBossMS::SetAngle(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Vector3_t2243707580  MissileBossMS_SetAngle_m2328519903 (MissileBossMS_t1520441901 * __this, Vector3_t2243707580  ___v0, Quaternion_t4030073918  ___wanderAngle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::OnDrawGizmosSelected()
extern "C"  void MissileBossMS_OnDrawGizmosSelected_m2081192293 (MissileBossMS_t1520441901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::OnDrawGizmos()
extern "C"  void MissileBossMS_OnDrawGizmos_m862844738 (MissileBossMS_t1520441901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::MoveToPlayer(Ship)
extern "C"  void MissileBossMS_MoveToPlayer_m1033487471 (MissileBossMS_t1520441901 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissileBossMS::MoveBackwards(Ship)
extern "C"  void MissileBossMS_MoveBackwards_m3520396111 (MissileBossMS_t1520441901 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
