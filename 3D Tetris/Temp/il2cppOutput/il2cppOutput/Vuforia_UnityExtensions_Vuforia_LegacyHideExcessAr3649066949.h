#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Camera
struct Camera_t3533968274;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t2427322319;
// Vuforia.HideExcessAreaAbstractBehaviour[]
struct HideExcessAreaAbstractBehaviourU5BU5D_t939284896;
// System.Collections.Generic.List`1<Vuforia.HideExcessAreaAbstractBehaviour>
struct List_1_t132499078;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.LegacyHideExcessAreaClipping
struct  LegacyHideExcessAreaClipping_t3649066949  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mGameObject
	GameObject_t4012695102 * ___mGameObject_0;
	// UnityEngine.Shader Vuforia.LegacyHideExcessAreaClipping::mMatteShader
	Shader_t3998140498 * ___mMatteShader_1;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mBgPlane
	GameObject_t4012695102 * ___mBgPlane_2;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mLeftPlane
	GameObject_t4012695102 * ___mLeftPlane_3;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mRightPlane
	GameObject_t4012695102 * ___mRightPlane_4;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mTopPlane
	GameObject_t4012695102 * ___mTopPlane_5;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mBottomPlane
	GameObject_t4012695102 * ___mBottomPlane_6;
	// UnityEngine.Camera Vuforia.LegacyHideExcessAreaClipping::mCamera
	Camera_t3533968274 * ___mCamera_7;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mBgPlaneLocalPos
	Vector3_t3525329789  ___mBgPlaneLocalPos_8;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mBgPlaneLocalScale
	Vector3_t3525329789  ___mBgPlaneLocalScale_9;
	// System.Single Vuforia.LegacyHideExcessAreaClipping::mCameraNearPlane
	float ___mCameraNearPlane_10;
	// UnityEngine.Rect Vuforia.LegacyHideExcessAreaClipping::mCameraPixelRect
	Rect_t1525428817  ___mCameraPixelRect_11;
	// System.Single Vuforia.LegacyHideExcessAreaClipping::mCameraFieldOFView
	float ___mCameraFieldOFView_12;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.LegacyHideExcessAreaClipping::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t2427322319 * ___mVuforiaBehaviour_13;
	// Vuforia.HideExcessAreaAbstractBehaviour[] Vuforia.LegacyHideExcessAreaClipping::mHideBehaviours
	HideExcessAreaAbstractBehaviourU5BU5D_t939284896* ___mHideBehaviours_14;
	// System.Collections.Generic.List`1<Vuforia.HideExcessAreaAbstractBehaviour> Vuforia.LegacyHideExcessAreaClipping::mDeactivatedHideBehaviours
	List_1_t132499078 * ___mDeactivatedHideBehaviours_15;
	// System.Boolean Vuforia.LegacyHideExcessAreaClipping::mPlanesActivated
	bool ___mPlanesActivated_16;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mLeftPlaneCachedScale
	Vector3_t3525329789  ___mLeftPlaneCachedScale_17;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mRightPlaneCachedScale
	Vector3_t3525329789  ___mRightPlaneCachedScale_18;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mBottomPlaneCachedScale
	Vector3_t3525329789  ___mBottomPlaneCachedScale_19;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mTopPlaneCachedScale
	Vector3_t3525329789  ___mTopPlaneCachedScale_20;

