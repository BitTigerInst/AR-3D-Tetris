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

#include "mscorlib_System_Object837106420.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType596345460.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignmen2189990737.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters
struct  SerializableViewerParameters_t2033497307  : public Il2CppObject
{
public:
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::Version
	float ___Version_0;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::Name
	String_t* ___Name_1;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::Manufacturer
	String_t* ___Manufacturer_2;
	// Vuforia.ViewerButtonType Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::ButtonType
	int32_t ___ButtonType_3;
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::ScreenToLensDistance
	float ___ScreenToLensDistance_4;
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::InterLensDistance
	float ___InterLensDistance_5;
	// Vuforia.ViewerTrayAlignment Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::TrayAlignment
	int32_t ___TrayAlignment_6;
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::LensCenterToTrayDistance
	float ___LensCenterToTrayDistance_7;
	// UnityEngine.Vector2 Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::DistortionCoefficients
	Vector2_t3525329788  ___DistortionCoefficients_8;
	// UnityEngine.Vector4 Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::FieldOfView
	Vector4_t3525329790  ___FieldOfView_9;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::ContainsMagnet
	bool ___ContainsMagnet_10;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___Version_0)); }
	inline float get_Version_0() const { return ___Version_0; }
	inline float* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(float value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Manufacturer_2() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___Manufacturer_2)); }
	inline String_t* get_Manufacturer_2() const { return ___Manufacturer_2; }
	inline String_t** get_address_of_Manufacturer_2() { return &___Manufacturer_2; }
	inline void set_Manufacturer_2(String_t* value)
	{
		___Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier(&___Manufacturer_2, value);
	}

	inline static int32_t get_offset_of_ButtonType_3() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___ButtonType_3)); }
	inline int32_t get_ButtonType_3() const { return ___ButtonType_3; }
	inline int32_t* get_address_of_ButtonType_3() { return &___ButtonType_3; }
	inline void set_ButtonType_3(int32_t value)
	{
		___ButtonType_3 = value;
	}

	inline static int32_t get_offset_of_ScreenToLensDistance_4() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___ScreenToLensDistance_4)); }
	inline float get_ScreenToLensDistance_4() const { return ___ScreenToLensDistance_4; }
	inline float* get_address_of_ScreenToLensDistance_4() { return &___ScreenToLensDistance_4; }
	inline void set_ScreenToLensDistance_4(float value)
	{
		___ScreenToLensDistance_4 = value;
	}

	inline static int32_t get_offset_of_InterLensDistance_5() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___InterLensDistance_5)); }
	inline float get_InterLensDistance_5() const { return ___InterLensDistance_5; }
	inline float* get_address_of_InterLensDistance_5() { return &___InterLensDistance_5; }
	inline void set_InterLensDistance_5(float value)
	{
		___InterLensDistance_5 = value;
	}

	inline static int32_t get_offset_of_TrayAlignment_6() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___TrayAlignment_6)); }
	inline int32_t get_TrayAlignment_6() const { return ___TrayAlignment_6; }
	inline int32_t* get_address_of_TrayAlignment_6() { return &___TrayAlignment_6; }
	inline void set_TrayAlignment_6(int32_t value)
	{
		___TrayAlignment_6 = value;
	}

	inline static int32_t get_offset_of_LensCenterToTrayDistance_7() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___LensCenterToTrayDistance_7)); }
	inline float get_LensCenterToTrayDistance_7() const { return ___LensCenterToTrayDistance_7; }
	inline float* get_address_of_LensCenterToTrayDistance_7() { return &___LensCenterToTrayDistance_7; }
	inline void set_LensCenterToTrayDistance_7(float value)
	{
		___LensCenterToTrayDistance_7 = value;
	}

	inline static int32_t get_offset_of_DistortionCoefficients_8() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___DistortionCoefficients_8)); }
	inline Vector2_t3525329788  get_DistortionCoefficients_8() const { return ___DistortionCoefficients_8; }
	inline Vector2_t3525329788 * get_address_of_DistortionCoefficients_8() { return &___DistortionCoefficients_8; }
	inline void set_DistortionCoefficients_8(Vector2_t3525329788  value)
	{
		___DistortionCoefficients_8 = value;
	}

	inline static int32_t get_offset_of_FieldOfView_9() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___FieldOfView_9)); }
	inline Vector4_t3525329790  get_FieldOfView_9() const { return ___FieldOfView_9; }
	inline Vector4_t3525329790 * get_address_of_FieldOfView_9() { return &___FieldOfView_9; }
	inline void set_FieldOfView_9(Vector4_t3525329790  value)
	{
		___FieldOfView_9 = value;
	}

	inline static int32_t get_offset_of_ContainsMagnet_10() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t2033497307, ___ContainsMagnet_10)); }
	inline bool get_ContainsMagnet_10() const { return ___ContainsMagnet_10; }
	inline bool* get_address_of_ContainsMagnet_10() { return &___ContainsMagnet_10; }
	inline void set_ContainsMagnet_10(bool value)
	{
		___ContainsMagnet_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
