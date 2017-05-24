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

// RangedMS
struct RangedMS_t70446111;
// Ship
struct Ship_t1116303770;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"

// System.Void RangedMS::.ctor()
extern "C"  void RangedMS__ctor_m1323597226 (RangedMS_t70446111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Direction RangedMS::get_Direction()
extern "C"  int32_t RangedMS_get_Direction_m545245486 (RangedMS_t70446111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedMS::set_Direction(Direction)
extern "C"  void RangedMS_set_Direction_m3663954311 (RangedMS_t70446111 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedMS::EnterState(Ship)
extern "C"  void RangedMS_EnterState_m3017115263 (RangedMS_t70446111 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedMS::ExitState(Ship)
extern "C"  void RangedMS_ExitState_m3012586411 (RangedMS_t70446111 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedMS::UpdateState(Ship)
extern "C"  void RangedMS_UpdateState_m309377162 (RangedMS_t70446111 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedMS::CheckEnv(Ship)
extern "C"  void RangedMS_CheckEnv_m3051848491 (RangedMS_t70446111 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedMS::MoveToPlayer(Ship)
extern "C"  void RangedMS_MoveToPlayer_m1334187617 (RangedMS_t70446111 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedMS::MoveBackwards(Ship)
extern "C"  void RangedMS_MoveBackwards_m4223698017 (RangedMS_t70446111 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
