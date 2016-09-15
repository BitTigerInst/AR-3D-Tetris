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

// Vuforia.VuforiaNativeIosWrapper
struct VuforiaNativeIosWrapper_t3775010965;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceInitCamera_m730693552 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceDeinitCamera_m1086285216 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceStartCamera_m1284111807 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceStopCamera_m243315153 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumVideoModes_m4217870767 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetCameraDirection_m2296813422 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceGetVideoMode_m3363497981 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSelectVideoMode_m2726569675 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFlashTorchMode_m1929292378 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFocusMode_m4139350644 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetCameraConfiguration_m2444137133 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_CameraDeviceGetCameraFieldOfViewRads_m1660548119 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___fovVectorPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumCameraFields_m2767602680 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceGetCameraField_m684065720 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___cameraField0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldString_m980940528 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, StringBuilder_t3822575854 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldInt64_m2244479247 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldFloat_m3624701952 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldBool_m785270200 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldInt64Range_m1348913618 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldString_m4071334123 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldInt64_m1505877187 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldFloat_m955706059 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldBool_m1517436423 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldInt64Range_m733986384 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarSetFrameFormat_m2862321906 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetExists_m1048309276 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetLoad_m3899265332 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetNumTrackableType_m2865011013 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetTrackablesOfType_m1895902170 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetTrackableName_m3637256811 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetCreateTrackable_m2846277631 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetDestroyTrackable_m1562256121 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetHasReachedTrackableLimit_m326134651 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_GetCameraThreadID_m1094360275 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetBuilderBuild_m1650716405 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___targetName0, float ___sceenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_FrameCounterGetBenchmarkingData_m1689394071 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_ImageTargetBuilderStartScan_m3738902967 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_ImageTargetBuilderStopScan_m2695380361 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m430977228 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m498487423 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetCreateVirtualButton_m1171157174 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetDestroyVirtualButton_m322437418 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonGetId_m2265392105 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetNumVirtualButtons_m540531243 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtons_m630422734 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtonName_m2886036859 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t3822575854 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetGetDimensions_m3606430351 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetSideLength_m2048977162 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetTopDiameter_m3249104127 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetBottomDiameter_m1264451567 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTargetSetSize_m2516145784 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTargetGetSize_m1107660036 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ObjectTrackerCreateDataSet_m671325321 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerDestroyDataSet_m1488996746 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerActivateDataSet_m3879072185 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerDeactivateDataSet_m2141798330 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m343967019 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerResetExtendedTracking_m484856533 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_MarkerSetSize_m1122901266 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___trackableIndex0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_MarkerTrackerCreateMarker_m728984569 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___id0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_MarkerTrackerDestroyMarker_m1867235702 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___trackableId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_InitPlatformNative_m2072980021 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_InitFrameState_m2162807621 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_DeinitFrameState_m2924482788 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_OnSurfaceChanged_m60422949 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnPause()
extern "C"  void VuforiaNativeIosWrapper_OnPause_m203015870 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnResume()
extern "C"  void VuforiaNativeIosWrapper_OnResume_m389111175 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::GetVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_GetVuforiaLibraryVersion_m1653196881 (VuforiaNativeIosWrapper_t3775010965 * __this, StringBuilder_t3822575854 * ___version0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C"  bool VuforiaNativeIosWrapper_HasSurfaceBeenRecreated_m388577263 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_UpdateQCAR_m1241985451 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameIndex2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererEnd()
extern "C"  void VuforiaNativeIosWrapper_RendererEnd_m4060893503 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarGetBufferSize_m3849471352 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_QcarAddCameraFrame_m1677692207 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererSetVideoBackgroundCfg_m2533182771 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererGetVideoBackgroundCfg_m604416191 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m3097110042 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTextureID_m3848583536 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::RendererCreateNativeTexture(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_RendererCreateNativeTexture_m3585898418 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTexturePtr_m3070783080 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m734627951 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetRecommendedFps_m1058353413 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetGraphicsAPI_m370626379 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarSetHint_m4029833366 (VuforiaNativeIosWrapper_t3775010965 * __this, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_GetProjectionGL_m3967045590 (VuforiaNativeIosWrapper_t3775010965 * __this, float ___nearClip0, float ___farClip1, IntPtr_t ___projMatrix2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_SetApplicationEnvironment_m2943587965 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_SetStateBufferSize_m4138249468 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3607391399 (VuforiaNativeIosWrapper_t3775010965 * __this, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainTrackerInitBuilder_m385050312 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m642374887 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3571045158 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m2977719808 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m1850370965 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m4166628260 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m2504692572 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionStart_m1800623133 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionStop_m1480979301 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionIsReconstructing_m705186431 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionReset_m811033488 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_ReconstructionSetNavMeshPadding_m1005304307 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m2960095743 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableId2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionSetMaximumArea_m727762634 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m193217295 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStartInit_m1531525264 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderGetInitState_m2170979761 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderDeinit_m3487660631 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStartRecognition_m2813106171 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStop_m2444861000 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderUpdate_m2719560478 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderGetResults_m3639739465 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderEnableTracking_m3444912002 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderGetImageTargets_m3369596656 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_TargetFinderClearTrackables_m3195353387 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TextTrackerSetRegionOfInterest_m991614732 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_TextTrackerGetRegionOfInterest_m857895815 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListLoadWordList_m3830676442 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordsFromFile_m1122512378 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___path0, int32_t ___storagetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordU_m3999437395 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListRemoveWordU_m2315746402 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListContainsWordU_m613173501 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListUnloadAllLists_m1511109898 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListSetFilterMode_m3652589913 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListGetFilterMode_m2341418236 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListLoadFilterList_m4162431304 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordToFilterListU_m4193275396 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListRemoveWordFromFilterListU_m1226630402 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListClearFilterList_m1033808686 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListGetFilterListWordCount_m2305765456 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_WordListGetFilterListWordU_m2179154622 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordGetLetterMask_m1306055824 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordGetLetterBoundingBoxes_m2079409553 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerManagerInitTracker_m1594427895 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerManagerDeinitTracker_m1050545494 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::TrackerStart(System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_TrackerStart_m478427780 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TrackerStop(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TrackerStop_m448169682 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetEnabled_m1059079226 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetSensitivity_m1021036312 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetAreaRectangle_m855755594 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::VuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_VuforiaGetRenderEventCallback_m3661201745 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarInit_m252935360 (VuforiaNativeIosWrapper_t3775010965 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_QcarDeinit_m1381725443 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_StartExtendedTracking_m2619233224 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_StopExtendedTracking_m1352732740 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::DeviceIsEyewearDevice()
extern "C"  bool VuforiaNativeIosWrapper_DeviceIsEyewearDevice_m2153974463 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsSeeThru()
extern "C"  bool VuforiaNativeIosWrapper_EyewearDeviceIsSeeThru_m1813025987 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceGetScreenOrientation_m290467271 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDualDisplay()
extern "C"  bool VuforiaNativeIosWrapper_EyewearDeviceIsDualDisplay_m3179515839 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDisplayExtended()
extern "C"  bool VuforiaNativeIosWrapper_EyewearDeviceIsDisplayExtended_m4051226100 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  bool VuforiaNativeIosWrapper_EyewearDeviceIsDisplayExtendedGLOnly_m489285029 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  bool VuforiaNativeIosWrapper_EyewearDeviceSetDisplayExtended_m4083359279 (VuforiaNativeIosWrapper_t3775010965 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  bool VuforiaNativeIosWrapper_EyewearDeviceIsPredictiveTrackingEnabled_m822763780 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  bool VuforiaNativeIosWrapper_EyewearDeviceSetPredictiveTracking_m4120912146 (VuforiaNativeIosWrapper_t3775010965 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetMaxCount_m2635747012 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetUsedCount_m469984347 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMIsProfileUsed_m2408664246 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetActiveProfile_m2603619468 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMSetActiveProfile_m869390635 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetCameraToEyePose_m704103177 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetEyeProjection_m378800427 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetCameraToEyePose_m4068301845 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetEyeProjection_m3649336631 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_EyewearCPMGetProfileName_m1009042981 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMSetProfileName_m3079755146 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMClearProfile_m4012691974 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_EyewearUserCalibratorInit_m2982464161 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m3372665512 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m2715749462 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  bool VuforiaNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m2351003535 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m3427866642 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___readingsArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeMatrix2, IntPtr_t ___projMatrix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_Recenter_m570575581 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetPosePrediction_m2963717030 (VuforiaNativeIosWrapper_t3775010965 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_GetPosePrediction_m2803588963 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetModelCorrectionMode_m2994921294 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_GetModelCorrectionMode_m549178121 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetModelCorrectionModeWithTransform_m3856154378 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RotationalDeviceTracker_GetModelCorrectionTransform_m1050672824 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_ViewerParameters_delete_m2826245919 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___toDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_copy_m2094889920 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___toCopy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetVersion_m1809993628 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_GetName_m1020408272 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_GetManufacturer_m99601354 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetButtonType_m2862102662 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetScreenToLensDistance_m2137773080 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetInterLensDistance_m2262108229 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetTrayAlignment_m721528583 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetLensCentreToTrayDistance_m3511561843 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetNumDistortionCoefficients_m427844627 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetDistortionCoefficient_m1941739515 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_ViewerParameters_GetFieldOfView_m349776792 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ViewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ViewerParameters_ContainsMagnet_m3629372175 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_CustomViewerParameters_new_m242931471 (VuforiaNativeIosWrapper_t3775010965 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_delete_m2643842672 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___toDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetButtonType_m1174063034 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetScreenToLensDistance_m1170754676 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetInterLensDistance_m104811091 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetTrayAlignment_m1623077607 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetLensCentreToTrayDistance_m1052596239 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_ClearDistortionCoefficients_m1569753283 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_AddDistortionCoefficient_m707885609 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetFieldOfView_m2886949173 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetContainsMagnet_m2796722365 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_GetListForAuthoringTools_m730651354 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeIosWrapper_ViewerParametersList_SetSDKFilter_m3132891572 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vpl0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParametersList_Size_m3325262491 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Get(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_Get_m1091194138 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vpl0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Get(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_Get_m3610843349 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vpl0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_Begin_m1564116266 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_Next_m1494168366 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vpl0, IntPtr_t ___last1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::Device_SetMode(System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_Device_SetMode_m113826070 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_GetMode()
extern "C"  int32_t VuforiaNativeIosWrapper_Device_GetMode_m4068985695 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::Device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_Device_SetViewerPresent_m2691868238 (VuforiaNativeIosWrapper_t3775010965 * __this, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::Device_IsViewerPresent()
extern "C"  bool VuforiaNativeIosWrapper_Device_IsViewerPresent_m3686607327 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::Device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_Device_GetViewerList_m1329459203 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::Device_SelectViewer(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_Device_SelectViewer_m315257252 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::Device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_Device_GetSelectedViewer_m1829682816 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_UpdateCopy_m2167069536 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_DeleteCopy_m2347267778 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionMesh_m1150244383 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionMeshSize_m683501376 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetProjectionMatrix_m3843485576 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionTextureViewport_m3994000431 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetViewport_m4178447451 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetNormalizedViewport_m1608781234 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetEyeDisplayAdjustmentMatrix_m2104394740 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetEffectiveFov_m2966410971 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetViewportCentreToEyeAxis_m1468799169 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_SetRenderBuffers_m4022471358 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.IntPtr,System.UInt32)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateGetVuMarkUserData_m2290192366 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateGetOrigin_m1061995861 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___origin2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateSetTrackingFromRuntimeAppearance_m292077563 (VuforiaNativeIosWrapper_t3775010965 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTargetGetInstanceImage_m3064810427 (VuforiaNativeIosWrapper_t3775010965 * __this, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m3485077549 (Il2CppObject * __this /* static, unused */, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerInitBuilder_m2735764174 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m525598573 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m1178438470 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m3628515808 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderAddReconstruction_m2934236623 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m4044314410 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m3007930518 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionStart_m1683846819 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionStop_m1338664991 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionIsReconstructing_m2779871289 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionReset_m694257174 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_reconstructionSetNavMeshPadding_m4234487251 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m4071634233 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableId2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionSetMaximumArea_m3303091588 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m3279110959 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceInitCamera_m3010759568 (Il2CppObject * __this /* static, unused */, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceDeinitCamera_m2078919040 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStartCamera_m3532889567 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStopCamera_m2394066353 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumVideoModes_m285019535 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraDirection_m2397999950 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetVideoMode_m2207134685 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSelectVideoMode_m914982635 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFlashTorchMode_m455901818 (Il2CppObject * __this /* static, unused */, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFocusMode_m554503764 (Il2CppObject * __this /* static, unused */, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetCameraConfiguration_m3764560589 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraFieldOfViewRads_m2744413777 (Il2CppObject * __this /* static, unused */, IntPtr_t ___fovVectorPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumCameraFields_m2868789208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetCameraField_m1815467928 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraField0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldString_m4175737552 (Il2CppObject * __this /* static, unused */, String_t* ___key0, StringBuilder_t3822575854 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64_m3375881455 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldFloat_m461136864 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldBool_m3592713688 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64Range_m1730175474 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldString_m490096907 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64_m18353379 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldFloat_m2087108267 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldBool_m2648838631 (Il2CppObject * __this /* static, unused */, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64Range_m2436245104 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetFrameFormat_m4273201426 (Il2CppObject * __this /* static, unused */, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetExists_m3531689532 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetLoad_m2411741524 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetNumTrackableType_m3996413221 (Il2CppObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackablesOfType_m2150362106 (Il2CppObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackableName_m3605497419 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetCreateTrackable_m3600145375 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetDestroyTrackable_m3464616729 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetHasReachedTrackableLimit_m1113726811 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_getCameraThreadID_m4136031475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderBuild_m494353109 (Il2CppObject * __this /* static, unused */, String_t* ___targetName0, float ___sceenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_frameCounterGetBenchmarkingData_m2476986231 (Il2CppObject * __this /* static, unused */, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStartScan_m148353495 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStopScan_m3133745513 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderGetFrameQuality_m4106758380 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_imageTargetBuilderGetTrackableSource_m1208607839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetCreateVirtualButton_m380672214 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetDestroyVirtualButton_m1633101066 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonGetId_m3585815561 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetNumVirtualButtons_m3769714187 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtons_m192741550 (Il2CppObject * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtonName_m1837803867 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t3822575854 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetGetDimensions_m4076983919 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetSideLength_m2519530730 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetTopDiameter_m656395551 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetBottomDiameter_m2575115215 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetSetSize_m499599960 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetGetSize_m3386081508 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::objectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_objectTrackerCreateDataSet_m1109690473 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDestroyDataSet_m1164373354 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerActivateDataSet_m2405681625 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDeactivateDataSet_m3552677850 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerPersistExtendedTracking_m1236617483 (Il2CppObject * __this /* static, unused */, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerResetExtendedTracking_m2764922549 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_markerSetSize_m3606281522 (Il2CppObject * __this /* static, unused */, int32_t ___trackableIndex0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_markerTrackerCreateMarker_m2745361433 (Il2CppObject * __this /* static, unused */, int32_t ___id0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_markerTrackerDestroyMarker_m1393155414 (Il2CppObject * __this /* static, unused */, int32_t ___trackableId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_initPlatformNative_m1875506709 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_initFrameState_m2867225445 (Il2CppObject * __this /* static, unused */, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_deinitFrameState_m1265178884 (Il2CppObject * __this /* static, unused */, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_onSurfaceChanged_m2881999685 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onPause()
extern "C"  void VuforiaNativeIosWrapper_onPause_m2494015198 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onResume()
extern "C"  void VuforiaNativeIosWrapper_onResume_m2690613607 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::getVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_getVuforiaLibraryVersion_m782910513 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___version0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeIosWrapper_hasSurfaceBeenRecreated_m3433236137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_updateQCAR_m32911819 (Il2CppObject * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameIndex2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererEnd()
extern "C"  void VuforiaNativeIosWrapper_rendererEnd_m3261931871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarGetBufferSize_m2549310872 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_qcarAddCameraFrame_m1089688911 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererSetVideoBackgroundCfg_m4102715667 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererGetVideoBackgroundCfg_m2173949087 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m1940746746 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::rendererCreateNativeTexture(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_rendererCreateNativeTexture_m1307307986 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTextureID_m3600284048 (Il2CppObject * __this /* static, unused */, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTexturePtr_m678176392 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m3675148431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetRecommendedFps_m1597249829 (Il2CppObject * __this /* static, unused */, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetGraphicsAPI_m2521377579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarInit_m1430693088 (Il2CppObject * __this /* static, unused */, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetHint_m273762486 (Il2CppObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_getProjectionGL_m1374337014 (Il2CppObject * __this /* static, unused */, float ___nearClip0, float ___farClip1, IntPtr_t ___projMatrix2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setApplicationEnvironment_m1734514333 (Il2CppObject * __this /* static, unused */, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setStateBufferSize_m4239435996 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartInit_m2424175728 (Il2CppObject * __this /* static, unused */, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetInitState_m3163613585 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderDeinit_m3290187319 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartRecognition_m3175222235 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStop_m603316776 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderUpdate_m3507152638 (Il2CppObject * __this /* static, unused */, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetResults_m237422633 (Il2CppObject * __this /* static, unused */, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderEnableTracking_m4158642082 (Il2CppObject * __this /* static, unused */, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderGetImageTargets_m4083326736 (Il2CppObject * __this /* static, unused */, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_targetFinderClearTrackables_m3899771211 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_textTrackerSetRegionOfInterest_m1052222188 (Il2CppObject * __this /* static, unused */, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_textTrackerGetRegionOfInterest_m1016683251 (Il2CppObject * __this /* static, unused */, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadWordList_m497530810 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordsFromFile_m4261116378 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordU_m2340133491 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordU_m771752002 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListContainsWordU_m2893239517 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListUnloadAllLists_m3661861098 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListSetFilterMode_m3033403769 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterMode_m3519175964 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordToFilterListU_m2719884836 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordFromFilterListU_m2188452066 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListClearFilterList_m3282586446 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadFilterList_m760114472 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterListWordCount_m2406951984 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_wordListGetFilterListWordU_m1705074334 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterMask_m2716935344 (Il2CppObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterBoundingBoxes_m3210811761 (Il2CppObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerInitTracker_m2133324311 (Il2CppObject * __this /* static, unused */, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerDeinitTracker_m3533925750 (Il2CppObject * __this /* static, unused */, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerStart_m373572362 (Il2CppObject * __this /* static, unused */, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::trackerStop(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_trackerStop_m2696947442 (Il2CppObject * __this /* static, unused */, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetEnabled_m607947866 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetSensitivity_m743898936 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetAreaRectangle_m3878297386 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::vuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_vuforiaGetRenderEventCallback_m2001897841 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_qcarDeinit_m1217405155 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_startExtendedTracking_m2370933736 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_stopExtendedTracking_m2314554404 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::deviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeIosWrapper_deviceIsEyewearDevice_m3113566201 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsSeeThru_m1495598793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceGetScreenOrientation_m3966248423 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDualDisplay_m1197706949 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtended_m2106972666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtendedGLOnly_m1739805995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceSetDisplayExtended_m695715177 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsPredictiveTrackingEnabled_m849649034 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceSetPredictiveTracking_m1662023576 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetMaxCount_m3813504740 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetUsedCount_m2620735547 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMIsProfileUsed_m2449003632 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetActiveProfile_m3041984620 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetActiveProfile_m29196081 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetCameraToEyePose_m1412018985 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetEyeProjection_m2395177291 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetCameraToEyePose_m481250357 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetEyeProjection_m1370746199 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_eyewearCPMGetProfileName_m1719163397 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetProfileName_m2319852176 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMClearProfile_m3459803916 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorInit_m231324711 (Il2CppObject * __this /* static, unused */, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m4082785928 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m3425869878 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m1510808981 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m3163223064 (Il2CppObject * __this /* static, unused */, IntPtr_t ___readingsArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeMatrix2, IntPtr_t ___projMatrix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_Recenter_m3321548477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetPosePrediction_m1663556550 (Il2CppObject * __this /* static, unused */, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_GetPosePrediction_m1330198403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionMode_m1929136942 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionMode_m1510999785 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionModeWithTransform_m3065669418 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionTransform_m2224095896 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_viewerParameters_delete_m3536366335 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_copy_m79988640 (Il2CppObject * __this /* static, unused */, IntPtr_t ___toCopy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetVersion_m1485370236 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_GetName_m1559304688 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_GetManufacturer_m3040121834 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetButtonType_m4272982182 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_setRenderBuffers_m2363167454 (Il2CppObject * __this /* static, unused */, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetScreenToLensDistance_m2851503160 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetInterLensDistance_m1105744933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetTrayAlignment_m1683350247 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetLensCentreToTrayDistance_m3892823699 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetNumDistortionCoefficients_m3657027571 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetDistortionCoefficient_m2649655323 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_viewerParameters_GetFieldOfView_m3578959736 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_ContainsMagnet_m3520093333 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::customViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_customViewerParameters_new_m950847279 (Il2CppObject * __this /* static, unused */, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_delete_m4213375568 (Il2CppObject * __this /* static, unused */, IntPtr_t ___toDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetButtonType_m303776666 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetScreenToLensDistance_m3146622100 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetInterLensDistance_m1335223859 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetTrayAlignment_m3639454471 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetLensCentreToTrayDistance_m601464879 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_ClearDistortionCoefficients_m360679651 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_AddDistortionCoefficient_m1830233609 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetFieldOfView_m4060372245 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetContainsMagnet_m3267275933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetListForAuthoringTools_m3671171834 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeIosWrapper_viewerParametersList_SetSDKFilter_m1116345748 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParametersList_Size_m2851182203 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetByIndex_m765511657 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetByNameManufacturer_m1849437186 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_Begin_m4047496522 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_Next_m2625570574 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpl0, IntPtr_t ___last1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_device_SetMode_m2426984476 (Il2CppObject * __this /* static, unused */, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_GetMode()
extern "C"  int32_t VuforiaNativeIosWrapper_device_GetMode_m616793919 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_device_SetViewerPresent_m3230764654 (Il2CppObject * __this /* static, unused */, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeIosWrapper_device_IsViewerPresent_m3369180133 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_device_GetViewerList_m536167395 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_device_SelectViewer_m198480938 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_device_GetSelectedViewer_m2822316640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_UpdateCopy_m2268256064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_DeleteCopy_m2448454306 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMesh_m4236138047 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMeshSize_m1391417184 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetProjectionMatrix_m2337610600 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionTextureViewport_m821381135 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetViewport_m264742011 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetNormalizedViewport_m2316697042 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetEyeDisplayAdjustmentMatrix_m2537444372 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetEffectiveFov_m583032571 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetViewportCentreToEyeAxis_m2779462817 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.IntPtr,System.UInt32)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateGetVuMarkUserData_m3554962382 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateGetOrigin_m2235418933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___origin2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateSetTrackingFromRuntimeAppearance_m260318171 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTargetGetInstanceImage_m3715606427 (Il2CppObject * __this /* static, unused */, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::.ctor()
extern "C"  void VuforiaNativeIosWrapper__ctor_m263696777 (VuforiaNativeIosWrapper_t3775010965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
