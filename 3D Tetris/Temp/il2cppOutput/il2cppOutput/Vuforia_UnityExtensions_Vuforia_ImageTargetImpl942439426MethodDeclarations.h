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

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t942439426;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t1547874638;
// Vuforia.VirtualButton
struct VirtualButton_t3523578643;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t2100765703;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType942778652.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet1547874638.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData790089391.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton3523578643.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C"  void ImageTargetImpl__ctor_m3195938883 (ImageTargetImpl_t942439426 * __this, String_t* ___name0, int32_t ___id1, int32_t ___imageTargetType2, DataSet_t1547874638 * ___dataSet3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t ImageTargetImpl_get_ImageTargetType_m4079278064 (ImageTargetImpl_t942439426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t3523578643 * ImageTargetImpl_CreateVirtualButton_m1483301316 (ImageTargetImpl_t942439426 * __this, String_t* ___name0, RectangleData_t790089391  ___area1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t3523578643 * ImageTargetImpl_GetVirtualButtonByName_m2432020947 (ImageTargetImpl_t942439426 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C"  Il2CppObject* ImageTargetImpl_GetVirtualButtons_m99058691 (ImageTargetImpl_t942439426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_DestroyVirtualButton_m879157800 (ImageTargetImpl_t942439426 * __this, VirtualButton_t3523578643 * ___vb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t3523578643 * ImageTargetImpl_CreateNewVirtualButtonInNative_m2906684774 (ImageTargetImpl_t942439426 * __this, String_t* ___name0, RectangleData_t790089391  ___rectangleData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_UnregisterVirtualButtonInNative_m3960881976 (ImageTargetImpl_t942439426 * __this, VirtualButton_t3523578643 * ___vb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C"  void ImageTargetImpl_CreateVirtualButtonsFromNative_m3483785371 (ImageTargetImpl_t942439426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
