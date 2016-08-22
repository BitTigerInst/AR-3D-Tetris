#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;

#include "Vuforia_UnityExtensions_Vuforia_Image2805765713.h"
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT3232215024.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageImpl
struct  ImageImpl_t3860485905  : public Image_t2805765713
{
public:
	// System.Int32 Vuforia.ImageImpl::mWidth
	int32_t ___mWidth_0;
	// System.Int32 Vuforia.ImageImpl::mHeight
	int32_t ___mHeight_1;
	// System.Int32 Vuforia.ImageImpl::mStride
	int32_t ___mStride_2;
	// System.Int32 Vuforia.ImageImpl::mBufferWidth
	int32_t ___mBufferWidth_3;
	// System.Int32 Vuforia.ImageImpl::mBufferHeight
	int32_t ___mBufferHeight_4;
	// Vuforia.Image/PIXEL_FORMAT Vuforia.ImageImpl::mPixelFormat
	int32_t ___mPixelFormat_5;
	// System.Byte[] Vuforia.ImageImpl::mData
	ByteU5BU5D_t58506160* ___mData_6;
	// System.IntPtr Vuforia.ImageImpl::mUnmanagedData
	IntPtr_t ___mUnmanagedData_7;
	// System.Boolean Vuforia.ImageImpl::mDataSet
	bool ___mDataSet_8;
	// UnityEngine.Color32[] Vuforia.ImageImpl::mPixel32
	Color32U5BU5D_t1677970742* ___mPixel32_9;

public:
	inline static int32_t get_offset_of_mWidth_0() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mWidth_0)); }
	inline int32_t get_mWidth_0() const { return ___mWidth_0; }
	inline int32_t* get_address_of_mWidth_0() { return &___mWidth_0; }
	inline void set_mWidth_0(int32_t value)
	{
		___mWidth_0 = value;
	}

	inline static int32_t get_offset_of_mHeight_1() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mHeight_1)); }
	inline int32_t get_mHeight_1() const { return ___mHeight_1; }
	inline int32_t* get_address_of_mHeight_1() { return &___mHeight_1; }
	inline void set_mHeight_1(int32_t value)
	{
		___mHeight_1 = value;
	}

	inline static int32_t get_offset_of_mStride_2() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mStride_2)); }
	inline int32_t get_mStride_2() const { return ___mStride_2; }
	inline int32_t* get_address_of_mStride_2() { return &___mStride_2; }
	inline void set_mStride_2(int32_t value)
	{
		___mStride_2 = value;
	}

	inline static int32_t get_offset_of_mBufferWidth_3() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mBufferWidth_3)); }
	inline int32_t get_mBufferWidth_3() const { return ___mBufferWidth_3; }
	inline int32_t* get_address_of_mBufferWidth_3() { return &___mBufferWidth_3; }
	inline void set_mBufferWidth_3(int32_t value)
	{
		___mBufferWidth_3 = value;
	}

	inline static int32_t get_offset_of_mBufferHeight_4() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mBufferHeight_4)); }
	inline int32_t get_mBufferHeight_4() const { return ___mBufferHeight_4; }
	inline int32_t* get_address_of_mBufferHeight_4() { return &___mBufferHeight_4; }
	inline void set_mBufferHeight_4(int32_t value)
	{
		___mBufferHeight_4 = value;
	}

	inline static int32_t get_offset_of_mPixelFormat_5() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mPixelFormat_5)); }
	inline int32_t get_mPixelFormat_5() const { return ___mPixelFormat_5; }
	inline int32_t* get_address_of_mPixelFormat_5() { return &___mPixelFormat_5; }
	inline void set_mPixelFormat_5(int32_t value)
	{
		___mPixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_mData_6() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mData_6)); }
	inline ByteU5BU5D_t58506160* get_mData_6() const { return ___mData_6; }
	inline ByteU5BU5D_t58506160** get_address_of_mData_6() { return &___mData_6; }
	inline void set_mData_6(ByteU5BU5D_t58506160* value)
	{
		___mData_6 = value;
		Il2CppCodeGenWriteBarrier(&___mData_6, value);
	}

	inline static int32_t get_offset_of_mUnmanagedData_7() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mUnmanagedData_7)); }
	inline IntPtr_t get_mUnmanagedData_7() const { return ___mUnmanagedData_7; }
	inline IntPtr_t* get_address_of_mUnmanagedData_7() { return &___mUnmanagedData_7; }
	inline void set_mUnmanagedData_7(IntPtr_t value)
	{
		___mUnmanagedData_7 = value;
	}

	inline static int32_t get_offset_of_mDataSet_8() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mDataSet_8)); }
	inline bool get_mDataSet_8() const { return ___mDataSet_8; }
	inline bool* get_address_of_mDataSet_8() { return &___mDataSet_8; }
	inline void set_mDataSet_8(bool value)
	{
		___mDataSet_8 = value;
	}

	inline static int32_t get_offset_of_mPixel32_9() { return static_cast<int32_t>(offsetof(ImageImpl_t3860485905, ___mPixel32_9)); }
	inline Color32U5BU5D_t1677970742* get_mPixel32_9() const { return ___mPixel32_9; }
	inline Color32U5BU5D_t1677970742** get_address_of_mPixel32_9() { return &___mPixel32_9; }
	inline void set_mPixel32_9(Color32U5BU5D_t1677970742* value)
	{
		___mPixel32_9 = value;
		Il2CppCodeGenWriteBarrier(&___mPixel32_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
