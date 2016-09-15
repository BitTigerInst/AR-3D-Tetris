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

// Vuforia.ViewerParameters
struct ViewerParameters_t696517330;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType596345460.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignmen2189990737.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

// System.Void Vuforia.ViewerParameters::.ctor(System.IntPtr)
extern "C"  void ViewerParameters__ctor_m3792113490 (ViewerParameters_t696517330 * __this, IntPtr_t ___nativePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParameters::Finalize()
extern "C"  void ViewerParameters_Finalize_m3330805984 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetVersion()
extern "C"  float ViewerParameters_GetVersion_m3691506608 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.ViewerParameters::GetName()
extern "C"  String_t* ViewerParameters_GetName_m2691546014 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.ViewerParameters::GetManufacturer()
extern "C"  String_t* ViewerParameters_GetManufacturer_m1646541156 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ViewerButtonType Vuforia.ViewerParameters::GetButtonType()
extern "C"  int32_t ViewerParameters_GetButtonType_m1771268977 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ViewerTrayAlignment Vuforia.ViewerParameters::GetTrayAlignment()
extern "C"  int32_t ViewerParameters_GetTrayAlignment_m3451525661 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetScreenToLensDistance()
extern "C"  float ViewerParameters_GetScreenToLensDistance_m3922880708 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetInterLensDistance()
extern "C"  float ViewerParameters_GetInterLensDistance_m3669278311 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetLensCentreToTrayDistance()
extern "C"  float ViewerParameters_GetLensCentreToTrayDistance_m4058681993 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ViewerParameters::GetNumDistortionCoefficients()
extern "C"  int32_t ViewerParameters_GetNumDistortionCoefficients_m2063799257 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetDistortionCoefficient(System.Int32)
extern "C"  float ViewerParameters_GetDistortionCoefficient_m3979150401 (ViewerParameters_t696517330 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Vuforia.ViewerParameters::GetFieldOfView()
extern "C"  Vector4_t3525329790  ViewerParameters_GetFieldOfView_m1551957595 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ViewerParameters::ContainsMagnet()
extern "C"  bool ViewerParameters_ContainsMagnet_m1267375965 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ViewerParameters::get_NativePtr()
extern "C"  IntPtr_t ViewerParameters_get_NativePtr_m1477562617 (ViewerParameters_t696517330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
