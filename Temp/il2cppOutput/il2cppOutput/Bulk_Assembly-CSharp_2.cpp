#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_WeaponsManager3151090140.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_String2029220233.h"

// WeaponsManager
struct WeaponsManager_t3151090140;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Object
struct Object_t1021602117;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
extern Il2CppClass* WeaponsManager_t3151090140_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisWeaponsManager_t3151090140_m187521447_MethodInfo_var;
extern const uint32_t WeaponsManager_get_Instance_m1753381246_MetadataUsageId;



// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m2380160525_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3764089466 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<WeaponsManager>()
#define Object_FindObjectOfType_TisWeaponsManager_t3151090140_m187521447(__this /* static, unused */, method) ((  WeaponsManager_t3151090140 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m2380160525_gshared)(__this /* static, unused */, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeaponsManager::.ctor()
extern "C"  void WeaponsManager__ctor_m3859688805 (WeaponsManager_t3151090140 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// WeaponsManager WeaponsManager::get_Instance()
extern "C"  WeaponsManager_t3151090140 * WeaponsManager_get_Instance_m1753381246 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponsManager_get_Instance_m1753381246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeaponsManager_t3151090140 * L_0 = ((WeaponsManager_t3151090140_StaticFields*)WeaponsManager_t3151090140_il2cpp_TypeInfo_var->static_fields)->get__instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		WeaponsManager_t3151090140 * L_2 = Object_FindObjectOfType_TisWeaponsManager_t3151090140_m187521447(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisWeaponsManager_t3151090140_m187521447_MethodInfo_var);
		((WeaponsManager_t3151090140_StaticFields*)WeaponsManager_t3151090140_il2cpp_TypeInfo_var->static_fields)->set__instance_2(L_2);
	}

IL_001a:
	{
		WeaponsManager_t3151090140 * L_3 = ((WeaponsManager_t3151090140_StaticFields*)WeaponsManager_t3151090140_il2cpp_TypeInfo_var->static_fields)->get__instance_2();
		return L_3;
	}
}
// System.Void WeaponsManager::ActivateWeapon(System.String)
extern "C"  void WeaponsManager_ActivateWeapon_m2616636580 (WeaponsManager_t3151090140 * __this, String_t* ___id0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
