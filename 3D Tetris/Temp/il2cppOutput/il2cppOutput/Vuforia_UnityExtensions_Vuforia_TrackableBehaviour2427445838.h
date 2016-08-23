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
// Vuforia.Trackable
struct Trackable_t1174201883;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t3399675483;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2486352914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t2427445838  : public MonoBehaviour_t3012272455
{
public:
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_2;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_3;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_4;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3525329789  ___mPreviousScale_5;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_6;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	Il2CppObject * ___mTrackable_7;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t3399675483 * ___mTrackableEventHandlers_8;
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_mTrackableName_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t2427445838, ___mTrackableName_2)); }
	inline String_t* get_mTrackableName_2() const { return ___mTrackableName_2; }
	inline String_t** get_address_of_mTrackableName_2() { return &___mTrackableName_2; }
	inline void set_mTrackableName_2(String_t* value)
	{
		___mTrackableName_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableName_2, value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t2427445838, ___mPreserveChildSize_3)); }
	inline bool get_mPreserveChildSize_3() const { return ___mPreserveChildSize_3; }
	inline bool* get_address_of_mPreserveChildSize_3() { return &___mPreserveChildSize_3; }
	inline void set_mPreserveChildSize_3(bool value)
	{
		___mPreserveChildSize_3 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t2427445838, ___mInitializedInEditor_4)); }
	inline bool get_mInitializedInEditor_4() const { return ___mInitializedInEditor_4; }
	inline bool* get_address_of_mInitializedInEditor_4() { return &___mInitializedInEditor_4; }
	inline void set_mInitializedInEditor_4(bool value)
	{
		___mInitializedInEditor_4 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t2427445838, ___mPreviousScale_5)); }
	inline Vector3_t3525329789  get_mPreviousScale_5() const { return ___mPreviousScale_5; }
	inline Vector3_t3525329789 * get_address_of_mPreviousScale_5() { return &___mPreviousScale_5; }
	inline void set_mPreviousScale_5(Vector3_t3525329789  value)
	{
		___mPreviousScale_5 = value;
	}

	inline static int32_t get_offset_of_mStatus_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t2427445838, ___mStatus_6)); }
	inline int32_t get_mStatus_6() const { return ___mStatus_6; }
	inline int32_t* get_address_of_mStatus_6() { return &___mStatus_6; }
	inline void set_mStatus_6(int32_t value)
	{
		___mStatus_6 = value;
	}

	inline static int32_t get_offset_of_mTrackable_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t2427445838, ___mTrackable_7)); }
	inline Il2CppObject * get_mTrackable_7() const { return ___mTrackable_7; }
	inline Il2CppObject ** get_address_of_mTrackable_7() { return &___mTrackable_7; }
	inline void set_mTrackable_7(Il2CppObject * value)
	{
		___mTrackable_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackable_7, value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t2427445838, ___mTrackableEventHandlers_8)); }
	inline List_1_t3399675483 * get_mTrackableEventHandlers_8() const { return ___mTrackableEventHandlers_8; }
	inline List_1_t3399675483 ** get_address_of_mTrackableEventHandlers_8() { return &___mTrackableEventHandlers_8; }
	inline void set_mTrackableEventHandlers_8(List_1_t3399675483 * value)
	{
		___mTrackableEventHandlers_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableEventHandlers_8, value);
	}

	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t2427445838, ___U3CTimeStampU3Ek__BackingField_9)); }
	inline double get_U3CTimeStampU3Ek__BackingField_9() const { return ___U3CTimeStampU3Ek__BackingField_9; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_9() { return &___U3CTimeStampU3Ek__BackingField_9; }
	inline void set_U3CTimeStampU3Ek__BackingField_9(double value)
	{
		___U3CTimeStampU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
