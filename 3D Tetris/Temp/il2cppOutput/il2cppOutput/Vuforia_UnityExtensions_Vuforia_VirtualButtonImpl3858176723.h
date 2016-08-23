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
// Vuforia.ImageTarget
struct ImageTarget_t2294340546;
// Vuforia.DataSetImpl
struct DataSetImpl_t611363726;

#include "Vuforia_UnityExtensions_Vuforia_VirtualButton3523578643.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData790089391.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButtonImpl
struct  VirtualButtonImpl_t3858176723  : public VirtualButton_t3523578643
{
public:
	// System.String Vuforia.VirtualButtonImpl::mName
	String_t* ___mName_1;
	// System.Int32 Vuforia.VirtualButtonImpl::mID
	int32_t ___mID_2;
	// Vuforia.RectangleData Vuforia.VirtualButtonImpl::mArea
	RectangleData_t790089391  ___mArea_3;
	// System.Boolean Vuforia.VirtualButtonImpl::mIsEnabled
	bool ___mIsEnabled_4;
	// Vuforia.ImageTarget Vuforia.VirtualButtonImpl::mParentImageTarget
	Il2CppObject * ___mParentImageTarget_5;
	// Vuforia.DataSetImpl Vuforia.VirtualButtonImpl::mParentDataSet
	DataSetImpl_t611363726 * ___mParentDataSet_6;

public:
	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(VirtualButtonImpl_t3858176723, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier(&___mName_1, value);
	}

	inline static int32_t get_offset_of_mID_2() { return static_cast<int32_t>(offsetof(VirtualButtonImpl_t3858176723, ___mID_2)); }
	inline int32_t get_mID_2() const { return ___mID_2; }
	inline int32_t* get_address_of_mID_2() { return &___mID_2; }
	inline void set_mID_2(int32_t value)
	{
		___mID_2 = value;
	}

	inline static int32_t get_offset_of_mArea_3() { return static_cast<int32_t>(offsetof(VirtualButtonImpl_t3858176723, ___mArea_3)); }
	inline RectangleData_t790089391  get_mArea_3() const { return ___mArea_3; }
	inline RectangleData_t790089391 * get_address_of_mArea_3() { return &___mArea_3; }
	inline void set_mArea_3(RectangleData_t790089391  value)
	{
		___mArea_3 = value;
	}

	inline static int32_t get_offset_of_mIsEnabled_4() { return static_cast<int32_t>(offsetof(VirtualButtonImpl_t3858176723, ___mIsEnabled_4)); }
	inline bool get_mIsEnabled_4() const { return ___mIsEnabled_4; }
	inline bool* get_address_of_mIsEnabled_4() { return &___mIsEnabled_4; }
	inline void set_mIsEnabled_4(bool value)
	{
		___mIsEnabled_4 = value;
	}

	inline static int32_t get_offset_of_mParentImageTarget_5() { return static_cast<int32_t>(offsetof(VirtualButtonImpl_t3858176723, ___mParentImageTarget_5)); }
	inline Il2CppObject * get_mParentImageTarget_5() const { return ___mParentImageTarget_5; }
	inline Il2CppObject ** get_address_of_mParentImageTarget_5() { return &___mParentImageTarget_5; }
	inline void set_mParentImageTarget_5(Il2CppObject * value)
	{
		___mParentImageTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___mParentImageTarget_5, value);
	}

	inline static int32_t get_offset_of_mParentDataSet_6() { return static_cast<int32_t>(offsetof(VirtualButtonImpl_t3858176723, ___mParentDataSet_6)); }
	inline DataSetImpl_t611363726 * get_mParentDataSet_6() const { return ___mParentDataSet_6; }
	inline DataSetImpl_t611363726 ** get_address_of_mParentDataSet_6() { return &___mParentDataSet_6; }
	inline void set_mParentDataSet_6(DataSetImpl_t611363726 * value)
	{
		___mParentDataSet_6 = value;
		Il2CppCodeGenWriteBarrier(&___mParentDataSet_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
