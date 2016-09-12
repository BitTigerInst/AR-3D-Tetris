#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameMenu
struct  GameMenu_t2590240913  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text GameMenu::levelText
	Text_t3286458198 * ___levelText_2;
	// UnityEngine.UI.Text GameMenu::highScoreText
	Text_t3286458198 * ___highScoreText_3;
	// UnityEngine.UI.Text GameMenu::highScoreText2
	Text_t3286458198 * ___highScoreText2_4;
	// UnityEngine.UI.Text GameMenu::highScoreText3
	Text_t3286458198 * ___highScoreText3_5;

public:
	inline static int32_t get_offset_of_levelText_2() { return static_cast<int32_t>(offsetof(GameMenu_t2590240913, ___levelText_2)); }
	inline Text_t3286458198 * get_levelText_2() const { return ___levelText_2; }
	inline Text_t3286458198 ** get_address_of_levelText_2() { return &___levelText_2; }
	inline void set_levelText_2(Text_t3286458198 * value)
	{
		___levelText_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_2, value);
	}

	inline static int32_t get_offset_of_highScoreText_3() { return static_cast<int32_t>(offsetof(GameMenu_t2590240913, ___highScoreText_3)); }
	inline Text_t3286458198 * get_highScoreText_3() const { return ___highScoreText_3; }
	inline Text_t3286458198 ** get_address_of_highScoreText_3() { return &___highScoreText_3; }
	inline void set_highScoreText_3(Text_t3286458198 * value)
	{
		___highScoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText_3, value);
	}

	inline static int32_t get_offset_of_highScoreText2_4() { return static_cast<int32_t>(offsetof(GameMenu_t2590240913, ___highScoreText2_4)); }
	inline Text_t3286458198 * get_highScoreText2_4() const { return ___highScoreText2_4; }
	inline Text_t3286458198 ** get_address_of_highScoreText2_4() { return &___highScoreText2_4; }
	inline void set_highScoreText2_4(Text_t3286458198 * value)
	{
		___highScoreText2_4 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText2_4, value);
	}

	inline static int32_t get_offset_of_highScoreText3_5() { return static_cast<int32_t>(offsetof(GameMenu_t2590240913, ___highScoreText3_5)); }
	inline Text_t3286458198 * get_highScoreText3_5() const { return ___highScoreText3_5; }
	inline Text_t3286458198 ** get_address_of_highScoreText3_5() { return &___highScoreText3_5; }
	inline void set_highScoreText3_5(Text_t3286458198 * value)
	{
		___highScoreText3_5 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText3_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
