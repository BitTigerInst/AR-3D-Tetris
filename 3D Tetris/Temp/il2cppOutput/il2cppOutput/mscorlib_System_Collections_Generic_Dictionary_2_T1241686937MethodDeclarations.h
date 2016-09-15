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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct Transform_1_t1241686937;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1123011399.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4008240102_gshared (Transform_1_t1241686937 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4008240102(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1241686937 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4008240102_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Invoke(TKey,TValue)
extern "C"  VirtualButtonData_t1123011399  Transform_1_Invoke_m2967248210_gshared (Transform_1_t1241686937 * __this, int32_t ___key0, VirtualButtonData_t1123011399  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2967248210(__this, ___key0, ___value1, method) ((  VirtualButtonData_t1123011399  (*) (Transform_1_t1241686937 *, int32_t, VirtualButtonData_t1123011399 , const MethodInfo*))Transform_1_Invoke_m2967248210_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1939307005_gshared (Transform_1_t1241686937 * __this, int32_t ___key0, VirtualButtonData_t1123011399  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1939307005(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1241686937 *, int32_t, VirtualButtonData_t1123011399 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1939307005_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>::EndInvoke(System.IAsyncResult)
extern "C"  VirtualButtonData_t1123011399  Transform_1_EndInvoke_m3785415672_gshared (Transform_1_t1241686937 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3785415672(__this, ___result0, method) ((  VirtualButtonData_t1123011399  (*) (Transform_1_t1241686937 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3785415672_gshared)(__this, ___result0, method)
