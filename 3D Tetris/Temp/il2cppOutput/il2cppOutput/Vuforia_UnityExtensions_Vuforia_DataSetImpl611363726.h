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
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t1665012666;

#include "Vuforia_UnityExtensions_Vuforia_DataSet1547874638.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Stora1142306869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetImpl
struct  DataSetImpl_t611363726  : public DataSet_t1547874638
{
public:
	// System.IntPtr Vuforia.DataSetImpl::mDataSetPtr
	IntPtr_t ___mDataSetPtr_1;
	// System.String Vuforia.DataSetImpl::mPath
	String_t* ___mPath_2;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::mStorageType
	int32_t ___mStorageType_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSetImpl::mTrackablesDict
	Dictionary_2_t1665012666 * ___mTrackablesDict_4;

public:
	inline static int32_t get_offset_of_mDataSetPtr_1() { return static_cast<int32_t>(offsetof(DataSetImpl_t611363726, ___mDataSetPtr_1)); }
	inline IntPtr_t get_mDataSetPtr_1() const { return ___mDataSetPtr_1; }
	inline IntPtr_t* get_address_of_mDataSetPtr_1() { return &___mDataSetPtr_1; }
	inline void set_mDataSetPtr_1(IntPtr_t value)
	{
		___mDataSetPtr_1 = value;
	}

	inline static int32_t get_offset_of_mPath_2() { return static_cast<int32_t>(offsetof(DataSetImpl_t611363726, ___mPath_2)); }
	inline String_t* get_mPath_2() const { return ___mPath_2; }
	inline String_t** get_address_of_mPath_2() { return &___mPath_2; }
	inline void set_mPath_2(String_t* value)
	{
		___mPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___mPath_2, value);
	}

	inline static int32_t get_offset_of_mStorageType_3() { return static_cast<int32_t>(offsetof(DataSetImpl_t611363726, ___mStorageType_3)); }
	inline int32_t get_mStorageType_3() const { return ___mStorageType_3; }
	inline int32_t* get_address_of_mStorageType_3() { return &___mStorageType_3; }
	inline void set_mStorageType_3(int32_t value)
	{
		___mStorageType_3 = value;
	}

	inline static int32_t get_offset_of_mTrackablesDict_4() { return static_cast<int32_t>(offsetof(DataSetImpl_t611363726, ___mTrackablesDict_4)); }
	inline Dictionary_2_t1665012666 * get_mTrackablesDict_4() const { return ___mTrackablesDict_4; }
	inline Dictionary_2_t1665012666 ** get_address_of_mTrackablesDict_4() { return &___mTrackablesDict_4; }
	inline void set_mTrackablesDict_4(Dictionary_2_t1665012666 * value)
	{
		___mTrackablesDict_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackablesDict_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
