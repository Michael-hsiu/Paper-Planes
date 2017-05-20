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

// CnControls.DpadAxis
struct DpadAxis_t2553897428;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void CnControls.DpadAxis::.ctor()
extern "C"  void DpadAxis__ctor_m3007890164 (DpadAxis_t2553897428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform CnControls.DpadAxis::get_RectTransform()
extern "C"  RectTransform_t3349966182 * DpadAxis_get_RectTransform_m196275241 (DpadAxis_t2553897428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::set_RectTransform(UnityEngine.RectTransform)
extern "C"  void DpadAxis_set_RectTransform_m2509018136 (DpadAxis_t2553897428 * __this, RectTransform_t3349966182 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CnControls.DpadAxis::get_LastFingerId()
extern "C"  int32_t DpadAxis_get_LastFingerId_m577118821 (DpadAxis_t2553897428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::set_LastFingerId(System.Int32)
extern "C"  void DpadAxis_set_LastFingerId_m4078509594 (DpadAxis_t2553897428 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::Awake()
extern "C"  void DpadAxis_Awake_m1672187925 (DpadAxis_t2553897428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::OnEnable()
extern "C"  void DpadAxis_OnEnable_m2046008644 (DpadAxis_t2553897428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::OnDisable()
extern "C"  void DpadAxis_OnDisable_m1780365381 (DpadAxis_t2553897428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::Press(UnityEngine.Vector2,UnityEngine.Camera,System.Int32)
extern "C"  void DpadAxis_Press_m705958636 (DpadAxis_t2553897428 * __this, Vector2_t2243707579  ___screenPoint0, Camera_t189460977 * ___eventCamera1, int32_t ___pointerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::TryRelease(System.Int32)
extern "C"  void DpadAxis_TryRelease_m91242831 (DpadAxis_t2553897428 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
