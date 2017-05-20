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

// PawnMS
struct PawnMS_t635543862;
// Ship
struct Ship_t1116303770;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"
#include "AssemblyU2DCSharp_Ship1116303770.h"

// System.Void PawnMS::.ctor()
extern "C"  void PawnMS__ctor_m3729177493 (PawnMS_t635543862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Direction PawnMS::get_Direction()
extern "C"  int32_t PawnMS_get_Direction_m1474196947 (PawnMS_t635543862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnMS::set_Direction(Direction)
extern "C"  void PawnMS_set_Direction_m4019034380 (PawnMS_t635543862 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnMS::EnterState(Ship)
extern "C"  void PawnMS_EnterState_m2690650484 (PawnMS_t635543862 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnMS::ExitState(Ship)
extern "C"  void PawnMS_ExitState_m2882695606 (PawnMS_t635543862 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnMS::UpdateState(Ship)
extern "C"  void PawnMS_UpdateState_m1686672085 (PawnMS_t635543862 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnMS::CheckEnv(Ship)
extern "C"  void PawnMS_CheckEnv_m984682856 (PawnMS_t635543862 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawnMS::MoveToPlayer(Ship)
extern "C"  void PawnMS_MoveToPlayer_m3614091006 (PawnMS_t635543862 * __this, Ship_t1116303770 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
