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

#include "Vuforia_UnityExtensions_Vuforia_ViewerParameters696517330.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType596345460.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignmen2189990737.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CustomViewerParameters
struct  CustomViewerParameters_t4075305059  : public ViewerParameters_t696517330
{
public:
	// System.Single Vuforia.CustomViewerParameters::mVersion
	float ___mVersion_1;
	// System.String Vuforia.CustomViewerParameters::mName
	String_t* ___mName_2;
	// System.String Vuforia.CustomViewerParameters::mManufacturer
	String_t* ___mManufacturer_3;
	// Vuforia.ViewerButtonType Vuforia.CustomViewerParameters::mButtonType
	int32_t ___mButtonType_4;
	// System.Single Vuforia.CustomViewerParameters::mScreenToLensDistance
	float ___mScreenToLensDistance_5;
	// Vuforia.ViewerTrayAlignment Vuforia.CustomViewerParameters::mTrayAlignment
	int32_t ___mTrayAlignment_6;
	// System.Boolean Vuforia.CustomViewerParameters::mMagnet
	bool ___mMagnet_7;

public:
	inline static int32_t get_offset_of_mVersion_1() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t4075305059, ___mVersion_1)); }
	inline float get_mVersion_1() const { return ___mVersion_1; }
	inline float* get_address_of_mVersion_1() { return &___mVersion_1; }
	inline void set_mVersion_1(float value)
	{
		___mVersion_1 = value;
	}

	inline static int32_t get_offset_of_mName_2() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t4075305059, ___mName_2)); }
	inline String_t* get_mName_2() const { return ___mName_2; }
	inline String_t** get_address_of_mName_2() { return &___mName_2; }
	inline void set_mName_2(String_t* value)
	{
		___mName_2 = value;
		Il2CppCodeGenWriteBarrier(&___mName_2, value);
	}

	inline static int32_t get_offset_of_mManufacturer_3() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t4075305059, ___mManufacturer_3)); }
	inline String_t* get_mManufacturer_3() const { return ___mManufacturer_3; }
	inline String_t** get_address_of_mManufacturer_3() { return &___mManufacturer_3; }
	inline void set_mManufacturer_3(String_t* value)
	{
		___mManufacturer_3 = value;
		Il2CppCodeGenWriteBarrier(&___mManufacturer_3, value);
	}

	inline static int32_t get_offset_of_mButtonType_4() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t4075305059, ___mButtonType_4)); }
	inline int32_t get_mButtonType_4() const { return ___mButtonType_4; }
	inline int32_t* get_address_of_mButtonType_4() { return &___mButtonType_4; }
	inline void set_mButtonType_4(int32_t value)
	{
		___mButtonType_4 = value;
	}

	inline static int32_t get_offset_of_mScreenToLensDistance_5() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t4075305059, ___mScreenToLensDistance_5)); }
	inline float get_mScreenToLensDistance_5() const { return ___mScreenToLensDistance_5; }
	inline float* get_address_of_mScreenToLensDistance_5() { return &___mScreenToLensDistance_5; }
	inline void set_mScreenToLensDistance_5(float value)
	{
		___mScreenToLensDistance_5 = value;
	}

	inline static int32_t get_offset_of_mTrayAlignment_6() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t4075305059, ___mTrayAlignment_6)); }
	inline int32_t get_mTrayAlignment_6() const { return ___mTrayAlignment_6; }
	inline int32_t* get_address_of_mTrayAlignment_6() { return &___mTrayAlignment_6; }
	inline void set_mTrayAlignment_6(int32_t value)
	{
		___mTrayAlignment_6 = value;
	}

	inline static int32_t get_offset_of_mMagnet_7() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t4075305059, ___mMagnet_7)); }
	inline bool get_mMagnet_7() const { return ___mMagnet_7; }
	inline bool* get_address_of_mMagnet_7() { return &___mMagnet_7; }
	inline void set_mMagnet_7(bool value)
	{
		___mMagnet_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
