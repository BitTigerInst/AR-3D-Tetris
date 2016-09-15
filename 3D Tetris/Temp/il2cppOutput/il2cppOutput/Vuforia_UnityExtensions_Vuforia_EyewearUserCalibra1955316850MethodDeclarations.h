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

// Vuforia.EyewearUserCalibratorImpl
struct EyewearUserCalibratorImpl_t1955316850;
// Vuforia.EyewearDevice/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t3327693703;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Boolean Vuforia.EyewearUserCalibratorImpl::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool EyewearUserCalibratorImpl_init_m3805053840 (EyewearUserCalibratorImpl_t1955316850 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMinScaleHint()
extern "C"  float EyewearUserCalibratorImpl_getMinScaleHint_m3332672395 (EyewearUserCalibratorImpl_t1955316850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMaxScaleHint()
extern "C"  float EyewearUserCalibratorImpl_getMaxScaleHint_m2675756345 (EyewearUserCalibratorImpl_t1955316850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::isStereoStretched()
extern "C"  bool EyewearUserCalibratorImpl_isStereoStretched_m3885681598 (EyewearUserCalibratorImpl_t1955316850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::getProjectionMatrix(Vuforia.EyewearDevice/EyewearCalibrationReading[],UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  bool EyewearUserCalibratorImpl_getProjectionMatrix_m4104817009 (EyewearUserCalibratorImpl_t1955316850 * __this, EyewearCalibrationReadingU5BU5D_t3327693703* ___readings0, Matrix4x4_t277289660 * ___cameraToEyeMatrix1, Matrix4x4_t277289660 * ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearUserCalibratorImpl::.ctor()
extern "C"  void EyewearUserCalibratorImpl__ctor_m1906456844 (EyewearUserCalibratorImpl_t1955316850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
