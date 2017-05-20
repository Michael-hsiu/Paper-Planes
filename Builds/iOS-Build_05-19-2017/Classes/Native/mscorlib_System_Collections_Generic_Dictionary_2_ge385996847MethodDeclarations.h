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

// System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>
struct Dictionary_2_t385996847;
// System.Collections.Generic.IEqualityComparer`1<EnemyType>
struct IEqualityComparer_1_t4264000862;
// System.Collections.Generic.IDictionary`2<EnemyType,System.Int32>
struct IDictionary_2_t2680047564;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<EnemyType,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1686897304;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<EnemyType,System.Int32>>
struct IEnumerator_1_t4208800488;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/ValueCollection<EnemyType,System.Int32>
struct ValueCollection_t3384023986;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22438309365.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_EnemyType756400788.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1706021549.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::.ctor()
extern "C"  void Dictionary_2__ctor_m3615076078_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3615076078(__this, method) ((  void (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2__ctor_m3615076078_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m699491167_gshared (Dictionary_2_t385996847 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m699491167(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m699491167_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m1239133452_gshared (Dictionary_2_t385996847 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m1239133452(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1239133452_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3013836357_gshared (Dictionary_2_t385996847 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3013836357(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t385996847 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3013836357_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3100566901_gshared (Dictionary_2_t385996847 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3100566901(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3100566901_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3667364503_gshared (Dictionary_2_t385996847 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3667364503(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t385996847 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m3667364503_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2849650600_gshared (Dictionary_2_t385996847 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2849650600(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t385996847 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2849650600_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1275426751_gshared (Dictionary_2_t385996847 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1275426751(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1275426751_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2834630340_gshared (Dictionary_2_t385996847 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2834630340(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2834630340_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3844653043_gshared (Dictionary_2_t385996847 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3844653043(__this, ___key0, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3844653043_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2419883206_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2419883206(__this, method) ((  bool (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2419883206_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m977225968_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m977225968(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m977225968_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2101675940_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2101675940(__this, method) ((  bool (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2101675940_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m616734295_gshared (Dictionary_2_t385996847 * __this, KeyValuePair_2_t2438309365  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m616734295(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t385996847 *, KeyValuePair_2_t2438309365 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m616734295_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1526630625_gshared (Dictionary_2_t385996847 * __this, KeyValuePair_2_t2438309365  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1526630625(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t385996847 *, KeyValuePair_2_t2438309365 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1526630625_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2427546755_gshared (Dictionary_2_t385996847 * __this, KeyValuePair_2U5BU5D_t1686897304* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2427546755(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t385996847 *, KeyValuePair_2U5BU5D_t1686897304*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2427546755_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m295174970_gshared (Dictionary_2_t385996847 * __this, KeyValuePair_2_t2438309365  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m295174970(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t385996847 *, KeyValuePair_2_t2438309365 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m295174970_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1721296246_gshared (Dictionary_2_t385996847 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1721296246(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1721296246_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m431479825_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m431479825(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m431479825_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1125511278_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1125511278(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1125511278_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19141739_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19141739(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19141739_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2470470818_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2470470818(__this, method) ((  int32_t (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_get_Count_m2470470818_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m469882899_gshared (Dictionary_2_t385996847 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m469882899(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t385996847 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m469882899_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1155079748_gshared (Dictionary_2_t385996847 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1155079748(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t385996847 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1155079748_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m4000014530_gshared (Dictionary_2_t385996847 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m4000014530(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t385996847 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m4000014530_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2615786277_gshared (Dictionary_2_t385996847 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2615786277(__this, ___size0, method) ((  void (*) (Dictionary_2_t385996847 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2615786277_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3685145195_gshared (Dictionary_2_t385996847 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3685145195(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3685145195_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2438309365  Dictionary_2_make_pair_m2180006433_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2180006433(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2438309365  (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m2180006433_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m476298685_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m476298685(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m476298685_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2136587400_gshared (Dictionary_2_t385996847 * __this, KeyValuePair_2U5BU5D_t1686897304* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2136587400(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t385996847 *, KeyValuePair_2U5BU5D_t1686897304*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2136587400_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::Resize()
extern "C"  void Dictionary_2_Resize_m3112291380_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3112291380(__this, method) ((  void (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_Resize_m3112291380_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3436306793_gshared (Dictionary_2_t385996847 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3436306793(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t385996847 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m3436306793_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::Clear()
extern "C"  void Dictionary_2_Clear_m286720053_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m286720053(__this, method) ((  void (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_Clear_m286720053_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2865004227_gshared (Dictionary_2_t385996847 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2865004227(__this, ___key0, method) ((  bool (*) (Dictionary_2_t385996847 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m2865004227_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m561065515_gshared (Dictionary_2_t385996847 * __this, int32_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m561065515(__this, ___value0, method) ((  bool (*) (Dictionary_2_t385996847 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m561065515_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2166759290_gshared (Dictionary_2_t385996847 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2166759290(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t385996847 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m2166759290_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1118328860_gshared (Dictionary_2_t385996847 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1118328860(__this, ___sender0, method) ((  void (*) (Dictionary_2_t385996847 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1118328860_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2869132801_gshared (Dictionary_2_t385996847 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m2869132801(__this, ___key0, method) ((  bool (*) (Dictionary_2_t385996847 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m2869132801_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1179910920_gshared (Dictionary_2_t385996847 * __this, int32_t ___key0, int32_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1179910920(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t385996847 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1179910920_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::get_Values()
extern "C"  ValueCollection_t3384023986 * Dictionary_2_get_Values_m4288006447_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m4288006447(__this, method) ((  ValueCollection_t3384023986 * (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_get_Values_m4288006447_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m442385902_gshared (Dictionary_2_t385996847 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m442385902(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t385996847 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m442385902_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m1346864174_gshared (Dictionary_2_t385996847 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1346864174(__this, ___value0, method) ((  int32_t (*) (Dictionary_2_t385996847 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1346864174_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1386801672_gshared (Dictionary_2_t385996847 * __this, KeyValuePair_2_t2438309365  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1386801672(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t385996847 *, KeyValuePair_2_t2438309365 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1386801672_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::GetEnumerator()
extern "C"  Enumerator_t1706021549  Dictionary_2_GetEnumerator_m1505091297_gshared (Dictionary_2_t385996847 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1505091297(__this, method) ((  Enumerator_t1706021549  (*) (Dictionary_2_t385996847 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1505091297_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<EnemyType,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m1521940100_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1521940100(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1521940100_gshared)(__this /* static, unused */, ___key0, ___value1, method)
