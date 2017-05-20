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

// PawnFS
struct PawnFS_t635543851;
// Ship
struct Ship_t1116303770;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FiringMode2712036264.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"

// System.Void PawnFS::.ctor()
extern "C"  void PawnFS__ctor_m3245719296 (PawnFS_t635543851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FiringMode PawnFS::get_Mode()
extern "C"  int32_t PawnFS_get_Mode_m34929093 (PawnFS_t635543851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnFS::set_Mode(FiringMode)
extern "C"  void PawnFS_set_Mode_m2539886940 (PawnFS_t635543851 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnFS::EnterState(Ship)
extern "C"  void PawnFS_EnterState_m1857219995 (PawnFS_t635543851 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnFS::ExitState(Ship)
extern "C"  void PawnFS_ExitState_m1219899215 (PawnFS_t635543851 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnFS::UpdateState(Ship)
extern "C"  void PawnFS_UpdateState_m235105632 (PawnFS_t635543851 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnFS::CheckEnv(Ship)
extern "C"  void PawnFS_CheckEnv_m1204091695 (PawnFS_t635543851 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnFS::FireAtPlayer(Ship)
extern "C"  void PawnFS_FireAtPlayer_m2015727640 (PawnFS_t635543851 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
