#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t1593819722;
// LitJson.FsmContext
struct FsmContext_t1296252303;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;
// LitJson.Lexer/StateHandler
struct StateHandler_t387387051;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Lexer
struct  Lexer_t186508296  : public Il2CppObject
{
public:
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t1296252303 * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t1561828458 * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t1221177846 * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;

public:
	inline static int32_t get_offset_of_allow_comments_2() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___allow_comments_2)); }
	inline bool get_allow_comments_2() const { return ___allow_comments_2; }
	inline bool* get_address_of_allow_comments_2() { return &___allow_comments_2; }
	inline void set_allow_comments_2(bool value)
	{
		___allow_comments_2 = value;
	}

	inline static int32_t get_offset_of_allow_single_quoted_strings_3() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___allow_single_quoted_strings_3)); }
	inline bool get_allow_single_quoted_strings_3() const { return ___allow_single_quoted_strings_3; }
	inline bool* get_address_of_allow_single_quoted_strings_3() { return &___allow_single_quoted_strings_3; }
	inline void set_allow_single_quoted_strings_3(bool value)
	{
		___allow_single_quoted_strings_3 = value;
	}

	inline static int32_t get_offset_of_end_of_input_4() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___end_of_input_4)); }
	inline bool get_end_of_input_4() const { return ___end_of_input_4; }
	inline bool* get_address_of_end_of_input_4() { return &___end_of_input_4; }
	inline void set_end_of_input_4(bool value)
	{
		___end_of_input_4 = value;
	}

	inline static int32_t get_offset_of_fsm_context_5() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___fsm_context_5)); }
	inline FsmContext_t1296252303 * get_fsm_context_5() const { return ___fsm_context_5; }
	inline FsmContext_t1296252303 ** get_address_of_fsm_context_5() { return &___fsm_context_5; }
	inline void set_fsm_context_5(FsmContext_t1296252303 * value)
	{
		___fsm_context_5 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_context_5, value);
	}

	inline static int32_t get_offset_of_input_buffer_6() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___input_buffer_6)); }
	inline int32_t get_input_buffer_6() const { return ___input_buffer_6; }
	inline int32_t* get_address_of_input_buffer_6() { return &___input_buffer_6; }
	inline void set_input_buffer_6(int32_t value)
	{
		___input_buffer_6 = value;
	}

	inline static int32_t get_offset_of_input_char_7() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___input_char_7)); }
	inline int32_t get_input_char_7() const { return ___input_char_7; }
	inline int32_t* get_address_of_input_char_7() { return &___input_char_7; }
	inline void set_input_char_7(int32_t value)
	{
		___input_char_7 = value;
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___reader_8)); }
	inline TextReader_t1561828458 * get_reader_8() const { return ___reader_8; }
	inline TextReader_t1561828458 ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(TextReader_t1561828458 * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier(&___reader_8, value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_string_buffer_10() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___string_buffer_10)); }
	inline StringBuilder_t1221177846 * get_string_buffer_10() const { return ___string_buffer_10; }
	inline StringBuilder_t1221177846 ** get_address_of_string_buffer_10() { return &___string_buffer_10; }
	inline void set_string_buffer_10(StringBuilder_t1221177846 * value)
	{
		___string_buffer_10 = value;
		Il2CppCodeGenWriteBarrier(&___string_buffer_10, value);
	}

	inline static int32_t get_offset_of_string_value_11() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___string_value_11)); }
	inline String_t* get_string_value_11() const { return ___string_value_11; }
	inline String_t** get_address_of_string_value_11() { return &___string_value_11; }
	inline void set_string_value_11(String_t* value)
	{
		___string_value_11 = value;
		Il2CppCodeGenWriteBarrier(&___string_value_11, value);
	}

	inline static int32_t get_offset_of_token_12() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___token_12)); }
	inline int32_t get_token_12() const { return ___token_12; }
	inline int32_t* get_address_of_token_12() { return &___token_12; }
	inline void set_token_12(int32_t value)
	{
		___token_12 = value;
	}

	inline static int32_t get_offset_of_unichar_13() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___unichar_13)); }
	inline int32_t get_unichar_13() const { return ___unichar_13; }
	inline int32_t* get_address_of_unichar_13() { return &___unichar_13; }
	inline void set_unichar_13(int32_t value)
	{
		___unichar_13 = value;
	}
};

