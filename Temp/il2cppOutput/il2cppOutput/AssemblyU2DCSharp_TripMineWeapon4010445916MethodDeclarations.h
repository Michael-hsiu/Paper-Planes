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

// TripMineWeapon
struct TripMineWeapon_t4010445916;
// System.String
struct String_t;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void TripMineWeapon::.ctor()
extern "C"  void TripMineWeapon__ctor_m302696837 (TripMineWeapon_t4010445916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TripMineWeapon::Start()
extern "C"  void TripMineWeapon_Start_m2608481533 (TripMineWeapon_t4010445916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TripMineWeapon::ActivateWeapon(System.String)
extern "C"  void TripMineWeapon_ActivateWeapon_m3916396100 (TripMineWeapon_t4010445916 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TripMineWeapon::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void TripMineWeapon_OnTriggerEnter_m4259628481 (TripMineWeapon_t4010445916 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TripMineWeapon::SpawnMines()
extern "C"  void TripMineWeapon_SpawnMines_m1398603294 (TripMineWeapon_t4010445916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TripMineWeapon::BeginCountdown(System.Single)
extern "C"  Il2CppObject * TripMineWeapon_BeginCountdown_m3382337244 (TripMineWeapon_t4010445916 * __this, float ___mineFuse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TripMineWeapon::HideInScene()
extern "C"  void TripMineWeapon_HideInScene_m287016218 (TripMineWeapon_t4010445916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TripMineWeapon::SetVisibility(System.Boolean)
extern "C"  void TripMineWeapon_SetVisibility_m3145796154 (TripMineWeapon_t4010445916 * __this, bool ___isVisible0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
