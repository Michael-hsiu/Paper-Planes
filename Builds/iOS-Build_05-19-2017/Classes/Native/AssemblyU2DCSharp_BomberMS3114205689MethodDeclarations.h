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

// BomberMS
struct BomberMS_t3114205689;
// Ship
struct Ship_t1116303770;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"

// System.Void BomberMS::.ctor()
extern "C"  void BomberMS__ctor_m3108815442 (BomberMS_t3114205689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Direction BomberMS::get_Direction()
extern "C"  int32_t BomberMS_get_Direction_m1245552190 (BomberMS_t3114205689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberMS::set_Direction(Direction)
extern "C"  void BomberMS_set_Direction_m152287969 (BomberMS_t3114205689 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberMS::EnterState(Ship)
extern "C"  void BomberMS_EnterState_m275643185 (BomberMS_t3114205689 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberMS::ExitState(Ship)
extern "C"  void BomberMS_ExitState_m2803080897 (BomberMS_t3114205689 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberMS::UpdateState(Ship)
extern "C"  void BomberMS_UpdateState_m3520270898 (BomberMS_t3114205689 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberMS::CheckEnv(Ship)
extern "C"  void BomberMS_CheckEnv_m682501445 (BomberMS_t3114205689 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberMS::MoveToPlayer(Ship)
extern "C"  void BomberMS_MoveToPlayer_m4221605227 (BomberMS_t3114205689 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberMS::MoveBackwards(Ship)
extern "C"  void BomberMS_MoveBackwards_m3293075459 (BomberMS_t3114205689 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
