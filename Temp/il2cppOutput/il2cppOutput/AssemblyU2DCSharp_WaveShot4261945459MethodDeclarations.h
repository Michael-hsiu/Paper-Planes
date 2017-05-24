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

// WaveShot
struct WaveShot_t4261945459;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void WaveShot::.ctor()
extern "C"  void WaveShot__ctor_m1973506368 (WaveShot_t4261945459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveShot::OnObjectReuse()
extern "C"  void WaveShot_OnObjectReuse_m4277264878 (WaveShot_t4261945459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveShot::Move()
extern "C"  void WaveShot_Move_m2668815935 (WaveShot_t4261945459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveShot::OnEnable()
extern "C"  void WaveShot_OnEnable_m912981492 (WaveShot_t4261945459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveShot::Start()
extern "C"  void WaveShot_Start_m3707781268 (WaveShot_t4261945459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveShot::FixedUpdate()
extern "C"  void WaveShot_FixedUpdate_m1007417377 (WaveShot_t4261945459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveShot::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void WaveShot_OnTriggerEnter_m1838458244 (WaveShot_t4261945459 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WaveShot::DestroyAfterLifeTime(System.Single)
extern "C"  Il2CppObject * WaveShot_DestroyAfterLifeTime_m951648682 (WaveShot_t4261945459 * __this, float ___lifeTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WaveShot::get_ShotDamage()
extern "C"  int32_t WaveShot_get_ShotDamage_m1800935312 (WaveShot_t4261945459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveShot::set_ShotDamage(System.Int32)
extern "C"  void WaveShot_set_ShotDamage_m4009682885 (WaveShot_t4261945459 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WaveShot::get_SpeedMultiplier()
extern "C"  float WaveShot_get_SpeedMultiplier_m891615601 (WaveShot_t4261945459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveShot::set_SpeedMultiplier(System.Single)
extern "C"  void WaveShot_set_SpeedMultiplier_m13602772 (WaveShot_t4261945459 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
