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

// Vuforia.VuforiaNativeWrapper
struct VuforiaNativeWrapper_t4139103376;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceInitCamera_m498122861 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceDeinitCamera_m1304166045 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceStartCamera_m2538066210 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceStopCamera_m3470353934 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetNumVideoModes_m2521132076 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetCameraDirection_m3818503851 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_CameraDeviceGetVideoMode_m1879924386 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSelectVideoMode_m116184110 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFlashTorchMode_m1609665277 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFocusMode_m3977215985 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetCameraConfiguration_m4012224656 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_CameraDeviceGetCameraFieldOfViewRads_m44711854 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___fovVectorPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetNumCameraFields_m4289293109 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_CameraDeviceGetCameraField_m898983197 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___cameraField0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldString_m493539373 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, StringBuilder_t3822575854 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldInt64_m3294983308 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldFloat_m380238717 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldBool_m4282840731 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldInt64Range_m398591093 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldString_m2277221646 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldInt64_m708480422 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldFloat_m2006210120 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldBool_m2567940484 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldInt64Range_m1333861491 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_QcarSetFrameFormat_m643355861 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_DataSetExists_m2732891007 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetLoad_m3101868567 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetGetNumTrackableType_m3915515074 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetGetTrackablesOfType_m3966335549 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_DataSetGetTrackableName_m2336379752 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetCreateTrackable_m3345019452 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_DataSetDestroyTrackable_m2160308380 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetHasReachedTrackableLimit_m257663992 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNativeWrapper_GetCameraThreadID_m371684982 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetBuilderBuild_m3010467250 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___targetName0, float ___sceenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::FrameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_FrameCounterGetBenchmarkingData_m1853338108 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNativeWrapper_ImageTargetBuilderStartScan_m1500905650 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNativeWrapper_ImageTargetBuilderStopScan_m1376260910 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetBuilderGetFrameQuality_m4025705583 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeWrapper_ImageTargetBuilderGetTrackableSource_m290786670 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetCreateVirtualButton_m776808665 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetDestroyVirtualButton_m4137798695 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_VirtualButtonGetId_m3833479628 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetGetNumVirtualButtons_m1145304040 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetGetVirtualButtons_m1585144011 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetGetVirtualButtonName_m565973688 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t3822575854 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CylinderTargetGetDimensions_m2655949836 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_CylinderTargetSetSideLength_m1098496647 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_CylinderTargetSetTopDiameter_m3848979234 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_CylinderTargetSetBottomDiameter_m784845548 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTargetSetSize_m3882218741 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTargetGetSize_m2473732993 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeWrapper_ObjectTrackerCreateDataSet_m258861112 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerDestroyDataSet_m2171422855 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerActivateDataSet_m3559445084 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerDeactivateDataSet_m4217799581 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerPersistExtendedTracking_m1055995688 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerResetExtendedTracking_m252285842 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_MarkerSetSize_m2807482997 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___trackableIndex0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_MarkerTrackerCreateMarker_m1351046044 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___id0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_MarkerTrackerDestroyMarker_m674651059 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___trackableId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::InitPlatformNative()
extern "C"  void VuforiaNativeWrapper_InitPlatformNative_m3804067034 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_InitFrameState_m4219777600 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_DeinitFrameState_m3987676447 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_OnSurfaceChanged_m1224312544 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnPause()
extern "C"  void VuforiaNativeWrapper_OnPause_m1431286073 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnResume()
extern "C"  void VuforiaNativeWrapper_OnResume_m4105749100 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::GetVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeWrapper_GetVuforiaLibraryVersion_m1586392950 (VuforiaNativeWrapper_t4139103376 * __this, StringBuilder_t3822575854 * ___version0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::HasSurfaceBeenRecreated()
extern "C"  bool VuforiaNativeWrapper_HasSurfaceBeenRecreated_m3969471046 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_UpdateQCAR_m3106317838 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameIndex2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererEnd()
extern "C"  void VuforiaNativeWrapper_RendererEnd_m2164426298 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_QcarGetBufferSize_m1989266651 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_QcarAddCameraFrame_m4183649130 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RendererSetVideoBackgroundCfg_m4254021848 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RendererGetVideoBackgroundCfg_m2325255268 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RendererGetVideoBackgroundTextureInfo_m1613536447 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::RendererCreateNativeTexture(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_RendererCreateNativeTexture_m505115939 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_RendererSetVideoBackgroundTextureID_m4148646867 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_RendererSetVideoBackgroundTexturePtr_m3668835339 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m2907004818 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_RendererGetRecommendedFps_m327146280 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeWrapper_RendererGetGraphicsAPI_m3597665160 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_QcarSetHint_m3298626233 (VuforiaNativeWrapper_t4139103376 * __this, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_GetProjectionGL_m271953401 (VuforiaNativeWrapper_t4139103376 * __this, float ___nearClip0, float ___farClip1, IntPtr_t ___projMatrix2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_SetApplicationEnvironment_m872666104 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeWrapper_SetStateBufferSize_m2737514529 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  bool VuforiaNativeWrapper_SmartTerrainTrackerSetScaleToMillimeter_m4222674352 (VuforiaNativeWrapper_t4139103376 * __this, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  bool VuforiaNativeWrapper_SmartTerrainTrackerInitBuilder_m1872252049 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  bool VuforiaNativeWrapper_SmartTerrainTrackerDeinitBuilder_m3914101872 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m4028355223 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m1534420271 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_SmartTerrainBuilderAddReconstruction_m234534700 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_SmartTerrainBuilderRemoveReconstruction_m486943917 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_SmartTerrainBuilderDestroyReconstruction_m103627635 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionStart(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_ReconstructionStart_m777382822 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionStop(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_ReconstructionStop_m339592892 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_ReconstructionIsReconstructing_m3093484374 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionReset(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_ReconstructionReset_m4082760473 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_ReconstructionSetNavMeshPadding_m1287895960 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  bool VuforiaNativeWrapper_ReconstructionFromTargetSetInitializationTarget_m1534707478 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableId2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_ReconstructionSetMaximumArea_m3996763425 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ReconstructioFromEnvironmentGetReconstructionState_m2057549682 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderStartInit_m2243553933 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderGetInitState_m2388860590 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderDeinit_m2559563028 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderStartRecognition_m1116367480 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderStop_m1590264901 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_TargetFinderUpdate_m2883504515 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderGetResults_m56800838 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderEnableTracking_m1650799525 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_TargetFinderGetImageTargets_m1442103851 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNativeWrapper_TargetFinderClearTrackables_m957356070 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TextTrackerSetRegionOfInterest_m1746952649 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_TextTrackerGetRegionOfInterest_m35727682 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_WordListLoadWordList_m2454882583 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_WordListAddWordsFromFile_m2482263223 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___path0, int32_t ___storagetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListAddWordU_m2940145526 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListRemoveWordU_m76400735 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListContainsWordU_m380602810 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeWrapper_WordListUnloadAllLists_m443181383 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_WordListSetFilterMode_m2952350972 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNativeWrapper_WordListGetFilterMode_m90211615 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_WordListLoadFilterList_m579492677 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListAddWordToFilterListU_m3873648295 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListRemoveWordFromFilterListU_m4145803839 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNativeWrapper_WordListClearFilterList_m2287763089 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeWrapper_WordListGetFilterListWordCount_m3827455885 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_WordListGetFilterListWordU_m147226605 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordGetLetterMask_m3382057075 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordGetLetterBoundingBoxes_m3129913614 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TrackerManagerInitTracker_m863220762 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TrackerManagerDeinitTracker_m2735127225 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::TrackerStart(System.Int32)
extern "C"  bool VuforiaNativeWrapper_TrackerStart_m4111952653 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TrackerStop(System.Int32)
extern "C"  void VuforiaNativeWrapper_TrackerStop_m1618352973 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_VirtualButtonSetEnabled_m2013187933 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_VirtualButtonSetSensitivity_m2137655483 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_VirtualButtonSetAreaRectangle_m1535771335 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::VuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeWrapper_VuforiaGetRenderEventCallback_m3841385282 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNativeWrapper_QcarInit_m2296696035 (VuforiaNativeWrapper_t4139103376 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarDeinit()
extern "C"  int32_t VuforiaNativeWrapper_QcarDeinit_m182115520 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_StartExtendedTracking_m2919296555 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_StopExtendedTracking_m4271906177 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::DeviceIsEyewearDevice()
extern "C"  bool VuforiaNativeWrapper_DeviceIsEyewearDevice_m3069431510 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearDeviceIsSeeThru()
extern "C"  bool VuforiaNativeWrapper_EyewearDeviceIsSeeThru_m127423372 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceGetScreenOrientation_m3885195626 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearDeviceIsDualDisplay()
extern "C"  bool VuforiaNativeWrapper_EyewearDeviceIsDualDisplay_m3188507144 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearDeviceIsDisplayExtended()
extern "C"  bool VuforiaNativeWrapper_EyewearDeviceIsDisplayExtended_m1243460541 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  bool VuforiaNativeWrapper_EyewearDeviceIsDisplayExtendedGLOnly_m3868430510 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  bool VuforiaNativeWrapper_EyewearDeviceSetDisplayExtended_m1430179142 (VuforiaNativeWrapper_t4139103376 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  bool VuforiaNativeWrapper_EyewearDeviceIsPredictiveTrackingEnabled_m2284150669 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  bool VuforiaNativeWrapper_EyewearDeviceSetPredictiveTracking_m3514599067 (VuforiaNativeWrapper_t4139103376 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetMaxCount_m384540391 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetUsedCount_m3697023128 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  bool VuforiaNativeWrapper_EyewearCPMIsProfileUsed_m439458957 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetActiveProfile_m1533698633 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  bool VuforiaNativeWrapper_EyewearCPMSetActiveProfile_m1232922100 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetCameraToEyePose_m1504726508 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetEyeProjection_m1000861902 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMSetCameraToEyePose_m573957880 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMSetEyeProjection_m4271398106 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_EyewearCPMGetProfileName_m801342228 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_EyewearCPMSetProfileName_m233471187 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  bool VuforiaNativeWrapper_EyewearCPMClearProfile_m4226263887 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool VuforiaNativeWrapper_EyewearUserCalibratorInit_m210303146 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeWrapper_EyewearUserCalibratorGetMinScaleHint_m736997029 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeWrapper_EyewearUserCalibratorGetMaxScaleHint_m80080979 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  bool VuforiaNativeWrapper_EyewearUserCalibratorIsStereoStretched_m2714535000 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_EyewearUserCalibratorGetProjectionMatrix_m1453536731 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___readingsArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeMatrix2, IntPtr_t ___projMatrix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_Recenter_m2626197210 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_SetPosePrediction_m1103512329 (VuforiaNativeWrapper_t4139103376 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_GetPosePrediction_m2483961862 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_SetModelCorrectionMode_m3599694091 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_GetModelCorrectionMode_m3468351558 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_SetModelCorrectionModeWithTransform_m3461805869 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RotationalDeviceTracker_GetModelCorrectionTransform_m1276604573 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_ViewerParameters_delete_m2939544196 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___toDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParameters_copy_m3247745135 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___toCopy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetVersion_m2022501657 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParameters_GetName_m3171619521 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParameters_GetManufacturer_m1135946683 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParameters_GetButtonType_m643136617 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetScreenToLensDistance_m619956667 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetInterLensDistance_m1011527042 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParameters_GetTrayAlignment_m3640702020 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetLensCentreToTrayDistance_m3771505302 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParameters_GetNumDistortionCoefficients_m1032617424 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetDistortionCoefficient_m2489873502 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ViewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_ViewerParameters_GetFieldOfView_m632368445 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ViewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_ViewerParameters_ContainsMagnet_m357197080 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::CustomViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeWrapper_CustomViewerParameters_new_m3138403392 (VuforiaNativeWrapper_t4139103376 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_delete_m69714453 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___toDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetButtonType_m1107259103 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetScreenToLensDistance_m1590832175 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetInterLensDistance_m3499162744 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetTrayAlignment_m37027234 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetLensCentreToTrayDistance_m4228571722 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_ClearDistortionCoefficients_m3793798718 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_AddDistortionCoefficient_m845386190 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetFieldOfView_m3112880922 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetContainsMagnet_m1705283618 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_GetListForAuthoringTools_m1766996683 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ViewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeWrapper_ViewerParametersList_SetSDKFilter_m4120530457 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vpl0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParametersList_Size_m2132677848 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_Get(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_Get_m2382904265 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vpl0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_Get(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_Get_m530060870 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vpl0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_Begin_m2998857179 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_Next_m1582051869 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vpl0, IntPtr_t ___last1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::Device_SetMode(System.Int32)
extern "C"  bool VuforiaNativeWrapper_Device_SetMode_m122817375 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::Device_GetMode()
extern "C"  int32_t VuforiaNativeWrapper_Device_GetMode_m157486236 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::Device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeWrapper_Device_SetViewerPresent_m1909147529 (VuforiaNativeWrapper_t4139103376 * __this, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::Device_IsViewerPresent()
extern "C"  bool VuforiaNativeWrapper_Device_IsViewerPresent_m2001004712 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::Device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeWrapper_Device_GetViewerList_m4168772338 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::Device_SelectViewer(System.IntPtr)
extern "C"  bool VuforiaNativeWrapper_Device_SelectViewer_m3586984237 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::Device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeWrapper_Device_GetSelectedViewer_m3701877231 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_UpdateCopy_m766334597 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_DeleteCopy_m946532839 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetDistortionMesh_m3374289818 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetDistortionMeshSize_m1202483003 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetProjectionMatrix_m590951213 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetDistortionTextureViewport_m4131501012 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetViewport_m3356279318 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetNormalizedViewport_m2127762861 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetEyeDisplayAdjustmentMatrix_m2071945455 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetEffectiveFov_m3518445334 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetViewportCentreToEyeAxis_m3560560038 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_SetRenderBuffers_m790697721 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.IntPtr,System.UInt32)
extern "C"  int32_t VuforiaNativeWrapper_VuMarkTemplateGetVuMarkUserData_m2950290475 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_VuMarkTemplateGetOrigin_m3021725010 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___origin2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_VuMarkTemplateSetTrackingFromRuntimeAppearance_m3286167800 (VuforiaNativeWrapper_t4139103376 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_VuMarkTargetGetInstanceImage_m3281898488 (VuforiaNativeWrapper_t4139103376 * __this, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceInitCamera_m2778188877 (Il2CppObject * __this /* static, unused */, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceDeinitCamera_m2296799869 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceStartCamera_m491876674 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceStopCamera_m1326137838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetNumVideoModes_m2883248140 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetCameraDirection_m3919690379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_cameraDeviceGetVideoMode_m723561090 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSelectVideoMode_m2599564366 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFlashTorchMode_m136274717 (Il2CppObject * __this /* static, unused */, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFocusMode_m392369105 (Il2CppObject * __this /* static, unused */, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetCameraConfiguration_m1037680816 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetCameraFieldOfViewRads_m3342466036 (Il2CppObject * __this /* static, unused */, IntPtr_t ___fovVectorPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetNumCameraFields_m95512341 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::cameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_cameraDeviceGetCameraField_m2030385405 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraFields0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldString_m3688336397 (Il2CppObject * __this /* static, unused */, String_t* ___key0, StringBuilder_t3822575854 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldInt64_m131418220 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldFloat_m1511640925 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldBool_m2795316923 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldInt64Range_m779852949 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldString_m2990951726 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldInt64_m3515923910 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldFloat_m3137612328 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldBool_m3699342692 (Il2CppObject * __this /* static, unused */, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldInt64Range_m3036120211 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_qcarSetFrameFormat_m2054235381 (Il2CppObject * __this /* static, unused */, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_dataSetExists_m921303967 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetLoad_m1614344759 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetGetNumTrackableType_m751949986 (Il2CppObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetGetTrackablesOfType_m4220795485 (Il2CppObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_dataSetGetTrackableName_m2304620360 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetCreateTrackable_m4098887196 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_dataSetDestroyTrackable_m4062668988 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetHasReachedTrackableLimit_m1045256152 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::getCameraThreadID()
extern "C"  int32_t VuforiaNativeWrapper_getCameraThreadID_m3413356182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetBuilderBuild_m1854103954 (Il2CppObject * __this /* static, unused */, String_t* ___targetName0, float ___sceenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::frameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_frameCounterGetBenchmarkingData_m2640930268 (Il2CppObject * __this /* static, unused */, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::imageTargetBuilderStartScan()
extern "C"  void VuforiaNativeWrapper_imageTargetBuilderStartScan_m2205323474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::imageTargetBuilderStopScan()
extern "C"  void VuforiaNativeWrapper_imageTargetBuilderStopScan_m1814626062 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeWrapper_imageTargetBuilderGetFrameQuality_m3406519439 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::imageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeWrapper_imageTargetBuilderGetTrackableSource_m1000907086 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetCreateVirtualButton_m4281291001 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetDestroyVirtualButton_m1153495047 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_virtualButtonGetId_m858935788 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetGetNumVirtualButtons_m79519688 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetGetVirtualButtons_m1147462827 (Il2CppObject * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetGetVirtualButtonName_m3812707992 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t3822575854 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cylinderTargetGetDimensions_m3126503404 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_cylinderTargetSetSideLength_m1569050215 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_cylinderTargetSetTopDiameter_m1256270658 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_cylinderTargetSetBottomDiameter_m2095509196 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTargetSetSize_m1865672917 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTargetGetSize_m457187169 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::objectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeWrapper_objectTrackerCreateDataSet_m697226264 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerDestroyDataSet_m1846799463 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerActivateDataSet_m2086054524 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerDeactivateDataSet_m1333711805 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerPersistExtendedTracking_m1948646152 (Il2CppObject * __this /* static, unused */, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerResetExtendedTracking_m2532351858 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_markerSetSize_m995895957 (Il2CppObject * __this /* static, unused */, int32_t ___trackableIndex0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_markerTrackerCreateMarker_m3367422908 (Il2CppObject * __this /* static, unused */, int32_t ___id0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::initPlatformNative()
extern "C"  void VuforiaNativeWrapper_initPlatformNative_m3606593722 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_markerTrackerDestroyMarker_m200570771 (Il2CppObject * __this /* static, unused */, int32_t ___trackableId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::initFrameState(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_initFrameState_m629228128 (Il2CppObject * __this /* static, unused */, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::deinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_deinitFrameState_m2328372543 (Il2CppObject * __this /* static, unused */, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_onSurfaceChanged_m4045889280 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onPause()
extern "C"  void VuforiaNativeWrapper_onPause_m3722285401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onResume()
extern "C"  void VuforiaNativeWrapper_onResume_m2112284236 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::getVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeWrapper_getVuforiaLibraryVersion_m716106582 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___version0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::hasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeWrapper_hasSurfaceBeenRecreated_m392223244 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_updateQCAR_m1897244206 (Il2CppObject * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameIndex2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererEnd()
extern "C"  void VuforiaNativeWrapper_rendererEnd_m1365464666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_qcarGetBufferSize_m689106171 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_qcarAddCameraFrame_m3595645834 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_rendererSetVideoBackgroundCfg_m1528587448 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_rendererGetVideoBackgroundCfg_m3894788164 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_rendererGetVideoBackgroundTextureInfo_m457173151 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::rendererCreateNativeTexture(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_rendererCreateNativeTexture_m2521492803 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_rendererSetVideoBackgroundTextureID_m3900347379 (Il2CppObject * __this /* static, unused */, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_rendererSetVideoBackgroundTexturePtr_m1276228651 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m1552558002 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_rendererGetRecommendedFps_m866042696 (Il2CppObject * __this /* static, unused */, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeWrapper_rendererGetGraphicsAPI_m1453449064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarInit(System.String)
extern "C"  int32_t VuforiaNativeWrapper_qcarInit_m3474453763 (Il2CppObject * __this /* static, unused */, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_qcarSetHint_m3837522649 (Il2CppObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_getProjectionGL_m1974212121 (Il2CppObject * __this /* static, unused */, float ___nearClip0, float ___farClip1, IntPtr_t ___projMatrix2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_setApplicationEnvironment_m3958559768 (Il2CppObject * __this /* static, unused */, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeWrapper_setStateBufferSize_m2838701057 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainTrackerSetScaleToMillimeter_m240614314 (Il2CppObject * __this /* static, unused */, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainTrackerInitBuilder_m4257454603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainTrackerDeinitBuilder_m2581220202 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m1635748535 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m2185216271 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainBuilderAddReconstruction_m3532288882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainBuilderRemoveReconstruction_m799851175 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainBuilderDestroyReconstruction_m1213818041 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionStart_m3739468448 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionStop_m1266428034 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionIsReconstructing_m560905244 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionReset_m2749878803 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_reconstructionSetNavMeshPadding_m222111608 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionFromTargetSetInitializationTarget_m1373078108 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableId2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionSetMaximumArea_m1442886887 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructioFromEnvironmentGetReconstructionState_m848476050 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_targetFinderStartInit_m3136204397 (Il2CppObject * __this /* static, unused */, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderGetInitState()
extern "C"  int32_t VuforiaNativeWrapper_targetFinderGetInitState_m3381494414 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderDeinit()
extern "C"  int32_t VuforiaNativeWrapper_targetFinderDeinit_m2362089716 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeWrapper_targetFinderStartRecognition_m1478483544 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStop()
extern "C"  int32_t VuforiaNativeWrapper_targetFinderStop_m4043687973 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_targetFinderUpdate_m3671096675 (Il2CppObject * __this /* static, unused */, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_targetFinderGetResults_m949451302 (Il2CppObject * __this /* static, unused */, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_targetFinderEnableTracking_m2364529605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_targetFinderGetImageTargets_m2155833931 (Il2CppObject * __this /* static, unused */, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderClearTrackables()
extern "C"  void VuforiaNativeWrapper_targetFinderClearTrackables_m1661773894 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_textTrackerSetRegionOfInterest_m1807560105 (Il2CppObject * __this /* static, unused */, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_textTrackerGetRegionOfInterest_m66360726 (Il2CppObject * __this /* static, unused */, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_wordListLoadWordList_m3416704247 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_wordListAddWordsFromFile_m1325899927 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListAddWordU_m1280841622 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListRemoveWordU_m2827373631 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListContainsWordU_m2660668826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeWrapper_wordListUnloadAllLists_m2593932583 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_wordListSetFilterMode_m2333164828 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListGetFilterMode()
extern "C"  int32_t VuforiaNativeWrapper_wordListGetFilterMode_m1267969343 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListAddWordToFilterListU_m2400257735 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListRemoveWordFromFilterListU_m812658207 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListClearFilterList()
extern "C"  int32_t VuforiaNativeWrapper_wordListClearFilterList_m241573553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_wordListLoadFilterList_m1472143141 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeWrapper_wordListGetFilterListWordCount_m3928642413 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::wordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_wordListGetFilterListWordU_m3968113613 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordGetLetterMask_m497969299 (Il2CppObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordGetLetterBoundingBoxes_m4261315822 (Il2CppObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_trackerManagerInitTracker_m1402117178 (Il2CppObject * __this /* static, unused */, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_trackerStart_m591453191 (Il2CppObject * __this /* static, unused */, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::trackerStop(System.Int32)
extern "C"  void VuforiaNativeWrapper_trackerStop_m3867130733 (Il2CppObject * __this /* static, unused */, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_trackerManagerDeinitTracker_m923540185 (Il2CppObject * __this /* static, unused */, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_virtualButtonSetEnabled_m1562056573 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_virtualButtonSetSensitivity_m1860518107 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_virtualButtonSetAreaRectangle_m263345831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::vuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeWrapper_vuforiaGetRenderEventCallback_m2182081378 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarDeinit()
extern "C"  int32_t VuforiaNativeWrapper_qcarDeinit_m17795232 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_startExtendedTracking_m2670997067 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_stopExtendedTracking_m938760545 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::deviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeWrapper_deviceIsEyewearDevice_m862359580 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsSeeThru_m427670278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceGetScreenOrientation_m3266009482 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsDualDisplay_m127786114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsDisplayExtended_m3628663095 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsDisplayExtendedGLOnly_m1577671336 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceSetDisplayExtended_m2868092044 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsPredictiveTrackingEnabled_m1532075143 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceSetPredictiveTracking_m2374052245 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetMaxCount_m1562298119 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetUsedCount_m1552807032 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMIsProfileUsed_m3829246803 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetActiveProfile_m1972063785 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMSetActiveProfile_m3131578734 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetCameraToEyePose_m2212642316 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetEyeProjection_m3017238766 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMSetCameraToEyePose_m1281873688 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMSetEyeProjection_m1992807674 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_eyewearCPMGetProfileName_m1511462644 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMSetProfileName_m3679603021 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMClearProfile_m3227233225 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_eyewearUserCalibratorInit_m1093386404 (Il2CppObject * __this /* static, unused */, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeWrapper_eyewearUserCalibratorGetMinScaleHint_m1447117445 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeWrapper_eyewearUserCalibratorGetMaxScaleHint_m790201395 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeWrapper_eyewearUserCalibratorIsStereoStretched_m318224338 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearUserCalibratorGetProjectionMatrix_m2972037973 (Il2CppObject * __this /* static, unused */, IntPtr_t ___readingsArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeMatrix2, IntPtr_t ___projMatrix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_Recenter_m1082202810 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_SetPosePrediction_m4098319145 (Il2CppObject * __this /* static, unused */, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_GetPosePrediction_m1010571302 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_SetModelCorrectionMode_m2533909739 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_GetModelCorrectionMode_m135205926 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_SetModelCorrectionModeWithTransform_m2671320909 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_rotationalDeviceTracker_GetModelCorrectionTransform_m2450027645 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::viewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_viewerParameters_delete_m3649664612 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParameters_copy_m1232843855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___toCopy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetVersion_m1697878265 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParameters_GetName_m3710515937 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParameters_GetManufacturer_m4076467163 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParameters_GetButtonType_m2054016137 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetScreenToLensDistance_m1333686747 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetInterLensDistance_m4150131042 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParameters_GetTrayAlignment_m307556388 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetLensCentreToTrayDistance_m4152767158 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParameters_GetNumDistortionCoefficients_m4261800368 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetDistortionCoefficient_m3197789310 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::viewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_viewerParameters_GetFieldOfView_m3861551389 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParameters_ContainsMagnet_m3451622674 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::customViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeWrapper_customViewerParameters_new_m3846319200 (Il2CppObject * __this /* static, unused */, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_delete_m1639247349 (Il2CppObject * __this /* static, unused */, IntPtr_t ___toDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetButtonType_m236972735 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetScreenToLensDistance_m3566699599 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetInterLensDistance_m434608216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetTrayAlignment_m2053404098 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetLensCentreToTrayDistance_m3777440362 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_ClearDistortionCoefficients_m2584725086 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_AddDistortionCoefficient_m1967734190 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetFieldOfView_m4286303994 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetContainsMagnet_m2175837186 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_GetListForAuthoringTools_m412549867 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::viewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeWrapper_viewerParametersList_SetSDKFilter_m2103984633 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParametersList_Size_m1658597560 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_GetByIndex_m346605146 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_GetByNameManufacturer_m3320516403 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_Begin_m1187270139 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_Next_m2713454077 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, IntPtr_t ___last1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_device_SetMode_m1357063641 (Il2CppObject * __this /* static, unused */, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::device_GetMode()
extern "C"  int32_t VuforiaNativeWrapper_device_GetMode_m1000261756 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeWrapper_device_SetViewerPresent_m2448043945 (Il2CppObject * __this /* static, unused */, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeWrapper_device_IsViewerPresent_m2301251618 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeWrapper_device_GetViewerList_m3375480530 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_device_SelectViewer_m2254102567 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeWrapper_device_GetSelectedViewer_m399543759 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_UpdateCopy_m867521125 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_DeleteCopy_m1047719367 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetDistortionMesh_m2165216186 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetDistortionMeshSize_m1910398811 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetProjectionMatrix_m3380043533 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetDistortionTextureViewport_m958881716 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetViewport_m3737541174 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetNormalizedViewport_m2835678669 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetEyeDisplayAdjustmentMatrix_m2504995087 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetEffectiveFov_m1135066934 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetViewportCentreToEyeAxis_m576256390 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::vuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.IntPtr,System.UInt32)
extern "C"  int32_t VuforiaNativeWrapper_vuMarkTemplateGetVuMarkUserData_m4215060491 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::vuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_vuMarkTemplateGetOrigin_m4195148082 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___origin2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::vuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_vuMarkTemplateSetTrackingFromRuntimeAppearance_m3254408408 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::vuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_vuMarkTargetGetInstanceImage_m3932694488 (Il2CppObject * __this /* static, unused */, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::.ctor()
extern "C"  void VuforiaNativeWrapper__ctor_m1288437444 (VuforiaNativeWrapper_t4139103376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
