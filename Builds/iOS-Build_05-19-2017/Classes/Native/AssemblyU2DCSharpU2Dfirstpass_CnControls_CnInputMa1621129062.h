#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CnControls.CnInputManager
struct CnInputManager_t1621129062;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>>
struct Dictionary_2_t1922941702;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>>
struct Dictionary_2_t3100890825;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.CnInputManager
struct  CnInputManager_t1621129062  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>> CnControls.CnInputManager::_virtualAxisDictionary
	Dictionary_2_t1922941702 * ____virtualAxisDictionary_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>> CnControls.CnInputManager::_virtualButtonsDictionary
	Dictionary_2_t3100890825 * ____virtualButtonsDictionary_2;

public:
	inline static int32_t get_offset_of__virtualAxisDictionary_1() { return static_cast<int32_t>(offsetof(CnInputManager_t1621129062, ____virtualAxisDictionary_1)); }
	inline Dictionary_2_t1922941702 * get__virtualAxisDictionary_1() const { return ____virtualAxisDictionary_1; }
	inline Dictionary_2_t1922941702 ** get_address_of__virtualAxisDictionary_1() { return &____virtualAxisDictionary_1; }
	inline void set__virtualAxisDictionary_1(Dictionary_2_t1922941702 * value)
	{
		____virtualAxisDictionary_1 = value;
		Il2CppCodeGenWriteBarrier(&____virtualAxisDictionary_1, value);
	}

	inline static int32_t get_offset_of__virtualButtonsDictionary_2() { return static_cast<int32_t>(offsetof(CnInputManager_t1621129062, ____virtualButtonsDictionary_2)); }
	inline Dictionary_2_t3100890825 * get__virtualButtonsDictionary_2() const { return ____virtualButtonsDictionary_2; }
	inline Dictionary_2_t3100890825 ** get_address_of__virtualButtonsDictionary_2() { return &____virtualButtonsDictionary_2; }
	inline void set__virtualButtonsDictionary_2(Dictionary_2_t3100890825 * value)
	{
		____virtualButtonsDictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&____virtualButtonsDictionary_2, value);
	}
};

struct CnInputManager_t1621129062_StaticFields
{
public:
	// CnControls.CnInputManager CnControls.CnInputManager::_instance
	CnInputManager_t1621129062 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(CnInputManager_t1621129062_StaticFields, ____instance_0)); }
	inline CnInputManager_t1621129062 * get__instance_0() const { return ____instance_0; }
	inline CnInputManager_t1621129062 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(CnInputManager_t1621129062 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
