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

// AIInput
struct AIInput_t860244006;
// PlayerShip
struct PlayerShip_t2635532215;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlayerShip2635532215.h"

// System.Void AIInput::.ctor()
extern "C"  void AIInput__ctor_m2146973605 (AIInput_t860244006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIInput::UpdateInput(PlayerShip)
extern "C"  void AIInput_UpdateInput_m770914467 (AIInput_t860244006 * __this, PlayerShip_t2635532215 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIInput::DisableControls()
extern "C"  void AIInput_DisableControls_m672166289 (AIInput_t860244006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AIInput::DisableControlsRoutine()
extern "C"  Il2CppObject * AIInput_DisableControlsRoutine_m368620521 (AIInput_t860244006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIInput::Dash(PlayerShip)
extern "C"  void AIInput_Dash_m1520019728 (AIInput_t860244006 * __this, PlayerShip_t2635532215 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AIInput::StartDash(PlayerShip)
extern "C"  Il2CppObject * AIInput_StartDash_m1358780360 (AIInput_t860244006 * __this, PlayerShip_t2635532215 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
