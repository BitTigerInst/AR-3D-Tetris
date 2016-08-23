#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>
struct List_1_t1471837716;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t1669175889;
// System.Action`1<Vuforia.Prop>
struct Action_1_t2885954042;
// System.Action`1<Vuforia.Surface>
struct Action_1_t2694878980;
// Vuforia.Reconstruction
struct Reconstruction_t2663977914;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Surface>
struct Dictionary_2_t3037237058;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>
struct Dictionary_2_t1968742499;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>
struct Dictionary_2_t3228312120;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>
struct Dictionary_2_t1400543277;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t1477931716;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ReconstructionAbstractBehaviour
struct  ReconstructionAbstractBehaviour_t730550669  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mHasInitialized
	bool ___mHasInitialized_2;
	// System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler> Vuforia.ReconstructionAbstractBehaviour::mSmartTerrainEventHandlers
	List_1_t1471837716 * ___mSmartTerrainEventHandlers_3;
	// System.Action`1<Vuforia.SmartTerrainInitializationInfo> Vuforia.ReconstructionAbstractBehaviour::mOnInitialized
	Action_1_t1669175889 * ___mOnInitialized_4;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropCreated
	Action_1_t2885954042 * ___mOnPropCreated_5;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropUpdated
	Action_1_t2885954042 * ___mOnPropUpdated_6;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropDeleted
	Action_1_t2885954042 * ___mOnPropDeleted_7;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceCreated
	Action_1_t2694878980 * ___mOnSurfaceCreated_8;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceUpdated
	Action_1_t2694878980 * ___mOnSurfaceUpdated_9;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceDeleted
	Action_1_t2694878980 * ___mOnSurfaceDeleted_10;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_11;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mMaximumExtentEnabled
	bool ___mMaximumExtentEnabled_12;
	// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::mMaximumExtent
	Rect_t1525428817  ___mMaximumExtent_13;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mAutomaticStart
	bool ___mAutomaticStart_14;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mNavMeshUpdates
	bool ___mNavMeshUpdates_15;
	// System.Single Vuforia.ReconstructionAbstractBehaviour::mNavMeshPadding
	float ___mNavMeshPadding_16;
	// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::mReconstruction
	Il2CppObject * ___mReconstruction_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mSurfaces
	Dictionary_2_t3037237058 * ___mSurfaces_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.SurfaceAbstractBehaviour> Vuforia.ReconstructionAbstractBehaviour::mActiveSurfaceBehaviours
	Dictionary_2_t1968742499 * ___mActiveSurfaceBehaviours_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mProps
	Dictionary_2_t3228312120 * ___mProps_20;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour> Vuforia.ReconstructionAbstractBehaviour::mActivePropBehaviours
	Dictionary_2_t1400543277 * ___mActivePropBehaviours_21;
	// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::mPreviouslySetWorldCenterSurfaceTemplate
	SurfaceAbstractBehaviour_t1477931716 * ___mPreviouslySetWorldCenterSurfaceTemplate_22;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mIgnoreNextUpdate
	bool ___mIgnoreNextUpdate_23;

