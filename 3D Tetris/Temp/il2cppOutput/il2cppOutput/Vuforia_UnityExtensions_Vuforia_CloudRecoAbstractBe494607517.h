#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t3275326447;
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_t2583048298;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CloudRecoAbstractBehaviour
struct  CloudRecoAbstractBehaviour_t494607517  : public MonoBehaviour_t3012272455
{
public:
	// Vuforia.ObjectTracker Vuforia.CloudRecoAbstractBehaviour::mObjectTracker
	ObjectTracker_t3275326447 * ___mObjectTracker_2;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_3;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mInitSuccess
	bool ___mInitSuccess_4;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mCloudRecoStarted
	bool ___mCloudRecoStarted_5;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_6;
	// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler> Vuforia.CloudRecoAbstractBehaviour::mHandlers
	List_1_t2583048298 * ___mHandlers_7;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_8;
	// System.String Vuforia.CloudRecoAbstractBehaviour::AccessKey
	String_t* ___AccessKey_9;
	// System.String Vuforia.CloudRecoAbstractBehaviour::SecretKey
	String_t* ___SecretKey_10;

public:
	inline static int32_t get_offset_of_mObjectTracker_2() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___mObjectTracker_2)); }
	inline ObjectTracker_t3275326447 * get_mObjectTracker_2() const { return ___mObjectTracker_2; }
	inline ObjectTracker_t3275326447 ** get_address_of_mObjectTracker_2() { return &___mObjectTracker_2; }
	inline void set_mObjectTracker_2(ObjectTracker_t3275326447 * value)
	{
		___mObjectTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTracker_2, value);
	}

	inline static int32_t get_offset_of_mCurrentlyInitializing_3() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___mCurrentlyInitializing_3)); }
	inline bool get_mCurrentlyInitializing_3() const { return ___mCurrentlyInitializing_3; }
	inline bool* get_address_of_mCurrentlyInitializing_3() { return &___mCurrentlyInitializing_3; }
	inline void set_mCurrentlyInitializing_3(bool value)
	{
		___mCurrentlyInitializing_3 = value;
	}

	inline static int32_t get_offset_of_mInitSuccess_4() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___mInitSuccess_4)); }
	inline bool get_mInitSuccess_4() const { return ___mInitSuccess_4; }
	inline bool* get_address_of_mInitSuccess_4() { return &___mInitSuccess_4; }
	inline void set_mInitSuccess_4(bool value)
	{
		___mInitSuccess_4 = value;
	}

	inline static int32_t get_offset_of_mCloudRecoStarted_5() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___mCloudRecoStarted_5)); }
	inline bool get_mCloudRecoStarted_5() const { return ___mCloudRecoStarted_5; }
	inline bool* get_address_of_mCloudRecoStarted_5() { return &___mCloudRecoStarted_5; }
	inline void set_mCloudRecoStarted_5(bool value)
	{
		___mCloudRecoStarted_5 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_6() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___mOnInitializedCalled_6)); }
	inline bool get_mOnInitializedCalled_6() const { return ___mOnInitializedCalled_6; }
	inline bool* get_address_of_mOnInitializedCalled_6() { return &___mOnInitializedCalled_6; }
	inline void set_mOnInitializedCalled_6(bool value)
	{
		___mOnInitializedCalled_6 = value;
	}

	inline static int32_t get_offset_of_mHandlers_7() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___mHandlers_7)); }
	inline List_1_t2583048298 * get_mHandlers_7() const { return ___mHandlers_7; }
	inline List_1_t2583048298 ** get_address_of_mHandlers_7() { return &___mHandlers_7; }
	inline void set_mHandlers_7(List_1_t2583048298 * value)
	{
		___mHandlers_7 = value;
		Il2CppCodeGenWriteBarrier(&___mHandlers_7, value);
	}

	inline static int32_t get_offset_of_mTargetFinderStartedBeforeDisable_8() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___mTargetFinderStartedBeforeDisable_8)); }
	inline bool get_mTargetFinderStartedBeforeDisable_8() const { return ___mTargetFinderStartedBeforeDisable_8; }
	inline bool* get_address_of_mTargetFinderStartedBeforeDisable_8() { return &___mTargetFinderStartedBeforeDisable_8; }
	inline void set_mTargetFinderStartedBeforeDisable_8(bool value)
	{
		___mTargetFinderStartedBeforeDisable_8 = value;
	}

	inline static int32_t get_offset_of_AccessKey_9() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___AccessKey_9)); }
	inline String_t* get_AccessKey_9() const { return ___AccessKey_9; }
	inline String_t** get_address_of_AccessKey_9() { return &___AccessKey_9; }
	inline void set_AccessKey_9(String_t* value)
	{
		___AccessKey_9 = value;
		Il2CppCodeGenWriteBarrier(&___AccessKey_9, value);
	}

	inline static int32_t get_offset_of_SecretKey_10() { return static_cast<int32_t>(offsetof(CloudRecoAbstractBehaviour_t494607517, ___SecretKey_10)); }
	inline String_t* get_SecretKey_10() const { return ___SecretKey_10; }
	inline String_t** get_address_of_SecretKey_10() { return &___SecretKey_10; }
	inline void set_SecretKey_10(String_t* value)
	{
		___SecretKey_10 = value;
		Il2CppCodeGenWriteBarrier(&___SecretKey_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
