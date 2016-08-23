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
// System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>
struct List_1_t95606309;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder2671902450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UserDefinedTargetBuildingAbstractBehaviour
struct  UserDefinedTargetBuildingAbstractBehaviour_t1530320750  : public MonoBehaviour_t3012272455
{
public:
	// Vuforia.ObjectTracker Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mObjectTracker
	ObjectTracker_t3275326447 * ___mObjectTracker_2;
	// Vuforia.ImageTargetBuilder/FrameQuality Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mLastFrameQuality
	int32_t ___mLastFrameQuality_3;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mCurrentlyScanning
	bool ___mCurrentlyScanning_4;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mWasScanningBeforeDisable
	bool ___mWasScanningBeforeDisable_5;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mCurrentlyBuilding
	bool ___mCurrentlyBuilding_6;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mWasBuildingBeforeDisable
	bool ___mWasBuildingBeforeDisable_7;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_8;
	// System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler> Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mHandlers
	List_1_t95606309 * ___mHandlers_9;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StopTrackerWhileScanning
	bool ___StopTrackerWhileScanning_10;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StartScanningAutomatically
	bool ___StartScanningAutomatically_11;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StopScanningWhenFinshedBuilding
	bool ___StopScanningWhenFinshedBuilding_12;

public:
	inline static int32_t get_offset_of_mObjectTracker_2() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___mObjectTracker_2)); }
	inline ObjectTracker_t3275326447 * get_mObjectTracker_2() const { return ___mObjectTracker_2; }
	inline ObjectTracker_t3275326447 ** get_address_of_mObjectTracker_2() { return &___mObjectTracker_2; }
	inline void set_mObjectTracker_2(ObjectTracker_t3275326447 * value)
	{
		___mObjectTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTracker_2, value);
	}

	inline static int32_t get_offset_of_mLastFrameQuality_3() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___mLastFrameQuality_3)); }
	inline int32_t get_mLastFrameQuality_3() const { return ___mLastFrameQuality_3; }
	inline int32_t* get_address_of_mLastFrameQuality_3() { return &___mLastFrameQuality_3; }
	inline void set_mLastFrameQuality_3(int32_t value)
	{
		___mLastFrameQuality_3 = value;
	}

	inline static int32_t get_offset_of_mCurrentlyScanning_4() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___mCurrentlyScanning_4)); }
	inline bool get_mCurrentlyScanning_4() const { return ___mCurrentlyScanning_4; }
	inline bool* get_address_of_mCurrentlyScanning_4() { return &___mCurrentlyScanning_4; }
	inline void set_mCurrentlyScanning_4(bool value)
	{
		___mCurrentlyScanning_4 = value;
	}

	inline static int32_t get_offset_of_mWasScanningBeforeDisable_5() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___mWasScanningBeforeDisable_5)); }
	inline bool get_mWasScanningBeforeDisable_5() const { return ___mWasScanningBeforeDisable_5; }
	inline bool* get_address_of_mWasScanningBeforeDisable_5() { return &___mWasScanningBeforeDisable_5; }
	inline void set_mWasScanningBeforeDisable_5(bool value)
	{
		___mWasScanningBeforeDisable_5 = value;
	}

	inline static int32_t get_offset_of_mCurrentlyBuilding_6() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___mCurrentlyBuilding_6)); }
	inline bool get_mCurrentlyBuilding_6() const { return ___mCurrentlyBuilding_6; }
	inline bool* get_address_of_mCurrentlyBuilding_6() { return &___mCurrentlyBuilding_6; }
	inline void set_mCurrentlyBuilding_6(bool value)
	{
		___mCurrentlyBuilding_6 = value;
	}

	inline static int32_t get_offset_of_mWasBuildingBeforeDisable_7() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___mWasBuildingBeforeDisable_7)); }
	inline bool get_mWasBuildingBeforeDisable_7() const { return ___mWasBuildingBeforeDisable_7; }
	inline bool* get_address_of_mWasBuildingBeforeDisable_7() { return &___mWasBuildingBeforeDisable_7; }
	inline void set_mWasBuildingBeforeDisable_7(bool value)
	{
		___mWasBuildingBeforeDisable_7 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_8() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___mOnInitializedCalled_8)); }
	inline bool get_mOnInitializedCalled_8() const { return ___mOnInitializedCalled_8; }
	inline bool* get_address_of_mOnInitializedCalled_8() { return &___mOnInitializedCalled_8; }
	inline void set_mOnInitializedCalled_8(bool value)
	{
		___mOnInitializedCalled_8 = value;
	}

	inline static int32_t get_offset_of_mHandlers_9() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___mHandlers_9)); }
	inline List_1_t95606309 * get_mHandlers_9() const { return ___mHandlers_9; }
	inline List_1_t95606309 ** get_address_of_mHandlers_9() { return &___mHandlers_9; }
	inline void set_mHandlers_9(List_1_t95606309 * value)
	{
		___mHandlers_9 = value;
		Il2CppCodeGenWriteBarrier(&___mHandlers_9, value);
	}

	inline static int32_t get_offset_of_StopTrackerWhileScanning_10() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___StopTrackerWhileScanning_10)); }
	inline bool get_StopTrackerWhileScanning_10() const { return ___StopTrackerWhileScanning_10; }
	inline bool* get_address_of_StopTrackerWhileScanning_10() { return &___StopTrackerWhileScanning_10; }
	inline void set_StopTrackerWhileScanning_10(bool value)
	{
		___StopTrackerWhileScanning_10 = value;
	}

	inline static int32_t get_offset_of_StartScanningAutomatically_11() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___StartScanningAutomatically_11)); }
	inline bool get_StartScanningAutomatically_11() const { return ___StartScanningAutomatically_11; }
	inline bool* get_address_of_StartScanningAutomatically_11() { return &___StartScanningAutomatically_11; }
	inline void set_StartScanningAutomatically_11(bool value)
	{
		___StartScanningAutomatically_11 = value;
	}

	inline static int32_t get_offset_of_StopScanningWhenFinshedBuilding_12() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingAbstractBehaviour_t1530320750, ___StopScanningWhenFinshedBuilding_12)); }
	inline bool get_StopScanningWhenFinshedBuilding_12() const { return ___StopScanningWhenFinshedBuilding_12; }
	inline bool* get_address_of_StopScanningWhenFinshedBuilding_12() { return &___StopScanningWhenFinshedBuilding_12; }
	inline void set_StopScanningWhenFinshedBuilding_12(bool value)
	{
		___StopScanningWhenFinshedBuilding_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
