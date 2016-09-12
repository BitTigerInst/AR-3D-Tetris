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
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "Vuforia_UnityExtensions_Vuforia_WebCamTexAdaptor1767179727.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullWebCamTexAdaptor
struct  NullWebCamTexAdaptor_t4038594934  : public WebCamTexAdaptor_t1767179727
{
public:
	// UnityEngine.Texture2D Vuforia.NullWebCamTexAdaptor::mTexture
	Texture2D_t2509538522 * ___mTexture_1;
	// System.Boolean Vuforia.NullWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_2;
	// System.Double Vuforia.NullWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_3;
	// System.DateTime Vuforia.NullWebCamTexAdaptor::mLastFrame
	DateTime_t339033936  ___mLastFrame_4;

public:
	inline static int32_t get_offset_of_mTexture_1() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t4038594934, ___mTexture_1)); }
	inline Texture2D_t2509538522 * get_mTexture_1() const { return ___mTexture_1; }
	inline Texture2D_t2509538522 ** get_address_of_mTexture_1() { return &___mTexture_1; }
	inline void set_mTexture_1(Texture2D_t2509538522 * value)
	{
		___mTexture_1 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_1, value);
	}

	inline static int32_t get_offset_of_mPseudoPlaying_2() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t4038594934, ___mPseudoPlaying_2)); }
	inline bool get_mPseudoPlaying_2() const { return ___mPseudoPlaying_2; }
	inline bool* get_address_of_mPseudoPlaying_2() { return &___mPseudoPlaying_2; }
	inline void set_mPseudoPlaying_2(bool value)
	{
		___mPseudoPlaying_2 = value;
	}

	inline static int32_t get_offset_of_mMsBetweenFrames_3() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t4038594934, ___mMsBetweenFrames_3)); }
	inline double get_mMsBetweenFrames_3() const { return ___mMsBetweenFrames_3; }
	inline double* get_address_of_mMsBetweenFrames_3() { return &___mMsBetweenFrames_3; }
	inline void set_mMsBetweenFrames_3(double value)
	{
		___mMsBetweenFrames_3 = value;
	}

	inline static int32_t get_offset_of_mLastFrame_4() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t4038594934, ___mLastFrame_4)); }
	inline DateTime_t339033936  get_mLastFrame_4() const { return ___mLastFrame_4; }
	inline DateTime_t339033936 * get_address_of_mLastFrame_4() { return &___mLastFrame_4; }
	inline void set_mLastFrame_4(DateTime_t339033936  value)
	{
		___mLastFrame_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
