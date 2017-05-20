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

// BomberFS
struct BomberFS_t3114205696;
// Ship
struct Ship_t1116303770;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FiringMode2712036264.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"

// System.Void BomberFS::.ctor()
extern "C"  void BomberFS__ctor_m3444932203 (BomberFS_t3114205696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FiringMode BomberFS::get_Mode()
extern "C"  int32_t BomberFS_get_Mode_m2889089414 (BomberFS_t3114205696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberFS::set_Mode(FiringMode)
extern "C"  void BomberFS_set_Mode_m4198549591 (BomberFS_t3114205696 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberFS::EnterState(Ship)
extern "C"  void BomberFS_EnterState_m3274382726 (BomberFS_t3114205696 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberFS::ExitState(Ship)
extern "C"  void BomberFS_ExitState_m3764953772 (BomberFS_t3114205696 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberFS::UpdateState(Ship)
extern "C"  void BomberFS_UpdateState_m546080683 (BomberFS_t3114205696 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberFS::CheckEnv(Ship)
extern "C"  void BomberFS_CheckEnv_m1451891578 (BomberFS_t3114205696 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BomberFS::ExplodeNearPlayer(Ship)
extern "C"  void BomberFS_ExplodeNearPlayer_m4250130225 (BomberFS_t3114205696 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
