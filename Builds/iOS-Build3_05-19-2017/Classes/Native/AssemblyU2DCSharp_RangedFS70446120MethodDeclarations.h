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

// RangedFS
struct RangedFS_t70446120;
// Ship
struct Ship_t1116303770;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FiringMode2712036264.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"

// System.Void RangedFS::.ctor()
extern "C"  void RangedFS__ctor_m1576847233 (RangedFS_t70446120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FiringMode RangedFS::get_Mode()
extern "C"  int32_t RangedFS_get_Mode_m1072372286 (RangedFS_t70446120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedFS::set_Mode(FiringMode)
extern "C"  void RangedFS_set_Mode_m1641840473 (RangedFS_t70446120 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedFS::EnterState(Ship)
extern "C"  void RangedFS_EnterState_m3390019866 (RangedFS_t70446120 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedFS::ExitState(Ship)
extern "C"  void RangedFS_ExitState_m629788112 (RangedFS_t70446120 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedFS::UpdateState(Ship)
extern "C"  void RangedFS_UpdateState_m10638081 (RangedFS_t70446120 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedFS::CheckEnv(Ship)
extern "C"  void RangedFS_CheckEnv_m2979490790 (RangedFS_t70446120 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedFS::FireAtPlayer(Ship)
extern "C"  void RangedFS_FireAtPlayer_m1933335529 (RangedFS_t70446120 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
