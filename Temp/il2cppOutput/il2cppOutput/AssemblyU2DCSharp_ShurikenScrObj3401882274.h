#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerupScriptableObject1415146708.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShurikenScrObj
struct  ShurikenScrObj_t3401882274  : public PowerupScriptableObject_t1415146708
{
public:
	// System.Int32 ShurikenScrObj::damage
	int32_t ___damage_3;
	// System.Single ShurikenScrObj::duration
	float ___duration_4;
	// System.Int32 ShurikenScrObj::damageBoundary
	int32_t ___damageBoundary_5;
	// System.Single ShurikenScrObj::sizeMultiplier
	float ___sizeMultiplier_6;
	// UnityEngine.GameObject ShurikenScrObj::shuriken
	GameObject_t1756533147 * ___shuriken_7;
	// System.String ShurikenScrObj::damageStr
	String_t* ___damageStr_8;
	// System.String ShurikenScrObj::durationStr
	String_t* ___durationStr_9;
	// System.String ShurikenScrObj::shurikenSizeStr
	String_t* ___shurikenSizeStr_10;

public:
	inline static int32_t get_offset_of_damage_3() { return static_cast<int32_t>(offsetof(ShurikenScrObj_t3401882274, ___damage_3)); }
	inline int32_t get_damage_3() const { return ___damage_3; }
	inline int32_t* get_address_of_damage_3() { return &___damage_3; }
	inline void set_damage_3(int32_t value)
	{
		___damage_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(ShurikenScrObj_t3401882274, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_damageBoundary_5() { return static_cast<int32_t>(offsetof(ShurikenScrObj_t3401882274, ___damageBoundary_5)); }
	inline int32_t get_damageBoundary_5() const { return ___damageBoundary_5; }
	inline int32_t* get_address_of_damageBoundary_5() { return &___damageBoundary_5; }
	inline void set_damageBoundary_5(int32_t value)
	{
		___damageBoundary_5 = value;
	}

	inline static int32_t get_offset_of_sizeMultiplier_6() { return static_cast<int32_t>(offsetof(ShurikenScrObj_t3401882274, ___sizeMultiplier_6)); }
	inline float get_sizeMultiplier_6() const { return ___sizeMultiplier_6; }
	inline float* get_address_of_sizeMultiplier_6() { return &___sizeMultiplier_6; }
	inline void set_sizeMultiplier_6(float value)
	{
		___sizeMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_shuriken_7() { return static_cast<int32_t>(offsetof(ShurikenScrObj_t3401882274, ___shuriken_7)); }
	inline GameObject_t1756533147 * get_shuriken_7() const { return ___shuriken_7; }
	inline GameObject_t1756533147 ** get_address_of_shuriken_7() { return &___shuriken_7; }
	inline void set_shuriken_7(GameObject_t1756533147 * value)
	{
		___shuriken_7 = value;
		Il2CppCodeGenWriteBarrier(&___shuriken_7, value);
	}

	inline static int32_t get_offset_of_damageStr_8() { return static_cast<int32_t>(offsetof(ShurikenScrObj_t3401882274, ___damageStr_8)); }
	inline String_t* get_damageStr_8() const { return ___damageStr_8; }
	inline String_t** get_address_of_damageStr_8() { return &___damageStr_8; }
	inline void set_damageStr_8(String_t* value)
	{
		___damageStr_8 = value;
		Il2CppCodeGenWriteBarrier(&___damageStr_8, value);
	}

	inline static int32_t get_offset_of_durationStr_9() { return static_cast<int32_t>(offsetof(ShurikenScrObj_t3401882274, ___durationStr_9)); }
	inline String_t* get_durationStr_9() const { return ___durationStr_9; }
	inline String_t** get_address_of_durationStr_9() { return &___durationStr_9; }
	inline void set_durationStr_9(String_t* value)
	{
		___durationStr_9 = value;
		Il2CppCodeGenWriteBarrier(&___durationStr_9, value);
	}

	inline static int32_t get_offset_of_shurikenSizeStr_10() { return static_cast<int32_t>(offsetof(ShurikenScrObj_t3401882274, ___shurikenSizeStr_10)); }
	inline String_t* get_shurikenSizeStr_10() const { return ___shurikenSizeStr_10; }
	inline String_t** get_address_of_shurikenSizeStr_10() { return &___shurikenSizeStr_10; }
	inline void set_shurikenSizeStr_10(String_t* value)
	{
		___shurikenSizeStr_10 = value;
		Il2CppCodeGenWriteBarrier(&___shurikenSizeStr_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
