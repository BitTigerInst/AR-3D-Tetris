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

// Vuforia.TextRecoAbstractBehaviour
struct TextRecoAbstractBehaviour_t2884895845;
// Vuforia.ITextRecoEventHandler
struct ITextRecoEventHandler_t4066948379;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t1314894132;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t448781809;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.TextRecoAbstractBehaviour::get_IsInitialized()
extern "C"  bool TextRecoAbstractBehaviour_get_IsInitialized_m1313525034 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Awake()
extern "C"  void TextRecoAbstractBehaviour_Awake_m300993500 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Start()
extern "C"  void TextRecoAbstractBehaviour_Start_m3305493369 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnEnable()
extern "C"  void TextRecoAbstractBehaviour_OnEnable_m686247533 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDisable()
extern "C"  void TextRecoAbstractBehaviour_OnDisable_m239774304 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDestroy()
extern "C"  void TextRecoAbstractBehaviour_OnDestroy_m2417306354 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::RegisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  void TextRecoAbstractBehaviour_RegisterTextRecoEventHandler_m4083244175 (TextRecoAbstractBehaviour_t2884895845 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextRecoAbstractBehaviour::UnregisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  bool TextRecoAbstractBehaviour_UnregisterTextRecoEventHandler_m1023863560 (TextRecoAbstractBehaviour_t2884895845 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StartTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StartTextTracker_m1337750004 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StopTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StopTextTracker_m1413406144 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::SetupWordList()
extern "C"  void TextRecoAbstractBehaviour_SetupWordList_m2133675196 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::NotifyEventHandlersOfChanges(System.Collections.Generic.IEnumerable`1<Vuforia.Word>,System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>)
extern "C"  void TextRecoAbstractBehaviour_NotifyEventHandlersOfChanges_m2239988646 (TextRecoAbstractBehaviour_t2884895845 * __this, Il2CppObject* ___lostWords0, Il2CppObject* ___newWords1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaInitialized()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaInitialized_m2242566364 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaStarted()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaStarted_m1647892169 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnTrackablesUpdated()
extern "C"  void TextRecoAbstractBehaviour_OnTrackablesUpdated_m585877093 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnPause(System.Boolean)
extern "C"  void TextRecoAbstractBehaviour_OnPause_m2802221221 (TextRecoAbstractBehaviour_t2884895845 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::.ctor()
extern "C"  void TextRecoAbstractBehaviour__ctor_m63388281 (TextRecoAbstractBehaviour_t2884895845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
