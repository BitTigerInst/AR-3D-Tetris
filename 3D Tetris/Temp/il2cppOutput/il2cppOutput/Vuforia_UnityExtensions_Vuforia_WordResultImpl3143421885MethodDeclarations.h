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

// Vuforia.WordResultImpl
struct WordResultImpl_t3143421885;
// Vuforia.Word
struct Word_t2737707072;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo3755316281.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2486352914.h"

// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C"  void WordResultImpl__ctor_m1083523777 (WordResultImpl_t3143421885 * __this, Il2CppObject * ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C"  Il2CppObject * WordResultImpl_get_Word_m2568895749 (WordResultImpl_t3143421885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C"  Vector3_t3525329789  WordResultImpl_get_Position_m3481450585 (WordResultImpl_t3143421885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C"  Quaternion_t1891715979  WordResultImpl_get_Orientation_m2931002998 (WordResultImpl_t3143421885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C"  OrientedBoundingBox_t3755316281  WordResultImpl_get_Obb_m2051634687 (WordResultImpl_t3143421885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C"  int32_t WordResultImpl_get_CurrentStatus_m4048660673 (WordResultImpl_t3143421885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void WordResultImpl_SetPose_m630393792 (WordResultImpl_t3143421885 * __this, Vector3_t3525329789  ___position0, Quaternion_t1891715979  ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C"  void WordResultImpl_SetObb_m4272484961 (WordResultImpl_t3143421885 * __this, OrientedBoundingBox_t3755316281  ___obb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C"  void WordResultImpl_SetStatus_m523973228 (WordResultImpl_t3143421885 * __this, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
