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

// CnControls.CnInputManager
struct CnInputManager_t1621129062;
// System.String
struct String_t;
// CnControls.VirtualAxis
struct VirtualAxis_t639041308;
// CnControls.VirtualButton
struct VirtualButton_t1816990431;
// System.Collections.Generic.List`1<CnControls.VirtualAxis>
struct List_1_t8162440;
// System.Collections.Generic.List`1<CnControls.VirtualButton>
struct List_1_t1186111563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_VirtualAxi639041308.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_VirtualBu1816990431.h"

// System.Void CnControls.CnInputManager::.ctor()
extern "C"  void CnInputManager__ctor_m410223702 (CnInputManager_t1621129062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CnControls.CnInputManager CnControls.CnInputManager::get_Instance()
extern "C"  CnInputManager_t1621129062 * CnInputManager_get_Instance_m3560595840 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CnControls.CnInputManager::get_TouchCount()
extern "C"  int32_t CnInputManager_get_TouchCount_m1887627295 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch CnControls.CnInputManager::GetTouch(System.Int32)
extern "C"  Touch_t407273883  CnInputManager_GetTouch_m661723253 (Il2CppObject * __this /* static, unused */, int32_t ___touchIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetAxis(System.String)
extern "C"  float CnInputManager_GetAxis_m3935011583 (Il2CppObject * __this /* static, unused */, String_t* ___axisName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetAxisRaw(System.String)
extern "C"  float CnInputManager_GetAxisRaw_m2454362555 (Il2CppObject * __this /* static, unused */, String_t* ___axisName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CnInputManager_GetAxis_m3306015420 (Il2CppObject * __this /* static, unused */, String_t* ___axisName0, bool ___isRaw1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetButton(System.String)
extern "C"  bool CnInputManager_GetButton_m2247624534 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetButtonDown(System.String)
extern "C"  bool CnInputManager_GetButtonDown_m3128851222 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetButtonUp(System.String)
extern "C"  bool CnInputManager_GetButtonUp_m315709957 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::AxisExists(System.String)
extern "C"  bool CnInputManager_AxisExists_m1363679859 (Il2CppObject * __this /* static, unused */, String_t* ___axisName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::ButtonExists(System.String)
extern "C"  bool CnInputManager_ButtonExists_m3329108280 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::RegisterVirtualAxis(CnControls.VirtualAxis)
extern "C"  void CnInputManager_RegisterVirtualAxis_m3329919866 (Il2CppObject * __this /* static, unused */, VirtualAxis_t639041308 * ___virtualAxis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::UnregisterVirtualAxis(CnControls.VirtualAxis)
extern "C"  void CnInputManager_UnregisterVirtualAxis_m2457732879 (Il2CppObject * __this /* static, unused */, VirtualAxis_t639041308 * ___virtualAxis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::RegisterVirtualButton(CnControls.VirtualButton)
extern "C"  void CnInputManager_RegisterVirtualButton_m4021123940 (Il2CppObject * __this /* static, unused */, VirtualButton_t1816990431 * ___virtualButton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::UnregisterVirtualButton(CnControls.VirtualButton)
extern "C"  void CnInputManager_UnregisterVirtualButton_m3697911299 (Il2CppObject * __this /* static, unused */, VirtualButton_t1816990431 * ___virtualButton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetVirtualAxisValue(System.Collections.Generic.List`1<CnControls.VirtualAxis>,System.String,System.Boolean)
extern "C"  float CnInputManager_GetVirtualAxisValue_m3297656445 (Il2CppObject * __this /* static, unused */, List_1_t8162440 * ___virtualAxisList0, String_t* ___axisName1, bool ___isRaw2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButtonDown(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButtonDown_m3438128229 (Il2CppObject * __this /* static, unused */, List_1_t1186111563 * ___virtualButtons0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButtonUp(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButtonUp_m4073346388 (Il2CppObject * __this /* static, unused */, List_1_t1186111563 * ___virtualButtons0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButton(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButton_m1492771675 (Il2CppObject * __this /* static, unused */, List_1_t1186111563 * ___virtualButtons0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
