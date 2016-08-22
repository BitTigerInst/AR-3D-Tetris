#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextureRenderer
struct  TextureRenderer_t3221472244  : public Il2CppObject
{
public:
	// UnityEngine.Camera Vuforia.TextureRenderer::mTextureBufferCamera
	Camera_t3533968274 * ___mTextureBufferCamera_0;
	// System.Int32 Vuforia.TextureRenderer::mTextureWidth
	int32_t ___mTextureWidth_1;
	// System.Int32 Vuforia.TextureRenderer::mTextureHeight
	int32_t ___mTextureHeight_2;

public:
	inline static int32_t get_offset_of_mTextureBufferCamera_0() { return static_cast<int32_t>(offsetof(TextureRenderer_t3221472244, ___mTextureBufferCamera_0)); }
	inline Camera_t3533968274 * get_mTextureBufferCamera_0() const { return ___mTextureBufferCamera_0; }
	inline Camera_t3533968274 ** get_address_of_mTextureBufferCamera_0() { return &___mTextureBufferCamera_0; }
	inline void set_mTextureBufferCamera_0(Camera_t3533968274 * value)
	{
		___mTextureBufferCamera_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTextureBufferCamera_0, value);
	}

	inline static int32_t get_offset_of_mTextureWidth_1() { return static_cast<int32_t>(offsetof(TextureRenderer_t3221472244, ___mTextureWidth_1)); }
	inline int32_t get_mTextureWidth_1() const { return ___mTextureWidth_1; }
	inline int32_t* get_address_of_mTextureWidth_1() { return &___mTextureWidth_1; }
	inline void set_mTextureWidth_1(int32_t value)
	{
		___mTextureWidth_1 = value;
	}

	inline static int32_t get_offset_of_mTextureHeight_2() { return static_cast<int32_t>(offsetof(TextureRenderer_t3221472244, ___mTextureHeight_2)); }
	inline int32_t get_mTextureHeight_2() const { return ___mTextureHeight_2; }
	inline int32_t* get_address_of_mTextureHeight_2() { return &___mTextureHeight_2; }
	inline void set_mTextureHeight_2(int32_t value)
	{
		___mTextureHeight_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
