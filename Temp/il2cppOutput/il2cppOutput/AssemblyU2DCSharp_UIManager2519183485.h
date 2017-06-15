#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// ContinueScreen
struct ContinueScreen_t3714933611;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t1891534283;
// UIManager
struct UIManager_t2519183485;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t2519183485  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text UIManager::scoreText
	Text_t356221433 * ___scoreText_2;
	// UnityEngine.UI.Text UIManager::scoreGoalText
	Text_t356221433 * ___scoreGoalText_3;
	// UnityEngine.UI.Text UIManager::levelText
	Text_t356221433 * ___levelText_4;
	// UnityEngine.UI.Text UIManager::healthText
	Text_t356221433 * ___healthText_5;
	// UnityEngine.UI.Text UIManager::dashStoreText
	Text_t356221433 * ___dashStoreText_6;
	// UnityEngine.UI.Text UIManager::burshRushText
	Text_t356221433 * ___burshRushText_7;
	// UnityEngine.UI.Image UIManager::healthBar
	Image_t2042527209 * ___healthBar_8;
	// ContinueScreen UIManager::continueScreen
	ContinueScreen_t3714933611 * ___continueScreen_9;
	// UnityEngine.UI.Button UIManager::startGameButton
	Button_t2872111280 * ___startGameButton_10;
	// UnityEngine.GameObject UIManager::shopButton
	GameObject_t1756533147 * ___shopButton_11;
	// System.Single UIManager::scaleY
	float ___scaleY_12;
	// UnityEngine.UI.Text UIManager::levelGoalText
	Text_t356221433 * ___levelGoalText_13;
	// UnityEngine.UI.Text UIManager::levelEndText
	Text_t356221433 * ___levelEndText_14;
	// System.Collections.IEnumerator UIManager::levelGoalRoutine
	Il2CppObject * ___levelGoalRoutine_15;
	// System.Collections.IEnumerator UIManager::levelEndRoutine
	Il2CppObject * ___levelEndRoutine_16;
	// System.Single UIManager::displayLength
	float ___displayLength_17;
	// System.Int32 UIManager::startHealth
	int32_t ___startHealth_18;
	// System.Int32 UIManager::endHealth
	int32_t ___endHealth_19;
	// System.Single UIManager::healthStep
	float ___healthStep_20;
	// System.Single UIManager::lerpRatio
	float ___lerpRatio_21;
	// UnityEngine.Vector3 UIManager::oldScale
	Vector3_t2243707580  ___oldScale_22;
	// UnityEngine.Vector3 UIManager::newScale
	Vector3_t2243707580  ___newScale_23;
	// System.Single UIManager::currLerpTime
	float ___currLerpTime_24;
	// System.Single UIManager::lerpInterval
	float ___lerpInterval_25;
	// System.Boolean UIManager::isLerping
	bool ___isLerping_26;
	// System.Single UIManager::endHealthCopy
	float ___endHealthCopy_27;
	// System.Single UIManager::ratio
	float ___ratio_28;
	// System.Int32 UIManager::numDequeued
	int32_t ___numDequeued_29;
	// System.Int32 UIManager::numTimesHealthUpdated
	int32_t ___numTimesHealthUpdated_30;
	// System.Collections.Generic.Queue`1<System.Int32> UIManager::damageQueue
	Queue_1_t1891534283 * ___damageQueue_31;
	// System.Int32 UIManager::targetEndHealth
	int32_t ___targetEndHealth_32;
	// System.Int32 UIManager::peekValue
	int32_t ___peekValue_33;
	// System.Int32 UIManager::currentMin
	int32_t ___currentMin_34;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___scoreText_2)); }
	inline Text_t356221433 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t356221433 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t356221433 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_scoreGoalText_3() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___scoreGoalText_3)); }
	inline Text_t356221433 * get_scoreGoalText_3() const { return ___scoreGoalText_3; }
	inline Text_t356221433 ** get_address_of_scoreGoalText_3() { return &___scoreGoalText_3; }
	inline void set_scoreGoalText_3(Text_t356221433 * value)
	{
		___scoreGoalText_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreGoalText_3, value);
	}

	inline static int32_t get_offset_of_levelText_4() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___levelText_4)); }
	inline Text_t356221433 * get_levelText_4() const { return ___levelText_4; }
	inline Text_t356221433 ** get_address_of_levelText_4() { return &___levelText_4; }
	inline void set_levelText_4(Text_t356221433 * value)
	{
		___levelText_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_4, value);
	}

	inline static int32_t get_offset_of_healthText_5() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___healthText_5)); }
	inline Text_t356221433 * get_healthText_5() const { return ___healthText_5; }
	inline Text_t356221433 ** get_address_of_healthText_5() { return &___healthText_5; }
	inline void set_healthText_5(Text_t356221433 * value)
	{
		___healthText_5 = value;
		Il2CppCodeGenWriteBarrier(&___healthText_5, value);
	}

	inline static int32_t get_offset_of_dashStoreText_6() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___dashStoreText_6)); }
	inline Text_t356221433 * get_dashStoreText_6() const { return ___dashStoreText_6; }
	inline Text_t356221433 ** get_address_of_dashStoreText_6() { return &___dashStoreText_6; }
	inline void set_dashStoreText_6(Text_t356221433 * value)
	{
		___dashStoreText_6 = value;
		Il2CppCodeGenWriteBarrier(&___dashStoreText_6, value);
	}

	inline static int32_t get_offset_of_burshRushText_7() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___burshRushText_7)); }
	inline Text_t356221433 * get_burshRushText_7() const { return ___burshRushText_7; }
	inline Text_t356221433 ** get_address_of_burshRushText_7() { return &___burshRushText_7; }
	inline void set_burshRushText_7(Text_t356221433 * value)
	{
		___burshRushText_7 = value;
		Il2CppCodeGenWriteBarrier(&___burshRushText_7, value);
	}

	inline static int32_t get_offset_of_healthBar_8() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___healthBar_8)); }
	inline Image_t2042527209 * get_healthBar_8() const { return ___healthBar_8; }
	inline Image_t2042527209 ** get_address_of_healthBar_8() { return &___healthBar_8; }
	inline void set_healthBar_8(Image_t2042527209 * value)
	{
		___healthBar_8 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_8, value);
	}

	inline static int32_t get_offset_of_continueScreen_9() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___continueScreen_9)); }
	inline ContinueScreen_t3714933611 * get_continueScreen_9() const { return ___continueScreen_9; }
	inline ContinueScreen_t3714933611 ** get_address_of_continueScreen_9() { return &___continueScreen_9; }
	inline void set_continueScreen_9(ContinueScreen_t3714933611 * value)
	{
		___continueScreen_9 = value;
		Il2CppCodeGenWriteBarrier(&___continueScreen_9, value);
	}

	inline static int32_t get_offset_of_startGameButton_10() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___startGameButton_10)); }
	inline Button_t2872111280 * get_startGameButton_10() const { return ___startGameButton_10; }
	inline Button_t2872111280 ** get_address_of_startGameButton_10() { return &___startGameButton_10; }
	inline void set_startGameButton_10(Button_t2872111280 * value)
	{
		___startGameButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___startGameButton_10, value);
	}

	inline static int32_t get_offset_of_shopButton_11() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___shopButton_11)); }
	inline GameObject_t1756533147 * get_shopButton_11() const { return ___shopButton_11; }
	inline GameObject_t1756533147 ** get_address_of_shopButton_11() { return &___shopButton_11; }
	inline void set_shopButton_11(GameObject_t1756533147 * value)
	{
		___shopButton_11 = value;
		Il2CppCodeGenWriteBarrier(&___shopButton_11, value);
	}

	inline static int32_t get_offset_of_scaleY_12() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___scaleY_12)); }
	inline float get_scaleY_12() const { return ___scaleY_12; }
	inline float* get_address_of_scaleY_12() { return &___scaleY_12; }
	inline void set_scaleY_12(float value)
	{
		___scaleY_12 = value;
	}

	inline static int32_t get_offset_of_levelGoalText_13() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___levelGoalText_13)); }
	inline Text_t356221433 * get_levelGoalText_13() const { return ___levelGoalText_13; }
	inline Text_t356221433 ** get_address_of_levelGoalText_13() { return &___levelGoalText_13; }
	inline void set_levelGoalText_13(Text_t356221433 * value)
	{
		___levelGoalText_13 = value;
		Il2CppCodeGenWriteBarrier(&___levelGoalText_13, value);
	}

	inline static int32_t get_offset_of_levelEndText_14() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___levelEndText_14)); }
	inline Text_t356221433 * get_levelEndText_14() const { return ___levelEndText_14; }
	inline Text_t356221433 ** get_address_of_levelEndText_14() { return &___levelEndText_14; }
	inline void set_levelEndText_14(Text_t356221433 * value)
	{
		___levelEndText_14 = value;
		Il2CppCodeGenWriteBarrier(&___levelEndText_14, value);
	}

	inline static int32_t get_offset_of_levelGoalRoutine_15() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___levelGoalRoutine_15)); }
	inline Il2CppObject * get_levelGoalRoutine_15() const { return ___levelGoalRoutine_15; }
	inline Il2CppObject ** get_address_of_levelGoalRoutine_15() { return &___levelGoalRoutine_15; }
	inline void set_levelGoalRoutine_15(Il2CppObject * value)
	{
		___levelGoalRoutine_15 = value;
		Il2CppCodeGenWriteBarrier(&___levelGoalRoutine_15, value);
	}

	inline static int32_t get_offset_of_levelEndRoutine_16() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___levelEndRoutine_16)); }
	inline Il2CppObject * get_levelEndRoutine_16() const { return ___levelEndRoutine_16; }
	inline Il2CppObject ** get_address_of_levelEndRoutine_16() { return &___levelEndRoutine_16; }
	inline void set_levelEndRoutine_16(Il2CppObject * value)
	{
		___levelEndRoutine_16 = value;
		Il2CppCodeGenWriteBarrier(&___levelEndRoutine_16, value);
	}

	inline static int32_t get_offset_of_displayLength_17() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___displayLength_17)); }
	inline float get_displayLength_17() const { return ___displayLength_17; }
	inline float* get_address_of_displayLength_17() { return &___displayLength_17; }
	inline void set_displayLength_17(float value)
	{
		___displayLength_17 = value;
	}

	inline static int32_t get_offset_of_startHealth_18() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___startHealth_18)); }
	inline int32_t get_startHealth_18() const { return ___startHealth_18; }
	inline int32_t* get_address_of_startHealth_18() { return &___startHealth_18; }
	inline void set_startHealth_18(int32_t value)
	{
		___startHealth_18 = value;
	}

	inline static int32_t get_offset_of_endHealth_19() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___endHealth_19)); }
	inline int32_t get_endHealth_19() const { return ___endHealth_19; }
	inline int32_t* get_address_of_endHealth_19() { return &___endHealth_19; }
	inline void set_endHealth_19(int32_t value)
	{
		___endHealth_19 = value;
	}

	inline static int32_t get_offset_of_healthStep_20() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___healthStep_20)); }
	inline float get_healthStep_20() const { return ___healthStep_20; }
	inline float* get_address_of_healthStep_20() { return &___healthStep_20; }
	inline void set_healthStep_20(float value)
	{
		___healthStep_20 = value;
	}

	inline static int32_t get_offset_of_lerpRatio_21() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___lerpRatio_21)); }
	inline float get_lerpRatio_21() const { return ___lerpRatio_21; }
	inline float* get_address_of_lerpRatio_21() { return &___lerpRatio_21; }
	inline void set_lerpRatio_21(float value)
	{
		___lerpRatio_21 = value;
	}

	inline static int32_t get_offset_of_oldScale_22() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___oldScale_22)); }
	inline Vector3_t2243707580  get_oldScale_22() const { return ___oldScale_22; }
	inline Vector3_t2243707580 * get_address_of_oldScale_22() { return &___oldScale_22; }
	inline void set_oldScale_22(Vector3_t2243707580  value)
	{
		___oldScale_22 = value;
	}

	inline static int32_t get_offset_of_newScale_23() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___newScale_23)); }
	inline Vector3_t2243707580  get_newScale_23() const { return ___newScale_23; }
	inline Vector3_t2243707580 * get_address_of_newScale_23() { return &___newScale_23; }
	inline void set_newScale_23(Vector3_t2243707580  value)
	{
		___newScale_23 = value;
	}

	inline static int32_t get_offset_of_currLerpTime_24() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___currLerpTime_24)); }
	inline float get_currLerpTime_24() const { return ___currLerpTime_24; }
	inline float* get_address_of_currLerpTime_24() { return &___currLerpTime_24; }
	inline void set_currLerpTime_24(float value)
	{
		___currLerpTime_24 = value;
	}

	inline static int32_t get_offset_of_lerpInterval_25() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___lerpInterval_25)); }
	inline float get_lerpInterval_25() const { return ___lerpInterval_25; }
	inline float* get_address_of_lerpInterval_25() { return &___lerpInterval_25; }
	inline void set_lerpInterval_25(float value)
	{
		___lerpInterval_25 = value;
	}

	inline static int32_t get_offset_of_isLerping_26() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___isLerping_26)); }
	inline bool get_isLerping_26() const { return ___isLerping_26; }
	inline bool* get_address_of_isLerping_26() { return &___isLerping_26; }
	inline void set_isLerping_26(bool value)
	{
		___isLerping_26 = value;
	}

	inline static int32_t get_offset_of_endHealthCopy_27() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___endHealthCopy_27)); }
	inline float get_endHealthCopy_27() const { return ___endHealthCopy_27; }
	inline float* get_address_of_endHealthCopy_27() { return &___endHealthCopy_27; }
	inline void set_endHealthCopy_27(float value)
	{
		___endHealthCopy_27 = value;
	}

	inline static int32_t get_offset_of_ratio_28() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___ratio_28)); }
	inline float get_ratio_28() const { return ___ratio_28; }
	inline float* get_address_of_ratio_28() { return &___ratio_28; }
	inline void set_ratio_28(float value)
	{
		___ratio_28 = value;
	}

	inline static int32_t get_offset_of_numDequeued_29() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___numDequeued_29)); }
	inline int32_t get_numDequeued_29() const { return ___numDequeued_29; }
	inline int32_t* get_address_of_numDequeued_29() { return &___numDequeued_29; }
	inline void set_numDequeued_29(int32_t value)
	{
		___numDequeued_29 = value;
	}

	inline static int32_t get_offset_of_numTimesHealthUpdated_30() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___numTimesHealthUpdated_30)); }
	inline int32_t get_numTimesHealthUpdated_30() const { return ___numTimesHealthUpdated_30; }
	inline int32_t* get_address_of_numTimesHealthUpdated_30() { return &___numTimesHealthUpdated_30; }
	inline void set_numTimesHealthUpdated_30(int32_t value)
	{
		___numTimesHealthUpdated_30 = value;
	}

	inline static int32_t get_offset_of_damageQueue_31() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___damageQueue_31)); }
	inline Queue_1_t1891534283 * get_damageQueue_31() const { return ___damageQueue_31; }
	inline Queue_1_t1891534283 ** get_address_of_damageQueue_31() { return &___damageQueue_31; }
	inline void set_damageQueue_31(Queue_1_t1891534283 * value)
	{
		___damageQueue_31 = value;
		Il2CppCodeGenWriteBarrier(&___damageQueue_31, value);
	}

	inline static int32_t get_offset_of_targetEndHealth_32() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___targetEndHealth_32)); }
	inline int32_t get_targetEndHealth_32() const { return ___targetEndHealth_32; }
	inline int32_t* get_address_of_targetEndHealth_32() { return &___targetEndHealth_32; }
	inline void set_targetEndHealth_32(int32_t value)
	{
		___targetEndHealth_32 = value;
	}

	inline static int32_t get_offset_of_peekValue_33() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___peekValue_33)); }
	inline int32_t get_peekValue_33() const { return ___peekValue_33; }
	inline int32_t* get_address_of_peekValue_33() { return &___peekValue_33; }
	inline void set_peekValue_33(int32_t value)
	{
		___peekValue_33 = value;
	}

	inline static int32_t get_offset_of_currentMin_34() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___currentMin_34)); }
	inline int32_t get_currentMin_34() const { return ___currentMin_34; }
	inline int32_t* get_address_of_currentMin_34() { return &___currentMin_34; }
	inline void set_currentMin_34(int32_t value)
	{
		___currentMin_34 = value;
	}
};

struct UIManager_t2519183485_StaticFields
{
public:
	// UIManager UIManager::singleton
	UIManager_t2519183485 * ___singleton_35;

public:
	inline static int32_t get_offset_of_singleton_35() { return static_cast<int32_t>(offsetof(UIManager_t2519183485_StaticFields, ___singleton_35)); }
	inline UIManager_t2519183485 * get_singleton_35() const { return ___singleton_35; }
	inline UIManager_t2519183485 ** get_address_of_singleton_35() { return &___singleton_35; }
	inline void set_singleton_35(UIManager_t2519183485 * value)
	{
		___singleton_35 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
