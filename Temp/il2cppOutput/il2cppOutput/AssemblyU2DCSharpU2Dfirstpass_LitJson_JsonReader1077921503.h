#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_JsonToken2852816099.h"

// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t1339185049;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3159605602;
// LitJson.Lexer
struct Lexer_t186508296;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonReader
struct  JsonReader_t1077921503  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t3159605602 * ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_t186508296 * ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_t1561828458 * ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Boolean LitJson.JsonReader::skip_non_members
	bool ___skip_non_members_12;
	// System.Object LitJson.JsonReader::token_value
	Il2CppObject * ___token_value_13;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_14;

public:
	inline static int32_t get_offset_of_automaton_stack_1() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___automaton_stack_1)); }
	inline Stack_1_t3159605602 * get_automaton_stack_1() const { return ___automaton_stack_1; }
	inline Stack_1_t3159605602 ** get_address_of_automaton_stack_1() { return &___automaton_stack_1; }
	inline void set_automaton_stack_1(Stack_1_t3159605602 * value)
	{
		___automaton_stack_1 = value;
		Il2CppCodeGenWriteBarrier(&___automaton_stack_1, value);
	}

	inline static int32_t get_offset_of_current_input_2() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___current_input_2)); }
	inline int32_t get_current_input_2() const { return ___current_input_2; }
	inline int32_t* get_address_of_current_input_2() { return &___current_input_2; }
	inline void set_current_input_2(int32_t value)
	{
		___current_input_2 = value;
	}

	inline static int32_t get_offset_of_current_symbol_3() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___current_symbol_3)); }
	inline int32_t get_current_symbol_3() const { return ___current_symbol_3; }
	inline int32_t* get_address_of_current_symbol_3() { return &___current_symbol_3; }
	inline void set_current_symbol_3(int32_t value)
	{
		___current_symbol_3 = value;
	}

	inline static int32_t get_offset_of_end_of_json_4() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___end_of_json_4)); }
	inline bool get_end_of_json_4() const { return ___end_of_json_4; }
	inline bool* get_address_of_end_of_json_4() { return &___end_of_json_4; }
	inline void set_end_of_json_4(bool value)
	{
		___end_of_json_4 = value;
	}

	inline static int32_t get_offset_of_end_of_input_5() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___end_of_input_5)); }
	inline bool get_end_of_input_5() const { return ___end_of_input_5; }
	inline bool* get_address_of_end_of_input_5() { return &___end_of_input_5; }
	inline void set_end_of_input_5(bool value)
	{
		___end_of_input_5 = value;
	}

	inline static int32_t get_offset_of_lexer_6() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___lexer_6)); }
	inline Lexer_t186508296 * get_lexer_6() const { return ___lexer_6; }
	inline Lexer_t186508296 ** get_address_of_lexer_6() { return &___lexer_6; }
	inline void set_lexer_6(Lexer_t186508296 * value)
	{
		___lexer_6 = value;
		Il2CppCodeGenWriteBarrier(&___lexer_6, value);
	}

	inline static int32_t get_offset_of_parser_in_string_7() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___parser_in_string_7)); }
	inline bool get_parser_in_string_7() const { return ___parser_in_string_7; }
	inline bool* get_address_of_parser_in_string_7() { return &___parser_in_string_7; }
	inline void set_parser_in_string_7(bool value)
	{
		___parser_in_string_7 = value;
	}

	inline static int32_t get_offset_of_parser_return_8() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___parser_return_8)); }
	inline bool get_parser_return_8() const { return ___parser_return_8; }
	inline bool* get_address_of_parser_return_8() { return &___parser_return_8; }
	inline void set_parser_return_8(bool value)
	{
		___parser_return_8 = value;
	}

	inline static int32_t get_offset_of_read_started_9() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___read_started_9)); }
	inline bool get_read_started_9() const { return ___read_started_9; }
	inline bool* get_address_of_read_started_9() { return &___read_started_9; }
	inline void set_read_started_9(bool value)
	{
		___read_started_9 = value;
	}

	inline static int32_t get_offset_of_reader_10() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___reader_10)); }
	inline TextReader_t1561828458 * get_reader_10() const { return ___reader_10; }
	inline TextReader_t1561828458 ** get_address_of_reader_10() { return &___reader_10; }
	inline void set_reader_10(TextReader_t1561828458 * value)
	{
		___reader_10 = value;
		Il2CppCodeGenWriteBarrier(&___reader_10, value);
	}

	inline static int32_t get_offset_of_reader_is_owned_11() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___reader_is_owned_11)); }
	inline bool get_reader_is_owned_11() const { return ___reader_is_owned_11; }
	inline bool* get_address_of_reader_is_owned_11() { return &___reader_is_owned_11; }
	inline void set_reader_is_owned_11(bool value)
	{
		___reader_is_owned_11 = value;
	}

	inline static int32_t get_offset_of_skip_non_members_12() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___skip_non_members_12)); }
	inline bool get_skip_non_members_12() const { return ___skip_non_members_12; }
	inline bool* get_address_of_skip_non_members_12() { return &___skip_non_members_12; }
	inline void set_skip_non_members_12(bool value)
	{
		___skip_non_members_12 = value;
	}

	inline static int32_t get_offset_of_token_value_13() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___token_value_13)); }
	inline Il2CppObject * get_token_value_13() const { return ___token_value_13; }
	inline Il2CppObject ** get_address_of_token_value_13() { return &___token_value_13; }
	inline void set_token_value_13(Il2CppObject * value)
	{
		___token_value_13 = value;
		Il2CppCodeGenWriteBarrier(&___token_value_13, value);
	}

	inline static int32_t get_offset_of_token_14() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503, ___token_14)); }
	inline int32_t get_token_14() const { return ___token_14; }
	inline int32_t* get_address_of_token_14() { return &___token_14; }
	inline void set_token_14(int32_t value)
	{
		___token_14 = value;
	}
};

struct JsonReader_t1077921503_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	Il2CppObject* ___parse_table_0;

public:
	inline static int32_t get_offset_of_parse_table_0() { return static_cast<int32_t>(offsetof(JsonReader_t1077921503_StaticFields, ___parse_table_0)); }
	inline Il2CppObject* get_parse_table_0() const { return ___parse_table_0; }
	inline Il2CppObject** get_address_of_parse_table_0() { return &___parse_table_0; }
	inline void set_parse_table_0(Il2CppObject* value)
	{
		___parse_table_0 = value;
		Il2CppCodeGenWriteBarrier(&___parse_table_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
