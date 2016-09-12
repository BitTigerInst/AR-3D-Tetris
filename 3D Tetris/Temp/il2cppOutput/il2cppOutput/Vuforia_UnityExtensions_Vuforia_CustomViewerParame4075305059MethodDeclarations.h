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

// Vuforia.CustomViewerParameters
struct CustomViewerParameters_t4075305059;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType596345460.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignmen2189990737.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

// System.Void Vuforia.CustomViewerParameters::.ctor(System.Single,System.String,System.String)
extern "C"  void CustomViewerParameters__ctor_m1587620914 (CustomViewerParameters_t4075305059 * __this, float ___version0, String_t* ___viewerName1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::Finalize()
extern "C"  void CustomViewerParameters_Finalize_m4062315825 (CustomViewerParameters_t4075305059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetButtonType(Vuforia.ViewerButtonType)
extern "C"  void CustomViewerParameters_SetButtonType_m3429758035 (CustomViewerParameters_t4075305059 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetScreenToLensDistance(System.Single)
extern "C"  void CustomViewerParameters_SetScreenToLensDistance_m4074695456 (CustomViewerParameters_t4075305059 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetInterLensDistance(System.Single)
extern "C"  void CustomViewerParameters_SetInterLensDistance_m4214649227 (CustomViewerParameters_t4075305059 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetTrayAlignment(Vuforia.ViewerTrayAlignment)
extern "C"  void CustomViewerParameters_SetTrayAlignment_m3300242629 (CustomViewerParameters_t4075305059 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetLensCentreToTrayDistance(System.Single)
extern "C"  void CustomViewerParameters_SetLensCentreToTrayDistance_m1983579387 (CustomViewerParameters_t4075305059 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::ClearDistortionCoefficients()
extern "C"  void CustomViewerParameters_ClearDistortionCoefficients_m163290103 (CustomViewerParameters_t4075305059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::AddDistortionCoefficient(System.Single)
extern "C"  void CustomViewerParameters_AddDistortionCoefficient_m2169756897 (CustomViewerParameters_t4075305059 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetFieldOfView(UnityEngine.Vector4)
extern "C"  void CustomViewerParameters_SetFieldOfView_m4162337169 (CustomViewerParameters_t4075305059 * __this, Vector4_t3525329790  ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetContainsMagnet(System.Boolean)
extern "C"  void CustomViewerParameters_SetContainsMagnet_m3878582865 (CustomViewerParameters_t4075305059 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
