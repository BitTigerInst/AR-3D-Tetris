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

// Vuforia.PlayModeEyewearCalibrationProfileManagerImpl
struct PlayModeEyewearCalibrationProfileManagerImpl_t2969643787;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice_EyeID67427052.h"
#include "mscorlib_System_String968488902.h"

// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getMaxCount_m3126376668 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getUsedCount_m2794601795 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_isProfileUsed_m690044994 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getActiveProfile_m525875572 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setActiveProfile_m1788389919 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t277289660  PlayModeEyewearCalibrationProfileManagerImpl_getCameraToEyePose_m519571720 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, int32_t ___eyeID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t277289660  PlayModeEyewearCalibrationProfileManagerImpl_getEyeProjection_m1545021670 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, int32_t ___eyeID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setCameraToEyePose_m1769712391 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, int32_t ___eyeID1, Matrix4x4_t277289660  ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setEyeProjection_m2387478309 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, int32_t ___eyeID1, Matrix4x4_t277289660  ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C"  String_t* PlayModeEyewearCalibrationProfileManagerImpl_getProfileName_m1703636973 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setProfileName_m3668759340 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_clearProfile_m2571779322 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::.ctor()
extern "C"  void PlayModeEyewearCalibrationProfileManagerImpl__ctor_m1798807977 (PlayModeEyewearCalibrationProfileManagerImpl_t2969643787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
