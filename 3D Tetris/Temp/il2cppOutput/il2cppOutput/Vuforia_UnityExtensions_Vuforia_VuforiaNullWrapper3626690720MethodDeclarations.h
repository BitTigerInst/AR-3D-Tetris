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

// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t3626690720;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceInitCamera_m3150880957 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceDeinitCamera_m3612803821 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceStartCamera_m118686418 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceStopCamera_m621362782 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetNumVideoModes_m388352124 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetCameraDirection_m2916370171 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_CameraDeviceGetVideoMode_m3335355378 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSelectVideoMode_m2029954526 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFlashTorchMode_m2497032365 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFocusMode_m2067172417 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetCameraConfiguration_m944622144 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_CameraDeviceGetCameraFieldOfViewRads_m1866916830 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___fovVectorPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetNumCameraFields_m3387159429 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_CameraDeviceGetCameraField_m3703795309 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___cameraField0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetFieldString_m3228924029 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, StringBuilder_t3822575854 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetFieldInt64_m1342824668 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetFieldFloat_m2723047373 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetFieldBool_m3527131211 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetFieldInt64Range_m109365797 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFieldString_m1889845950 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFieldInt64_m4247738198 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFieldFloat_m54051480 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFieldBool_m615781844 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFieldInt64Range_m4183349795 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarSetFrameFormat_m2999602821 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetExists_m351694127 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetLoad_m2346159047 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetNumTrackableType_m1963356434 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetTrackablesOfType_m2863913965 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetTrackableName_m110286776 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetCreateTrackable_m1846258316 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t3822575854 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetDestroyTrackable_m1690248780 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetHasReachedTrackableLimit_m286875720 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNullWrapper_GetCameraThreadID_m1139125286 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetBuilderBuild_m1323521538 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___targetName0, float ___sceenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNullWrapper_FrameCounterGetBenchmarkingData_m1772882764 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNullWrapper_ImageTargetBuilderStartScan_m1352179042 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNullWrapper_ImageTargetBuilderStopScan_m1925652606 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNullWrapper_ImageTargetBuilderGetFrameQuality_m2171615775 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNullWrapper_ImageTargetBuilderGetTrackableSource_m2659803134 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetCreateVirtualButton_m668173961 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetDestroyVirtualButton_m3215257719 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonGetId_m765877116 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetNumVirtualButtons_m769254456 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtons_m678073627 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtonName_m59865864 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t3822575854 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetGetDimensions_m1085300828 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetSideLength_m3822814935 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetTopDiameter_m2403500242 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetBottomDiameter_m4157271868 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTargetSetSize_m3275821381 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTargetGetSize_m1867335633 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNullWrapper_ObjectTrackerCreateDataSet_m1373449928 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerDestroyDataSet_m1368763607 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerActivateDataSet_m151844876 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerDeactivateDataSet_m2279079245 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerPersistExtendedTracking_m2010663800 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerResetExtendedTracking_m2905043938 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_OnSurfaceChanged_m2553556880 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnPause()
extern "C"  void VuforiaNullWrapper_OnPause_m3145434601 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnResume()
extern "C"  void VuforiaNullWrapper_OnResume_m1409778620 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::GetVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNullWrapper_GetVuforiaLibraryVersion_m4127003846 (VuforiaNullWrapper_t3626690720 * __this, StringBuilder_t3822575854 * ___version0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::HasSurfaceBeenRecreated()
extern "C"  bool VuforiaNullWrapper_HasSurfaceBeenRecreated_m3403862646 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNullWrapper_MarkerSetSize_m426286117 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___trackableIndex0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_MarkerTrackerCreateMarker_m4123093324 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___id0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_MarkerTrackerDestroyMarker_m3368784899 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___trackableId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitPlatformNative()
extern "C"  void VuforiaNullWrapper_InitPlatformNative_m3938898474 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNullWrapper_InitFrameState_m4071050992 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNullWrapper_DeinitFrameState_m2795326927 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_UpdateQCAR_m2555013054 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameIndex2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererEnd()
extern "C"  void VuforiaNullWrapper_RendererEnd_m2396291818 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarGetBufferSize_m3383377547 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_QcarAddCameraFrame_m3117857818 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererSetVideoBackgroundCfg_m2510923304 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererGetVideoBackgroundCfg_m582156724 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererGetVideoBackgroundTextureInfo_m3068967439 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::RendererCreateNativeTexture(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_RendererCreateNativeTexture_m1031859347 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTextureID_m2516874627 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTexturePtr_m3198775739 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3812568386 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RendererGetRecommendedFps_m1245337816 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNullWrapper_RendererGetGraphicsAPI_m748674008 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarSetHint_m4216817769 (VuforiaNullWrapper_t3626690720 * __this, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_GetProjectionGL_m3121441705 (VuforiaNullWrapper_t3626690720 * __this, float ___nearClip0, float ___farClip1, IntPtr_t ___projMatrix2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_SetApplicationEnvironment_m2322192552 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___change2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNullWrapper_SetStateBufferSize_m134417777 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m1144492928 (VuforiaNullWrapper_t3626690720 * __this, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerInitBuilder_m2916562529 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerDeinitBuilder_m2474125888 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m2394827271 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m3335533503 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderAddReconstruction_m2056739676 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderRemoveReconstruction_m1703729789 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderDestroyReconstruction_m3464251299 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStart(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionStart_m3632374134 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStop(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionStop_m2648446700 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionIsReconstructing_m1872386950 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionReset(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionReset_m2642784489 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_ReconstructionSetNavMeshPadding_m4185491688 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  bool VuforiaNullWrapper_ReconstructionFromTargetSetInitializationTarget_m1977312070 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableId2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionSetMaximumArea_m3740697937 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m1506244898 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStartInit_m3198222045 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderGetInitState_m402531070 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderDeinit_m580408676 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStartRecognition_m3278554824 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStop_m2861947029 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_TargetFinderUpdate_m2803049171 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderGetResults_m1011468950 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderEnableTracking_m1263423829 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_TargetFinderGetImageTargets_m2491933403 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNullWrapper_TargetFinderClearTrackables_m808629462 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TextTrackerSetRegionOfInterest_m366207513 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNullWrapper_TextTrackerGetRegionOfInterest_m2345955826 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListLoadWordList_m462582119 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordsFromFile_m795317511 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___path0, int32_t ___storagetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordU_m1248476454 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListRemoveWordU_m709328047 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListContainsWordU_m3033360906 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNullWrapper_WordListUnloadAllLists_m1889157527 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListSetFilterMode_m1098261164 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNullWrapper_WordListGetFilterMode_m413950671 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListLoadFilterList_m1534160789 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordToFilterListU_m466048087 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListRemoveWordFromFilterListU_m2153503375 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNullWrapper_WordListClearFilterList_m4163350593 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNullWrapper_WordListGetFilterListWordCount_m2925322205 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_WordListGetFilterListWordU_m439381629 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordGetLetterMask_m1443336739 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordGetLetterBoundingBoxes_m1177754974 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerManagerInitTracker_m1781412298 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerManagerDeinitTracker_m353930345 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::TrackerStart(System.Int32)
extern "C"  bool VuforiaNullWrapper_TrackerStart_m3757961437 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TrackerStop(System.Int32)
extern "C"  void VuforiaNullWrapper_TrackerStop_m826445821 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___trackerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetEnabled_m3486899469 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetSensitivity_m3567435371 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetAreaRectangle_m2917740311 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::VuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNullWrapper_VuforiaGetRenderEventCallback_m4164637362 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNullWrapper_QcarInit_m2620435091 (VuforiaNullWrapper_t3626690720 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarDeinit()
extern "C"  int32_t VuforiaNullWrapper_QcarDeinit_m3931155728 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_StartExtendedTracking_m1287524315 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_StopExtendedTracking_m2279605713 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::DeviceIsEyewearDevice()
extern "C"  bool VuforiaNullWrapper_DeviceIsEyewearDevice_m3909065478 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsSeeThru()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsSeeThru_m386272604 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNullWrapper_EyewearDeviceGetScreenOrientation_m2031105818 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsDualDisplay()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsDualDisplay_m2305364952 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsDisplayExtended()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsDisplayExtended_m2287771021 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsDisplayExtendedGLOnly_m2236604030 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  bool VuforiaNullWrapper_EyewearDeviceSetDisplayExtended_m481626486 (VuforiaNullWrapper_t3626690720 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsPredictiveTrackingEnabled_m2976269661 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  bool VuforiaNullWrapper_EyewearDeviceSetPredictiveTracking_m1772264555 (VuforiaNullWrapper_t3626690720 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetMaxCount_m708279447 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetUsedCount_m848031976 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMIsProfileUsed_m248272061 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetActiveProfile_m3931476633 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMSetActiveProfile_m710737860 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetCameraToEyePose_m2562439068 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetEyeProjection_m3772909182 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMSetCameraToEyePose_m1631670440 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMSetEyeProjection_m2748478090 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___projMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_EyewearCPMGetProfileName_m3170358692 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_EyewearCPMSetProfileName_m887250595 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMClearProfile_m3388812575 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorInit_m2924951162 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNullWrapper_EyewearUserCalibratorGetMinScaleHint_m3000929013 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m2344012963 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorIsStereoStretched_m2192350760 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m346791851 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___readingsArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeMatrix2, IntPtr_t ___projMatrix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_Recenter_m3259124522 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetPosePrediction_m2497623225 (VuforiaNullWrapper_t3626690720 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_GetPosePrediction_m3371328950 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetModelCorrectionMode_m3223644507 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_GetModelCorrectionMode_m1476051094 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetModelCorrectionModeWithTransform_m3353171165 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RotationalDeviceTracker_GetModelCorrectionTransform_m3262251501 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNullWrapper_ViewerParameters_delete_m1371573204 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___toDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParameters_copy_m1104961279 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___toCopy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetVersion_m672604521 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParameters_GetName_m3596685873 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParameters_GetManufacturer_m1082964779 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParameters_GetButtonType_m2999383577 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetScreenToLensDistance_m669849451 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetInterLensDistance_m2199633362 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParameters_GetTrayAlignment_m1648401556 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetLensCentreToTrayDistance_m101158982 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParameters_GetNumDistortionCoefficients_m656567840 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetDistortionCoefficient_m896536078 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ViewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNullWrapper_ViewerParameters_GetFieldOfView_m3529964173 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ViewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ViewerParameters_ContainsMagnet_m1157882600 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::CustomViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNullWrapper_CustomViewerParameters_new_m2532677552 (VuforiaNullWrapper_t3626690720 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_delete_m2621583205 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___toDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetButtonType_m3647869999 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetScreenToLensDistance_m1572738271 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetInterLensDistance_m2330808776 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetTrayAlignment_m1462539858 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetLensCentreToTrayDistance_m1551037178 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_ClearDistortionCoefficients_m948357870 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_AddDistortionCoefficient_m284475166 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetFieldOfView_m803560554 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetContainsMagnet_m515242354 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_GetListForAuthoringTools_m1714014779 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ViewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNullWrapper_ViewerParametersList_SetSDKFilter_m1276249961 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vpl0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParametersList_Size_m531844392 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_Get(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_Get_m3283145305 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vpl0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_Get(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_Get_m1056804278 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vpl0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_Begin_m3465728331 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_Next_m3425264813 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vpl0, IntPtr_t ___last1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::Device_SetMode(System.Int32)
extern "C"  bool VuforiaNullWrapper_Device_SetMode_m3534642479 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::Device_GetMode()
extern "C"  int32_t VuforiaNullWrapper_Device_GetMode_m2648192236 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::Device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNullWrapper_Device_SetViewerPresent_m546687033 (VuforiaNullWrapper_t3626690720 * __this, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::Device_IsViewerPresent()
extern "C"  bool VuforiaNullWrapper_Device_IsViewerPresent_m2259853944 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::Device_GetViewerList()
extern "C"  IntPtr_t VuforiaNullWrapper_Device_GetViewerList_m2001067394 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::Device_SelectViewer(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_Device_SelectViewer_m2147008253 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::Device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNullWrapper_Device_GetSelectedViewer_m1280693375 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_UpdateCopy_m2458205141 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_DeleteCopy_m2638403383 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetDistortionMesh_m528848970 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___eyeId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetDistortionMeshSize_m1025547243 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetProjectionMatrix_m3175161981 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetDistortionTextureViewport_m3570589988 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetViewport_m1371540166 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetNormalizedViewport_m1950827101 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetEyeDisplayAdjustmentMatrix_m1863572895 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetEffectiveFov_m1245095878 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetViewportCentreToEyeAxis_m1758861046 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNullWrapper_SetRenderBuffers_m3893315497 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.IntPtr,System.UInt32)
extern "C"  int32_t VuforiaNullWrapper_VuMarkTemplateGetVuMarkUserData_m3877581947 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNullWrapper_VuMarkTemplateSetTrackingFromRuntimeAppearance_m1060074824 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_VuMarkTemplateGetOrigin_m3111145890 (VuforiaNullWrapper_t3626690720 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___origin2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_VuMarkTargetGetInstanceImage_m4158153800 (VuforiaNullWrapper_t3626690720 * __this, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C"  void VuforiaNullWrapper__ctor_m2890219380 (VuforiaNullWrapper_t3626690720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
