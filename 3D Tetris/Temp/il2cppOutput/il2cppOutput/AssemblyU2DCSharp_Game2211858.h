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
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game
struct  Game_t2211858  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Game::fallSpeed
	float ___fallSpeed_2;
	// System.Int32 Game::currentLevel
	int32_t ___currentLevel_3;
	// System.Int32 Game::numOfRowsCleared
	int32_t ___numOfRowsCleared_4;
	// System.Int32 Game::scoreOneLine
	int32_t ___scoreOneLine_10;
	// System.Int32 Game::scoreTwoLine
	int32_t ___scoreTwoLine_11;
	// System.Int32 Game::scoreThreeLine
	int32_t ___scoreThreeLine_12;
	// System.Int32 Game::numberOfRowsThisTurn
	int32_t ___numberOfRowsThisTurn_13;
	// UnityEngine.UI.Text Game::hud_score
	Text_t3286458198 * ___hud_score_14;
	// UnityEngine.UI.Text Game::hud_level
	Text_t3286458198 * ___hud_level_15;
	// UnityEngine.UI.Text Game::hud_rows
	Text_t3286458198 * ___hud_rows_16;
	// System.Int32 Game::startingHighScore
	int32_t ___startingHighScore_18;
	// System.Int32 Game::startingHighScore2
	int32_t ___startingHighScore2_19;
	// System.Int32 Game::startingHighScore3
	int32_t ___startingHighScore3_20;
	// UnityEngine.AudioClip Game::clearRowSound
	AudioClip_t3714538611 * ___clearRowSound_21;
	// UnityEngine.AudioSource Game::audioSource
	AudioSource_t3628549054 * ___audioSource_22;
	// UnityEngine.GameObject Game::nextTetromino
	GameObject_t4012695102 * ___nextTetromino_23;
	// UnityEngine.GameObject Game::previewTetromino
	GameObject_t4012695102 * ___previewTetromino_24;
	// System.String Game::previewTetrominoName
	String_t* ___previewTetrominoName_25;
	// System.Boolean Game::gameStarted
	bool ___gameStarted_26;
	// UnityEngine.Vector3 Game::initTetrominoPosition
	Vector3_t3525329789  ___initTetrominoPosition_27;
	// UnityEngine.Vector3 Game::previewTetrominoPosition
	Vector3_t3525329789  ___previewTetrominoPosition_28;
	// UnityEngine.GameObject Game::liveTetromino
	GameObject_t4012695102 * ___liveTetromino_29;

