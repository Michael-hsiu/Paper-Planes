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

// DualFirePowerup
struct  DualFirePowerup_t2827626406  : public Powerup_t2065360972
{
public:
	// System.String DualFirePowerup::id
	String_t* ___id_9;

public:
	inline static int32_t get_offset_of_id_9() { return static_cast<int32_t>(offsetof(DualFirePowerup_t2827626406, ___id_9)); }
	inline String_t* get_id_9() const { return ___id_9; }
	inline String_t** get_address_of_id_9() { return &___id_9; }
	inline void set_id_9(String_t* value)
	{
		___id_9 = value;
		Il2CppCodeGenWriteBarrier(&___id_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