struct Lexer_t186508296_StaticFields
{
public:
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t3030399641* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t1593819722* ___fsm_handler_table_1;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache0
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache0_14;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache1_15;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache2
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache2_16;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache3
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache3_17;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache4
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache4_18;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache5
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache5_19;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache6
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache6_20;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache7
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache7_21;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache8
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache8_22;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache9
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache9_23;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheA
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cacheA_24;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheB
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cacheB_25;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheC
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cacheC_26;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheD
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cacheD_27;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheE
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cacheE_28;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheF
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cacheF_29;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache10
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache10_30;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache11
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache11_31;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache12
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache12_32;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache13
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache13_33;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache14
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache14_34;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache15
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache15_35;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache16
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache16_36;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache17
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache17_37;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache18
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache18_38;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache19
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache19_39;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1A
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache1A_40;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1B
	StateHandler_t387387051 * ___U3CU3Ef__mgU24cache1B_41;

public:
	inline static int32_t get_offset_of_fsm_return_table_0() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___fsm_return_table_0)); }
	inline Int32U5BU5D_t3030399641* get_fsm_return_table_0() const { return ___fsm_return_table_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_fsm_return_table_0() { return &___fsm_return_table_0; }
	inline void set_fsm_return_table_0(Int32U5BU5D_t3030399641* value)
	{
		___fsm_return_table_0 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_return_table_0, value);
	}

	inline static int32_t get_offset_of_fsm_handler_table_1() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___fsm_handler_table_1)); }
	inline StateHandlerU5BU5D_t1593819722* get_fsm_handler_table_1() const { return ___fsm_handler_table_1; }
	inline StateHandlerU5BU5D_t1593819722** get_address_of_fsm_handler_table_1() { return &___fsm_handler_table_1; }
	inline void set_fsm_handler_table_1(StateHandlerU5BU5D_t1593819722* value)
	{
		___fsm_handler_table_1 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_handler_table_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_15() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache1_15)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache1_15() const { return ___U3CU3Ef__mgU24cache1_15; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache1_15() { return &___U3CU3Ef__mgU24cache1_15; }
	inline void set_U3CU3Ef__mgU24cache1_15(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_16() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache2_16)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache2_16() const { return ___U3CU3Ef__mgU24cache2_16; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache2_16() { return &___U3CU3Ef__mgU24cache2_16; }
	inline void set_U3CU3Ef__mgU24cache2_16(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_17() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache3_17)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache3_17() const { return ___U3CU3Ef__mgU24cache3_17; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache3_17() { return &___U3CU3Ef__mgU24cache3_17; }
	inline void set_U3CU3Ef__mgU24cache3_17(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_18() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache4_18)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache4_18() const { return ___U3CU3Ef__mgU24cache4_18; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache4_18() { return &___U3CU3Ef__mgU24cache4_18; }
	inline void set_U3CU3Ef__mgU24cache4_18(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_19() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache5_19)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache5_19() const { return ___U3CU3Ef__mgU24cache5_19; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache5_19() { return &___U3CU3Ef__mgU24cache5_19; }
	inline void set_U3CU3Ef__mgU24cache5_19(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache5_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_20() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache6_20)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache6_20() const { return ___U3CU3Ef__mgU24cache6_20; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache6_20() { return &___U3CU3Ef__mgU24cache6_20; }
	inline void set_U3CU3Ef__mgU24cache6_20(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache6_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_21() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache7_21)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache7_21() const { return ___U3CU3Ef__mgU24cache7_21; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache7_21() { return &___U3CU3Ef__mgU24cache7_21; }
	inline void set_U3CU3Ef__mgU24cache7_21(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache7_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_22() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache8_22)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache8_22() const { return ___U3CU3Ef__mgU24cache8_22; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache8_22() { return &___U3CU3Ef__mgU24cache8_22; }
	inline void set_U3CU3Ef__mgU24cache8_22(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache8_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_23() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache9_23)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache9_23() const { return ___U3CU3Ef__mgU24cache9_23; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache9_23() { return &___U3CU3Ef__mgU24cache9_23; }
	inline void set_U3CU3Ef__mgU24cache9_23(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache9_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache9_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_24() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cacheA_24)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cacheA_24() const { return ___U3CU3Ef__mgU24cacheA_24; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cacheA_24() { return &___U3CU3Ef__mgU24cacheA_24; }
	inline void set_U3CU3Ef__mgU24cacheA_24(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cacheA_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheA_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_25() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cacheB_25)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cacheB_25() const { return ___U3CU3Ef__mgU24cacheB_25; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cacheB_25() { return &___U3CU3Ef__mgU24cacheB_25; }
	inline void set_U3CU3Ef__mgU24cacheB_25(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cacheB_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheB_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_26() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cacheC_26)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cacheC_26() const { return ___U3CU3Ef__mgU24cacheC_26; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cacheC_26() { return &___U3CU3Ef__mgU24cacheC_26; }
	inline void set_U3CU3Ef__mgU24cacheC_26(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cacheC_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheC_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_27() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cacheD_27)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cacheD_27() const { return ___U3CU3Ef__mgU24cacheD_27; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cacheD_27() { return &___U3CU3Ef__mgU24cacheD_27; }
	inline void set_U3CU3Ef__mgU24cacheD_27(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cacheD_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheD_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_28() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cacheE_28)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cacheE_28() const { return ___U3CU3Ef__mgU24cacheE_28; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cacheE_28() { return &___U3CU3Ef__mgU24cacheE_28; }
	inline void set_U3CU3Ef__mgU24cacheE_28(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cacheE_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheE_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_29() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cacheF_29)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cacheF_29() const { return ___U3CU3Ef__mgU24cacheF_29; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cacheF_29() { return &___U3CU3Ef__mgU24cacheF_29; }
	inline void set_U3CU3Ef__mgU24cacheF_29(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cacheF_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheF_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_30() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache10_30)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache10_30() const { return ___U3CU3Ef__mgU24cache10_30; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache10_30() { return &___U3CU3Ef__mgU24cache10_30; }
	inline void set_U3CU3Ef__mgU24cache10_30(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache10_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache10_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_31() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache11_31)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache11_31() const { return ___U3CU3Ef__mgU24cache11_31; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache11_31() { return &___U3CU3Ef__mgU24cache11_31; }
	inline void set_U3CU3Ef__mgU24cache11_31(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache11_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache11_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache12_32() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache12_32)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache12_32() const { return ___U3CU3Ef__mgU24cache12_32; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache12_32() { return &___U3CU3Ef__mgU24cache12_32; }
	inline void set_U3CU3Ef__mgU24cache12_32(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache12_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache12_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache13_33() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache13_33)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache13_33() const { return ___U3CU3Ef__mgU24cache13_33; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache13_33() { return &___U3CU3Ef__mgU24cache13_33; }
	inline void set_U3CU3Ef__mgU24cache13_33(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache13_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache13_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache14_34() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache14_34)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache14_34() const { return ___U3CU3Ef__mgU24cache14_34; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache14_34() { return &___U3CU3Ef__mgU24cache14_34; }
	inline void set_U3CU3Ef__mgU24cache14_34(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache14_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache14_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache15_35() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache15_35)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache15_35() const { return ___U3CU3Ef__mgU24cache15_35; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache15_35() { return &___U3CU3Ef__mgU24cache15_35; }
	inline void set_U3CU3Ef__mgU24cache15_35(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache15_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache15_35, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache16_36() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache16_36)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache16_36() const { return ___U3CU3Ef__mgU24cache16_36; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache16_36() { return &___U3CU3Ef__mgU24cache16_36; }
	inline void set_U3CU3Ef__mgU24cache16_36(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache16_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache16_36, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache17_37() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache17_37)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache17_37() const { return ___U3CU3Ef__mgU24cache17_37; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache17_37() { return &___U3CU3Ef__mgU24cache17_37; }
	inline void set_U3CU3Ef__mgU24cache17_37(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache17_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache17_37, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache18_38() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache18_38)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache18_38() const { return ___U3CU3Ef__mgU24cache18_38; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache18_38() { return &___U3CU3Ef__mgU24cache18_38; }
	inline void set_U3CU3Ef__mgU24cache18_38(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache18_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache18_38, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache19_39() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache19_39)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache19_39() const { return ___U3CU3Ef__mgU24cache19_39; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache19_39() { return &___U3CU3Ef__mgU24cache19_39; }
	inline void set_U3CU3Ef__mgU24cache19_39(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache19_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache19_39, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1A_40() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache1A_40)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache1A_40() const { return ___U3CU3Ef__mgU24cache1A_40; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache1A_40() { return &___U3CU3Ef__mgU24cache1A_40; }
	inline void set_U3CU3Ef__mgU24cache1A_40(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache1A_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1A_40, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1B_41() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___U3CU3Ef__mgU24cache1B_41)); }
	inline StateHandler_t387387051 * get_U3CU3Ef__mgU24cache1B_41() const { return ___U3CU3Ef__mgU24cache1B_41; }
	inline StateHandler_t387387051 ** get_address_of_U3CU3Ef__mgU24cache1B_41() { return &___U3CU3Ef__mgU24cache1B_41; }
	inline void set_U3CU3Ef__mgU24cache1B_41(StateHandler_t387387051 * value)
	{
		___U3CU3Ef__mgU24cache1B_41 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1B_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
