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

// PlayerShip/SSContainer
struct SSContainer_t287407719;
// System.Collections.Generic.List`1<ShotSpawn>
struct List_1_t3173386001;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlayerShip_Weapons2322246681.h"
#include "AssemblyU2DCSharp_PlayerShip_SSContainer287407719.h"

// System.Void PlayerShip/SSContainer::.ctor(PlayerShip/Weapons,System.Int32,System.Collections.Generic.List`1<ShotSpawn>)
extern "C"  void SSContainer__ctor_m2166330025 (SSContainer_t287407719 * __this, int32_t ___id0, int32_t ___priority1, List_1_t3173386001 * ___ss2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerShip/SSContainer::CompareTo(PlayerShip/SSContainer)
extern "C"  int32_t SSContainer_CompareTo_m1557098005 (SSContainer_t287407719 * __this, SSContainer_t287407719 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerShip/Weapons PlayerShip/SSContainer::get_ID()
extern "C"  int32_t SSContainer_get_ID_m865176286 (SSContainer_t287407719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerShip/SSContainer::get_Priority()
extern "C"  int32_t SSContainer_get_Priority_m4272166615 (SSContainer_t287407719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ShotSpawn> PlayerShip/SSContainer::get_SS()
extern "C"  List_1_t3173386001 * SSContainer_get_SS_m4245780545 (SSContainer_t287407719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
