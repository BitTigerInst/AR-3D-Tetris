#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tetromino
struct  Tetromino_t1668662749  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Tetromino::fall
	float ___fall_2;
	// System.Single Tetromino::fallSpeed
	float ___fallSpeed_3;
	// System.Int32 Tetromino::individualScore
	int32_t ___individualScore_4;
	// System.Single Tetromino::individualScoreTime
	float ___individualScoreTime_5;
	// UnityEngine.AudioClip Tetromino::moveSound
	AudioClip_t3714538611 * ___moveSound_6;
	// UnityEngine.AudioClip Tetromino::rotateSound
	AudioClip_t3714538611 * ___rotateSound_7;
	// UnityEngine.AudioClip Tetromino::landSound
	AudioClip_t3714538611 * ___landSound_8;
	// UnityEngine.AudioSource Tetromino::audioSource
	AudioSource_t3628549054 * ___audioSource_9;
	// System.Single Tetromino::continuosVerticalSpeed
	float ___continuosVerticalSpeed_10;
	// System.Single Tetromino::continuosHorizontalSpeed
	float ___continuosHorizontalSpeed_11;
	// System.Single Tetromino::buttonDownWaitMax
	float ___buttonDownWaitMax_12;
	// System.Single Tetromino::verticalTimer
	float ___verticalTimer_13;
	// System.Single Tetromino::horizontalTimer
	float ___horizontalTimer_14;
	// System.Single Tetromino::buttonDownWaitTimerHorizontal
	float ___buttonDownWaitTimerHorizontal_15;
	// System.Single Tetromino::buttonDownWaitTimerVertical
	float ___buttonDownWaitTimerVertical_16;
	// System.Boolean Tetromino::movedImmediateHorizontal
	bool ___movedImmediateHorizontal_17;
	// System.Boolean Tetromino::movedImmediateVertical
	bool ___movedImmediateVertical_18;

