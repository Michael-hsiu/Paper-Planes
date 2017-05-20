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

// CnControls.SimpleJoystick
struct SimpleJoystick_t3517917222;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void CnControls.SimpleJoystick::.ctor()
extern "C"  void SimpleJoystick__ctor_m2204899408 (SimpleJoystick_t3517917222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CnControls.SimpleJoystick::get_CurrentEventCamera()
extern "C"  Camera_t189460977 * SimpleJoystick_get_CurrentEventCamera_m2619022058 (SimpleJoystick_t3517917222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void SimpleJoystick_set_CurrentEventCamera_m85811193 (SimpleJoystick_t3517917222 * __this, Camera_t189460977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::Awake()
extern "C"  void SimpleJoystick_Awake_m3886334039 (SimpleJoystick_t3517917222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnEnable()
extern "C"  void SimpleJoystick_OnEnable_m1000561356 (SimpleJoystick_t3517917222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnDisable()
extern "C"  void SimpleJoystick_OnDisable_m3906878059 (SimpleJoystick_t3517917222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnDrag_m1758613819 (SimpleJoystick_t3517917222 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnPointerUp_m3285895045 (SimpleJoystick_t3517917222 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnPointerDown_m1851537874 (SimpleJoystick_t3517917222 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::Hide(System.Boolean)
extern "C"  void SimpleJoystick_Hide_m1044592681 (SimpleJoystick_t3517917222 * __this, bool ___isHidden0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