public:
	inline static int32_t get_offset_of_fallSpeed_2() { return static_cast<int32_t>(offsetof(Game_t2211858, ___fallSpeed_2)); }
	inline float get_fallSpeed_2() const { return ___fallSpeed_2; }
	inline float* get_address_of_fallSpeed_2() { return &___fallSpeed_2; }
	inline void set_fallSpeed_2(float value)
	{
		___fallSpeed_2 = value;
	}

	inline static int32_t get_offset_of_currentLevel_3() { return static_cast<int32_t>(offsetof(Game_t2211858, ___currentLevel_3)); }
	inline int32_t get_currentLevel_3() const { return ___currentLevel_3; }
	inline int32_t* get_address_of_currentLevel_3() { return &___currentLevel_3; }
	inline void set_currentLevel_3(int32_t value)
	{
		___currentLevel_3 = value;
	}

	inline static int32_t get_offset_of_numOfRowsCleared_4() { return static_cast<int32_t>(offsetof(Game_t2211858, ___numOfRowsCleared_4)); }
	inline int32_t get_numOfRowsCleared_4() const { return ___numOfRowsCleared_4; }
	inline int32_t* get_address_of_numOfRowsCleared_4() { return &___numOfRowsCleared_4; }
	inline void set_numOfRowsCleared_4(int32_t value)
	{
		___numOfRowsCleared_4 = value;
	}

	inline static int32_t get_offset_of_scoreOneLine_10() { return static_cast<int32_t>(offsetof(Game_t2211858, ___scoreOneLine_10)); }
	inline int32_t get_scoreOneLine_10() const { return ___scoreOneLine_10; }
	inline int32_t* get_address_of_scoreOneLine_10() { return &___scoreOneLine_10; }
	inline void set_scoreOneLine_10(int32_t value)
	{
		___scoreOneLine_10 = value;
	}

	inline static int32_t get_offset_of_scoreTwoLine_11() { return static_cast<int32_t>(offsetof(Game_t2211858, ___scoreTwoLine_11)); }
	inline int32_t get_scoreTwoLine_11() const { return ___scoreTwoLine_11; }
	inline int32_t* get_address_of_scoreTwoLine_11() { return &___scoreTwoLine_11; }
	inline void set_scoreTwoLine_11(int32_t value)
	{
		___scoreTwoLine_11 = value;
	}

	inline static int32_t get_offset_of_scoreThreeLine_12() { return static_cast<int32_t>(offsetof(Game_t2211858, ___scoreThreeLine_12)); }
	inline int32_t get_scoreThreeLine_12() const { return ___scoreThreeLine_12; }
	inline int32_t* get_address_of_scoreThreeLine_12() { return &___scoreThreeLine_12; }
	inline void set_scoreThreeLine_12(int32_t value)
	{
		___scoreThreeLine_12 = value;
	}

	inline static int32_t get_offset_of_numberOfRowsThisTurn_13() { return static_cast<int32_t>(offsetof(Game_t2211858, ___numberOfRowsThisTurn_13)); }
	inline int32_t get_numberOfRowsThisTurn_13() const { return ___numberOfRowsThisTurn_13; }
	inline int32_t* get_address_of_numberOfRowsThisTurn_13() { return &___numberOfRowsThisTurn_13; }
	inline void set_numberOfRowsThisTurn_13(int32_t value)
	{
		___numberOfRowsThisTurn_13 = value;
	}

	inline static int32_t get_offset_of_hud_score_14() { return static_cast<int32_t>(offsetof(Game_t2211858, ___hud_score_14)); }
	inline Text_t3286458198 * get_hud_score_14() const { return ___hud_score_14; }
	inline Text_t3286458198 ** get_address_of_hud_score_14() { return &___hud_score_14; }
	inline void set_hud_score_14(Text_t3286458198 * value)
	{
		___hud_score_14 = value;
		Il2CppCodeGenWriteBarrier(&___hud_score_14, value);
	}

	inline static int32_t get_offset_of_hud_level_15() { return static_cast<int32_t>(offsetof(Game_t2211858, ___hud_level_15)); }
	inline Text_t3286458198 * get_hud_level_15() const { return ___hud_level_15; }
	inline Text_t3286458198 ** get_address_of_hud_level_15() { return &___hud_level_15; }
	inline void set_hud_level_15(Text_t3286458198 * value)
	{
		___hud_level_15 = value;
		Il2CppCodeGenWriteBarrier(&___hud_level_15, value);
	}

	inline static int32_t get_offset_of_hud_rows_16() { return static_cast<int32_t>(offsetof(Game_t2211858, ___hud_rows_16)); }
	inline Text_t3286458198 * get_hud_rows_16() const { return ___hud_rows_16; }
	inline Text_t3286458198 ** get_address_of_hud_rows_16() { return &___hud_rows_16; }
	inline void set_hud_rows_16(Text_t3286458198 * value)
	{
		___hud_rows_16 = value;
		Il2CppCodeGenWriteBarrier(&___hud_rows_16, value);
	}

	inline static int32_t get_offset_of_startingHighScore_18() { return static_cast<int32_t>(offsetof(Game_t2211858, ___startingHighScore_18)); }
	inline int32_t get_startingHighScore_18() const { return ___startingHighScore_18; }
	inline int32_t* get_address_of_startingHighScore_18() { return &___startingHighScore_18; }
	inline void set_startingHighScore_18(int32_t value)
	{
		___startingHighScore_18 = value;
	}

	inline static int32_t get_offset_of_startingHighScore2_19() { return static_cast<int32_t>(offsetof(Game_t2211858, ___startingHighScore2_19)); }
	inline int32_t get_startingHighScore2_19() const { return ___startingHighScore2_19; }
	inline int32_t* get_address_of_startingHighScore2_19() { return &___startingHighScore2_19; }
	inline void set_startingHighScore2_19(int32_t value)
	{
		___startingHighScore2_19 = value;
	}

	inline static int32_t get_offset_of_startingHighScore3_20() { return static_cast<int32_t>(offsetof(Game_t2211858, ___startingHighScore3_20)); }
	inline int32_t get_startingHighScore3_20() const { return ___startingHighScore3_20; }
	inline int32_t* get_address_of_startingHighScore3_20() { return &___startingHighScore3_20; }
	inline void set_startingHighScore3_20(int32_t value)
	{
		___startingHighScore3_20 = value;
	}

	inline static int32_t get_offset_of_clearRowSound_21() { return static_cast<int32_t>(offsetof(Game_t2211858, ___clearRowSound_21)); }
	inline AudioClip_t3714538611 * get_clearRowSound_21() const { return ___clearRowSound_21; }
	inline AudioClip_t3714538611 ** get_address_of_clearRowSound_21() { return &___clearRowSound_21; }
	inline void set_clearRowSound_21(AudioClip_t3714538611 * value)
	{
		___clearRowSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___clearRowSound_21, value);
	}

	inline static int32_t get_offset_of_audioSource_22() { return static_cast<int32_t>(offsetof(Game_t2211858, ___audioSource_22)); }
	inline AudioSource_t3628549054 * get_audioSource_22() const { return ___audioSource_22; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_22() { return &___audioSource_22; }
	inline void set_audioSource_22(AudioSource_t3628549054 * value)
	{
		___audioSource_22 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_22, value);
	}

	inline static int32_t get_offset_of_nextTetromino_23() { return static_cast<int32_t>(offsetof(Game_t2211858, ___nextTetromino_23)); }
	inline GameObject_t4012695102 * get_nextTetromino_23() const { return ___nextTetromino_23; }
	inline GameObject_t4012695102 ** get_address_of_nextTetromino_23() { return &___nextTetromino_23; }
	inline void set_nextTetromino_23(GameObject_t4012695102 * value)
	{
		___nextTetromino_23 = value;
		Il2CppCodeGenWriteBarrier(&___nextTetromino_23, value);
	}

	inline static int32_t get_offset_of_previewTetromino_24() { return static_cast<int32_t>(offsetof(Game_t2211858, ___previewTetromino_24)); }
	inline GameObject_t4012695102 * get_previewTetromino_24() const { return ___previewTetromino_24; }
	inline GameObject_t4012695102 ** get_address_of_previewTetromino_24() { return &___previewTetromino_24; }
	inline void set_previewTetromino_24(GameObject_t4012695102 * value)
	{
		___previewTetromino_24 = value;
		Il2CppCodeGenWriteBarrier(&___previewTetromino_24, value);
	}

	inline static int32_t get_offset_of_previewTetrominoName_25() { return static_cast<int32_t>(offsetof(Game_t2211858, ___previewTetrominoName_25)); }
	inline String_t* get_previewTetrominoName_25() const { return ___previewTetrominoName_25; }
	inline String_t** get_address_of_previewTetrominoName_25() { return &___previewTetrominoName_25; }
	inline void set_previewTetrominoName_25(String_t* value)
	{
		___previewTetrominoName_25 = value;
		Il2CppCodeGenWriteBarrier(&___previewTetrominoName_25, value);
	}

	inline static int32_t get_offset_of_gameStarted_26() { return static_cast<int32_t>(offsetof(Game_t2211858, ___gameStarted_26)); }
	inline bool get_gameStarted_26() const { return ___gameStarted_26; }
	inline bool* get_address_of_gameStarted_26() { return &___gameStarted_26; }
	inline void set_gameStarted_26(bool value)
	{
		___gameStarted_26 = value;
	}

	inline static int32_t get_offset_of_initTetrominoPosition_27() { return static_cast<int32_t>(offsetof(Game_t2211858, ___initTetrominoPosition_27)); }
	inline Vector3_t3525329789  get_initTetrominoPosition_27() const { return ___initTetrominoPosition_27; }
	inline Vector3_t3525329789 * get_address_of_initTetrominoPosition_27() { return &___initTetrominoPosition_27; }
	inline void set_initTetrominoPosition_27(Vector3_t3525329789  value)
	{
		___initTetrominoPosition_27 = value;
	}

	inline static int32_t get_offset_of_previewTetrominoPosition_28() { return static_cast<int32_t>(offsetof(Game_t2211858, ___previewTetrominoPosition_28)); }
	inline Vector3_t3525329789  get_previewTetrominoPosition_28() const { return ___previewTetrominoPosition_28; }
	inline Vector3_t3525329789 * get_address_of_previewTetrominoPosition_28() { return &___previewTetrominoPosition_28; }
	inline void set_previewTetrominoPosition_28(Vector3_t3525329789  value)
	{
		___previewTetrominoPosition_28 = value;
	}

	inline static int32_t get_offset_of_liveTetromino_29() { return static_cast<int32_t>(offsetof(Game_t2211858, ___liveTetromino_29)); }
	inline GameObject_t4012695102 * get_liveTetromino_29() const { return ___liveTetromino_29; }
	inline GameObject_t4012695102 ** get_address_of_liveTetromino_29() { return &___liveTetromino_29; }
	inline void set_liveTetromino_29(GameObject_t4012695102 * value)
	{
		___liveTetromino_29 = value;
		Il2CppCodeGenWriteBarrier(&___liveTetromino_29, value);
	}
};

