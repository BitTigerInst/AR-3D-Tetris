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

// System.Action
struct Action_t437523947;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2957240604 (Action_t437523947 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m1445970038 (Action_t437523947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Action_t437523947(Il2CppObject* delegate);
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_BeginInvoke_m1056371541 (Action_t437523947 * __this, AsyncCallback_t1363551830 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern "C"  void Action_EndInvoke_m2672838956 (Action_t437523947 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