public:
	inline static int32_t get_offset_of_mHasInitialized_2() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mHasInitialized_2)); }
	inline bool get_mHasInitialized_2() const { return ___mHasInitialized_2; }
	inline bool* get_address_of_mHasInitialized_2() { return &___mHasInitialized_2; }
	inline void set_mHasInitialized_2(bool value)
	{
		___mHasInitialized_2 = value;
	}

	inline static int32_t get_offset_of_mSmartTerrainEventHandlers_3() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mSmartTerrainEventHandlers_3)); }
	inline List_1_t1471837716 * get_mSmartTerrainEventHandlers_3() const { return ___mSmartTerrainEventHandlers_3; }
	inline List_1_t1471837716 ** get_address_of_mSmartTerrainEventHandlers_3() { return &___mSmartTerrainEventHandlers_3; }
	inline void set_mSmartTerrainEventHandlers_3(List_1_t1471837716 * value)
	{
		___mSmartTerrainEventHandlers_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSmartTerrainEventHandlers_3, value);
	}

	inline static int32_t get_offset_of_mOnInitialized_4() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mOnInitialized_4)); }
	inline Action_1_t1669175889 * get_mOnInitialized_4() const { return ___mOnInitialized_4; }
	inline Action_1_t1669175889 ** get_address_of_mOnInitialized_4() { return &___mOnInitialized_4; }
	inline void set_mOnInitialized_4(Action_1_t1669175889 * value)
	{
		___mOnInitialized_4 = value;
		Il2CppCodeGenWriteBarrier(&___mOnInitialized_4, value);
	}

	inline static int32_t get_offset_of_mOnPropCreated_5() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mOnPropCreated_5)); }
	inline Action_1_t2885954042 * get_mOnPropCreated_5() const { return ___mOnPropCreated_5; }
	inline Action_1_t2885954042 ** get_address_of_mOnPropCreated_5() { return &___mOnPropCreated_5; }
	inline void set_mOnPropCreated_5(Action_1_t2885954042 * value)
	{
		___mOnPropCreated_5 = value;
		Il2CppCodeGenWriteBarrier(&___mOnPropCreated_5, value);
	}

	inline static int32_t get_offset_of_mOnPropUpdated_6() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mOnPropUpdated_6)); }
	inline Action_1_t2885954042 * get_mOnPropUpdated_6() const { return ___mOnPropUpdated_6; }
	inline Action_1_t2885954042 ** get_address_of_mOnPropUpdated_6() { return &___mOnPropUpdated_6; }
	inline void set_mOnPropUpdated_6(Action_1_t2885954042 * value)
	{
		___mOnPropUpdated_6 = value;
		Il2CppCodeGenWriteBarrier(&___mOnPropUpdated_6, value);
	}

	inline static int32_t get_offset_of_mOnPropDeleted_7() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mOnPropDeleted_7)); }
	inline Action_1_t2885954042 * get_mOnPropDeleted_7() const { return ___mOnPropDeleted_7; }
	inline Action_1_t2885954042 ** get_address_of_mOnPropDeleted_7() { return &___mOnPropDeleted_7; }
	inline void set_mOnPropDeleted_7(Action_1_t2885954042 * value)
	{
		___mOnPropDeleted_7 = value;
		Il2CppCodeGenWriteBarrier(&___mOnPropDeleted_7, value);
	}

	inline static int32_t get_offset_of_mOnSurfaceCreated_8() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mOnSurfaceCreated_8)); }
	inline Action_1_t2694878980 * get_mOnSurfaceCreated_8() const { return ___mOnSurfaceCreated_8; }
	inline Action_1_t2694878980 ** get_address_of_mOnSurfaceCreated_8() { return &___mOnSurfaceCreated_8; }
	inline void set_mOnSurfaceCreated_8(Action_1_t2694878980 * value)
	{
		___mOnSurfaceCreated_8 = value;
		Il2CppCodeGenWriteBarrier(&___mOnSurfaceCreated_8, value);
	}

	inline static int32_t get_offset_of_mOnSurfaceUpdated_9() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mOnSurfaceUpdated_9)); }
	inline Action_1_t2694878980 * get_mOnSurfaceUpdated_9() const { return ___mOnSurfaceUpdated_9; }
	inline Action_1_t2694878980 ** get_address_of_mOnSurfaceUpdated_9() { return &___mOnSurfaceUpdated_9; }
	inline void set_mOnSurfaceUpdated_9(Action_1_t2694878980 * value)
	{
		___mOnSurfaceUpdated_9 = value;
		Il2CppCodeGenWriteBarrier(&___mOnSurfaceUpdated_9, value);
	}

	inline static int32_t get_offset_of_mOnSurfaceDeleted_10() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mOnSurfaceDeleted_10)); }
	inline Action_1_t2694878980 * get_mOnSurfaceDeleted_10() const { return ___mOnSurfaceDeleted_10; }
	inline Action_1_t2694878980 ** get_address_of_mOnSurfaceDeleted_10() { return &___mOnSurfaceDeleted_10; }
	inline void set_mOnSurfaceDeleted_10(Action_1_t2694878980 * value)
	{
		___mOnSurfaceDeleted_10 = value;
		Il2CppCodeGenWriteBarrier(&___mOnSurfaceDeleted_10, value);
	}

	inline static int32_t get_offset_of_mInitializedInEditor_11() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mInitializedInEditor_11)); }
	inline bool get_mInitializedInEditor_11() const { return ___mInitializedInEditor_11; }
	inline bool* get_address_of_mInitializedInEditor_11() { return &___mInitializedInEditor_11; }
	inline void set_mInitializedInEditor_11(bool value)
	{
		___mInitializedInEditor_11 = value;
	}

	inline static int32_t get_offset_of_mMaximumExtentEnabled_12() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mMaximumExtentEnabled_12)); }
	inline bool get_mMaximumExtentEnabled_12() const { return ___mMaximumExtentEnabled_12; }
	inline bool* get_address_of_mMaximumExtentEnabled_12() { return &___mMaximumExtentEnabled_12; }
	inline void set_mMaximumExtentEnabled_12(bool value)
	{
		___mMaximumExtentEnabled_12 = value;
	}

	inline static int32_t get_offset_of_mMaximumExtent_13() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mMaximumExtent_13)); }
	inline Rect_t1525428817  get_mMaximumExtent_13() const { return ___mMaximumExtent_13; }
	inline Rect_t1525428817 * get_address_of_mMaximumExtent_13() { return &___mMaximumExtent_13; }
	inline void set_mMaximumExtent_13(Rect_t1525428817  value)
	{
		___mMaximumExtent_13 = value;
	}

	inline static int32_t get_offset_of_mAutomaticStart_14() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mAutomaticStart_14)); }
	inline bool get_mAutomaticStart_14() const { return ___mAutomaticStart_14; }
	inline bool* get_address_of_mAutomaticStart_14() { return &___mAutomaticStart_14; }
	inline void set_mAutomaticStart_14(bool value)
	{
		___mAutomaticStart_14 = value;
	}

	inline static int32_t get_offset_of_mNavMeshUpdates_15() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mNavMeshUpdates_15)); }
	inline bool get_mNavMeshUpdates_15() const { return ___mNavMeshUpdates_15; }
	inline bool* get_address_of_mNavMeshUpdates_15() { return &___mNavMeshUpdates_15; }
	inline void set_mNavMeshUpdates_15(bool value)
	{
		___mNavMeshUpdates_15 = value;
	}

	inline static int32_t get_offset_of_mNavMeshPadding_16() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mNavMeshPadding_16)); }
	inline float get_mNavMeshPadding_16() const { return ___mNavMeshPadding_16; }
	inline float* get_address_of_mNavMeshPadding_16() { return &___mNavMeshPadding_16; }
	inline void set_mNavMeshPadding_16(float value)
	{
		___mNavMeshPadding_16 = value;
	}

	inline static int32_t get_offset_of_mReconstruction_17() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mReconstruction_17)); }
	inline Il2CppObject * get_mReconstruction_17() const { return ___mReconstruction_17; }
	inline Il2CppObject ** get_address_of_mReconstruction_17() { return &___mReconstruction_17; }
	inline void set_mReconstruction_17(Il2CppObject * value)
	{
		___mReconstruction_17 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstruction_17, value);
	}

	inline static int32_t get_offset_of_mSurfaces_18() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mSurfaces_18)); }
	inline Dictionary_2_t3037237058 * get_mSurfaces_18() const { return ___mSurfaces_18; }
	inline Dictionary_2_t3037237058 ** get_address_of_mSurfaces_18() { return &___mSurfaces_18; }
	inline void set_mSurfaces_18(Dictionary_2_t3037237058 * value)
	{
		___mSurfaces_18 = value;
		Il2CppCodeGenWriteBarrier(&___mSurfaces_18, value);
	}

	inline static int32_t get_offset_of_mActiveSurfaceBehaviours_19() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mActiveSurfaceBehaviours_19)); }
	inline Dictionary_2_t1968742499 * get_mActiveSurfaceBehaviours_19() const { return ___mActiveSurfaceBehaviours_19; }
	inline Dictionary_2_t1968742499 ** get_address_of_mActiveSurfaceBehaviours_19() { return &___mActiveSurfaceBehaviours_19; }
	inline void set_mActiveSurfaceBehaviours_19(Dictionary_2_t1968742499 * value)
	{
		___mActiveSurfaceBehaviours_19 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveSurfaceBehaviours_19, value);
	}

	inline static int32_t get_offset_of_mProps_20() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mProps_20)); }
	inline Dictionary_2_t3228312120 * get_mProps_20() const { return ___mProps_20; }
	inline Dictionary_2_t3228312120 ** get_address_of_mProps_20() { return &___mProps_20; }
	inline void set_mProps_20(Dictionary_2_t3228312120 * value)
	{
		___mProps_20 = value;
		Il2CppCodeGenWriteBarrier(&___mProps_20, value);
	}

	inline static int32_t get_offset_of_mActivePropBehaviours_21() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mActivePropBehaviours_21)); }
	inline Dictionary_2_t1400543277 * get_mActivePropBehaviours_21() const { return ___mActivePropBehaviours_21; }
	inline Dictionary_2_t1400543277 ** get_address_of_mActivePropBehaviours_21() { return &___mActivePropBehaviours_21; }
	inline void set_mActivePropBehaviours_21(Dictionary_2_t1400543277 * value)
	{
		___mActivePropBehaviours_21 = value;
		Il2CppCodeGenWriteBarrier(&___mActivePropBehaviours_21, value);
	}

	inline static int32_t get_offset_of_mPreviouslySetWorldCenterSurfaceTemplate_22() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mPreviouslySetWorldCenterSurfaceTemplate_22)); }
	inline SurfaceAbstractBehaviour_t1477931716 * get_mPreviouslySetWorldCenterSurfaceTemplate_22() const { return ___mPreviouslySetWorldCenterSurfaceTemplate_22; }
	inline SurfaceAbstractBehaviour_t1477931716 ** get_address_of_mPreviouslySetWorldCenterSurfaceTemplate_22() { return &___mPreviouslySetWorldCenterSurfaceTemplate_22; }
	inline void set_mPreviouslySetWorldCenterSurfaceTemplate_22(SurfaceAbstractBehaviour_t1477931716 * value)
	{
		___mPreviouslySetWorldCenterSurfaceTemplate_22 = value;
		Il2CppCodeGenWriteBarrier(&___mPreviouslySetWorldCenterSurfaceTemplate_22, value);
	}

	inline static int32_t get_offset_of_mIgnoreNextUpdate_23() { return static_cast<int32_t>(offsetof(ReconstructionAbstractBehaviour_t730550669, ___mIgnoreNextUpdate_23)); }
	inline bool get_mIgnoreNextUpdate_23() const { return ___mIgnoreNextUpdate_23; }
	inline bool* get_address_of_mIgnoreNextUpdate_23() { return &___mIgnoreNextUpdate_23; }
	inline void set_mIgnoreNextUpdate_23(bool value)
	{
		___mIgnoreNextUpdate_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
