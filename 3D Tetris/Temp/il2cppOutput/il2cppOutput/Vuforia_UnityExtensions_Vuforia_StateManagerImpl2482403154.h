#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t2918256621;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t3224404807;
// Vuforia.WordManagerImpl
struct WordManagerImpl_t3107574521;
// Vuforia.VuMarkManagerImpl
struct VuMarkManagerImpl_t1125983895;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t3908005046;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "Vuforia_UnityExtensions_Vuforia_StateManager3907845906.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StateManagerImpl
struct  StateManagerImpl_t2482403154  : public StateManager_t3907845906
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mTrackableBehaviours
	Dictionary_2_t2918256621 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManagerImpl::mAutomaticallyCreatedBehaviours
	List_1_t3644373756 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mBehavioursMarkedForDeletion
	List_1_t3224404807 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mActiveTrackableBehaviours
	List_1_t3224404807 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManagerImpl Vuforia.StateManagerImpl::mWordManager
	WordManagerImpl_t3107574521 * ___mWordManager_4;
	// Vuforia.VuMarkManagerImpl Vuforia.StateManagerImpl::mVuMarkManager
	VuMarkManagerImpl_t1125983895 * ___mVuMarkManager_5;
	// Vuforia.DeviceTrackingManager Vuforia.StateManagerImpl::mDeviceTrackingManager
	DeviceTrackingManager_t3908005046 * ___mDeviceTrackingManager_6;
	// UnityEngine.GameObject Vuforia.StateManagerImpl::mCameraPositioningHelper
	GameObject_t4012695102 * ___mCameraPositioningHelper_7;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManagerImpl_t2482403154, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t2918256621 * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t2918256621 ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t2918256621 * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviours_0, value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManagerImpl_t2482403154, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_t3644373756 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_t3644373756 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_t3644373756 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier(&___mAutomaticallyCreatedBehaviours_1, value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManagerImpl_t2482403154, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_t3224404807 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_t3224404807 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_t3224404807 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier(&___mBehavioursMarkedForDeletion_2, value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManagerImpl_t2482403154, ___mActiveTrackableBehaviours_3)); }
	inline List_1_t3224404807 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_t3224404807 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_t3224404807 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveTrackableBehaviours_3, value);
	}

	inline static int32_t get_offset_of_mWordManager_4() { return static_cast<int32_t>(offsetof(StateManagerImpl_t2482403154, ___mWordManager_4)); }
	inline WordManagerImpl_t3107574521 * get_mWordManager_4() const { return ___mWordManager_4; }
	inline WordManagerImpl_t3107574521 ** get_address_of_mWordManager_4() { return &___mWordManager_4; }
	inline void set_mWordManager_4(WordManagerImpl_t3107574521 * value)
	{
		___mWordManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___mWordManager_4, value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_5() { return static_cast<int32_t>(offsetof(StateManagerImpl_t2482403154, ___mVuMarkManager_5)); }
	inline VuMarkManagerImpl_t1125983895 * get_mVuMarkManager_5() const { return ___mVuMarkManager_5; }
	inline VuMarkManagerImpl_t1125983895 ** get_address_of_mVuMarkManager_5() { return &___mVuMarkManager_5; }
	inline void set_mVuMarkManager_5(VuMarkManagerImpl_t1125983895 * value)
	{
		___mVuMarkManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkManager_5, value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_6() { return static_cast<int32_t>(offsetof(StateManagerImpl_t2482403154, ___mDeviceTrackingManager_6)); }
	inline DeviceTrackingManager_t3908005046 * get_mDeviceTrackingManager_6() const { return ___mDeviceTrackingManager_6; }
	inline DeviceTrackingManager_t3908005046 ** get_address_of_mDeviceTrackingManager_6() { return &___mDeviceTrackingManager_6; }
	inline void set_mDeviceTrackingManager_6(DeviceTrackingManager_t3908005046 * value)
	{
		___mDeviceTrackingManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___mDeviceTrackingManager_6, value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_7() { return static_cast<int32_t>(offsetof(StateManagerImpl_t2482403154, ___mCameraPositioningHelper_7)); }
	inline GameObject_t4012695102 * get_mCameraPositioningHelper_7() const { return ___mCameraPositioningHelper_7; }
	inline GameObject_t4012695102 ** get_address_of_mCameraPositioningHelper_7() { return &___mCameraPositioningHelper_7; }
	inline void set_mCameraPositioningHelper_7(GameObject_t4012695102 * value)
	{
		___mCameraPositioningHelper_7 = value;
		Il2CppCodeGenWriteBarrier(&___mCameraPositioningHelper_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
