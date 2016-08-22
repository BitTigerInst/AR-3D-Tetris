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

// Vuforia.VirtualButtonImpl
struct VirtualButtonImpl_t3858176723;
// System.String
struct String_t;
// Vuforia.ImageTarget
struct ImageTarget_t2294340546;
// Vuforia.DataSet
struct DataSet_t1547874638;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData790089391.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet1547874638.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_Sens2232272511.h"

// System.String Vuforia.VirtualButtonImpl::get_Name()
extern "C"  String_t* VirtualButtonImpl_get_Name_m841513962 (VirtualButtonImpl_t3858176723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VirtualButtonImpl::get_ID()
extern "C"  int32_t VirtualButtonImpl_get_ID_m3130681809 (VirtualButtonImpl_t3858176723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::get_Enabled()
extern "C"  bool VirtualButtonImpl_get_Enabled_m1724640627 (VirtualButtonImpl_t3858176723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData Vuforia.VirtualButtonImpl::get_Area()
extern "C"  RectangleData_t790089391  VirtualButtonImpl_get_Area_m4213667785 (VirtualButtonImpl_t3858176723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonImpl::.ctor(System.String,System.Int32,Vuforia.RectangleData,Vuforia.ImageTarget,Vuforia.DataSet)
extern "C"  void VirtualButtonImpl__ctor_m388688491 (VirtualButtonImpl_t3858176723 * __this, String_t* ___name0, int32_t ___id1, RectangleData_t790089391  ___area2, Il2CppObject * ___imageTarget3, DataSet_t1547874638 * ___dataSet4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetArea(Vuforia.RectangleData)
extern "C"  bool VirtualButtonImpl_SetArea_m3902022235 (VirtualButtonImpl_t3858176723 * __this, RectangleData_t790089391  ___area0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetSensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C"  bool VirtualButtonImpl_SetSensitivity_m168632301 (VirtualButtonImpl_t3858176723 * __this, int32_t ___sensitivity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetEnabled(System.Boolean)
extern "C"  bool VirtualButtonImpl_SetEnabled_m3492844125 (VirtualButtonImpl_t3858176723 * __this, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