public:
	inline static int32_t get_offset_of_mGameObject_0() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mGameObject_0)); }
	inline GameObject_t4012695102 * get_mGameObject_0() const { return ___mGameObject_0; }
	inline GameObject_t4012695102 ** get_address_of_mGameObject_0() { return &___mGameObject_0; }
	inline void set_mGameObject_0(GameObject_t4012695102 * value)
	{
		___mGameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___mGameObject_0, value);
	}

	inline static int32_t get_offset_of_mMatteShader_1() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mMatteShader_1)); }
	inline Shader_t3998140498 * get_mMatteShader_1() const { return ___mMatteShader_1; }
	inline Shader_t3998140498 ** get_address_of_mMatteShader_1() { return &___mMatteShader_1; }
	inline void set_mMatteShader_1(Shader_t3998140498 * value)
	{
		___mMatteShader_1 = value;
		Il2CppCodeGenWriteBarrier(&___mMatteShader_1, value);
	}

	inline static int32_t get_offset_of_mBgPlane_2() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mBgPlane_2)); }
	inline GameObject_t4012695102 * get_mBgPlane_2() const { return ___mBgPlane_2; }
	inline GameObject_t4012695102 ** get_address_of_mBgPlane_2() { return &___mBgPlane_2; }
	inline void set_mBgPlane_2(GameObject_t4012695102 * value)
	{
		___mBgPlane_2 = value;
		Il2CppCodeGenWriteBarrier(&___mBgPlane_2, value);
	}

	inline static int32_t get_offset_of_mLeftPlane_3() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mLeftPlane_3)); }
	inline GameObject_t4012695102 * get_mLeftPlane_3() const { return ___mLeftPlane_3; }
	inline GameObject_t4012695102 ** get_address_of_mLeftPlane_3() { return &___mLeftPlane_3; }
	inline void set_mLeftPlane_3(GameObject_t4012695102 * value)
	{
		___mLeftPlane_3 = value;
		Il2CppCodeGenWriteBarrier(&___mLeftPlane_3, value);
	}

	inline static int32_t get_offset_of_mRightPlane_4() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mRightPlane_4)); }
	inline GameObject_t4012695102 * get_mRightPlane_4() const { return ___mRightPlane_4; }
	inline GameObject_t4012695102 ** get_address_of_mRightPlane_4() { return &___mRightPlane_4; }
	inline void set_mRightPlane_4(GameObject_t4012695102 * value)
	{
		___mRightPlane_4 = value;
		Il2CppCodeGenWriteBarrier(&___mRightPlane_4, value);
	}

	inline static int32_t get_offset_of_mTopPlane_5() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mTopPlane_5)); }
	inline GameObject_t4012695102 * get_mTopPlane_5() const { return ___mTopPlane_5; }
	inline GameObject_t4012695102 ** get_address_of_mTopPlane_5() { return &___mTopPlane_5; }
	inline void set_mTopPlane_5(GameObject_t4012695102 * value)
	{
		___mTopPlane_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTopPlane_5, value);
	}

	inline static int32_t get_offset_of_mBottomPlane_6() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mBottomPlane_6)); }
	inline GameObject_t4012695102 * get_mBottomPlane_6() const { return ___mBottomPlane_6; }
	inline GameObject_t4012695102 ** get_address_of_mBottomPlane_6() { return &___mBottomPlane_6; }
	inline void set_mBottomPlane_6(GameObject_t4012695102 * value)
	{
		___mBottomPlane_6 = value;
		Il2CppCodeGenWriteBarrier(&___mBottomPlane_6, value);
	}

	inline static int32_t get_offset_of_mCamera_7() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mCamera_7)); }
	inline Camera_t3533968274 * get_mCamera_7() const { return ___mCamera_7; }
	inline Camera_t3533968274 ** get_address_of_mCamera_7() { return &___mCamera_7; }
	inline void set_mCamera_7(Camera_t3533968274 * value)
	{
		___mCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___mCamera_7, value);
	}

	inline static int32_t get_offset_of_mBgPlaneLocalPos_8() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mBgPlaneLocalPos_8)); }
	inline Vector3_t3525329789  get_mBgPlaneLocalPos_8() const { return ___mBgPlaneLocalPos_8; }
	inline Vector3_t3525329789 * get_address_of_mBgPlaneLocalPos_8() { return &___mBgPlaneLocalPos_8; }
	inline void set_mBgPlaneLocalPos_8(Vector3_t3525329789  value)
	{
		___mBgPlaneLocalPos_8 = value;
	}

	inline static int32_t get_offset_of_mBgPlaneLocalScale_9() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mBgPlaneLocalScale_9)); }
	inline Vector3_t3525329789  get_mBgPlaneLocalScale_9() const { return ___mBgPlaneLocalScale_9; }
	inline Vector3_t3525329789 * get_address_of_mBgPlaneLocalScale_9() { return &___mBgPlaneLocalScale_9; }
	inline void set_mBgPlaneLocalScale_9(Vector3_t3525329789  value)
	{
		___mBgPlaneLocalScale_9 = value;
	}

	inline static int32_t get_offset_of_mCameraNearPlane_10() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mCameraNearPlane_10)); }
	inline float get_mCameraNearPlane_10() const { return ___mCameraNearPlane_10; }
	inline float* get_address_of_mCameraNearPlane_10() { return &___mCameraNearPlane_10; }
	inline void set_mCameraNearPlane_10(float value)
	{
		___mCameraNearPlane_10 = value;
	}

	inline static int32_t get_offset_of_mCameraPixelRect_11() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mCameraPixelRect_11)); }
	inline Rect_t1525428817  get_mCameraPixelRect_11() const { return ___mCameraPixelRect_11; }
	inline Rect_t1525428817 * get_address_of_mCameraPixelRect_11() { return &___mCameraPixelRect_11; }
	inline void set_mCameraPixelRect_11(Rect_t1525428817  value)
	{
		___mCameraPixelRect_11 = value;
	}

	inline static int32_t get_offset_of_mCameraFieldOFView_12() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mCameraFieldOFView_12)); }
	inline float get_mCameraFieldOFView_12() const { return ___mCameraFieldOFView_12; }
	inline float* get_address_of_mCameraFieldOFView_12() { return &___mCameraFieldOFView_12; }
	inline void set_mCameraFieldOFView_12(float value)
	{
		___mCameraFieldOFView_12 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_13() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mVuforiaBehaviour_13)); }
	inline VuforiaAbstractBehaviour_t2427322319 * get_mVuforiaBehaviour_13() const { return ___mVuforiaBehaviour_13; }
	inline VuforiaAbstractBehaviour_t2427322319 ** get_address_of_mVuforiaBehaviour_13() { return &___mVuforiaBehaviour_13; }
	inline void set_mVuforiaBehaviour_13(VuforiaAbstractBehaviour_t2427322319 * value)
	{
		___mVuforiaBehaviour_13 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_13, value);
	}

	inline static int32_t get_offset_of_mHideBehaviours_14() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mHideBehaviours_14)); }
	inline HideExcessAreaAbstractBehaviourU5BU5D_t939284896* get_mHideBehaviours_14() const { return ___mHideBehaviours_14; }
	inline HideExcessAreaAbstractBehaviourU5BU5D_t939284896** get_address_of_mHideBehaviours_14() { return &___mHideBehaviours_14; }
	inline void set_mHideBehaviours_14(HideExcessAreaAbstractBehaviourU5BU5D_t939284896* value)
	{
		___mHideBehaviours_14 = value;
		Il2CppCodeGenWriteBarrier(&___mHideBehaviours_14, value);
	}

	inline static int32_t get_offset_of_mDeactivatedHideBehaviours_15() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mDeactivatedHideBehaviours_15)); }
	inline List_1_t132499078 * get_mDeactivatedHideBehaviours_15() const { return ___mDeactivatedHideBehaviours_15; }
	inline List_1_t132499078 ** get_address_of_mDeactivatedHideBehaviours_15() { return &___mDeactivatedHideBehaviours_15; }
	inline void set_mDeactivatedHideBehaviours_15(List_1_t132499078 * value)
	{
		___mDeactivatedHideBehaviours_15 = value;
		Il2CppCodeGenWriteBarrier(&___mDeactivatedHideBehaviours_15, value);
	}

	inline static int32_t get_offset_of_mPlanesActivated_16() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mPlanesActivated_16)); }
	inline bool get_mPlanesActivated_16() const { return ___mPlanesActivated_16; }
	inline bool* get_address_of_mPlanesActivated_16() { return &___mPlanesActivated_16; }
	inline void set_mPlanesActivated_16(bool value)
	{
		___mPlanesActivated_16 = value;
	}

	inline static int32_t get_offset_of_mLeftPlaneCachedScale_17() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mLeftPlaneCachedScale_17)); }
	inline Vector3_t3525329789  get_mLeftPlaneCachedScale_17() const { return ___mLeftPlaneCachedScale_17; }
	inline Vector3_t3525329789 * get_address_of_mLeftPlaneCachedScale_17() { return &___mLeftPlaneCachedScale_17; }
	inline void set_mLeftPlaneCachedScale_17(Vector3_t3525329789  value)
	{
		___mLeftPlaneCachedScale_17 = value;
	}

	inline static int32_t get_offset_of_mRightPlaneCachedScale_18() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mRightPlaneCachedScale_18)); }
	inline Vector3_t3525329789  get_mRightPlaneCachedScale_18() const { return ___mRightPlaneCachedScale_18; }
	inline Vector3_t3525329789 * get_address_of_mRightPlaneCachedScale_18() { return &___mRightPlaneCachedScale_18; }
	inline void set_mRightPlaneCachedScale_18(Vector3_t3525329789  value)
	{
		___mRightPlaneCachedScale_18 = value;
	}

	inline static int32_t get_offset_of_mBottomPlaneCachedScale_19() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mBottomPlaneCachedScale_19)); }
	inline Vector3_t3525329789  get_mBottomPlaneCachedScale_19() const { return ___mBottomPlaneCachedScale_19; }
	inline Vector3_t3525329789 * get_address_of_mBottomPlaneCachedScale_19() { return &___mBottomPlaneCachedScale_19; }
	inline void set_mBottomPlaneCachedScale_19(Vector3_t3525329789  value)
	{
		___mBottomPlaneCachedScale_19 = value;
	}

	inline static int32_t get_offset_of_mTopPlaneCachedScale_20() { return static_cast<int32_t>(offsetof(LegacyHideExcessAreaClipping_t3649066949, ___mTopPlaneCachedScale_20)); }
	inline Vector3_t3525329789  get_mTopPlaneCachedScale_20() const { return ___mTopPlaneCachedScale_20; }
	inline Vector3_t3525329789 * get_address_of_mTopPlaneCachedScale_20() { return &___mTopPlaneCachedScale_20; }
	inline void set_mTopPlaneCachedScale_20(Vector3_t3525329789  value)
	{
		___mTopPlaneCachedScale_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
