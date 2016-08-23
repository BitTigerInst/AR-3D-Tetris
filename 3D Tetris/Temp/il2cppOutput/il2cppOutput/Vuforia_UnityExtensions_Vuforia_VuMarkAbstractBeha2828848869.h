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
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3068329980;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t3768668179;
// System.Action
struct Action_t437523947;

#include "Vuforia_UnityExtensions_Vuforia_DataSetTrackableBe1793464454.h"
#include "Vuforia_UnityExtensions_Vuforia_InstanceIdType1180610848.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkAbstractBehaviour
struct  VuMarkAbstractBehaviour_t2828848869  : public DataSetTrackableBehaviour_t1793464454
{
public:
	// System.Single Vuforia.VuMarkAbstractBehaviour::mAspectRatio
	float ___mAspectRatio_20;
	// System.Single Vuforia.VuMarkAbstractBehaviour::mWidth
	float ___mWidth_21;
	// System.Single Vuforia.VuMarkAbstractBehaviour::mHeight
	float ___mHeight_22;
	// System.String Vuforia.VuMarkAbstractBehaviour::mPreviewImage
	String_t* ___mPreviewImage_23;
	// Vuforia.InstanceIdType Vuforia.VuMarkAbstractBehaviour::mIdType
	int32_t ___mIdType_24;
	// System.Int32 Vuforia.VuMarkAbstractBehaviour::mIdLength
	int32_t ___mIdLength_25;
	// UnityEngine.Rect Vuforia.VuMarkAbstractBehaviour::mBoundingBox
	Rect_t1525428817  ___mBoundingBox_26;
	// UnityEngine.Vector2 Vuforia.VuMarkAbstractBehaviour::mOrigin
	Vector2_t3525329788  ___mOrigin_27;
	// System.Boolean Vuforia.VuMarkAbstractBehaviour::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_28;
	// Vuforia.VuMarkTemplate Vuforia.VuMarkAbstractBehaviour::mVuMarkTemplate
	Il2CppObject * ___mVuMarkTemplate_29;
	// Vuforia.VuMarkTarget Vuforia.VuMarkAbstractBehaviour::mVuMarkTarget
	Il2CppObject * ___mVuMarkTarget_30;
	// System.Int32 Vuforia.VuMarkAbstractBehaviour::mVuMarkResultId
	int32_t ___mVuMarkResultId_31;
	// System.Action Vuforia.VuMarkAbstractBehaviour::mOnTargetAssigned
	Action_t437523947 * ___mOnTargetAssigned_32;
	// System.Action Vuforia.VuMarkAbstractBehaviour::mOnTargetLost
	Action_t437523947 * ___mOnTargetLost_33;
	// System.Single Vuforia.VuMarkAbstractBehaviour::mLastTransformScale
	float ___mLastTransformScale_34;
	// UnityEngine.Vector2 Vuforia.VuMarkAbstractBehaviour::mLastSize
	Vector2_t3525329788  ___mLastSize_35;

public:
	inline static int32_t get_offset_of_mAspectRatio_20() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mAspectRatio_20)); }
	inline float get_mAspectRatio_20() const { return ___mAspectRatio_20; }
	inline float* get_address_of_mAspectRatio_20() { return &___mAspectRatio_20; }
	inline void set_mAspectRatio_20(float value)
	{
		___mAspectRatio_20 = value;
	}

	inline static int32_t get_offset_of_mWidth_21() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mWidth_21)); }
	inline float get_mWidth_21() const { return ___mWidth_21; }
	inline float* get_address_of_mWidth_21() { return &___mWidth_21; }
	inline void set_mWidth_21(float value)
	{
		___mWidth_21 = value;
	}

	inline static int32_t get_offset_of_mHeight_22() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mHeight_22)); }
	inline float get_mHeight_22() const { return ___mHeight_22; }
	inline float* get_address_of_mHeight_22() { return &___mHeight_22; }
	inline void set_mHeight_22(float value)
	{
		___mHeight_22 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_23() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mPreviewImage_23)); }
	inline String_t* get_mPreviewImage_23() const { return ___mPreviewImage_23; }
	inline String_t** get_address_of_mPreviewImage_23() { return &___mPreviewImage_23; }
	inline void set_mPreviewImage_23(String_t* value)
	{
		___mPreviewImage_23 = value;
		Il2CppCodeGenWriteBarrier(&___mPreviewImage_23, value);
	}

	inline static int32_t get_offset_of_mIdType_24() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mIdType_24)); }
	inline int32_t get_mIdType_24() const { return ___mIdType_24; }
	inline int32_t* get_address_of_mIdType_24() { return &___mIdType_24; }
	inline void set_mIdType_24(int32_t value)
	{
		___mIdType_24 = value;
	}

	inline static int32_t get_offset_of_mIdLength_25() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mIdLength_25)); }
	inline int32_t get_mIdLength_25() const { return ___mIdLength_25; }
	inline int32_t* get_address_of_mIdLength_25() { return &___mIdLength_25; }
	inline void set_mIdLength_25(int32_t value)
	{
		___mIdLength_25 = value;
	}

	inline static int32_t get_offset_of_mBoundingBox_26() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mBoundingBox_26)); }
	inline Rect_t1525428817  get_mBoundingBox_26() const { return ___mBoundingBox_26; }
	inline Rect_t1525428817 * get_address_of_mBoundingBox_26() { return &___mBoundingBox_26; }
	inline void set_mBoundingBox_26(Rect_t1525428817  value)
	{
		___mBoundingBox_26 = value;
	}

	inline static int32_t get_offset_of_mOrigin_27() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mOrigin_27)); }
	inline Vector2_t3525329788  get_mOrigin_27() const { return ___mOrigin_27; }
	inline Vector2_t3525329788 * get_address_of_mOrigin_27() { return &___mOrigin_27; }
	inline void set_mOrigin_27(Vector2_t3525329788  value)
	{
		___mOrigin_27 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_28() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mTrackingFromRuntimeAppearance_28)); }
	inline bool get_mTrackingFromRuntimeAppearance_28() const { return ___mTrackingFromRuntimeAppearance_28; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_28() { return &___mTrackingFromRuntimeAppearance_28; }
	inline void set_mTrackingFromRuntimeAppearance_28(bool value)
	{
		___mTrackingFromRuntimeAppearance_28 = value;
	}

	inline static int32_t get_offset_of_mVuMarkTemplate_29() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mVuMarkTemplate_29)); }
	inline Il2CppObject * get_mVuMarkTemplate_29() const { return ___mVuMarkTemplate_29; }
	inline Il2CppObject ** get_address_of_mVuMarkTemplate_29() { return &___mVuMarkTemplate_29; }
	inline void set_mVuMarkTemplate_29(Il2CppObject * value)
	{
		___mVuMarkTemplate_29 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkTemplate_29, value);
	}

	inline static int32_t get_offset_of_mVuMarkTarget_30() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mVuMarkTarget_30)); }
	inline Il2CppObject * get_mVuMarkTarget_30() const { return ___mVuMarkTarget_30; }
	inline Il2CppObject ** get_address_of_mVuMarkTarget_30() { return &___mVuMarkTarget_30; }
	inline void set_mVuMarkTarget_30(Il2CppObject * value)
	{
		___mVuMarkTarget_30 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkTarget_30, value);
	}

	inline static int32_t get_offset_of_mVuMarkResultId_31() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mVuMarkResultId_31)); }
	inline int32_t get_mVuMarkResultId_31() const { return ___mVuMarkResultId_31; }
	inline int32_t* get_address_of_mVuMarkResultId_31() { return &___mVuMarkResultId_31; }
	inline void set_mVuMarkResultId_31(int32_t value)
	{
		___mVuMarkResultId_31 = value;
	}

	inline static int32_t get_offset_of_mOnTargetAssigned_32() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mOnTargetAssigned_32)); }
	inline Action_t437523947 * get_mOnTargetAssigned_32() const { return ___mOnTargetAssigned_32; }
	inline Action_t437523947 ** get_address_of_mOnTargetAssigned_32() { return &___mOnTargetAssigned_32; }
	inline void set_mOnTargetAssigned_32(Action_t437523947 * value)
	{
		___mOnTargetAssigned_32 = value;
		Il2CppCodeGenWriteBarrier(&___mOnTargetAssigned_32, value);
	}

	inline static int32_t get_offset_of_mOnTargetLost_33() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mOnTargetLost_33)); }
	inline Action_t437523947 * get_mOnTargetLost_33() const { return ___mOnTargetLost_33; }
	inline Action_t437523947 ** get_address_of_mOnTargetLost_33() { return &___mOnTargetLost_33; }
	inline void set_mOnTargetLost_33(Action_t437523947 * value)
	{
		___mOnTargetLost_33 = value;
		Il2CppCodeGenWriteBarrier(&___mOnTargetLost_33, value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_34() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mLastTransformScale_34)); }
	inline float get_mLastTransformScale_34() const { return ___mLastTransformScale_34; }
	inline float* get_address_of_mLastTransformScale_34() { return &___mLastTransformScale_34; }
	inline void set_mLastTransformScale_34(float value)
	{
		___mLastTransformScale_34 = value;
	}

	inline static int32_t get_offset_of_mLastSize_35() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t2828848869, ___mLastSize_35)); }
	inline Vector2_t3525329788  get_mLastSize_35() const { return ___mLastSize_35; }
	inline Vector2_t3525329788 * get_address_of_mLastSize_35() { return &___mLastSize_35; }
	inline void set_mLastSize_35(Vector2_t3525329788  value)
	{
		___mLastSize_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
