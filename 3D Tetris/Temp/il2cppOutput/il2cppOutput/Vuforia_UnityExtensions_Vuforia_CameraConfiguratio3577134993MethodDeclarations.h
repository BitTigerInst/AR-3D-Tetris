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

// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

// System.Void Vuforia.CameraConfigurationUtility::ExtractCameraClippingPlanes(UnityEngine.Matrix4x4,System.Single&,System.Single&)
extern "C"  void CameraConfigurationUtility_ExtractCameraClippingPlanes_m3546389626 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___inverseProjMatrix0, float* ___near1, float* ___far2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::ExtractVerticalCameraFoV(UnityEngine.Matrix4x4)
extern "C"  float CameraConfigurationUtility_ExtractVerticalCameraFoV_m204823996 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___inverseProjMatrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::ExtractHorizontalCameraFoV(UnityEngine.Matrix4x4)
extern "C"  float CameraConfigurationUtility_ExtractHorizontalCameraFoV_m3026815274 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___inverseProjMatrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.CameraConfigurationUtility::ScalePerspectiveProjectionMatrix(UnityEngine.Matrix4x4,System.Single,System.Single)
extern "C"  Matrix4x4_t277289660  CameraConfigurationUtility_ScalePerspectiveProjectionMatrix_m1914541254 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___inputMatrix0, float ___targetVerticalFoVDeg1, float ___targetHorizontalFoVDeg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::CalculateHorizontalFoVFromViewPortAspect(System.Single,System.Single)
extern "C"  float CameraConfigurationUtility_CalculateHorizontalFoVFromViewPortAspect_m2422913208 (Il2CppObject * __this /* static, unused */, float ___verticalFoVDeg0, float ___viewportAspect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::CalculateVerticalFoVFromViewPortAspect(System.Single,System.Single)
extern "C"  float CameraConfigurationUtility_CalculateVerticalFoVFromViewPortAspect_m1094394378 (Il2CppObject * __this /* static, unused */, float ___horizontalFoVDeg0, float ___viewportAspect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraConfigurationUtility::SetFovForCustomProjection(UnityEngine.Camera)
extern "C"  void CameraConfigurationUtility_SetFovForCustomProjection_m3993333155 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CameraConfigurationUtility::HomogenizedVec3(UnityEngine.Vector4)
extern "C"  Vector3_t3525329789  CameraConfigurationUtility_HomogenizedVec3_m1861290299 (Il2CppObject * __this /* static, unused */, Vector4_t3525329790  ___vec40, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraConfigurationUtility::.cctor()
extern "C"  void CameraConfigurationUtility__cctor_m3658425194 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
