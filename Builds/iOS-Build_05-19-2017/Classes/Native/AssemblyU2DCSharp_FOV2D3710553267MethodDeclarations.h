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

// FOV2D
struct FOV2D_t3710553267;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void FOV2D::.ctor()
extern "C"  void FOV2D__ctor_m2884400452 (FOV2D_t3710553267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FOV2D::Update()
extern "C"  void FOV2D_Update_m1786548671 (FOV2D_t3710553267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FOV2D::InsideFOV(UnityEngine.Vector3)
extern "C"  bool FOV2D_InsideFOV_m3251568094 (FOV2D_t3710553267 * __this, Vector3_t2243707580  ___playerPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FOV2D::RotatePointAroundTransform(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  FOV2D_RotatePointAroundTransform_m813882496 (FOV2D_t3710553267 * __this, Vector2_t2243707579  ___p0, float ___angles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FOV2D::OnDrawGizmos()
extern "C"  void FOV2D_OnDrawGizmos_m714871902 (FOV2D_t3710553267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
