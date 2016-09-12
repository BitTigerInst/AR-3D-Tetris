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

// Vuforia.MarkerImpl
struct MarkerImpl_t1548580528;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Int32 Vuforia.MarkerImpl::get_MarkerID()
extern "C"  int32_t MarkerImpl_get_MarkerID_m2718872522 (MarkerImpl_t1548580528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::set_MarkerID(System.Int32)
extern "C"  void MarkerImpl_set_MarkerID_m766901059 (MarkerImpl_t1548580528 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::.ctor(System.String,System.Int32,System.Single,System.Int32)
extern "C"  void MarkerImpl__ctor_m2220752889 (MarkerImpl_t1548580528 * __this, String_t* ___name0, int32_t ___id1, float ___size2, int32_t ___markerID3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.MarkerImpl::GetSize()
extern "C"  float MarkerImpl_GetSize_m2335380717 (MarkerImpl_t1548580528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::SetSize(System.Single)
extern "C"  void MarkerImpl_SetSize_m2051489734 (MarkerImpl_t1548580528 * __this, float ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerImpl::StartExtendedTracking()
extern "C"  bool MarkerImpl_StartExtendedTracking_m3812613922 (MarkerImpl_t1548580528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerImpl::StopExtendedTracking()
extern "C"  bool MarkerImpl_StopExtendedTracking_m2751121092 (MarkerImpl_t1548580528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
