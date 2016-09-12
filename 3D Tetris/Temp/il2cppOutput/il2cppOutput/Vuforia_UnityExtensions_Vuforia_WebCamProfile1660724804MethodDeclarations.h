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

// Vuforia.WebCamProfile
struct WebCamProfile_t1660724804;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1845074131.h"
#include "mscorlib_System_String968488902.h"

// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C"  ProfileData_t1845074131  WebCamProfile_get_Default_m3598422365 (WebCamProfile_t1660724804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C"  void WebCamProfile__ctor_m1330574074 (WebCamProfile_t1660724804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C"  ProfileData_t1845074131  WebCamProfile_GetProfile_m3052101586 (WebCamProfile_t1660724804 * __this, String_t* ___webcamName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C"  bool WebCamProfile_ProfileAvailable_m113445706 (WebCamProfile_t1660724804 * __this, String_t* ___webcamName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
