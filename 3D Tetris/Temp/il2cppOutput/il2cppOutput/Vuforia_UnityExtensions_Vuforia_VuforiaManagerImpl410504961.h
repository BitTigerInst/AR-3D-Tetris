#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t2878848245;
// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t2828848869;
// UnityEngine.Transform
struct Transform_t284553113;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t3096477957;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t73087933;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t2015210476;
// Vuforia.VuforiaManagerImpl/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t1038867134;
// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t2036418093;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManagerImpl/IdPair>
struct LinkedList_1_t3924889535;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t1915856045;

#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager2943583809.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeh3547146410.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1711858500.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl2005158436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl
struct  VuforiaManagerImpl_t410504961  : public VuforiaManager_t2943583809
{
public:
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::mWorldCenterMode
	int32_t ___mWorldCenterMode_1;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::mWorldCenter
	Il2CppObject * ___mWorldCenter_2;
	// Vuforia.VuMarkAbstractBehaviour Vuforia.VuforiaManagerImpl::mVuMarkWorldCenter
	VuMarkAbstractBehaviour_t2828848869 * ___mVuMarkWorldCenter_3;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mARCameraTransform
	Transform_t284553113 * ___mARCameraTransform_4;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mCentralAnchorPoint
	Transform_t284553113 * ___mCentralAnchorPoint_5;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mParentAnchorPoint
	Transform_t284553113 * ___mParentAnchorPoint_6;
	// Vuforia.VuforiaManagerImpl/TrackableResultData[] Vuforia.VuforiaManagerImpl::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t3096477957* ___mTrackableResultDataArray_7;
	// Vuforia.VuforiaManagerImpl/WordData[] Vuforia.VuforiaManagerImpl::mWordDataArray
	WordDataU5BU5D_t73087933* ___mWordDataArray_8;
	// Vuforia.VuforiaManagerImpl/WordResultData[] Vuforia.VuforiaManagerImpl::mWordResultDataArray
	WordResultDataU5BU5D_t2015210476* ___mWordResultDataArray_9;
	// Vuforia.VuforiaManagerImpl/VuMarkTargetData[] Vuforia.VuforiaManagerImpl::mVuMarkDataArray
	VuMarkTargetDataU5BU5D_t1038867134* ___mVuMarkDataArray_10;
	// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[] Vuforia.VuforiaManagerImpl::mVuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t2036418093* ___mVuMarkResultDataArray_11;
	// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManagerImpl/IdPair> Vuforia.VuforiaManagerImpl::mTrackableFoundQueue
	LinkedList_1_t3924889535 * ___mTrackableFoundQueue_12;
	// System.IntPtr Vuforia.VuforiaManagerImpl::mImageHeaderData
	IntPtr_t ___mImageHeaderData_13;
	// System.Int32 Vuforia.VuforiaManagerImpl::mNumImageHeaders
	int32_t ___mNumImageHeaders_14;
	// System.Int32 Vuforia.VuforiaManagerImpl::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_15;
	// System.IntPtr Vuforia.VuforiaManagerImpl::mLastProcessedFrameStatePtr
	IntPtr_t ___mLastProcessedFrameStatePtr_16;
	// System.Boolean Vuforia.VuforiaManagerImpl::mInitialized
	bool ___mInitialized_17;
	// System.Boolean Vuforia.VuforiaManagerImpl::mPaused
	bool ___mPaused_18;
	// Vuforia.VuforiaManagerImpl/FrameState Vuforia.VuforiaManagerImpl::mFrameState
	FrameState_t1711858500  ___mFrameState_19;
	// Vuforia.VuforiaManagerImpl/AutoRotationState Vuforia.VuforiaManagerImpl::mAutoRotationState
	AutoRotationState_t2005158436  ___mAutoRotationState_20;
	// System.Boolean Vuforia.VuforiaManagerImpl::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_21;
	// System.Int32 Vuforia.VuforiaManagerImpl::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_22;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.VuforiaManagerImpl::mVideoBackgroundMgr
	VideoBackgroundManagerAbstractBehaviour_t1915856045 * ___mVideoBackgroundMgr_23;
	// System.Int32 Vuforia.VuforiaManagerImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_24;
	// System.Boolean Vuforia.VuforiaManagerImpl::mIsSeeThroughDevice
	bool ___mIsSeeThroughDevice_25;
	// System.Boolean Vuforia.VuforiaManagerImpl::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_1() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mWorldCenterMode_1)); }
	inline int32_t get_mWorldCenterMode_1() const { return ___mWorldCenterMode_1; }
	inline int32_t* get_address_of_mWorldCenterMode_1() { return &___mWorldCenterMode_1; }
	inline void set_mWorldCenterMode_1(int32_t value)
	{
		___mWorldCenterMode_1 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_2() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mWorldCenter_2)); }
	inline Il2CppObject * get_mWorldCenter_2() const { return ___mWorldCenter_2; }
	inline Il2CppObject ** get_address_of_mWorldCenter_2() { return &___mWorldCenter_2; }
	inline void set_mWorldCenter_2(Il2CppObject * value)
	{
		___mWorldCenter_2 = value;
		Il2CppCodeGenWriteBarrier(&___mWorldCenter_2, value);
	}

	inline static int32_t get_offset_of_mVuMarkWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mVuMarkWorldCenter_3)); }
	inline VuMarkAbstractBehaviour_t2828848869 * get_mVuMarkWorldCenter_3() const { return ___mVuMarkWorldCenter_3; }
	inline VuMarkAbstractBehaviour_t2828848869 ** get_address_of_mVuMarkWorldCenter_3() { return &___mVuMarkWorldCenter_3; }
	inline void set_mVuMarkWorldCenter_3(VuMarkAbstractBehaviour_t2828848869 * value)
	{
		___mVuMarkWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkWorldCenter_3, value);
	}

	inline static int32_t get_offset_of_mARCameraTransform_4() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mARCameraTransform_4)); }
	inline Transform_t284553113 * get_mARCameraTransform_4() const { return ___mARCameraTransform_4; }
	inline Transform_t284553113 ** get_address_of_mARCameraTransform_4() { return &___mARCameraTransform_4; }
	inline void set_mARCameraTransform_4(Transform_t284553113 * value)
	{
		___mARCameraTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___mARCameraTransform_4, value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_5() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mCentralAnchorPoint_5)); }
	inline Transform_t284553113 * get_mCentralAnchorPoint_5() const { return ___mCentralAnchorPoint_5; }
	inline Transform_t284553113 ** get_address_of_mCentralAnchorPoint_5() { return &___mCentralAnchorPoint_5; }
	inline void set_mCentralAnchorPoint_5(Transform_t284553113 * value)
	{
		___mCentralAnchorPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___mCentralAnchorPoint_5, value);
	}

	inline static int32_t get_offset_of_mParentAnchorPoint_6() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mParentAnchorPoint_6)); }
	inline Transform_t284553113 * get_mParentAnchorPoint_6() const { return ___mParentAnchorPoint_6; }
	inline Transform_t284553113 ** get_address_of_mParentAnchorPoint_6() { return &___mParentAnchorPoint_6; }
	inline void set_mParentAnchorPoint_6(Transform_t284553113 * value)
	{
		___mParentAnchorPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___mParentAnchorPoint_6, value);
	}

	inline static int32_t get_offset_of_mTrackableResultDataArray_7() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mTrackableResultDataArray_7)); }
	inline TrackableResultDataU5BU5D_t3096477957* get_mTrackableResultDataArray_7() const { return ___mTrackableResultDataArray_7; }
	inline TrackableResultDataU5BU5D_t3096477957** get_address_of_mTrackableResultDataArray_7() { return &___mTrackableResultDataArray_7; }
	inline void set_mTrackableResultDataArray_7(TrackableResultDataU5BU5D_t3096477957* value)
	{
		___mTrackableResultDataArray_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableResultDataArray_7, value);
	}

	inline static int32_t get_offset_of_mWordDataArray_8() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mWordDataArray_8)); }
	inline WordDataU5BU5D_t73087933* get_mWordDataArray_8() const { return ___mWordDataArray_8; }
	inline WordDataU5BU5D_t73087933** get_address_of_mWordDataArray_8() { return &___mWordDataArray_8; }
	inline void set_mWordDataArray_8(WordDataU5BU5D_t73087933* value)
	{
		___mWordDataArray_8 = value;
		Il2CppCodeGenWriteBarrier(&___mWordDataArray_8, value);
	}

	inline static int32_t get_offset_of_mWordResultDataArray_9() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mWordResultDataArray_9)); }
	inline WordResultDataU5BU5D_t2015210476* get_mWordResultDataArray_9() const { return ___mWordResultDataArray_9; }
	inline WordResultDataU5BU5D_t2015210476** get_address_of_mWordResultDataArray_9() { return &___mWordResultDataArray_9; }
	inline void set_mWordResultDataArray_9(WordResultDataU5BU5D_t2015210476* value)
	{
		___mWordResultDataArray_9 = value;
		Il2CppCodeGenWriteBarrier(&___mWordResultDataArray_9, value);
	}

	inline static int32_t get_offset_of_mVuMarkDataArray_10() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mVuMarkDataArray_10)); }
	inline VuMarkTargetDataU5BU5D_t1038867134* get_mVuMarkDataArray_10() const { return ___mVuMarkDataArray_10; }
	inline VuMarkTargetDataU5BU5D_t1038867134** get_address_of_mVuMarkDataArray_10() { return &___mVuMarkDataArray_10; }
	inline void set_mVuMarkDataArray_10(VuMarkTargetDataU5BU5D_t1038867134* value)
	{
		___mVuMarkDataArray_10 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkDataArray_10, value);
	}

	inline static int32_t get_offset_of_mVuMarkResultDataArray_11() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mVuMarkResultDataArray_11)); }
	inline VuMarkTargetResultDataU5BU5D_t2036418093* get_mVuMarkResultDataArray_11() const { return ___mVuMarkResultDataArray_11; }
	inline VuMarkTargetResultDataU5BU5D_t2036418093** get_address_of_mVuMarkResultDataArray_11() { return &___mVuMarkResultDataArray_11; }
	inline void set_mVuMarkResultDataArray_11(VuMarkTargetResultDataU5BU5D_t2036418093* value)
	{
		___mVuMarkResultDataArray_11 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkResultDataArray_11, value);
	}

	inline static int32_t get_offset_of_mTrackableFoundQueue_12() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mTrackableFoundQueue_12)); }
	inline LinkedList_1_t3924889535 * get_mTrackableFoundQueue_12() const { return ___mTrackableFoundQueue_12; }
	inline LinkedList_1_t3924889535 ** get_address_of_mTrackableFoundQueue_12() { return &___mTrackableFoundQueue_12; }
	inline void set_mTrackableFoundQueue_12(LinkedList_1_t3924889535 * value)
	{
		___mTrackableFoundQueue_12 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableFoundQueue_12, value);
	}

	inline static int32_t get_offset_of_mImageHeaderData_13() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mImageHeaderData_13)); }
	inline IntPtr_t get_mImageHeaderData_13() const { return ___mImageHeaderData_13; }
	inline IntPtr_t* get_address_of_mImageHeaderData_13() { return &___mImageHeaderData_13; }
	inline void set_mImageHeaderData_13(IntPtr_t value)
	{
		___mImageHeaderData_13 = value;
	}

	inline static int32_t get_offset_of_mNumImageHeaders_14() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mNumImageHeaders_14)); }
	inline int32_t get_mNumImageHeaders_14() const { return ___mNumImageHeaders_14; }
	inline int32_t* get_address_of_mNumImageHeaders_14() { return &___mNumImageHeaders_14; }
	inline void set_mNumImageHeaders_14(int32_t value)
	{
		___mNumImageHeaders_14 = value;
	}

	inline static int32_t get_offset_of_mInjectedFrameIdx_15() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mInjectedFrameIdx_15)); }
	inline int32_t get_mInjectedFrameIdx_15() const { return ___mInjectedFrameIdx_15; }
	inline int32_t* get_address_of_mInjectedFrameIdx_15() { return &___mInjectedFrameIdx_15; }
	inline void set_mInjectedFrameIdx_15(int32_t value)
	{
		___mInjectedFrameIdx_15 = value;
	}

	inline static int32_t get_offset_of_mLastProcessedFrameStatePtr_16() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mLastProcessedFrameStatePtr_16)); }
	inline IntPtr_t get_mLastProcessedFrameStatePtr_16() const { return ___mLastProcessedFrameStatePtr_16; }
	inline IntPtr_t* get_address_of_mLastProcessedFrameStatePtr_16() { return &___mLastProcessedFrameStatePtr_16; }
	inline void set_mLastProcessedFrameStatePtr_16(IntPtr_t value)
	{
		___mLastProcessedFrameStatePtr_16 = value;
	}

	inline static int32_t get_offset_of_mInitialized_17() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mInitialized_17)); }
	inline bool get_mInitialized_17() const { return ___mInitialized_17; }
	inline bool* get_address_of_mInitialized_17() { return &___mInitialized_17; }
	inline void set_mInitialized_17(bool value)
	{
		___mInitialized_17 = value;
	}

	inline static int32_t get_offset_of_mPaused_18() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mPaused_18)); }
	inline bool get_mPaused_18() const { return ___mPaused_18; }
	inline bool* get_address_of_mPaused_18() { return &___mPaused_18; }
	inline void set_mPaused_18(bool value)
	{
		___mPaused_18 = value;
	}

	inline static int32_t get_offset_of_mFrameState_19() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mFrameState_19)); }
	inline FrameState_t1711858500  get_mFrameState_19() const { return ___mFrameState_19; }
	inline FrameState_t1711858500 * get_address_of_mFrameState_19() { return &___mFrameState_19; }
	inline void set_mFrameState_19(FrameState_t1711858500  value)
	{
		___mFrameState_19 = value;
	}

	inline static int32_t get_offset_of_mAutoRotationState_20() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mAutoRotationState_20)); }
	inline AutoRotationState_t2005158436  get_mAutoRotationState_20() const { return ___mAutoRotationState_20; }
	inline AutoRotationState_t2005158436 * get_address_of_mAutoRotationState_20() { return &___mAutoRotationState_20; }
	inline void set_mAutoRotationState_20(AutoRotationState_t2005158436  value)
	{
		___mAutoRotationState_20 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundNeedsRedrawing_21() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mVideoBackgroundNeedsRedrawing_21)); }
	inline bool get_mVideoBackgroundNeedsRedrawing_21() const { return ___mVideoBackgroundNeedsRedrawing_21; }
	inline bool* get_address_of_mVideoBackgroundNeedsRedrawing_21() { return &___mVideoBackgroundNeedsRedrawing_21; }
	inline void set_mVideoBackgroundNeedsRedrawing_21(bool value)
	{
		___mVideoBackgroundNeedsRedrawing_21 = value;
	}

	inline static int32_t get_offset_of_mDiscardStatesForRendering_22() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mDiscardStatesForRendering_22)); }
	inline int32_t get_mDiscardStatesForRendering_22() const { return ___mDiscardStatesForRendering_22; }
	inline int32_t* get_address_of_mDiscardStatesForRendering_22() { return &___mDiscardStatesForRendering_22; }
	inline void set_mDiscardStatesForRendering_22(int32_t value)
	{
		___mDiscardStatesForRendering_22 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_23() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mVideoBackgroundMgr_23)); }
	inline VideoBackgroundManagerAbstractBehaviour_t1915856045 * get_mVideoBackgroundMgr_23() const { return ___mVideoBackgroundMgr_23; }
	inline VideoBackgroundManagerAbstractBehaviour_t1915856045 ** get_address_of_mVideoBackgroundMgr_23() { return &___mVideoBackgroundMgr_23; }
	inline void set_mVideoBackgroundMgr_23(VideoBackgroundManagerAbstractBehaviour_t1915856045 * value)
	{
		___mVideoBackgroundMgr_23 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundMgr_23, value);
	}

	inline static int32_t get_offset_of_mLastFrameIdx_24() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mLastFrameIdx_24)); }
	inline int32_t get_mLastFrameIdx_24() const { return ___mLastFrameIdx_24; }
	inline int32_t* get_address_of_mLastFrameIdx_24() { return &___mLastFrameIdx_24; }
	inline void set_mLastFrameIdx_24(int32_t value)
	{
		___mLastFrameIdx_24 = value;
	}

	inline static int32_t get_offset_of_mIsSeeThroughDevice_25() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mIsSeeThroughDevice_25)); }
	inline bool get_mIsSeeThroughDevice_25() const { return ___mIsSeeThroughDevice_25; }
	inline bool* get_address_of_mIsSeeThroughDevice_25() { return &___mIsSeeThroughDevice_25; }
	inline void set_mIsSeeThroughDevice_25(bool value)
	{
		___mIsSeeThroughDevice_25 = value;
	}

	inline static int32_t get_offset_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___U3CVideoBackgroundTextureSetU3Ek__BackingField_26)); }
	inline bool get_U3CVideoBackgroundTextureSetU3Ek__BackingField_26() const { return ___U3CVideoBackgroundTextureSetU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_26() { return &___U3CVideoBackgroundTextureSetU3Ek__BackingField_26; }
	inline void set_U3CVideoBackgroundTextureSetU3Ek__BackingField_26(bool value)
	{
		___U3CVideoBackgroundTextureSetU3Ek__BackingField_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
