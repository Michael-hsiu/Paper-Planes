#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// CnControls.VirtualAxis
struct VirtualAxis_t639041308;
// CnControls.VirtualButton
struct VirtualButton_t1816990431;
// CnControls.DpadAxis
struct DpadAxis_t2553897428;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_VirtualAxi639041308.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_VirtualBu1816990431.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_DpadAxis2553897428.h"

#pragma once
// CnControls.VirtualAxis[]
struct VirtualAxisU5BU5D_t1416885493  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) VirtualAxis_t639041308 * m_Items[1];

public:
	inline VirtualAxis_t639041308 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VirtualAxis_t639041308 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VirtualAxis_t639041308 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline VirtualAxis_t639041308 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VirtualAxis_t639041308 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VirtualAxis_t639041308 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// CnControls.VirtualButton[]
struct VirtualButtonU5BU5D_t1034306246  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) VirtualButton_t1816990431 * m_Items[1];

public:
	inline VirtualButton_t1816990431 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VirtualButton_t1816990431 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VirtualButton_t1816990431 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline VirtualButton_t1816990431 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VirtualButton_t1816990431 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VirtualButton_t1816990431 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// CnControls.DpadAxis[]
struct DpadAxisU5BU5D_t1107744861  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DpadAxis_t2553897428 * m_Items[1];

public:
	inline DpadAxis_t2553897428 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DpadAxis_t2553897428 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DpadAxis_t2553897428 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DpadAxis_t2553897428 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DpadAxis_t2553897428 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DpadAxis_t2553897428 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
