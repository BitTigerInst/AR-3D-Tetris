#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[,,]
struct TransformU5BU2CU2CU5D_t3681339878;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game
struct  Game_t2211858  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Game::scoreOneLine
	int32_t ___scoreOneLine_5;
	// System.Int32 Game::scoreTwoLine
	int32_t ___scoreTwoLine_6;
	// System.Int32 Game::scoreThreeLine
	int32_t ___scoreThreeLine_7;
	// System.Int32 Game::numberOfRowsThisTurn
	int32_t ___numberOfRowsThisTurn_8;
	// UnityEngine.UI.Text Game::hud_score
	Text_t3286458198 * ___hud_score_9;

public:
	inline static int32_t get_offset_of_scoreOneLine_5() { return static_cast<int32_t>(offsetof(Game_t2211858, ___scoreOneLine_5)); }
	inline int32_t get_scoreOneLine_5() const { return ___scoreOneLine_5; }
	inline int32_t* get_address_of_scoreOneLine_5() { return &___scoreOneLine_5; }
	inline void set_scoreOneLine_5(int32_t value)
	{
		___scoreOneLine_5 = value;
	}

	inline static int32_t get_offset_of_scoreTwoLine_6() { return static_cast<int32_t>(offsetof(Game_t2211858, ___scoreTwoLine_6)); }
	inline int32_t get_scoreTwoLine_6() const { return ___scoreTwoLine_6; }
	inline int32_t* get_address_of_scoreTwoLine_6() { return &___scoreTwoLine_6; }
	inline void set_scoreTwoLine_6(int32_t value)
	{
		___scoreTwoLine_6 = value;
	}

	inline static int32_t get_offset_of_scoreThreeLine_7() { return static_cast<int32_t>(offsetof(Game_t2211858, ___scoreThreeLine_7)); }
	inline int32_t get_scoreThreeLine_7() const { return ___scoreThreeLine_7; }
	inline int32_t* get_address_of_scoreThreeLine_7() { return &___scoreThreeLine_7; }
	inline void set_scoreThreeLine_7(int32_t value)
	{
		___scoreThreeLine_7 = value;
	}

	inline static int32_t get_offset_of_numberOfRowsThisTurn_8() { return static_cast<int32_t>(offsetof(Game_t2211858, ___numberOfRowsThisTurn_8)); }
	inline int32_t get_numberOfRowsThisTurn_8() const { return ___numberOfRowsThisTurn_8; }
	inline int32_t* get_address_of_numberOfRowsThisTurn_8() { return &___numberOfRowsThisTurn_8; }
	inline void set_numberOfRowsThisTurn_8(int32_t value)
	{
		___numberOfRowsThisTurn_8 = value;
	}

	inline static int32_t get_offset_of_hud_score_9() { return static_cast<int32_t>(offsetof(Game_t2211858, ___hud_score_9)); }
	inline Text_t3286458198 * get_hud_score_9() const { return ___hud_score_9; }
	inline Text_t3286458198 ** get_address_of_hud_score_9() { return &___hud_score_9; }
	inline void set_hud_score_9(Text_t3286458198 * value)
	{
		___hud_score_9 = value;
		Il2CppCodeGenWriteBarrier(&___hud_score_9, value);
	}
};

struct Game_t2211858_StaticFields
{
public:
	// System.Int32 Game::gridWidth
	int32_t ___gridWidth_2;
	// System.Int32 Game::gridHeight
	int32_t ___gridHeight_3;
	// UnityEngine.Transform[,,] Game::grid
	TransformU5BU2CU2CU5D_t3681339878* ___grid_4;
	// System.Int32 Game::currentScore
	int32_t ___currentScore_10;

public:
	inline static int32_t get_offset_of_gridWidth_2() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___gridWidth_2)); }
	inline int32_t get_gridWidth_2() const { return ___gridWidth_2; }
	inline int32_t* get_address_of_gridWidth_2() { return &___gridWidth_2; }
	inline void set_gridWidth_2(int32_t value)
	{
		___gridWidth_2 = value;
	}

	inline static int32_t get_offset_of_gridHeight_3() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___gridHeight_3)); }
	inline int32_t get_gridHeight_3() const { return ___gridHeight_3; }
	inline int32_t* get_address_of_gridHeight_3() { return &___gridHeight_3; }
	inline void set_gridHeight_3(int32_t value)
	{
		___gridHeight_3 = value;
	}

	inline static int32_t get_offset_of_grid_4() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___grid_4)); }
	inline TransformU5BU2CU2CU5D_t3681339878* get_grid_4() const { return ___grid_4; }
	inline TransformU5BU2CU2CU5D_t3681339878** get_address_of_grid_4() { return &___grid_4; }
	inline void set_grid_4(TransformU5BU2CU2CU5D_t3681339878* value)
	{
		___grid_4 = value;
		Il2CppCodeGenWriteBarrier(&___grid_4, value);
	}

	inline static int32_t get_offset_of_currentScore_10() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___currentScore_10)); }
	inline int32_t get_currentScore_10() const { return ___currentScore_10; }
	inline int32_t* get_address_of_currentScore_10() { return &___currentScore_10; }
	inline void set_currentScore_10(int32_t value)
	{
		___currentScore_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
