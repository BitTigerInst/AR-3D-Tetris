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

// Vuforia.IOSUnityPlayer
struct IOSUnityPlayer_t4250424735;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitE1722238648.h"
#include "mscorlib_System_String968488902.h"

// System.Void Vuforia.IOSUnityPlayer::.ctor()
extern "C"  void IOSUnityPlayer__ctor_m918790246 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::LoadNativeLibraries()
extern "C"  void IOSUnityPlayer_LoadNativeLibraries_m1165765568 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializePlatform()
extern "C"  void IOSUnityPlayer_InitializePlatform_m2049752257 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/InitError Vuforia.IOSUnityPlayer::Start(System.String)
extern "C"  int32_t IOSUnityPlayer_Start_m970549361 (IOSUnityPlayer_t4250424735 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Update()
extern "C"  void IOSUnityPlayer_Update_m144588647 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Dispose()
extern "C"  void IOSUnityPlayer_Dispose_m2387413795 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnPause()
extern "C"  void IOSUnityPlayer_OnPause_m2682614363 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnResume()
extern "C"  void IOSUnityPlayer_OnResume_m4242220426 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnDestroy()
extern "C"  void IOSUnityPlayer_OnDestroy_m2170737247 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializeSurface()
extern "C"  void IOSUnityPlayer_InitializeSurface_m72295617 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::SetUnityScreenOrientation()
extern "C"  void IOSUnityPlayer_SetUnityScreenOrientation_m3959835541 (IOSUnityPlayer_t4250424735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setPlatFormNative()
extern "C"  void IOSUnityPlayer_setPlatFormNative_m3740021168 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.IOSUnityPlayer::initQCARiOS(System.Int32,System.Int32,System.String)
extern "C"  int32_t IOSUnityPlayer_initQCARiOS_m1113145074 (Il2CppObject * __this /* static, unused */, int32_t ___rendererAPI0, int32_t ___screenOrientation1, String_t* ___licenseKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setSurfaceOrientationiOS(System.Int32)
extern "C"  void IOSUnityPlayer_setSurfaceOrientationiOS_m2809900247 (Il2CppObject * __this /* static, unused */, int32_t ___screenOrientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
