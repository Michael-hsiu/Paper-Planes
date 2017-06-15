#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;
// LitJson.WriterContext
struct WriterContext_t4137194742;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t929955600;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.IO.TextWriter
struct TextWriter_t4027217640;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonWriter
struct  JsonWriter_t1927598499  : public Il2CppObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t4137194742 * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t929955600 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t1328083999* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t1221177846 * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t4027217640 * ___writer_10;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___context_1)); }
	inline WriterContext_t4137194742 * get_context_1() const { return ___context_1; }
	inline WriterContext_t4137194742 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_t4137194742 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier(&___context_1, value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___ctx_stack_2)); }
	inline Stack_1_t929955600 * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_t929955600 ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_t929955600 * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_stack_2, value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___hex_seq_4)); }
	inline CharU5BU5D_t1328083999* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t1328083999** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t1328083999* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier(&___hex_seq_4, value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___inst_string_builder_7)); }
	inline StringBuilder_t1221177846 * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t1221177846 ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t1221177846 * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier(&___inst_string_builder_7, value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499, ___writer_10)); }
	inline TextWriter_t4027217640 * get_writer_10() const { return ___writer_10; }
	inline TextWriter_t4027217640 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(TextWriter_t4027217640 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier(&___writer_10, value);
	}
};

struct JsonWriter_t1927598499_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t104580544 * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_t1927598499_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_t104580544 * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_t104580544 ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_t104580544 * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier(&___number_format_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
