#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Shader
struct Shader_t3998140498;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t2427322319;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbstr309831424.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct  VideoBackgroundManagerAbstractBehaviour_t1915856045  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Texture Vuforia.VideoBackgroundManagerAbstractBehaviour::mTexture
	Texture_t1769722184 * ___mTexture_2;
	// System.Boolean Vuforia.VideoBackgroundManagerAbstractBehaviour::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_3;
	// System.IntPtr Vuforia.VideoBackgroundManagerAbstractBehaviour::mNativeTexturePtr
	IntPtr_t ___mNativeTexturePtr_4;
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.VideoBackgroundManagerAbstractBehaviour::mClippingMode
	int32_t ___mClippingMode_5;
	// UnityEngine.Shader Vuforia.VideoBackgroundManagerAbstractBehaviour::mMatteShader
	Shader_t3998140498 * ___mMatteShader_6;
	// System.Boolean Vuforia.VideoBackgroundManagerAbstractBehaviour::mVideoBackgroundEnabled
	bool ___mVideoBackgroundEnabled_7;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.VideoBackgroundManagerAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t2427322319 * ___mVuforiaBehaviour_8;

public:
	inline static int32_t get_offset_of_mTexture_2() { return static_cast<int32_t>(offsetof(VideoBackgroundManagerAbstractBehaviour_t1915856045, ___mTexture_2)); }
	inline Texture_t1769722184 * get_mTexture_2() const { return ___mTexture_2; }
	inline Texture_t1769722184 ** get_address_of_mTexture_2() { return &___mTexture_2; }
	inline void set_mTexture_2(Texture_t1769722184 * value)
	{
		___mTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_2, value);
	}

	inline static int32_t get_offset_of_mVideoBgConfigChanged_3() { return static_cast<int32_t>(offsetof(VideoBackgroundManagerAbstractBehaviour_t1915856045, ___mVideoBgConfigChanged_3)); }
	inline bool get_mVideoBgConfigChanged_3() const { return ___mVideoBgConfigChanged_3; }
	inline bool* get_address_of_mVideoBgConfigChanged_3() { return &___mVideoBgConfigChanged_3; }
	inline void set_mVideoBgConfigChanged_3(bool value)
	{
		___mVideoBgConfigChanged_3 = value;
	}

	inline static int32_t get_offset_of_mNativeTexturePtr_4() { return static_cast<int32_t>(offsetof(VideoBackgroundManagerAbstractBehaviour_t1915856045, ___mNativeTexturePtr_4)); }
	inline IntPtr_t get_mNativeTexturePtr_4() const { return ___mNativeTexturePtr_4; }
	inline IntPtr_t* get_address_of_mNativeTexturePtr_4() { return &___mNativeTexturePtr_4; }
	inline void set_mNativeTexturePtr_4(IntPtr_t value)
	{
		___mNativeTexturePtr_4 = value;
	}

	inline static int32_t get_offset_of_mClippingMode_5() { return static_cast<int32_t>(offsetof(VideoBackgroundManagerAbstractBehaviour_t1915856045, ___mClippingMode_5)); }
	inline int32_t get_mClippingMode_5() const { return ___mClippingMode_5; }
	inline int32_t* get_address_of_mClippingMode_5() { return &___mClippingMode_5; }
	inline void set_mClippingMode_5(int32_t value)
	{
		___mClippingMode_5 = value;
	}

	inline static int32_t get_offset_of_mMatteShader_6() { return static_cast<int32_t>(offsetof(VideoBackgroundManagerAbstractBehaviour_t1915856045, ___mMatteShader_6)); }
	inline Shader_t3998140498 * get_mMatteShader_6() const { return ___mMatteShader_6; }
	inline Shader_t3998140498 ** get_address_of_mMatteShader_6() { return &___mMatteShader_6; }
	inline void set_mMatteShader_6(Shader_t3998140498 * value)
	{
		___mMatteShader_6 = value;
		Il2CppCodeGenWriteBarrier(&___mMatteShader_6, value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundEnabled_7() { return static_cast<int32_t>(offsetof(VideoBackgroundManagerAbstractBehaviour_t1915856045, ___mVideoBackgroundEnabled_7)); }
	inline bool get_mVideoBackgroundEnabled_7() const { return ___mVideoBackgroundEnabled_7; }
	inline bool* get_address_of_mVideoBackgroundEnabled_7() { return &___mVideoBackgroundEnabled_7; }
	inline void set_mVideoBackgroundEnabled_7(bool value)
	{
		___mVideoBackgroundEnabled_7 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_8() { return static_cast<int32_t>(offsetof(VideoBackgroundManagerAbstractBehaviour_t1915856045, ___mVuforiaBehaviour_8)); }
	inline VuforiaAbstractBehaviour_t2427322319 * get_mVuforiaBehaviour_8() const { return ___mVuforiaBehaviour_8; }
	inline VuforiaAbstractBehaviour_t2427322319 ** get_address_of_mVuforiaBehaviour_8() { return &___mVuforiaBehaviour_8; }
	inline void set_mVuforiaBehaviour_8(VuforiaAbstractBehaviour_t2427322319 * value)
	{
		___mVuforiaBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
