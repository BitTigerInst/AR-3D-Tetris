#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t892409423;
// UnityEngine.MeshFilter
struct MeshFilter_t4177078322;
// UnityEngine.MeshCollider
struct MeshCollider_t1080724846;

#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2427445838.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainTrackableBehaviour
struct  SmartTerrainTrackableBehaviour_t3759975578  : public TrackableBehaviour_t2427445838
{
public:
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableBehaviour::mSmartTerrainTrackable
	Il2CppObject * ___mSmartTerrainTrackable_10;
	// System.Boolean Vuforia.SmartTerrainTrackableBehaviour::mDisableAutomaticUpdates
	bool ___mDisableAutomaticUpdates_11;
	// UnityEngine.MeshFilter Vuforia.SmartTerrainTrackableBehaviour::mMeshFilterToUpdate
	MeshFilter_t4177078322 * ___mMeshFilterToUpdate_12;
	// UnityEngine.MeshCollider Vuforia.SmartTerrainTrackableBehaviour::mMeshColliderToUpdate
	MeshCollider_t1080724846 * ___mMeshColliderToUpdate_13;

public:
	inline static int32_t get_offset_of_mSmartTerrainTrackable_10() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableBehaviour_t3759975578, ___mSmartTerrainTrackable_10)); }
	inline Il2CppObject * get_mSmartTerrainTrackable_10() const { return ___mSmartTerrainTrackable_10; }
	inline Il2CppObject ** get_address_of_mSmartTerrainTrackable_10() { return &___mSmartTerrainTrackable_10; }
	inline void set_mSmartTerrainTrackable_10(Il2CppObject * value)
	{
		___mSmartTerrainTrackable_10 = value;
		Il2CppCodeGenWriteBarrier(&___mSmartTerrainTrackable_10, value);
	}

	inline static int32_t get_offset_of_mDisableAutomaticUpdates_11() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableBehaviour_t3759975578, ___mDisableAutomaticUpdates_11)); }
	inline bool get_mDisableAutomaticUpdates_11() const { return ___mDisableAutomaticUpdates_11; }
	inline bool* get_address_of_mDisableAutomaticUpdates_11() { return &___mDisableAutomaticUpdates_11; }
	inline void set_mDisableAutomaticUpdates_11(bool value)
	{
		___mDisableAutomaticUpdates_11 = value;
	}

	inline static int32_t get_offset_of_mMeshFilterToUpdate_12() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableBehaviour_t3759975578, ___mMeshFilterToUpdate_12)); }
	inline MeshFilter_t4177078322 * get_mMeshFilterToUpdate_12() const { return ___mMeshFilterToUpdate_12; }
	inline MeshFilter_t4177078322 ** get_address_of_mMeshFilterToUpdate_12() { return &___mMeshFilterToUpdate_12; }
	inline void set_mMeshFilterToUpdate_12(MeshFilter_t4177078322 * value)
	{
		___mMeshFilterToUpdate_12 = value;
		Il2CppCodeGenWriteBarrier(&___mMeshFilterToUpdate_12, value);
	}

	inline static int32_t get_offset_of_mMeshColliderToUpdate_13() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableBehaviour_t3759975578, ___mMeshColliderToUpdate_13)); }
	inline MeshCollider_t1080724846 * get_mMeshColliderToUpdate_13() const { return ___mMeshColliderToUpdate_13; }
	inline MeshCollider_t1080724846 ** get_address_of_mMeshColliderToUpdate_13() { return &___mMeshColliderToUpdate_13; }
	inline void set_mMeshColliderToUpdate_13(MeshCollider_t1080724846 * value)
	{
		___mMeshColliderToUpdate_13 = value;
		Il2CppCodeGenWriteBarrier(&___mMeshColliderToUpdate_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
