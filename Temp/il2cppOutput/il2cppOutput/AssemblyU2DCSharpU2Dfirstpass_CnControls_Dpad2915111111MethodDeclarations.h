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

// CnControls.Dpad
struct Dpad_t2915111111;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void CnControls.Dpad::.ctor()
extern "C"  void Dpad__ctor_m1680214151 (Dpad_t2915111111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CnControls.Dpad::get_CurrentEventCamera()
extern "C"  Camera_t189460977 * Dpad_get_CurrentEventCamera_m874448711 (Dpad_t2915111111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Dpad::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void Dpad_set_CurrentEventCamera_m1154610534 (Dpad_t2915111111 * __this, Camera_t189460977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Dpad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Dpad_OnPointerDown_m693723211 (Dpad_t2915111111 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Dpad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Dpad_OnPointerUp_m2960537976 (Dpad_t2915111111 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
