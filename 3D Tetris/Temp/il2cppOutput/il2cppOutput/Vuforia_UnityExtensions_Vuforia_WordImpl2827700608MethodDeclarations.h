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

// Vuforia.WordImpl
struct WordImpl_t2827700608;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t2805765713;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t1427017142;
// Vuforia.ImageImpl
struct ImageImpl_t3860485905;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3993157490.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageImpl3860485905.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m3417398805 (WordImpl_t2827700608 * __this, int32_t ___id0, String_t* ___text1, Vector2_t3525329788  ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C"  String_t* WordImpl_get_StringValue_m1998556710 (WordImpl_t2827700608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t3525329788  WordImpl_get_Size_m496840085 (WordImpl_t2827700608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C"  Image_t2805765713 * WordImpl_GetLetterMask_m2169334038 (WordImpl_t2827700608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C"  RectangleDataU5BU5D_t1427017142* WordImpl_GetLetterBoundingBoxes_m3953538733 (WordImpl_t2827700608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m248667850 (WordImpl_t2827700608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m433471166 (WordImpl_t2827700608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void WordImpl_SetImageValues_m1836213134 (Il2CppObject * __this /* static, unused */, ImageHeaderData_t3993157490  ___imageHeader0, ImageImpl_t3860485905 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void WordImpl_AllocateImage_m1424121043 (Il2CppObject * __this /* static, unused */, ImageImpl_t3860485905 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
