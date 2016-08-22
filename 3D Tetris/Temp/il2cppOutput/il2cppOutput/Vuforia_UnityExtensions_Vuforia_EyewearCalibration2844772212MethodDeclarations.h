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

// Vuforia.EyewearCalibrationProfileManagerImpl
struct EyewearCalibrationProfileManagerImpl_t2844772212;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice_EyeID67427052.h"
#include "mscorlib_System_String968488902.h"

// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getMaxCount_m3124984915 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getUsedCount_m2751457452 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_isProfileUsed_m1467457913 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getActiveProfile_m230688861 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setActiveProfile_m3232999816 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t277289660  EyewearCalibrationProfileManagerImpl_getCameraToEyePose_m74572721 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, int32_t ___eyeID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t277289660  EyewearCalibrationProfileManagerImpl_getEyeProjection_m208247247 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, int32_t ___eyeID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setCameraToEyePose_m712505328 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, int32_t ___eyeID1, Matrix4x4_t277289660  ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setEyeProjection_m2962913870 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, int32_t ___eyeID1, Matrix4x4_t277289660  ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.EyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C"  String_t* EyewearCalibrationProfileManagerImpl_getProfileName_m983971478 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setProfileName_m822017301 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_clearProfile_m3566688483 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearCalibrationProfileManagerImpl::.ctor()
extern "C"  void EyewearCalibrationProfileManagerImpl__ctor_m581211744 (EyewearCalibrationProfileManagerImpl_t2844772212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
