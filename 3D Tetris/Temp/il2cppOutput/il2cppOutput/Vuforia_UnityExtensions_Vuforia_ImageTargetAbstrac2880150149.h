#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ImageTarget
struct ImageTarget_t2294340546;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
struct Dictionary_2_t2615444723;

#include "Vuforia_UnityExtensions_Vuforia_DataSetTrackableBe1793464454.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType942778652.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetAbstractBehaviour
struct  ImageTargetAbstractBehaviour_t2880150149  : public DataSetTrackableBehaviour_t1793464454
{
public:
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mAspectRatio
	float ___mAspectRatio_20;
	// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::mImageTargetType
	int32_t ___mImageTargetType_21;
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mWidth
	float ___mWidth_22;
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mHeight
	float ___mHeight_23;
	// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::mImageTarget
	Il2CppObject * ___mImageTarget_24;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t2615444723 * ___mVirtualButtonBehaviours_25;
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mLastTransformScale
	float ___mLastTransformScale_26;
	// UnityEngine.Vector2 Vuforia.ImageTargetAbstractBehaviour::mLastSize
	Vector2_t3525329788  ___mLastSize_27;

public:
	inline static int32_t get_offset_of_mAspectRatio_20() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mAspectRatio_20)); }
	inline float get_mAspectRatio_20() const { return ___mAspectRatio_20; }
	inline float* get_address_of_mAspectRatio_20() { return &___mAspectRatio_20; }
	inline void set_mAspectRatio_20(float value)
	{
		___mAspectRatio_20 = value;
	}

	inline static int32_t get_offset_of_mImageTargetType_21() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mImageTargetType_21)); }
	inline int32_t get_mImageTargetType_21() const { return ___mImageTargetType_21; }
	inline int32_t* get_address_of_mImageTargetType_21() { return &___mImageTargetType_21; }
	inline void set_mImageTargetType_21(int32_t value)
	{
		___mImageTargetType_21 = value;
	}

	inline static int32_t get_offset_of_mWidth_22() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mWidth_22)); }
	inline float get_mWidth_22() const { return ___mWidth_22; }
	inline float* get_address_of_mWidth_22() { return &___mWidth_22; }
	inline void set_mWidth_22(float value)
	{
		___mWidth_22 = value;
	}

	inline static int32_t get_offset_of_mHeight_23() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mHeight_23)); }
	inline float get_mHeight_23() const { return ___mHeight_23; }
	inline float* get_address_of_mHeight_23() { return &___mHeight_23; }
	inline void set_mHeight_23(float value)
	{
		___mHeight_23 = value;
	}

	inline static int32_t get_offset_of_mImageTarget_24() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mImageTarget_24)); }
	inline Il2CppObject * get_mImageTarget_24() const { return ___mImageTarget_24; }
	inline Il2CppObject ** get_address_of_mImageTarget_24() { return &___mImageTarget_24; }
	inline void set_mImageTarget_24(Il2CppObject * value)
	{
		___mImageTarget_24 = value;
		Il2CppCodeGenWriteBarrier(&___mImageTarget_24, value);
	}

	inline static int32_t get_offset_of_mVirtualButtonBehaviours_25() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mVirtualButtonBehaviours_25)); }
	inline Dictionary_2_t2615444723 * get_mVirtualButtonBehaviours_25() const { return ___mVirtualButtonBehaviours_25; }
	inline Dictionary_2_t2615444723 ** get_address_of_mVirtualButtonBehaviours_25() { return &___mVirtualButtonBehaviours_25; }
	inline void set_mVirtualButtonBehaviours_25(Dictionary_2_t2615444723 * value)
	{
		___mVirtualButtonBehaviours_25 = value;
		Il2CppCodeGenWriteBarrier(&___mVirtualButtonBehaviours_25, value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_26() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mLastTransformScale_26)); }
	inline float get_mLastTransformScale_26() const { return ___mLastTransformScale_26; }
	inline float* get_address_of_mLastTransformScale_26() { return &___mLastTransformScale_26; }
	inline void set_mLastTransformScale_26(float value)
	{
		___mLastTransformScale_26 = value;
	}

	inline static int32_t get_offset_of_mLastSize_27() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mLastSize_27)); }
	inline Vector2_t3525329788  get_mLastSize_27() const { return ___mLastSize_27; }
	inline Vector2_t3525329788 * get_address_of_mLastSize_27() { return &___mLastSize_27; }
	inline void set_mLastSize_27(Vector2_t3525329788  value)
	{
		___mLastSize_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
