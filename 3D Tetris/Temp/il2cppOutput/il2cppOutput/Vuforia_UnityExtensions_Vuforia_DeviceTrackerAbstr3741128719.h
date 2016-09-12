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
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTr3521081518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackerAbstractBehaviour
struct  DeviceTrackerAbstractBehaviour_t3741128719  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mAutoInitTracker
	bool ___mAutoInitTracker_4;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mAutoStartTracker
	bool ___mAutoStartTracker_5;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mPosePrediction
	bool ___mPosePrediction_6;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerAbstractBehaviour::mModelCorrectionMode
	int32_t ___mModelCorrectionMode_7;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mModelTransformEnabled
	bool ___mModelTransformEnabled_8;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerAbstractBehaviour::mModelTransform
	Vector3_t3525329789  ___mModelTransform_9;
	// System.Action Vuforia.DeviceTrackerAbstractBehaviour::mTrackerStarted
	Action_t437523947 * ___mTrackerStarted_10;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_11;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_12;

public:
	inline static int32_t get_offset_of_mAutoInitTracker_4() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mAutoInitTracker_4)); }
	inline bool get_mAutoInitTracker_4() const { return ___mAutoInitTracker_4; }
	inline bool* get_address_of_mAutoInitTracker_4() { return &___mAutoInitTracker_4; }
	inline void set_mAutoInitTracker_4(bool value)
	{
		___mAutoInitTracker_4 = value;
	}

	inline static int32_t get_offset_of_mAutoStartTracker_5() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mAutoStartTracker_5)); }
	inline bool get_mAutoStartTracker_5() const { return ___mAutoStartTracker_5; }
	inline bool* get_address_of_mAutoStartTracker_5() { return &___mAutoStartTracker_5; }
	inline void set_mAutoStartTracker_5(bool value)
	{
		___mAutoStartTracker_5 = value;
	}

	inline static int32_t get_offset_of_mPosePrediction_6() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mPosePrediction_6)); }
	inline bool get_mPosePrediction_6() const { return ___mPosePrediction_6; }
	inline bool* get_address_of_mPosePrediction_6() { return &___mPosePrediction_6; }
	inline void set_mPosePrediction_6(bool value)
	{
		___mPosePrediction_6 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionMode_7() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mModelCorrectionMode_7)); }
	inline int32_t get_mModelCorrectionMode_7() const { return ___mModelCorrectionMode_7; }
	inline int32_t* get_address_of_mModelCorrectionMode_7() { return &___mModelCorrectionMode_7; }
	inline void set_mModelCorrectionMode_7(int32_t value)
	{
		___mModelCorrectionMode_7 = value;
	}

	inline static int32_t get_offset_of_mModelTransformEnabled_8() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mModelTransformEnabled_8)); }
	inline bool get_mModelTransformEnabled_8() const { return ___mModelTransformEnabled_8; }
	inline bool* get_address_of_mModelTransformEnabled_8() { return &___mModelTransformEnabled_8; }
	inline void set_mModelTransformEnabled_8(bool value)
	{
		___mModelTransformEnabled_8 = value;
	}

	inline static int32_t get_offset_of_mModelTransform_9() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mModelTransform_9)); }
	inline Vector3_t3525329789  get_mModelTransform_9() const { return ___mModelTransform_9; }
	inline Vector3_t3525329789 * get_address_of_mModelTransform_9() { return &___mModelTransform_9; }
	inline void set_mModelTransform_9(Vector3_t3525329789  value)
	{
		___mModelTransform_9 = value;
	}

	inline static int32_t get_offset_of_mTrackerStarted_10() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mTrackerStarted_10)); }
	inline Action_t437523947 * get_mTrackerStarted_10() const { return ___mTrackerStarted_10; }
	inline Action_t437523947 ** get_address_of_mTrackerStarted_10() { return &___mTrackerStarted_10; }
	inline void set_mTrackerStarted_10(Action_t437523947 * value)
	{
		___mTrackerStarted_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackerStarted_10, value);
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_11() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mTrackerWasActiveBeforePause_11)); }
	inline bool get_mTrackerWasActiveBeforePause_11() const { return ___mTrackerWasActiveBeforePause_11; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_11() { return &___mTrackerWasActiveBeforePause_11; }
	inline void set_mTrackerWasActiveBeforePause_11(bool value)
	{
		___mTrackerWasActiveBeforePause_11 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_12() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719, ___mTrackerWasActiveBeforeDisabling_12)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_12() const { return ___mTrackerWasActiveBeforeDisabling_12; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_12() { return &___mTrackerWasActiveBeforeDisabling_12; }
	inline void set_mTrackerWasActiveBeforeDisabling_12(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_12 = value;
	}
};

struct DeviceTrackerAbstractBehaviour_t3741128719_StaticFields
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackerAbstractBehaviour::DEFAULT_HEAD_PIVOT
	Vector3_t3525329789  ___DEFAULT_HEAD_PIVOT_2;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerAbstractBehaviour::DEFAULT_HANDHELD_PIVOT
	Vector3_t3525329789  ___DEFAULT_HANDHELD_PIVOT_3;

public:
	inline static int32_t get_offset_of_DEFAULT_HEAD_PIVOT_2() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719_StaticFields, ___DEFAULT_HEAD_PIVOT_2)); }
	inline Vector3_t3525329789  get_DEFAULT_HEAD_PIVOT_2() const { return ___DEFAULT_HEAD_PIVOT_2; }
	inline Vector3_t3525329789 * get_address_of_DEFAULT_HEAD_PIVOT_2() { return &___DEFAULT_HEAD_PIVOT_2; }
	inline void set_DEFAULT_HEAD_PIVOT_2(Vector3_t3525329789  value)
	{
		___DEFAULT_HEAD_PIVOT_2 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_HANDHELD_PIVOT_3() { return static_cast<int32_t>(offsetof(DeviceTrackerAbstractBehaviour_t3741128719_StaticFields, ___DEFAULT_HANDHELD_PIVOT_3)); }
	inline Vector3_t3525329789  get_DEFAULT_HANDHELD_PIVOT_3() const { return ___DEFAULT_HANDHELD_PIVOT_3; }
	inline Vector3_t3525329789 * get_address_of_DEFAULT_HANDHELD_PIVOT_3() { return &___DEFAULT_HANDHELD_PIVOT_3; }
	inline void set_DEFAULT_HANDHELD_PIVOT_3(Vector3_t3525329789  value)
	{
		___DEFAULT_HANDHELD_PIVOT_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
