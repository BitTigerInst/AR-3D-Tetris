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

// Vuforia.ExternalStereoCameraConfiguration
struct ExternalStereoCameraConfiguration_t58656292;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void Vuforia.ExternalStereoCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void ExternalStereoCameraConfiguration__ctor_m1733815852 (ExternalStereoCameraConfiguration_t58656292 * __this, Camera_t3533968274 * ___leftCamera0, Camera_t3533968274 * ___rightCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ExternalStereoCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool ExternalStereoCameraConfiguration_CheckForSurfaceChanges_m4185469078 (ExternalStereoCameraConfiguration_t58656292 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ExternalStereoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void ExternalStereoCameraConfiguration_ApplyCorrectedProjectionMatrix_m2362650744 (ExternalStereoCameraConfiguration_t58656292 * __this, Matrix4x4_t277289660  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ExternalStereoCameraConfiguration::CameraParameterChanged()
extern "C"  bool ExternalStereoCameraConfiguration_CameraParameterChanged_m3310629832 (ExternalStereoCameraConfiguration_t58656292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ExternalStereoCameraConfiguration::UpdateProjection()
extern "C"  void ExternalStereoCameraConfiguration_UpdateProjection_m1506683874 (ExternalStereoCameraConfiguration_t58656292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
