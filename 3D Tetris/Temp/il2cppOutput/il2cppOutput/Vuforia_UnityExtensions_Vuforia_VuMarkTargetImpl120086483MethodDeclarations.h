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

// Vuforia.VuMarkTargetImpl
struct VuMarkTargetImpl_t120086483;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t2211312444;
// System.String
struct String_t;
// Vuforia.InstanceId
struct InstanceId_t1335526854;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3068329980;
// Vuforia.Image
struct Image_t2805765713;
// Vuforia.ImageImpl
struct ImageImpl_t3860485905;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_InstanceIdType1180610848.h"
#include "Vuforia_UnityExtensions_Vuforia_VuMarkTemplateImpl2211312444.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3993157490.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageImpl3860485905.h"

// System.Void Vuforia.VuMarkTargetImpl::.ctor(System.Int32,System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32,Vuforia.VuMarkTemplateImpl)
extern "C"  void VuMarkTargetImpl__ctor_m3370695386 (VuMarkTargetImpl_t120086483 * __this, int32_t ___id0, ByteU5BU5D_t58506160* ___buffer1, uint64_t ___numericValue2, int32_t ___dataType3, uint32_t ___dataLength4, VuMarkTemplateImpl_t2211312444 * ___template5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.VuMarkTargetImpl::GetSize()
extern "C"  Vector3_t3525329789  VuMarkTargetImpl_GetSize_m1077113340 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void VuMarkTargetImpl_SetSize_m3126716375 (VuMarkTargetImpl_t120086483 * __this, Vector3_t3525329789  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkTargetImpl::StartExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StartExtendedTracking_m158103711 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkTargetImpl::StopExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StopExtendedTracking_m3880159655 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuMarkTargetImpl::get_Name()
extern "C"  String_t* VuMarkTargetImpl_get_Name_m1748306170 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::get_ID()
extern "C"  int32_t VuMarkTargetImpl_get_ID_m3480653843 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.InstanceId Vuforia.VuMarkTargetImpl::get_InstanceId()
extern "C"  Il2CppObject * VuMarkTargetImpl_get_InstanceId_m1796015707 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl::get_Template()
extern "C"  Il2CppObject * VuMarkTargetImpl_get_Template_m245671119 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.VuMarkTargetImpl::get_InstanceImage()
extern "C"  Image_t2805765713 * VuMarkTargetImpl_get_InstanceImage_m2096189016 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::CallNativeGetInstanceImage()
extern "C"  int32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m248450708 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::CreateInstanceImage()
extern "C"  void VuMarkTargetImpl_CreateInstanceImage_m3974124713 (VuMarkTargetImpl_t120086483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_SetImageValues_m2217910177 (Il2CppObject * __this /* static, unused */, ImageHeaderData_t3993157490  ___imageHeader0, ImageImpl_t3860485905 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_AllocateImage_m2314529126 (Il2CppObject * __this /* static, unused */, ImageImpl_t3860485905 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
