#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Powerup2065360972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriFirePowerup
struct  TriFirePowerup_t218398003  : public Powerup_t2065360972
{
public:
	// System.String TriFirePowerup::id
	String_t* ___id_8;

public:
	inline static int32_t get_offset_of_id_8() { return static_cast<int32_t>(offsetof(TriFirePowerup_t218398003, ___id_8)); }
	inline String_t* get_id_8() const { return ___id_8; }
	inline String_t** get_address_of_id_8() { return &___id_8; }
	inline void set_id_8(String_t* value)
	{
		___id_8 = value;
		Il2CppCodeGenWriteBarrier(&___id_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
