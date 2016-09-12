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

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t1669175889;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_SmartTerrainInitia1520723184.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m1043807536_gshared (Action_1_t1669175889 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m1043807536(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t1669175889 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1043807536_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C"  void Action_1_Invoke_m1477274131_gshared (Action_1_t1669175889 * __this, SmartTerrainInitializationInfo_t1520723184  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m1477274131(__this, ___obj0, method) ((  void (*) (Action_1_t1669175889 *, SmartTerrainInitializationInfo_t1520723184 , const MethodInfo*))Action_1_Invoke_m1477274131_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m2872323433_gshared (Action_1_t1669175889 * __this, SmartTerrainInitializationInfo_t1520723184  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m2872323433(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t1669175889 *, SmartTerrainInitializationInfo_t1520723184 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m2872323433_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m546883392_gshared (Action_1_t1669175889 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m546883392(__this, ___result0, method) ((  void (*) (Action_1_t1669175889 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m546883392_gshared)(__this, ___result0, method)
