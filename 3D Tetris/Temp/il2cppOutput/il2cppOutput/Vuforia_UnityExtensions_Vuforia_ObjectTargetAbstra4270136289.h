#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTarget
struct ObjectTarget_t1628866278;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "Vuforia_UnityExtensions_Vuforia_DataSetTrackableBe1793464454.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetAbstractBehaviour
struct  ObjectTargetAbstractBehaviour_t4270136289  : public DataSetTrackableBehaviour_t1793464454
{
public:
	// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::mObjectTarget
	Il2CppObject * ___mObjectTarget_20;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_21;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_22;
	// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_23;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMin
	Vector3_t3525329789  ___mBBoxMin_24;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMax
	Vector3_t3525329789  ___mBBoxMax_25;
	// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::mPreviewImage
	Texture2D_t2509538522 * ___mPreviewImage_26;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mLength
	float ___mLength_27;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mWidth
	float ___mWidth_28;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mHeight
	float ___mHeight_29;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mLastTransformScale
	float ___mLastTransformScale_30;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mLastSize
	Vector3_t3525329789  ___mLastSize_31;

public:
	inline static int32_t get_offset_of_mObjectTarget_20() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mObjectTarget_20)); }
	inline Il2CppObject * get_mObjectTarget_20() const { return ___mObjectTarget_20; }
	inline Il2CppObject ** get_address_of_mObjectTarget_20() { return &___mObjectTarget_20; }
	inline void set_mObjectTarget_20(Il2CppObject * value)
	{
		___mObjectTarget_20 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTarget_20, value);
	}

	inline static int32_t get_offset_of_mAspectRatioXY_21() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mAspectRatioXY_21)); }
	inline float get_mAspectRatioXY_21() const { return ___mAspectRatioXY_21; }
	inline float* get_address_of_mAspectRatioXY_21() { return &___mAspectRatioXY_21; }
	inline void set_mAspectRatioXY_21(float value)
	{
		___mAspectRatioXY_21 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_22() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mAspectRatioXZ_22)); }
	inline float get_mAspectRatioXZ_22() const { return ___mAspectRatioXZ_22; }
	inline float* get_address_of_mAspectRatioXZ_22() { return &___mAspectRatioXZ_22; }
	inline void set_mAspectRatioXZ_22(float value)
	{
		___mAspectRatioXZ_22 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_23() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mShowBoundingBox_23)); }
	inline bool get_mShowBoundingBox_23() const { return ___mShowBoundingBox_23; }
	inline bool* get_address_of_mShowBoundingBox_23() { return &___mShowBoundingBox_23; }
	inline void set_mShowBoundingBox_23(bool value)
	{
		___mShowBoundingBox_23 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_24() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mBBoxMin_24)); }
	inline Vector3_t3525329789  get_mBBoxMin_24() const { return ___mBBoxMin_24; }
	inline Vector3_t3525329789 * get_address_of_mBBoxMin_24() { return &___mBBoxMin_24; }
	inline void set_mBBoxMin_24(Vector3_t3525329789  value)
	{
		___mBBoxMin_24 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_25() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mBBoxMax_25)); }
	inline Vector3_t3525329789  get_mBBoxMax_25() const { return ___mBBoxMax_25; }
	inline Vector3_t3525329789 * get_address_of_mBBoxMax_25() { return &___mBBoxMax_25; }
	inline void set_mBBoxMax_25(Vector3_t3525329789  value)
	{
		___mBBoxMax_25 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_26() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mPreviewImage_26)); }
	inline Texture2D_t2509538522 * get_mPreviewImage_26() const { return ___mPreviewImage_26; }
	inline Texture2D_t2509538522 ** get_address_of_mPreviewImage_26() { return &___mPreviewImage_26; }
	inline void set_mPreviewImage_26(Texture2D_t2509538522 * value)
	{
		___mPreviewImage_26 = value;
		Il2CppCodeGenWriteBarrier(&___mPreviewImage_26, value);
	}

	inline static int32_t get_offset_of_mLength_27() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mLength_27)); }
	inline float get_mLength_27() const { return ___mLength_27; }
	inline float* get_address_of_mLength_27() { return &___mLength_27; }
	inline void set_mLength_27(float value)
	{
		___mLength_27 = value;
	}

	inline static int32_t get_offset_of_mWidth_28() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mWidth_28)); }
	inline float get_mWidth_28() const { return ___mWidth_28; }
	inline float* get_address_of_mWidth_28() { return &___mWidth_28; }
	inline void set_mWidth_28(float value)
	{
		___mWidth_28 = value;
	}

	inline static int32_t get_offset_of_mHeight_29() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mHeight_29)); }
	inline float get_mHeight_29() const { return ___mHeight_29; }
	inline float* get_address_of_mHeight_29() { return &___mHeight_29; }
	inline void set_mHeight_29(float value)
	{
		___mHeight_29 = value;
	}

	inline static int32_t get_offset_of_mLastTransformScale_30() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mLastTransformScale_30)); }
	inline float get_mLastTransformScale_30() const { return ___mLastTransformScale_30; }
	inline float* get_address_of_mLastTransformScale_30() { return &___mLastTransformScale_30; }
	inline void set_mLastTransformScale_30(float value)
	{
		___mLastTransformScale_30 = value;
	}

	inline static int32_t get_offset_of_mLastSize_31() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mLastSize_31)); }
	inline Vector3_t3525329789  get_mLastSize_31() const { return ___mLastSize_31; }
	inline Vector3_t3525329789 * get_address_of_mLastSize_31() { return &___mLastSize_31; }
	inline void set_mLastSize_31(Vector3_t3525329789  value)
	{
		___mLastSize_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
