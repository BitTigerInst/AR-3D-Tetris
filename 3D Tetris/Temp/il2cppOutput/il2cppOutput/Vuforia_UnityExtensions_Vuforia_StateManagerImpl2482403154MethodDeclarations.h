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

// Vuforia.StateManagerImpl
struct StateManagerImpl_t2482403154;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t1004632898;
// Vuforia.WordManager
struct WordManager_t1476806201;
// Vuforia.VuMarkManager
struct VuMarkManager_t2792364247;
// Vuforia.Trackable
struct Trackable_t1174201883;
// Vuforia.DataSet
struct DataSet_t1547874638;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t2427445838;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t2880150149;
// Vuforia.ImageTarget
struct ImageTarget_t2294340546;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t1462758039;
// Vuforia.Marker
struct Marker_t737566064;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManagerImpl/IdPair>
struct LinkedList_1_t3924889535;
// UnityEngine.Transform
struct Transform_t284553113;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t3096477957;
// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t2036418093;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t73087933;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t2015210476;
// Vuforia.VuforiaManagerImpl/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t1038867134;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t3908005046;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t721870045;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t4098421991;
// Vuforia.MultiTarget
struct MultiTarget_t4153944352;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t10167658;
// Vuforia.CylinderTarget
struct CylinderTarget_t3460838973;
// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t2828848869;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3068329980;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t4270136289;
// Vuforia.ObjectTarget
struct ObjectTarget_t1628866278;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet1547874638.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2427445838.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl2184759989.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_807317499.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_MarkerAbstractBeha1462758039.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C"  Il2CppObject* StateManagerImpl_GetActiveTrackableBehaviours_m3600956395 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C"  Il2CppObject* StateManagerImpl_GetTrackableBehaviours_m267458321 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C"  WordManager_t1476806201 * StateManagerImpl_GetWordManager_m316154603 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkManager Vuforia.StateManagerImpl::GetVuMarkManager()
extern "C"  VuMarkManager_t2792364247 * StateManagerImpl_GetVuMarkManager_m1752150123 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C"  void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m503450371 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___trackable0, bool ___destroyGameObjects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C"  void StateManagerImpl_AssociateMarkerBehaviours_m620121678 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C"  void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m330023224 (StateManagerImpl_t2482403154 * __this, DataSet_t1547874638 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C"  void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m486971544 (StateManagerImpl_t2482403154 * __this, TrackableBehaviour_t2427445838 * ___trackableBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C"  void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m966889332 (StateManagerImpl_t2482403154 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C"  void StateManagerImpl_RemoveDestroyedTrackables_m1327333987 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C"  void StateManagerImpl_ClearTrackableBehaviours_m517145104 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C"  ImageTargetAbstractBehaviour_t2880150149 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m432968851 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___trackable0, GameObject_t4012695102 * ___gameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C"  ImageTargetAbstractBehaviour_t2880150149 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m2561302483 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___trackable0, GameObject_t4012695102 * ___gameObject1, DataSet_t1547874638 * ___dataSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C"  MarkerAbstractBehaviour_t1462758039 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m185784668 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___trackable0, String_t* ___gameObjectName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C"  MarkerAbstractBehaviour_t1462758039 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m2917677662 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___trackable0, GameObject_t4012695102 * ___gameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C"  void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m2272455224 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___trackable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C"  void StateManagerImpl_EnableTrackableBehavioursForTrackable_m2766252664 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___trackable0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManagerImpl/IdPair>&)
extern "C"  void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m2656389257 (StateManagerImpl_t2482403154 * __this, LinkedList_1_t3924889535 ** ___trackableIDs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPoseWRTTrackable(UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/IdPair,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void StateManagerImpl_UpdateCameraPoseWRTTrackable_m337140863 (StateManagerImpl_t2482403154 * __this, Transform_t284553113 * ___cameraTransform0, Transform_t284553113 * ___parentTransformToUpdate1, IdPair_t2184759989  ___trackableId2, PoseData_t807317499  ___trackablePose3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[],Vuforia.VuforiaManagerImpl/IdPair,System.Int32)
extern "C"  void StateManagerImpl_UpdateTrackablePoses_m3676250255 (StateManagerImpl_t2482403154 * __this, Transform_t284553113 * ___arCameraTransform0, TrackableResultDataU5BU5D_t3096477957* ___trackableResultDataArray1, VuMarkTargetResultDataU5BU5D_t2036418093* ___vuMarkResultDataArray2, IdPair_t2184759989  ___originTrackableID3, int32_t ___frameIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C"  void StateManagerImpl_UpdateVirtualButtons_m575181952 (StateManagerImpl_t2482403154 * __this, int32_t ___numVirtualButtons0, IntPtr_t ___virtualButtonPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void StateManagerImpl_UpdateWords_m3164277596 (StateManagerImpl_t2482403154 * __this, Transform_t284553113 * ___arCameraTransform0, WordDataU5BU5D_t73087933* ___wordData1, WordResultDataU5BU5D_t2015210476* ___wordResultData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVuMarks(Vuforia.VuforiaManagerImpl/VuMarkTargetData[],Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[])
extern "C"  void StateManagerImpl_UpdateVuMarks_m2061843489 (StateManagerImpl_t2482403154 * __this, VuMarkTargetDataU5BU5D_t1038867134* ___vuMarkData0, VuMarkTargetResultDataU5BU5D_t2036418093* ___vuMarkResultData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DeviceTrackingManager Vuforia.StateManagerImpl::GetDeviceTrackingManager()
extern "C"  DeviceTrackingManager_t3908005046 * StateManagerImpl_GetDeviceTrackingManager_m2601898251 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StateManagerImpl::TryGetBehaviour(Vuforia.VuforiaManagerImpl/IdPair,Vuforia.TrackableBehaviour&)
extern "C"  bool StateManagerImpl_TryGetBehaviour_m3977709823 (StateManagerImpl_t2482403154 * __this, IdPair_t2184759989  ___id0, TrackableBehaviour_t2427445838 ** ___trackableBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C"  void StateManagerImpl_AssociateVirtualButtonBehaviours_m223238443 (StateManagerImpl_t2482403154 * __this, VirtualButtonAbstractBehaviourU5BU5D_t721870045* ___vbBehaviours0, DataSet_t1547874638 * ___dataSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C"  void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m2455782841 (StateManagerImpl_t2482403154 * __this, DataSet_t1547874638 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C"  ImageTargetAbstractBehaviour_t2880150149 * StateManagerImpl_CreateImageTargetBehaviour_m2354042083 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___imageTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C"  MultiTargetAbstractBehaviour_t4098421991 * StateManagerImpl_CreateMultiTargetBehaviour_m1254064133 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___multiTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C"  CylinderTargetAbstractBehaviour_t10167658 * StateManagerImpl_CreateCylinderTargetBehaviour_m3102279676 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___cylinderTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.StateManagerImpl::CreateVuMarkBehaviour(Vuforia.VuMarkTemplate)
extern "C"  VuMarkAbstractBehaviour_t2828848869 * StateManagerImpl_CreateVuMarkBehaviour_m427429907 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C"  ObjectTargetAbstractBehaviour_t4270136289 * StateManagerImpl_CreateObjectTargetBehaviour_m618352929 (StateManagerImpl_t2482403154 * __this, Il2CppObject * ___objectTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C"  void StateManagerImpl_InitializeMarkerBehaviour_m743407158 (StateManagerImpl_t2482403154 * __this, MarkerAbstractBehaviour_t1462758039 * ___markerBehaviour0, Il2CppObject * ___marker1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCameraToTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void StateManagerImpl_PositionCameraToTrackable_m3550486239 (StateManagerImpl_t2482403154 * __this, TrackableBehaviour_t2427445838 * ___trackable0, Transform_t284553113 * ___cameraTransform1, Transform_t284553113 * ___parentTransformToUpdate2, PoseData_t807317499  ___camToTargetPose3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StateManagerImpl::ExtractTranslationFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Vector3_t3525329789  StateManagerImpl_ExtractTranslationFromMatrix_m1595724611 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.StateManagerImpl::ExtractRotationFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t1891715979  StateManagerImpl_ExtractRotationFromMatrix_m874129750 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData,System.Double)
extern "C"  void StateManagerImpl_PositionTrackable_m486394436 (Il2CppObject * __this /* static, unused */, TrackableBehaviour_t2427445838 * ___trackableBehaviour0, Transform_t284553113 * ___arCameraTransform1, PoseData_t807317499  ___camToTargetPose2, double ___timeStamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C"  void StateManagerImpl__ctor_m3317738434 (StateManagerImpl_t2482403154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
