#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Trackable
struct Trackable_t1174201883;

#include "Vuforia_UnityExtensions_Vuforia_ReconstructionImpl518518778.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ReconstructionFromTargetImpl
struct  ReconstructionFromTargetImpl_t3639963509  : public ReconstructionImpl_t518518778
{
public:
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderMin
	Vector3_t3525329789  ___mOccluderMin_5;
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderMax
	Vector3_t3525329789  ___mOccluderMax_6;
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderOffset
	Vector3_t3525329789  ___mOccluderOffset_7;
	// UnityEngine.Quaternion Vuforia.ReconstructionFromTargetImpl::mOccluderRotation
	Quaternion_t1891715979  ___mOccluderRotation_8;
	// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::mInitializationTarget
	Il2CppObject * ___mInitializationTarget_9;
	// System.Boolean Vuforia.ReconstructionFromTargetImpl::mCanAutoSetInitializationTarget
	bool ___mCanAutoSetInitializationTarget_10;

public:
	inline static int32_t get_offset_of_mOccluderMin_5() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetImpl_t3639963509, ___mOccluderMin_5)); }
	inline Vector3_t3525329789  get_mOccluderMin_5() const { return ___mOccluderMin_5; }
	inline Vector3_t3525329789 * get_address_of_mOccluderMin_5() { return &___mOccluderMin_5; }
	inline void set_mOccluderMin_5(Vector3_t3525329789  value)
	{
		___mOccluderMin_5 = value;
	}

	inline static int32_t get_offset_of_mOccluderMax_6() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetImpl_t3639963509, ___mOccluderMax_6)); }
	inline Vector3_t3525329789  get_mOccluderMax_6() const { return ___mOccluderMax_6; }
	inline Vector3_t3525329789 * get_address_of_mOccluderMax_6() { return &___mOccluderMax_6; }
	inline void set_mOccluderMax_6(Vector3_t3525329789  value)
	{
		___mOccluderMax_6 = value;
	}

	inline static int32_t get_offset_of_mOccluderOffset_7() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetImpl_t3639963509, ___mOccluderOffset_7)); }
	inline Vector3_t3525329789  get_mOccluderOffset_7() const { return ___mOccluderOffset_7; }
	inline Vector3_t3525329789 * get_address_of_mOccluderOffset_7() { return &___mOccluderOffset_7; }
	inline void set_mOccluderOffset_7(Vector3_t3525329789  value)
	{
		___mOccluderOffset_7 = value;
	}

	inline static int32_t get_offset_of_mOccluderRotation_8() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetImpl_t3639963509, ___mOccluderRotation_8)); }
	inline Quaternion_t1891715979  get_mOccluderRotation_8() const { return ___mOccluderRotation_8; }
	inline Quaternion_t1891715979 * get_address_of_mOccluderRotation_8() { return &___mOccluderRotation_8; }
	inline void set_mOccluderRotation_8(Quaternion_t1891715979  value)
	{
		___mOccluderRotation_8 = value;
	}

	inline static int32_t get_offset_of_mInitializationTarget_9() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetImpl_t3639963509, ___mInitializationTarget_9)); }
	inline Il2CppObject * get_mInitializationTarget_9() const { return ___mInitializationTarget_9; }
	inline Il2CppObject ** get_address_of_mInitializationTarget_9() { return &___mInitializationTarget_9; }
	inline void set_mInitializationTarget_9(Il2CppObject * value)
	{
		___mInitializationTarget_9 = value;
		Il2CppCodeGenWriteBarrier(&___mInitializationTarget_9, value);
	}

	inline static int32_t get_offset_of_mCanAutoSetInitializationTarget_10() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetImpl_t3639963509, ___mCanAutoSetInitializationTarget_10)); }
	inline bool get_mCanAutoSetInitializationTarget_10() const { return ___mCanAutoSetInitializationTarget_10; }
	inline bool* get_address_of_mCanAutoSetInitializationTarget_10() { return &___mCanAutoSetInitializationTarget_10; }
	inline void set_mCanAutoSetInitializationTarget_10(bool value)
	{
		___mCanAutoSetInitializationTarget_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
