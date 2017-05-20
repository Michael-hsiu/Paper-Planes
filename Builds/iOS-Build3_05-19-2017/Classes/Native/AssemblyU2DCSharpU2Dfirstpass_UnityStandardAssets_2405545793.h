#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Copy._2D.PlatformerCharacter2D
struct  PlatformerCharacter2D_t2405545793  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_JumpForce
	float ___m_JumpForce_3;
	// System.Boolean UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_AirControl
	bool ___m_AirControl_4;
	// UnityEngine.LayerMask UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_WhatIsGround
	LayerMask_t3188175821  ___m_WhatIsGround_5;
	// UnityEngine.Transform UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_GroundCheck
	Transform_t3275118058 * ___m_GroundCheck_6;
	// System.Boolean UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_Grounded
	bool ___m_Grounded_8;
	// UnityEngine.Animator UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_Anim
	Animator_t69676727 * ___m_Anim_9;
	// UnityEngine.Rigidbody2D UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_Rigidbody2D
	Rigidbody2D_t502193897 * ___m_Rigidbody2D_10;
	// System.Boolean UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_FacingRight
	bool ___m_FacingRight_11;

public:
	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_JumpForce_3() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_JumpForce_3)); }
	inline float get_m_JumpForce_3() const { return ___m_JumpForce_3; }
	inline float* get_address_of_m_JumpForce_3() { return &___m_JumpForce_3; }
	inline void set_m_JumpForce_3(float value)
	{
		___m_JumpForce_3 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_4() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_AirControl_4)); }
	inline bool get_m_AirControl_4() const { return ___m_AirControl_4; }
	inline bool* get_address_of_m_AirControl_4() { return &___m_AirControl_4; }
	inline void set_m_AirControl_4(bool value)
	{
		___m_AirControl_4 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_5() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_WhatIsGround_5)); }
	inline LayerMask_t3188175821  get_m_WhatIsGround_5() const { return ___m_WhatIsGround_5; }
	inline LayerMask_t3188175821 * get_address_of_m_WhatIsGround_5() { return &___m_WhatIsGround_5; }
	inline void set_m_WhatIsGround_5(LayerMask_t3188175821  value)
	{
		___m_WhatIsGround_5 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_6() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_GroundCheck_6)); }
	inline Transform_t3275118058 * get_m_GroundCheck_6() const { return ___m_GroundCheck_6; }
	inline Transform_t3275118058 ** get_address_of_m_GroundCheck_6() { return &___m_GroundCheck_6; }
	inline void set_m_GroundCheck_6(Transform_t3275118058 * value)
	{
		___m_GroundCheck_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_GroundCheck_6, value);
	}

	inline static int32_t get_offset_of_m_Grounded_8() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_Grounded_8)); }
	inline bool get_m_Grounded_8() const { return ___m_Grounded_8; }
	inline bool* get_address_of_m_Grounded_8() { return &___m_Grounded_8; }
	inline void set_m_Grounded_8(bool value)
	{
		___m_Grounded_8 = value;
	}

	inline static int32_t get_offset_of_m_Anim_9() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_Anim_9)); }
	inline Animator_t69676727 * get_m_Anim_9() const { return ___m_Anim_9; }
	inline Animator_t69676727 ** get_address_of_m_Anim_9() { return &___m_Anim_9; }
	inline void set_m_Anim_9(Animator_t69676727 * value)
	{
		___m_Anim_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Anim_9, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_10() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_Rigidbody2D_10)); }
	inline Rigidbody2D_t502193897 * get_m_Rigidbody2D_10() const { return ___m_Rigidbody2D_10; }
	inline Rigidbody2D_t502193897 ** get_address_of_m_Rigidbody2D_10() { return &___m_Rigidbody2D_10; }
	inline void set_m_Rigidbody2D_10(Rigidbody2D_t502193897 * value)
	{
		___m_Rigidbody2D_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody2D_10, value);
	}

	inline static int32_t get_offset_of_m_FacingRight_11() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t2405545793, ___m_FacingRight_11)); }
	inline bool get_m_FacingRight_11() const { return ___m_FacingRight_11; }
	inline bool* get_address_of_m_FacingRight_11() { return &___m_FacingRight_11; }
	inline void set_m_FacingRight_11(bool value)
	{
		___m_FacingRight_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
