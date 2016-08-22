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

// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat2239483167.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m1883511258 (Texture2D_t2509538522 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m3705883154 (Texture2D_t2509538522 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___mipmap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  void Texture2D__ctor_m467773817 (Texture2D_t2509538522 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___mipmap3, bool ___linear4, IntPtr_t ___nativeTex5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  void Texture2D_Internal_Create_m457592211 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___mono0, int32_t ___width1, int32_t ___height2, int32_t ___format3, bool ___mipmap4, bool ___linear5, IntPtr_t ___nativeTex6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::CreateExternalTexture(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  Texture2D_t2509538522 * Texture2D_CreateExternalTexture_m1858440074 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___mipmap3, bool ___linear4, IntPtr_t ___nativeTex5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C"  int32_t Texture2D_get_format_m863889216 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C"  Texture2D_t2509538522 * Texture2D_get_whiteTexture_m1214146742 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C"  Color_t1588175760  Texture2D_GetPixelBilinear_m2169326019 (Texture2D_t2509538522 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_GetPixelBilinear(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_GetPixelBilinear_m2056702809 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___self0, float ___u1, float ___v2, Color_t1588175760 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C"  void Texture2D_SetPixels_m1289331147 (Texture2D_t2509538522 * __this, ColorU5BU5D_t3477081137* ___colors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C"  void Texture2D_SetPixels_m2710961388 (Texture2D_t2509538522 * __this, ColorU5BU5D_t3477081137* ___colors0, int32_t ___miplevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
extern "C"  void Texture2D_SetPixels_m3304189612 (Texture2D_t2509538522 * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, ColorU5BU5D_t3477081137* ___colors4, int32_t ___miplevel5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
extern "C"  void Texture2D_SetAllPixels32_m2090735797 (Texture2D_t2509538522 * __this, Color32U5BU5D_t1677970742* ___colors0, int32_t ___miplevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C"  void Texture2D_SetPixels32_m1350049485 (Texture2D_t2509538522 * __this, Color32U5BU5D_t1677970742* ___colors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
extern "C"  void Texture2D_SetPixels32_m4259722026 (Texture2D_t2509538522 * __this, Color32U5BU5D_t1677970742* ___colors0, int32_t ___miplevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C"  ColorU5BU5D_t3477081137* Texture2D_GetPixels_m1759701362 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C"  ColorU5BU5D_t3477081137* Texture2D_GetPixels_m3014919107 (Texture2D_t2509538522 * __this, int32_t ___miplevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  ColorU5BU5D_t3477081137* Texture2D_GetPixels_m871852803 (Texture2D_t2509538522 * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, int32_t ___miplevel4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
extern "C"  Color32U5BU5D_t1677970742* Texture2D_GetPixels32_m327121251 (Texture2D_t2509538522 * __this, int32_t ___miplevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C"  Color32U5BU5D_t1677970742* Texture2D_GetPixels32_m4076457746 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C"  void Texture2D_Apply_m2754532430 (Texture2D_t2509538522 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m1364130776 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  bool Texture2D_Resize_m1334821900 (Texture2D_t2509538522 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___hasMipMap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C"  void Texture2D_ReadPixels_m2828402557 (Texture2D_t2509538522 * __this, Rect_t1525428817  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_ReadPixels(UnityEngine.Texture2D,UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
extern "C"  void Texture2D_INTERNAL_CALL_ReadPixels_m388307610 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___self0, Rect_t1525428817 * ___source1, int32_t ___destX2, int32_t ___destY3, bool ___recalculateMipMaps4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
