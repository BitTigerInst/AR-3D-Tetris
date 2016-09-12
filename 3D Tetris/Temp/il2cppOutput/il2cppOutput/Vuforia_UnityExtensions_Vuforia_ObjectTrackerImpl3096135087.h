#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t1408322695;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t2344833607;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t2343947365;
// Vuforia.TargetFinder
struct TargetFinder_t1976292941;

#include "Vuforia_UnityExtensions_Vuforia_ObjectTracker3275326447.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t3096135087  : public ObjectTracker_t3275326447
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t1408322695 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t2344833607 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t2343947365 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t1976292941 * ___mTargetFinder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTrackerImpl_t3096135087, ___mActiveDataSets_1)); }
	inline List_1_t1408322695 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t1408322695 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t1408322695 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveDataSets_1, value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTrackerImpl_t3096135087, ___mDataSets_2)); }
	inline List_1_t2344833607 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t2344833607 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t2344833607 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSets_2, value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_3() { return static_cast<int32_t>(offsetof(ObjectTrackerImpl_t3096135087, ___mImageTargetBuilder_3)); }
	inline ImageTargetBuilder_t2343947365 * get_mImageTargetBuilder_3() const { return ___mImageTargetBuilder_3; }
	inline ImageTargetBuilder_t2343947365 ** get_address_of_mImageTargetBuilder_3() { return &___mImageTargetBuilder_3; }
	inline void set_mImageTargetBuilder_3(ImageTargetBuilder_t2343947365 * value)
	{
		___mImageTargetBuilder_3 = value;
		Il2CppCodeGenWriteBarrier(&___mImageTargetBuilder_3, value);
	}

	inline static int32_t get_offset_of_mTargetFinder_4() { return static_cast<int32_t>(offsetof(ObjectTrackerImpl_t3096135087, ___mTargetFinder_4)); }
	inline TargetFinder_t1976292941 * get_mTargetFinder_4() const { return ___mTargetFinder_4; }
	inline TargetFinder_t1976292941 ** get_address_of_mTargetFinder_4() { return &___mTargetFinder_4; }
	inline void set_mTargetFinder_4(TargetFinder_t1976292941 * value)
	{
		___mTargetFinder_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTargetFinder_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
