#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainTrackerAbstractBehaviour
struct  SmartTerrainTrackerAbstractBehaviour_t1903063269  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoInitTracker
	bool ___mAutoInitTracker_2;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoStartTracker
	bool ___mAutoStartTracker_3;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoInitBuilder
	bool ___mAutoInitBuilder_4;
	// System.Single Vuforia.SmartTerrainTrackerAbstractBehaviour::mSceneUnitsToMillimeter
	float ___mSceneUnitsToMillimeter_5;
	// System.Action Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerStarted
	Action_t437523947 * ___mTrackerStarted_6;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_7;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_8;

public:
	inline static int32_t get_offset_of_mAutoInitTracker_2() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerAbstractBehaviour_t1903063269, ___mAutoInitTracker_2)); }
	inline bool get_mAutoInitTracker_2() const { return ___mAutoInitTracker_2; }
	inline bool* get_address_of_mAutoInitTracker_2() { return &___mAutoInitTracker_2; }
	inline void set_mAutoInitTracker_2(bool value)
	{
		___mAutoInitTracker_2 = value;
	}

	inline static int32_t get_offset_of_mAutoStartTracker_3() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerAbstractBehaviour_t1903063269, ___mAutoStartTracker_3)); }
	inline bool get_mAutoStartTracker_3() const { return ___mAutoStartTracker_3; }
	inline bool* get_address_of_mAutoStartTracker_3() { return &___mAutoStartTracker_3; }
	inline void set_mAutoStartTracker_3(bool value)
	{
		___mAutoStartTracker_3 = value;
	}

	inline static int32_t get_offset_of_mAutoInitBuilder_4() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerAbstractBehaviour_t1903063269, ___mAutoInitBuilder_4)); }
	inline bool get_mAutoInitBuilder_4() const { return ___mAutoInitBuilder_4; }
	inline bool* get_address_of_mAutoInitBuilder_4() { return &___mAutoInitBuilder_4; }
	inline void set_mAutoInitBuilder_4(bool value)
	{
		___mAutoInitBuilder_4 = value;
	}

	inline static int32_t get_offset_of_mSceneUnitsToMillimeter_5() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerAbstractBehaviour_t1903063269, ___mSceneUnitsToMillimeter_5)); }
	inline float get_mSceneUnitsToMillimeter_5() const { return ___mSceneUnitsToMillimeter_5; }
	inline float* get_address_of_mSceneUnitsToMillimeter_5() { return &___mSceneUnitsToMillimeter_5; }
	inline void set_mSceneUnitsToMillimeter_5(float value)
	{
		___mSceneUnitsToMillimeter_5 = value;
	}

	inline static int32_t get_offset_of_mTrackerStarted_6() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerAbstractBehaviour_t1903063269, ___mTrackerStarted_6)); }
	inline Action_t437523947 * get_mTrackerStarted_6() const { return ___mTrackerStarted_6; }
	inline Action_t437523947 ** get_address_of_mTrackerStarted_6() { return &___mTrackerStarted_6; }
	inline void set_mTrackerStarted_6(Action_t437523947 * value)
	{
		___mTrackerStarted_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackerStarted_6, value);
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_7() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerAbstractBehaviour_t1903063269, ___mTrackerWasActiveBeforePause_7)); }
	inline bool get_mTrackerWasActiveBeforePause_7() const { return ___mTrackerWasActiveBeforePause_7; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_7() { return &___mTrackerWasActiveBeforePause_7; }
	inline void set_mTrackerWasActiveBeforePause_7(bool value)
	{
		___mTrackerWasActiveBeforePause_7 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_8() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerAbstractBehaviour_t1903063269, ___mTrackerWasActiveBeforeDisabling_8)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_8() const { return ___mTrackerWasActiveBeforeDisabling_8; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_8() { return &___mTrackerWasActiveBeforeDisabling_8; }
	inline void set_mTrackerWasActiveBeforeDisabling_8(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