struct Game_t2211858_StaticFields
{
public:
	// System.Boolean Game::startingAtLevelZero
	bool ___startingAtLevelZero_5;
	// System.Int32 Game::startingLevel
	int32_t ___startingLevel_6;
	// System.Int32 Game::gridWidth
	int32_t ___gridWidth_7;
	// System.Int32 Game::gridHeight
	int32_t ___gridHeight_8;
	// UnityEngine.Transform[,,] Game::grid
	TransformU5BU2CU2CU5D_t3681339878* ___grid_9;
	// System.Int32 Game::currentScore
	int32_t ___currentScore_17;

public:
	inline static int32_t get_offset_of_startingAtLevelZero_5() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___startingAtLevelZero_5)); }
	inline bool get_startingAtLevelZero_5() const { return ___startingAtLevelZero_5; }
	inline bool* get_address_of_startingAtLevelZero_5() { return &___startingAtLevelZero_5; }
	inline void set_startingAtLevelZero_5(bool value)
	{
		___startingAtLevelZero_5 = value;
	}

	inline static int32_t get_offset_of_startingLevel_6() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___startingLevel_6)); }
	inline int32_t get_startingLevel_6() const { return ___startingLevel_6; }
	inline int32_t* get_address_of_startingLevel_6() { return &___startingLevel_6; }
	inline void set_startingLevel_6(int32_t value)
	{
		___startingLevel_6 = value;
	}

	inline static int32_t get_offset_of_gridWidth_7() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___gridWidth_7)); }
	inline int32_t get_gridWidth_7() const { return ___gridWidth_7; }
	inline int32_t* get_address_of_gridWidth_7() { return &___gridWidth_7; }
	inline void set_gridWidth_7(int32_t value)
	{
		___gridWidth_7 = value;
	}

	inline static int32_t get_offset_of_gridHeight_8() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___gridHeight_8)); }
	inline int32_t get_gridHeight_8() const { return ___gridHeight_8; }
	inline int32_t* get_address_of_gridHeight_8() { return &___gridHeight_8; }
	inline void set_gridHeight_8(int32_t value)
	{
		___gridHeight_8 = value;
	}

	inline static int32_t get_offset_of_grid_9() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___grid_9)); }
	inline TransformU5BU2CU2CU5D_t3681339878* get_grid_9() const { return ___grid_9; }
	inline TransformU5BU2CU2CU5D_t3681339878** get_address_of_grid_9() { return &___grid_9; }
	inline void set_grid_9(TransformU5BU2CU2CU5D_t3681339878* value)
	{
		___grid_9 = value;
		Il2CppCodeGenWriteBarrier(&___grid_9, value);
	}

	inline static int32_t get_offset_of_currentScore_17() { return static_cast<int32_t>(offsetof(Game_t2211858_StaticFields, ___currentScore_17)); }
	inline int32_t get_currentScore_17() const { return ___currentScore_17; }
	inline int32_t* get_address_of_currentScore_17() { return &___currentScore_17; }
	inline void set_currentScore_17(int32_t value)
	{
		___currentScore_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