public:
	inline static int32_t get_offset_of_fall_2() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___fall_2)); }
	inline float get_fall_2() const { return ___fall_2; }
	inline float* get_address_of_fall_2() { return &___fall_2; }
	inline void set_fall_2(float value)
	{
		___fall_2 = value;
	}

	inline static int32_t get_offset_of_fallSpeed_3() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___fallSpeed_3)); }
	inline float get_fallSpeed_3() const { return ___fallSpeed_3; }
	inline float* get_address_of_fallSpeed_3() { return &___fallSpeed_3; }
	inline void set_fallSpeed_3(float value)
	{
		___fallSpeed_3 = value;
	}

	inline static int32_t get_offset_of_individualScore_4() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___individualScore_4)); }
	inline int32_t get_individualScore_4() const { return ___individualScore_4; }
	inline int32_t* get_address_of_individualScore_4() { return &___individualScore_4; }
	inline void set_individualScore_4(int32_t value)
	{
		___individualScore_4 = value;
	}

	inline static int32_t get_offset_of_individualScoreTime_5() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___individualScoreTime_5)); }
	inline float get_individualScoreTime_5() const { return ___individualScoreTime_5; }
	inline float* get_address_of_individualScoreTime_5() { return &___individualScoreTime_5; }
	inline void set_individualScoreTime_5(float value)
	{
		___individualScoreTime_5 = value;
	}

	inline static int32_t get_offset_of_moveSound_6() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___moveSound_6)); }
	inline AudioClip_t3714538611 * get_moveSound_6() const { return ___moveSound_6; }
	inline AudioClip_t3714538611 ** get_address_of_moveSound_6() { return &___moveSound_6; }
	inline void set_moveSound_6(AudioClip_t3714538611 * value)
	{
		___moveSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___moveSound_6, value);
	}

	inline static int32_t get_offset_of_rotateSound_7() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___rotateSound_7)); }
	inline AudioClip_t3714538611 * get_rotateSound_7() const { return ___rotateSound_7; }
	inline AudioClip_t3714538611 ** get_address_of_rotateSound_7() { return &___rotateSound_7; }
	inline void set_rotateSound_7(AudioClip_t3714538611 * value)
	{
		___rotateSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___rotateSound_7, value);
	}

	inline static int32_t get_offset_of_landSound_8() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___landSound_8)); }
	inline AudioClip_t3714538611 * get_landSound_8() const { return ___landSound_8; }
	inline AudioClip_t3714538611 ** get_address_of_landSound_8() { return &___landSound_8; }
	inline void set_landSound_8(AudioClip_t3714538611 * value)
	{
		___landSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___landSound_8, value);
	}

	inline static int32_t get_offset_of_audioSource_9() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___audioSource_9)); }
	inline AudioSource_t3628549054 * get_audioSource_9() const { return ___audioSource_9; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_9() { return &___audioSource_9; }
	inline void set_audioSource_9(AudioSource_t3628549054 * value)
	{
		___audioSource_9 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_9, value);
	}

	inline static int32_t get_offset_of_continuosVerticalSpeed_10() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___continuosVerticalSpeed_10)); }
	inline float get_continuosVerticalSpeed_10() const { return ___continuosVerticalSpeed_10; }
	inline float* get_address_of_continuosVerticalSpeed_10() { return &___continuosVerticalSpeed_10; }
	inline void set_continuosVerticalSpeed_10(float value)
	{
		___continuosVerticalSpeed_10 = value;
	}

	inline static int32_t get_offset_of_continuosHorizontalSpeed_11() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___continuosHorizontalSpeed_11)); }
	inline float get_continuosHorizontalSpeed_11() const { return ___continuosHorizontalSpeed_11; }
	inline float* get_address_of_continuosHorizontalSpeed_11() { return &___continuosHorizontalSpeed_11; }
	inline void set_continuosHorizontalSpeed_11(float value)
	{
		___continuosHorizontalSpeed_11 = value;
	}

	inline static int32_t get_offset_of_buttonDownWaitMax_12() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___buttonDownWaitMax_12)); }
	inline float get_buttonDownWaitMax_12() const { return ___buttonDownWaitMax_12; }
	inline float* get_address_of_buttonDownWaitMax_12() { return &___buttonDownWaitMax_12; }
	inline void set_buttonDownWaitMax_12(float value)
	{
		___buttonDownWaitMax_12 = value;
	}

	inline static int32_t get_offset_of_verticalTimer_13() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___verticalTimer_13)); }
	inline float get_verticalTimer_13() const { return ___verticalTimer_13; }
	inline float* get_address_of_verticalTimer_13() { return &___verticalTimer_13; }
	inline void set_verticalTimer_13(float value)
	{
		___verticalTimer_13 = value;
	}

	inline static int32_t get_offset_of_horizontalTimer_14() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___horizontalTimer_14)); }
	inline float get_horizontalTimer_14() const { return ___horizontalTimer_14; }
	inline float* get_address_of_horizontalTimer_14() { return &___horizontalTimer_14; }
	inline void set_horizontalTimer_14(float value)
	{
		___horizontalTimer_14 = value;
	}

	inline static int32_t get_offset_of_buttonDownWaitTimerHorizontal_15() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___buttonDownWaitTimerHorizontal_15)); }
	inline float get_buttonDownWaitTimerHorizontal_15() const { return ___buttonDownWaitTimerHorizontal_15; }
	inline float* get_address_of_buttonDownWaitTimerHorizontal_15() { return &___buttonDownWaitTimerHorizontal_15; }
	inline void set_buttonDownWaitTimerHorizontal_15(float value)
	{
		___buttonDownWaitTimerHorizontal_15 = value;
	}

	inline static int32_t get_offset_of_buttonDownWaitTimerVertical_16() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___buttonDownWaitTimerVertical_16)); }
	inline float get_buttonDownWaitTimerVertical_16() const { return ___buttonDownWaitTimerVertical_16; }
	inline float* get_address_of_buttonDownWaitTimerVertical_16() { return &___buttonDownWaitTimerVertical_16; }
	inline void set_buttonDownWaitTimerVertical_16(float value)
	{
		___buttonDownWaitTimerVertical_16 = value;
	}

	inline static int32_t get_offset_of_movedImmediateHorizontal_17() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___movedImmediateHorizontal_17)); }
	inline bool get_movedImmediateHorizontal_17() const { return ___movedImmediateHorizontal_17; }
	inline bool* get_address_of_movedImmediateHorizontal_17() { return &___movedImmediateHorizontal_17; }
	inline void set_movedImmediateHorizontal_17(bool value)
	{
		___movedImmediateHorizontal_17 = value;
	}

	inline static int32_t get_offset_of_movedImmediateVertical_18() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___movedImmediateVertical_18)); }
	inline bool get_movedImmediateVertical_18() const { return ___movedImmediateVertical_18; }
	inline bool* get_address_of_movedImmediateVertical_18() { return &___movedImmediateVertical_18; }
	inline void set_movedImmediateVertical_18(bool value)
	{
		___movedImmediateVertical_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
