#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.DataSetImpl
struct DataSetImpl_t611363726;

#include "Vuforia_UnityExtensions_Vuforia_TrackableImpl2302259675.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t1236268326  : public TrackableImpl_t2302259675
{
public:
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t3525329789  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t611363726 * ___mDataSet_3;

public:
	inline static int32_t get_offset_of_mSize_2() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t1236268326, ___mSize_2)); }
	inline Vector3_t3525329789  get_mSize_2() const { return ___mSize_2; }
	inline Vector3_t3525329789 * get_address_of_mSize_2() { return &___mSize_2; }
	inline void set_mSize_2(Vector3_t3525329789  value)
	{
		___mSize_2 = value;
	}

	inline static int32_t get_offset_of_mDataSet_3() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t1236268326, ___mDataSet_3)); }
	inline DataSetImpl_t611363726 * get_mDataSet_3() const { return ___mDataSet_3; }
	inline DataSetImpl_t611363726 ** get_address_of_mDataSet_3() { return &___mDataSet_3; }
	inline void set_mDataSet_3(DataSetImpl_t611363726 * value)
	{
		___mDataSet_3 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSet_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
