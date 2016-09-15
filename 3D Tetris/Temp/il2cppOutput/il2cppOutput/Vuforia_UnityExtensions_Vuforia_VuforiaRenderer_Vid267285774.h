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

// Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_t267285774 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::textureSize
	Vec2I_t82528459  ___textureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::imageSize
	Vec2I_t82528459  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t267285774, ___textureSize_0)); }
	inline Vec2I_t82528459  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_t82528459 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_t82528459  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t267285774, ___imageSize_1)); }
	inline Vec2I_t82528459  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_t82528459 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_t82528459  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct VideoTextureInfo_t267285774_marshaled_pinvoke
{
	Vec2I_t82528459_marshaled_pinvoke ___textureSize_0;
	Vec2I_t82528459_marshaled_pinvoke ___imageSize_1;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct VideoTextureInfo_t267285774_marshaled_com
{
	Vec2I_t82528459_marshaled_com ___textureSize_0;
	Vec2I_t82528459_marshaled_com ___imageSize_1;
};
#pragma pack(pop, tp)
