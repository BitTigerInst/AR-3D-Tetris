#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec282528459.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t1845074131 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t82528459  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t82528459  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t1845074131, ___RequestedTextureSize_0)); }
	inline Vec2I_t82528459  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t82528459 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t82528459  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t1845074131, ___ResampledTextureSize_1)); }
	inline Vec2I_t82528459  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t82528459 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t82528459  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t1845074131, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.WebCamProfile/ProfileData
struct ProfileData_t1845074131_marshaled_pinvoke
{
	Vec2I_t82528459_marshaled_pinvoke ___RequestedTextureSize_0;
	Vec2I_t82528459_marshaled_pinvoke ___ResampledTextureSize_1;
	int32_t ___RequestedFPS_2;
};
// Native definition for marshalling of: Vuforia.WebCamProfile/ProfileData
struct ProfileData_t1845074131_marshaled_com
{
	Vec2I_t82528459_marshaled_com ___RequestedTextureSize_0;
	Vec2I_t82528459_marshaled_com ___ResampledTextureSize_1;
	int32_t ___RequestedFPS_2;
};
