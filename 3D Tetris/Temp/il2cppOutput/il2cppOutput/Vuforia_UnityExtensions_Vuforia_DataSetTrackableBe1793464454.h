#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t2363955698;

#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2427445838.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t1793464454  : public TrackableBehaviour_t2427445838
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_10;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mExtendedTracking
	bool ___mExtendedTracking_11;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mInitializeSmartTerrain
	bool ___mInitializeSmartTerrain_12;
	// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::mReconstructionToInitialize
	ReconstructionFromTargetAbstractBehaviour_t2363955698 * ___mReconstructionToInitialize_13;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderBoundsMin
	Vector3_t3525329789  ___mSmartTerrainOccluderBoundsMin_14;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderBoundsMax
	Vector3_t3525329789  ___mSmartTerrainOccluderBoundsMax_15;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mIsSmartTerrainOccluderOffset
	bool ___mIsSmartTerrainOccluderOffset_16;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderOffset
	Vector3_t3525329789  ___mSmartTerrainOccluderOffset_17;
	// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderRotation
	Quaternion_t1891715979  ___mSmartTerrainOccluderRotation_18;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mAutoSetOccluderFromTargetSize
	bool ___mAutoSetOccluderFromTargetSize_19;

public:
	inline static int32_t get_offset_of_mDataSetPath_10() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mDataSetPath_10)); }
	inline String_t* get_mDataSetPath_10() const { return ___mDataSetPath_10; }
	inline String_t** get_address_of_mDataSetPath_10() { return &___mDataSetPath_10; }
	inline void set_mDataSetPath_10(String_t* value)
	{
		___mDataSetPath_10 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSetPath_10, value);
	}

	inline static int32_t get_offset_of_mExtendedTracking_11() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mExtendedTracking_11)); }
	inline bool get_mExtendedTracking_11() const { return ___mExtendedTracking_11; }
	inline bool* get_address_of_mExtendedTracking_11() { return &___mExtendedTracking_11; }
	inline void set_mExtendedTracking_11(bool value)
	{
		___mExtendedTracking_11 = value;
	}

	inline static int32_t get_offset_of_mInitializeSmartTerrain_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mInitializeSmartTerrain_12)); }
	inline bool get_mInitializeSmartTerrain_12() const { return ___mInitializeSmartTerrain_12; }
	inline bool* get_address_of_mInitializeSmartTerrain_12() { return &___mInitializeSmartTerrain_12; }
	inline void set_mInitializeSmartTerrain_12(bool value)
	{
		___mInitializeSmartTerrain_12 = value;
	}

	inline static int32_t get_offset_of_mReconstructionToInitialize_13() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mReconstructionToInitialize_13)); }
	inline ReconstructionFromTargetAbstractBehaviour_t2363955698 * get_mReconstructionToInitialize_13() const { return ___mReconstructionToInitialize_13; }
	inline ReconstructionFromTargetAbstractBehaviour_t2363955698 ** get_address_of_mReconstructionToInitialize_13() { return &___mReconstructionToInitialize_13; }
	inline void set_mReconstructionToInitialize_13(ReconstructionFromTargetAbstractBehaviour_t2363955698 * value)
	{
		___mReconstructionToInitialize_13 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstructionToInitialize_13, value);
	}

	inline static int32_t get_offset_of_mSmartTerrainOccluderBoundsMin_14() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mSmartTerrainOccluderBoundsMin_14)); }
	inline Vector3_t3525329789  get_mSmartTerrainOccluderBoundsMin_14() const { return ___mSmartTerrainOccluderBoundsMin_14; }
	inline Vector3_t3525329789 * get_address_of_mSmartTerrainOccluderBoundsMin_14() { return &___mSmartTerrainOccluderBoundsMin_14; }
	inline void set_mSmartTerrainOccluderBoundsMin_14(Vector3_t3525329789  value)
	{
		___mSmartTerrainOccluderBoundsMin_14 = value;
	}

	inline static int32_t get_offset_of_mSmartTerrainOccluderBoundsMax_15() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mSmartTerrainOccluderBoundsMax_15)); }
	inline Vector3_t3525329789  get_mSmartTerrainOccluderBoundsMax_15() const { return ___mSmartTerrainOccluderBoundsMax_15; }
	inline Vector3_t3525329789 * get_address_of_mSmartTerrainOccluderBoundsMax_15() { return &___mSmartTerrainOccluderBoundsMax_15; }
	inline void set_mSmartTerrainOccluderBoundsMax_15(Vector3_t3525329789  value)
	{
		___mSmartTerrainOccluderBoundsMax_15 = value;
	}

	inline static int32_t get_offset_of_mIsSmartTerrainOccluderOffset_16() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mIsSmartTerrainOccluderOffset_16)); }
	inline bool get_mIsSmartTerrainOccluderOffset_16() const { return ___mIsSmartTerrainOccluderOffset_16; }
	inline bool* get_address_of_mIsSmartTerrainOccluderOffset_16() { return &___mIsSmartTerrainOccluderOffset_16; }
	inline void set_mIsSmartTerrainOccluderOffset_16(bool value)
	{
		___mIsSmartTerrainOccluderOffset_16 = value;
	}

	inline static int32_t get_offset_of_mSmartTerrainOccluderOffset_17() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mSmartTerrainOccluderOffset_17)); }
	inline Vector3_t3525329789  get_mSmartTerrainOccluderOffset_17() const { return ___mSmartTerrainOccluderOffset_17; }
	inline Vector3_t3525329789 * get_address_of_mSmartTerrainOccluderOffset_17() { return &___mSmartTerrainOccluderOffset_17; }
	inline void set_mSmartTerrainOccluderOffset_17(Vector3_t3525329789  value)
	{
		___mSmartTerrainOccluderOffset_17 = value;
	}

	inline static int32_t get_offset_of_mSmartTerrainOccluderRotation_18() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mSmartTerrainOccluderRotation_18)); }
	inline Quaternion_t1891715979  get_mSmartTerrainOccluderRotation_18() const { return ___mSmartTerrainOccluderRotation_18; }
	inline Quaternion_t1891715979 * get_address_of_mSmartTerrainOccluderRotation_18() { return &___mSmartTerrainOccluderRotation_18; }
	inline void set_mSmartTerrainOccluderRotation_18(Quaternion_t1891715979  value)
	{
		___mSmartTerrainOccluderRotation_18 = value;
	}

	inline static int32_t get_offset_of_mAutoSetOccluderFromTargetSize_19() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t1793464454, ___mAutoSetOccluderFromTargetSize_19)); }
	inline bool get_mAutoSetOccluderFromTargetSize_19() const { return ___mAutoSetOccluderFromTargetSize_19; }
	inline bool* get_address_of_mAutoSetOccluderFromTargetSize_19() { return &___mAutoSetOccluderFromTargetSize_19; }
	inline void set_mAutoSetOccluderFromTargetSize_19(bool value)
	{
		___mAutoSetOccluderFromTargetSize_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
