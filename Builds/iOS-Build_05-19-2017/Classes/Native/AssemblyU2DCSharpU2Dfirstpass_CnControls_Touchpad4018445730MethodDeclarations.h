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

// CnControls.Touchpad
struct Touchpad_t4018445730;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void CnControls.Touchpad::.ctor()
extern "C"  void Touchpad__ctor_m3259534892 (Touchpad_t4018445730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CnControls.Touchpad::get_CurrentEventCamera()
extern "C"  Camera_t189460977 * Touchpad_get_CurrentEventCamera_m1231712790 (Touchpad_t4018445730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void Touchpad_set_CurrentEventCamera_m186979137 (Touchpad_t4018445730 * __this, Camera_t189460977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnEnable()
extern "C"  void Touchpad_OnEnable_m815929648 (Touchpad_t4018445730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnDisable()
extern "C"  void Touchpad_OnDisable_m998602639 (Touchpad_t4018445730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnDrag_m2752118647 (Touchpad_t4018445730 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnPointerUp_m196743733 (Touchpad_t4018445730 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnPointerDown_m1422813670 (Touchpad_t4018445730 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::Update()
extern "C"  void Touchpad_Update_m1149823703 (Touchpad_t4018445730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
