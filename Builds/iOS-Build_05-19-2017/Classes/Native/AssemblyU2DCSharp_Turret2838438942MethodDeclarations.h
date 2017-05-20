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

// Turret
struct Turret_t2838438942;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void Turret::.ctor()
extern "C"  void Turret__ctor_m1098958655 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Turret::get_RotationSpeed()
extern "C"  float Turret_get_RotationSpeed_m1730170655 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::set_RotationSpeed(System.Single)
extern "C"  void Turret_set_RotationSpeed_m3679850364 (Turret_t2838438942 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Turret::get_Health()
extern "C"  int32_t Turret_get_Health_m2495296232 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::set_Health(System.Int32)
extern "C"  void Turret_set_Health_m2510648299 (Turret_t2838438942 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Turret::get_EnemyPoints()
extern "C"  int32_t Turret_get_EnemyPoints_m2452027849 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::set_EnemyPoints(System.Int32)
extern "C"  void Turret_set_EnemyPoints_m1947979592 (Turret_t2838438942 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Turret::get_ShotDamage()
extern "C"  int32_t Turret_get_ShotDamage_m698349187 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::set_ShotDamage(System.Int32)
extern "C"  void Turret_set_ShotDamage_m2477478392 (Turret_t2838438942 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Turret::get_FireRate()
extern "C"  float Turret_get_FireRate_m2587049356 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::set_FireRate(System.Single)
extern "C"  void Turret_set_FireRate_m3205504437 (Turret_t2838438942 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::Start()
extern "C"  void Turret_Start_m2616358827 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::Update()
extern "C"  void Turret_Update_m3655582024 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::Initialize()
extern "C"  void Turret_Initialize_m645040435 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::Move()
extern "C"  void Turret_Move_m1924396888 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::Damage(System.Int32)
extern "C"  void Turret_Damage_m486469217 (Turret_t2838438942 * __this, int32_t ___damageTaken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::Kill()
extern "C"  void Turret_Kill_m3138567221 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::Fire()
extern "C"  void Turret_Fire_m1437983151 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Turret_OnTriggerEnter_m1669274643 (Turret_t2838438942 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::ActivateGuns()
extern "C"  void Turret_ActivateGuns_m911497541 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Turret::DeactivateGuns()
extern "C"  void Turret_DeactivateGuns_m1923281360 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Turret::CanSeePlayer()
extern "C"  bool Turret_CanSeePlayer_m1212240587 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Turret::BurstFire()
extern "C"  Il2CppObject * Turret_BurstFire_m2385218307 (Turret_t2838438942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
