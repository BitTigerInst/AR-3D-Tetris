#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.ImageImpl
struct ImageImpl_t3860485905;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT3232215024.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_TextureFormat2239483167.h"

// System.Int32 Vuforia.ImageImpl::get_Width()
extern "C"  int32_t ImageImpl_get_Width_m982746132 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Width(System.Int32)
extern "C"  void ImageImpl_set_Width_m1906831397 (ImageImpl_t3860485905 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Height()
extern "C"  int32_t ImageImpl_get_Height_m904173371 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Height(System.Int32)
extern "C"  void ImageImpl_set_Height_m303083340 (ImageImpl_t3860485905 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Stride()
extern "C"  int32_t ImageImpl_get_Stride_m3582247021 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Stride(System.Int32)
extern "C"  void ImageImpl_set_Stride_m3545406846 (ImageImpl_t3860485905 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferWidth()
extern "C"  int32_t ImageImpl_get_BufferWidth_m3066245620 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferWidth(System.Int32)
extern "C"  void ImageImpl_set_BufferWidth_m2048343557 (ImageImpl_t3860485905 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferHeight()
extern "C"  int32_t ImageImpl_get_BufferHeight_m1068148059 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferHeight(System.Int32)
extern "C"  void ImageImpl_set_BufferHeight_m394993004 (ImageImpl_t3860485905 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image/PIXEL_FORMAT Vuforia.ImageImpl::get_PixelFormat()
extern "C"  int32_t ImageImpl_get_PixelFormat_m1786820362 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_PixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C"  void ImageImpl_set_PixelFormat_m4270730139 (ImageImpl_t3860485905 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Vuforia.ImageImpl::get_Pixels()
extern "C"  ByteU5BU5D_t58506160* ImageImpl_get_Pixels_m2731009571 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Pixels(System.Byte[])
extern "C"  void ImageImpl_set_Pixels_m3100826344 (ImageImpl_t3860485905 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ImageImpl::get_UnmanagedData()
extern "C"  IntPtr_t ImageImpl_get_UnmanagedData_m1668551079 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_UnmanagedData(System.IntPtr)
extern "C"  void ImageImpl_set_UnmanagedData_m2037238230 (ImageImpl_t3860485905 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::.ctor()
extern "C"  void ImageImpl__ctor_m3206845261 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::Finalize()
extern "C"  void ImageImpl_Finalize_m2272112117 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageImpl::IsValid()
extern "C"  bool ImageImpl_IsValid_m3888801167 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyToTexture(UnityEngine.Texture2D)
extern "C"  void ImageImpl_CopyToTexture_m1332068870 (ImageImpl_t3860485905 * __this, Texture2D_t2509538522 * ___texture2D0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyPixelsFromUnmanagedBuffer()
extern "C"  void ImageImpl_CopyPixelsFromUnmanagedBuffer_m2832181189 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.ImageImpl::GetPixels32()
extern "C"  Color32U5BU5D_t1677970742* ImageImpl_GetPixels32_m3403499859 (ImageImpl_t3860485905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat Vuforia.ImageImpl::ConvertPixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C"  int32_t ImageImpl_ConvertPixelFormat_m2048901721 (ImageImpl_t3860485905 * __this, int32_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
