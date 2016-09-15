#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t407342383;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t2785151329;

#include "Vuforia_UnityExtensions_Vuforia_TargetFinder1976292941.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinderImpl_T1112475034.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinderImpl
struct  TargetFinderImpl_t1523661069  : public TargetFinder_t1976292941
{
public:
	// System.IntPtr Vuforia.TargetFinderImpl::mTargetFinderStatePtr
	IntPtr_t ___mTargetFinderStatePtr_0;
	// Vuforia.TargetFinderImpl/TargetFinderState Vuforia.TargetFinderImpl::mTargetFinderState
	TargetFinderState_t1112475034  ___mTargetFinderState_1;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::mNewResults
	List_1_t407342383 * ___mNewResults_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget> Vuforia.TargetFinderImpl::mImageTargets
	Dictionary_2_t2785151329 * ___mImageTargets_3;

public:
	inline static int32_t get_offset_of_mTargetFinderStatePtr_0() { return static_cast<int32_t>(offsetof(TargetFinderImpl_t1523661069, ___mTargetFinderStatePtr_0)); }
	inline IntPtr_t get_mTargetFinderStatePtr_0() const { return ___mTargetFinderStatePtr_0; }
	inline IntPtr_t* get_address_of_mTargetFinderStatePtr_0() { return &___mTargetFinderStatePtr_0; }
	inline void set_mTargetFinderStatePtr_0(IntPtr_t value)
	{
		___mTargetFinderStatePtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_1() { return static_cast<int32_t>(offsetof(TargetFinderImpl_t1523661069, ___mTargetFinderState_1)); }
	inline TargetFinderState_t1112475034  get_mTargetFinderState_1() const { return ___mTargetFinderState_1; }
	inline TargetFinderState_t1112475034 * get_address_of_mTargetFinderState_1() { return &___mTargetFinderState_1; }
	inline void set_mTargetFinderState_1(TargetFinderState_t1112475034  value)
	{
		___mTargetFinderState_1 = value;
	}

	inline static int32_t get_offset_of_mNewResults_2() { return static_cast<int32_t>(offsetof(TargetFinderImpl_t1523661069, ___mNewResults_2)); }
	inline List_1_t407342383 * get_mNewResults_2() const { return ___mNewResults_2; }
	inline List_1_t407342383 ** get_address_of_mNewResults_2() { return &___mNewResults_2; }
	inline void set_mNewResults_2(List_1_t407342383 * value)
	{
		___mNewResults_2 = value;
		Il2CppCodeGenWriteBarrier(&___mNewResults_2, value);
	}

	inline static int32_t get_offset_of_mImageTargets_3() { return static_cast<int32_t>(offsetof(TargetFinderImpl_t1523661069, ___mImageTargets_3)); }
	inline Dictionary_2_t2785151329 * get_mImageTargets_3() const { return ___mImageTargets_3; }
	inline Dictionary_2_t2785151329 ** get_address_of_mImageTargets_3() { return &___mImageTargets_3; }
	inline void set_mImageTargets_3(Dictionary_2_t2785151329 * value)
	{
		___mImageTargets_3 = value;
		Il2CppCodeGenWriteBarrier(&___mImageTargets_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
