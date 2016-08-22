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
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t2427445838;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t4212701614;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t1045066239;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t1870691353;
// System.Action
struct Action_t437523947;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t2440735710;
// Vuforia.DigitalEyewearAbstractBehaviour
struct DigitalEyewearAbstractBehaviour_t1656621721;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t1915856045;
// UnityEngine.Material
struct Material_t1886596500;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t3576188904;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3616713278.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3423851962.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4253260020.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeh3547146410.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitE1722238648.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t2427322319  : public MonoBehaviour_t3012272455
{
public:
	// System.String Vuforia.VuforiaAbstractBehaviour::VuforiaLicenseKey
	String_t* ___VuforiaLicenseKey_2;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_3;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_4;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_5;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::CameraDirection
	int32_t ___CameraDirection_7;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_8;
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_9;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t2427445838 * ___mWorldCenter_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaAbstractBehaviour::mTrackerEventHandlers
	List_1_t4212701614 * ___mTrackerEventHandlers_11;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaAbstractBehaviour::mVideoBgEventHandlers
	List_1_t1045066239 * ___mVideoBgEventHandlers_12;
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitError
	Action_1_t1870691353 * ___mOnVuforiaInitError_13;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitialized
	Action_t437523947 * ___mOnVuforiaInitialized_14;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaStarted
	Action_t437523947 * ___mOnVuforiaStarted_15;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnTrackablesUpdated
	Action_t437523947 * ___mOnTrackablesUpdated_16;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mRenderOnUpdate
	Action_t437523947 * ___mRenderOnUpdate_17;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::mOnPause
	Action_1_t359458046 * ___mOnPause_18;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnBackgroundTextureChanged
	Action_t437523947 * ___mOnBackgroundTextureChanged_19;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_20;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStarted
	bool ___mHasStarted_21;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mFailedToInitialize
	bool ___mFailedToInitialize_22;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_23;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaAbstractBehaviour::mInitError
	int32_t ___mInitError_24;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::mCameraConfiguration
	Il2CppObject * ___mCameraConfiguration_25;
	// Vuforia.DigitalEyewearAbstractBehaviour Vuforia.VuforiaAbstractBehaviour::mEyewearBehaviour
	DigitalEyewearAbstractBehaviour_t1656621721 * ___mEyewearBehaviour_26;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.VuforiaAbstractBehaviour::mVideoBackgroundMgr
	VideoBackgroundManagerAbstractBehaviour_t1915856045 * ___mVideoBackgroundMgr_27;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mCheckStopCamera
	bool ___mCheckStopCamera_28;
	// UnityEngine.Material Vuforia.VuforiaAbstractBehaviour::mClearMaterial
	Material_t1886596500 * ___mClearMaterial_29;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMetalRendering
	bool ___mMetalRendering_30;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStartedOnce
	bool ___mHasStartedOnce_31;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_32;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_33;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_34;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforePause
	bool ___mMarkerTrackerWasActiveBeforePause_35;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforeDisabling
	bool ___mMarkerTrackerWasActiveBeforeDisabling_36;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_37;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaAbstractBehaviour::mTrackersRequestedToDeinit
	List_1_t3576188904 * ___mTrackersRequestedToDeinit_38;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyLeftProjectionMatrix
	bool ___mMissedToApplyLeftProjectionMatrix_39;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyRightProjectionMatrix
	bool ___mMissedToApplyRightProjectionMatrix_40;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mLeftProjectMatrixToApply
	Matrix4x4_t277289660  ___mLeftProjectMatrixToApply_41;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mRightProjectMatrixToApply
	Matrix4x4_t277289660  ___mRightProjectMatrixToApply_42;

public:
	inline static int32_t get_offset_of_VuforiaLicenseKey_2() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___VuforiaLicenseKey_2)); }
	inline String_t* get_VuforiaLicenseKey_2() const { return ___VuforiaLicenseKey_2; }
	inline String_t** get_address_of_VuforiaLicenseKey_2() { return &___VuforiaLicenseKey_2; }
	inline void set_VuforiaLicenseKey_2(String_t* value)
	{
		___VuforiaLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___VuforiaLicenseKey_2, value);
	}

	inline static int32_t get_offset_of_CameraDeviceModeSetting_3() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___CameraDeviceModeSetting_3)); }
	inline int32_t get_CameraDeviceModeSetting_3() const { return ___CameraDeviceModeSetting_3; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_3() { return &___CameraDeviceModeSetting_3; }
	inline void set_CameraDeviceModeSetting_3(int32_t value)
	{
		___CameraDeviceModeSetting_3 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_4() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___MaxSimultaneousImageTargets_4)); }
	inline int32_t get_MaxSimultaneousImageTargets_4() const { return ___MaxSimultaneousImageTargets_4; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_4() { return &___MaxSimultaneousImageTargets_4; }
	inline void set_MaxSimultaneousImageTargets_4(int32_t value)
	{
		___MaxSimultaneousImageTargets_4 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_5() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___MaxSimultaneousObjectTargets_5)); }
	inline int32_t get_MaxSimultaneousObjectTargets_5() const { return ___MaxSimultaneousObjectTargets_5; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_5() { return &___MaxSimultaneousObjectTargets_5; }
	inline void set_MaxSimultaneousObjectTargets_5(int32_t value)
	{
		___MaxSimultaneousObjectTargets_5 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_6() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___UseDelayedLoadingObjectTargets_6)); }
	inline bool get_UseDelayedLoadingObjectTargets_6() const { return ___UseDelayedLoadingObjectTargets_6; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_6() { return &___UseDelayedLoadingObjectTargets_6; }
	inline void set_UseDelayedLoadingObjectTargets_6(bool value)
	{
		___UseDelayedLoadingObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_7() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___CameraDirection_7)); }
	inline int32_t get_CameraDirection_7() const { return ___CameraDirection_7; }
	inline int32_t* get_address_of_CameraDirection_7() { return &___CameraDirection_7; }
	inline void set_CameraDirection_7(int32_t value)
	{
		___CameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___MirrorVideoBackground_8)); }
	inline int32_t get_MirrorVideoBackground_8() const { return ___MirrorVideoBackground_8; }
	inline int32_t* get_address_of_MirrorVideoBackground_8() { return &___MirrorVideoBackground_8; }
	inline void set_MirrorVideoBackground_8(int32_t value)
	{
		___MirrorVideoBackground_8 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_9() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mWorldCenterMode_9)); }
	inline int32_t get_mWorldCenterMode_9() const { return ___mWorldCenterMode_9; }
	inline int32_t* get_address_of_mWorldCenterMode_9() { return &___mWorldCenterMode_9; }
	inline void set_mWorldCenterMode_9(int32_t value)
	{
		___mWorldCenterMode_9 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_10() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mWorldCenter_10)); }
	inline TrackableBehaviour_t2427445838 * get_mWorldCenter_10() const { return ___mWorldCenter_10; }
	inline TrackableBehaviour_t2427445838 ** get_address_of_mWorldCenter_10() { return &___mWorldCenter_10; }
	inline void set_mWorldCenter_10(TrackableBehaviour_t2427445838 * value)
	{
		___mWorldCenter_10 = value;
		Il2CppCodeGenWriteBarrier(&___mWorldCenter_10, value);
	}

	inline static int32_t get_offset_of_mTrackerEventHandlers_11() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mTrackerEventHandlers_11)); }
	inline List_1_t4212701614 * get_mTrackerEventHandlers_11() const { return ___mTrackerEventHandlers_11; }
	inline List_1_t4212701614 ** get_address_of_mTrackerEventHandlers_11() { return &___mTrackerEventHandlers_11; }
	inline void set_mTrackerEventHandlers_11(List_1_t4212701614 * value)
	{
		___mTrackerEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackerEventHandlers_11, value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_12() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mVideoBgEventHandlers_12)); }
	inline List_1_t1045066239 * get_mVideoBgEventHandlers_12() const { return ___mVideoBgEventHandlers_12; }
	inline List_1_t1045066239 ** get_address_of_mVideoBgEventHandlers_12() { return &___mVideoBgEventHandlers_12; }
	inline void set_mVideoBgEventHandlers_12(List_1_t1045066239 * value)
	{
		___mVideoBgEventHandlers_12 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBgEventHandlers_12, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitError_13() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mOnVuforiaInitError_13)); }
	inline Action_1_t1870691353 * get_mOnVuforiaInitError_13() const { return ___mOnVuforiaInitError_13; }
	inline Action_1_t1870691353 ** get_address_of_mOnVuforiaInitError_13() { return &___mOnVuforiaInitError_13; }
	inline void set_mOnVuforiaInitError_13(Action_1_t1870691353 * value)
	{
		___mOnVuforiaInitError_13 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaInitError_13, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_14() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mOnVuforiaInitialized_14)); }
	inline Action_t437523947 * get_mOnVuforiaInitialized_14() const { return ___mOnVuforiaInitialized_14; }
	inline Action_t437523947 ** get_address_of_mOnVuforiaInitialized_14() { return &___mOnVuforiaInitialized_14; }
	inline void set_mOnVuforiaInitialized_14(Action_t437523947 * value)
	{
		___mOnVuforiaInitialized_14 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaInitialized_14, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_15() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mOnVuforiaStarted_15)); }
	inline Action_t437523947 * get_mOnVuforiaStarted_15() const { return ___mOnVuforiaStarted_15; }
	inline Action_t437523947 ** get_address_of_mOnVuforiaStarted_15() { return &___mOnVuforiaStarted_15; }
	inline void set_mOnVuforiaStarted_15(Action_t437523947 * value)
	{
		___mOnVuforiaStarted_15 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaStarted_15, value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_16() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mOnTrackablesUpdated_16)); }
	inline Action_t437523947 * get_mOnTrackablesUpdated_16() const { return ___mOnTrackablesUpdated_16; }
	inline Action_t437523947 ** get_address_of_mOnTrackablesUpdated_16() { return &___mOnTrackablesUpdated_16; }
	inline void set_mOnTrackablesUpdated_16(Action_t437523947 * value)
	{
		___mOnTrackablesUpdated_16 = value;
		Il2CppCodeGenWriteBarrier(&___mOnTrackablesUpdated_16, value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_17() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mRenderOnUpdate_17)); }
	inline Action_t437523947 * get_mRenderOnUpdate_17() const { return ___mRenderOnUpdate_17; }
	inline Action_t437523947 ** get_address_of_mRenderOnUpdate_17() { return &___mRenderOnUpdate_17; }
	inline void set_mRenderOnUpdate_17(Action_t437523947 * value)
	{
		___mRenderOnUpdate_17 = value;
		Il2CppCodeGenWriteBarrier(&___mRenderOnUpdate_17, value);
	}

	inline static int32_t get_offset_of_mOnPause_18() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mOnPause_18)); }
	inline Action_1_t359458046 * get_mOnPause_18() const { return ___mOnPause_18; }
	inline Action_1_t359458046 ** get_address_of_mOnPause_18() { return &___mOnPause_18; }
	inline void set_mOnPause_18(Action_1_t359458046 * value)
	{
		___mOnPause_18 = value;
		Il2CppCodeGenWriteBarrier(&___mOnPause_18, value);
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_19() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mOnBackgroundTextureChanged_19)); }
	inline Action_t437523947 * get_mOnBackgroundTextureChanged_19() const { return ___mOnBackgroundTextureChanged_19; }
	inline Action_t437523947 ** get_address_of_mOnBackgroundTextureChanged_19() { return &___mOnBackgroundTextureChanged_19; }
	inline void set_mOnBackgroundTextureChanged_19(Action_t437523947 * value)
	{
		___mOnBackgroundTextureChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___mOnBackgroundTextureChanged_19, value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_20() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mStartHasBeenInvoked_20)); }
	inline bool get_mStartHasBeenInvoked_20() const { return ___mStartHasBeenInvoked_20; }
	inline bool* get_address_of_mStartHasBeenInvoked_20() { return &___mStartHasBeenInvoked_20; }
	inline void set_mStartHasBeenInvoked_20(bool value)
	{
		___mStartHasBeenInvoked_20 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_21() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mHasStarted_21)); }
	inline bool get_mHasStarted_21() const { return ___mHasStarted_21; }
	inline bool* get_address_of_mHasStarted_21() { return &___mHasStarted_21; }
	inline void set_mHasStarted_21(bool value)
	{
		___mHasStarted_21 = value;
	}

	inline static int32_t get_offset_of_mFailedToInitialize_22() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mFailedToInitialize_22)); }
	inline bool get_mFailedToInitialize_22() const { return ___mFailedToInitialize_22; }
	inline bool* get_address_of_mFailedToInitialize_22() { return &___mFailedToInitialize_22; }
	inline void set_mFailedToInitialize_22(bool value)
	{
		___mFailedToInitialize_22 = value;
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_23() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mBackgroundTextureHasChanged_23)); }
	inline bool get_mBackgroundTextureHasChanged_23() const { return ___mBackgroundTextureHasChanged_23; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_23() { return &___mBackgroundTextureHasChanged_23; }
	inline void set_mBackgroundTextureHasChanged_23(bool value)
	{
		___mBackgroundTextureHasChanged_23 = value;
	}

	inline static int32_t get_offset_of_mInitError_24() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mInitError_24)); }
	inline int32_t get_mInitError_24() const { return ___mInitError_24; }
	inline int32_t* get_address_of_mInitError_24() { return &___mInitError_24; }
	inline void set_mInitError_24(int32_t value)
	{
		___mInitError_24 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_25() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mCameraConfiguration_25)); }
	inline Il2CppObject * get_mCameraConfiguration_25() const { return ___mCameraConfiguration_25; }
	inline Il2CppObject ** get_address_of_mCameraConfiguration_25() { return &___mCameraConfiguration_25; }
	inline void set_mCameraConfiguration_25(Il2CppObject * value)
	{
		___mCameraConfiguration_25 = value;
		Il2CppCodeGenWriteBarrier(&___mCameraConfiguration_25, value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_26() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mEyewearBehaviour_26)); }
	inline DigitalEyewearAbstractBehaviour_t1656621721 * get_mEyewearBehaviour_26() const { return ___mEyewearBehaviour_26; }
	inline DigitalEyewearAbstractBehaviour_t1656621721 ** get_address_of_mEyewearBehaviour_26() { return &___mEyewearBehaviour_26; }
	inline void set_mEyewearBehaviour_26(DigitalEyewearAbstractBehaviour_t1656621721 * value)
	{
		___mEyewearBehaviour_26 = value;
		Il2CppCodeGenWriteBarrier(&___mEyewearBehaviour_26, value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_27() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mVideoBackgroundMgr_27)); }
	inline VideoBackgroundManagerAbstractBehaviour_t1915856045 * get_mVideoBackgroundMgr_27() const { return ___mVideoBackgroundMgr_27; }
	inline VideoBackgroundManagerAbstractBehaviour_t1915856045 ** get_address_of_mVideoBackgroundMgr_27() { return &___mVideoBackgroundMgr_27; }
	inline void set_mVideoBackgroundMgr_27(VideoBackgroundManagerAbstractBehaviour_t1915856045 * value)
	{
		___mVideoBackgroundMgr_27 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundMgr_27, value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_28() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mCheckStopCamera_28)); }
	inline bool get_mCheckStopCamera_28() const { return ___mCheckStopCamera_28; }
	inline bool* get_address_of_mCheckStopCamera_28() { return &___mCheckStopCamera_28; }
	inline void set_mCheckStopCamera_28(bool value)
	{
		___mCheckStopCamera_28 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_29() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mClearMaterial_29)); }
	inline Material_t1886596500 * get_mClearMaterial_29() const { return ___mClearMaterial_29; }
	inline Material_t1886596500 ** get_address_of_mClearMaterial_29() { return &___mClearMaterial_29; }
	inline void set_mClearMaterial_29(Material_t1886596500 * value)
	{
		___mClearMaterial_29 = value;
		Il2CppCodeGenWriteBarrier(&___mClearMaterial_29, value);
	}

	inline static int32_t get_offset_of_mMetalRendering_30() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mMetalRendering_30)); }
	inline bool get_mMetalRendering_30() const { return ___mMetalRendering_30; }
	inline bool* get_address_of_mMetalRendering_30() { return &___mMetalRendering_30; }
	inline void set_mMetalRendering_30(bool value)
	{
		___mMetalRendering_30 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_31() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mHasStartedOnce_31)); }
	inline bool get_mHasStartedOnce_31() const { return ___mHasStartedOnce_31; }
	inline bool* get_address_of_mHasStartedOnce_31() { return &___mHasStartedOnce_31; }
	inline void set_mHasStartedOnce_31(bool value)
	{
		___mHasStartedOnce_31 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_32() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mWasEnabledBeforePause_32)); }
	inline bool get_mWasEnabledBeforePause_32() const { return ___mWasEnabledBeforePause_32; }
	inline bool* get_address_of_mWasEnabledBeforePause_32() { return &___mWasEnabledBeforePause_32; }
	inline void set_mWasEnabledBeforePause_32(bool value)
	{
		___mWasEnabledBeforePause_32 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_33() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mObjectTrackerWasActiveBeforePause_33)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_33() const { return ___mObjectTrackerWasActiveBeforePause_33; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_33() { return &___mObjectTrackerWasActiveBeforePause_33; }
	inline void set_mObjectTrackerWasActiveBeforePause_33(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_33 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_34() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mObjectTrackerWasActiveBeforeDisabling_34)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_34() const { return ___mObjectTrackerWasActiveBeforeDisabling_34; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_34() { return &___mObjectTrackerWasActiveBeforeDisabling_34; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_34(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_34 = value;
	}

	inline static int32_t get_offset_of_mMarkerTrackerWasActiveBeforePause_35() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mMarkerTrackerWasActiveBeforePause_35)); }
	inline bool get_mMarkerTrackerWasActiveBeforePause_35() const { return ___mMarkerTrackerWasActiveBeforePause_35; }
	inline bool* get_address_of_mMarkerTrackerWasActiveBeforePause_35() { return &___mMarkerTrackerWasActiveBeforePause_35; }
	inline void set_mMarkerTrackerWasActiveBeforePause_35(bool value)
	{
		___mMarkerTrackerWasActiveBeforePause_35 = value;
	}

	inline static int32_t get_offset_of_mMarkerTrackerWasActiveBeforeDisabling_36() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mMarkerTrackerWasActiveBeforeDisabling_36)); }
	inline bool get_mMarkerTrackerWasActiveBeforeDisabling_36() const { return ___mMarkerTrackerWasActiveBeforeDisabling_36; }
	inline bool* get_address_of_mMarkerTrackerWasActiveBeforeDisabling_36() { return &___mMarkerTrackerWasActiveBeforeDisabling_36; }
	inline void set_mMarkerTrackerWasActiveBeforeDisabling_36(bool value)
	{
		___mMarkerTrackerWasActiveBeforeDisabling_36 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_37() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mLastUpdatedFrame_37)); }
	inline int32_t get_mLastUpdatedFrame_37() const { return ___mLastUpdatedFrame_37; }
	inline int32_t* get_address_of_mLastUpdatedFrame_37() { return &___mLastUpdatedFrame_37; }
	inline void set_mLastUpdatedFrame_37(int32_t value)
	{
		___mLastUpdatedFrame_37 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_38() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mTrackersRequestedToDeinit_38)); }
	inline List_1_t3576188904 * get_mTrackersRequestedToDeinit_38() const { return ___mTrackersRequestedToDeinit_38; }
	inline List_1_t3576188904 ** get_address_of_mTrackersRequestedToDeinit_38() { return &___mTrackersRequestedToDeinit_38; }
	inline void set_mTrackersRequestedToDeinit_38(List_1_t3576188904 * value)
	{
		___mTrackersRequestedToDeinit_38 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackersRequestedToDeinit_38, value);
	}

	inline static int32_t get_offset_of_mMissedToApplyLeftProjectionMatrix_39() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mMissedToApplyLeftProjectionMatrix_39)); }
	inline bool get_mMissedToApplyLeftProjectionMatrix_39() const { return ___mMissedToApplyLeftProjectionMatrix_39; }
	inline bool* get_address_of_mMissedToApplyLeftProjectionMatrix_39() { return &___mMissedToApplyLeftProjectionMatrix_39; }
	inline void set_mMissedToApplyLeftProjectionMatrix_39(bool value)
	{
		___mMissedToApplyLeftProjectionMatrix_39 = value;
	}

	inline static int32_t get_offset_of_mMissedToApplyRightProjectionMatrix_40() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mMissedToApplyRightProjectionMatrix_40)); }
	inline bool get_mMissedToApplyRightProjectionMatrix_40() const { return ___mMissedToApplyRightProjectionMatrix_40; }
	inline bool* get_address_of_mMissedToApplyRightProjectionMatrix_40() { return &___mMissedToApplyRightProjectionMatrix_40; }
	inline void set_mMissedToApplyRightProjectionMatrix_40(bool value)
	{
		___mMissedToApplyRightProjectionMatrix_40 = value;
	}

	inline static int32_t get_offset_of_mLeftProjectMatrixToApply_41() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mLeftProjectMatrixToApply_41)); }
	inline Matrix4x4_t277289660  get_mLeftProjectMatrixToApply_41() const { return ___mLeftProjectMatrixToApply_41; }
	inline Matrix4x4_t277289660 * get_address_of_mLeftProjectMatrixToApply_41() { return &___mLeftProjectMatrixToApply_41; }
	inline void set_mLeftProjectMatrixToApply_41(Matrix4x4_t277289660  value)
	{
		___mLeftProjectMatrixToApply_41 = value;
	}

	inline static int32_t get_offset_of_mRightProjectMatrixToApply_42() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t2427322319, ___mRightProjectMatrixToApply_42)); }
	inline Matrix4x4_t277289660  get_mRightProjectMatrixToApply_42() const { return ___mRightProjectMatrixToApply_42; }
	inline Matrix4x4_t277289660 * get_address_of_mRightProjectMatrixToApply_42() { return &___mRightProjectMatrixToApply_42; }
	inline void set_mRightProjectMatrixToApply_42(Matrix4x4_t277289660  value)
	{
		___mRightProjectMatrixToApply_42 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
