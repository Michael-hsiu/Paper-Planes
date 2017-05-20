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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void Drawing::.cctor()
extern "C"  void Drawing__cctor_m3467247252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Drawing::DrawLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void Drawing_DrawLine_m2172527645 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pointA0, Vector2_t2243707579  ___pointB1, Color_t2020392075  ___color2, float ___width3, bool ___antiAlias4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Drawing::DrawCircle(UnityEngine.Vector2,System.Int32,UnityEngine.Color,System.Single,System.Int32)
extern "C"  void Drawing_DrawCircle_m789576356 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___center0, int32_t ___radius1, Color_t2020392075  ___color2, float ___width3, int32_t ___segmentsPerQuarter4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Drawing::DrawCircle(UnityEngine.Vector2,System.Int32,UnityEngine.Color,System.Single,System.Boolean,System.Int32)
extern "C"  void Drawing_DrawCircle_m1113836913 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___center0, int32_t ___radius1, Color_t2020392075  ___color2, float ___width3, bool ___antiAlias4, int32_t ___segmentsPerQuarter5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Drawing::DrawBezierLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean,System.Int32)
extern "C"  void Drawing_DrawBezierLine_m2159158279 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___start0, Vector2_t2243707579  ___startTangent1, Vector2_t2243707579  ___end2, Vector2_t2243707579  ___endTangent3, Color_t2020392075  ___color4, float ___width5, bool ___antiAlias6, int32_t ___segments7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Drawing::CubeBezier(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  Drawing_CubeBezier_m2411083539 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___s0, Vector2_t2243707579  ___st1, Vector2_t2243707579  ___e2, Vector2_t2243707579  ___et3, float ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Drawing::Initialize()
extern "C"  void Drawing_Initialize_m2607667879 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
