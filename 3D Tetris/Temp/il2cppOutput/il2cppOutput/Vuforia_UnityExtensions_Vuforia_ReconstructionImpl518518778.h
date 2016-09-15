#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ReconstructionImpl
struct  ReconstructionImpl_t518518778  : public Il2CppObject
{
public:
	// System.IntPtr Vuforia.ReconstructionImpl::mNativeReconstructionPtr
	IntPtr_t ___mNativeReconstructionPtr_0;
	// System.Boolean Vuforia.ReconstructionImpl::mMaximumAreaIsSet
	bool ___mMaximumAreaIsSet_1;
	// UnityEngine.Rect Vuforia.ReconstructionImpl::mMaximumArea
	Rect_t1525428817  ___mMaximumArea_2;
	// System.Single Vuforia.ReconstructionImpl::mNavMeshPadding
	float ___mNavMeshPadding_3;
	// System.Boolean Vuforia.ReconstructionImpl::mNavMeshUpdatesEnabled
	bool ___mNavMeshUpdatesEnabled_4;

public:
	inline static int32_t get_offset_of_mNativeReconstructionPtr_0() { return static_cast<int32_t>(offsetof(ReconstructionImpl_t518518778, ___mNativeReconstructionPtr_0)); }
	inline IntPtr_t get_mNativeReconstructionPtr_0() const { return ___mNativeReconstructionPtr_0; }
	inline IntPtr_t* get_address_of_mNativeReconstructionPtr_0() { return &___mNativeReconstructionPtr_0; }
	inline void set_mNativeReconstructionPtr_0(IntPtr_t value)
	{
		___mNativeReconstructionPtr_0 = value;
	}

	inline static int32_t get_offset_of_mMaximumAreaIsSet_1() { return static_cast<int32_t>(offsetof(ReconstructionImpl_t518518778, ___mMaximumAreaIsSet_1)); }
	inline bool get_mMaximumAreaIsSet_1() const { return ___mMaximumAreaIsSet_1; }
	inline bool* get_address_of_mMaximumAreaIsSet_1() { return &___mMaximumAreaIsSet_1; }
	inline void set_mMaximumAreaIsSet_1(bool value)
	{
		___mMaximumAreaIsSet_1 = value;
	}

	inline static int32_t get_offset_of_mMaximumArea_2() { return static_cast<int32_t>(offsetof(ReconstructionImpl_t518518778, ___mMaximumArea_2)); }
	inline Rect_t1525428817  get_mMaximumArea_2() const { return ___mMaximumArea_2; }
	inline Rect_t1525428817 * get_address_of_mMaximumArea_2() { return &___mMaximumArea_2; }
	inline void set_mMaximumArea_2(Rect_t1525428817  value)
	{
		___mMaximumArea_2 = value;
	}

	inline static int32_t get_offset_of_mNavMeshPadding_3() { return static_cast<int32_t>(offsetof(ReconstructionImpl_t518518778, ___mNavMeshPadding_3)); }
	inline float get_mNavMeshPadding_3() const { return ___mNavMeshPadding_3; }
	inline float* get_address_of_mNavMeshPadding_3() { return &___mNavMeshPadding_3; }
	inline void set_mNavMeshPadding_3(float value)
	{
		___mNavMeshPadding_3 = value;
	}

	inline static int32_t get_offset_of_mNavMeshUpdatesEnabled_4() { return static_cast<int32_t>(offsetof(ReconstructionImpl_t518518778, ___mNavMeshUpdatesEnabled_4)); }
	inline bool get_mNavMeshUpdatesEnabled_4() const { return ___mNavMeshUpdatesEnabled_4; }
	inline bool* get_address_of_mNavMeshUpdatesEnabled_4() { return &___mNavMeshUpdatesEnabled_4; }
	inline void set_mNavMeshUpdatesEnabled_4(bool value)
	{
		___mNavMeshUpdatesEnabled_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
