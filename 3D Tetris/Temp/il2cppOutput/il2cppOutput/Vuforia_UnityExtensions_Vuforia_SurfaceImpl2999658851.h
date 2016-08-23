#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t1525280346;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "Vuforia_UnityExtensions_Vuforia_SmartTerrainTracka1706207247.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SurfaceImpl
struct  SurfaceImpl_t2999658851  : public SmartTerrainTrackableImpl_t1706207247
{
public:
	// UnityEngine.Mesh Vuforia.SurfaceImpl::mNavMesh
	Mesh_t1525280346 * ___mNavMesh_7;
	// System.Int32[] Vuforia.SurfaceImpl::mMeshBoundaries
	Int32U5BU5D_t1809983122* ___mMeshBoundaries_8;
	// UnityEngine.Rect Vuforia.SurfaceImpl::mBoundingBox
	Rect_t1525428817  ___mBoundingBox_9;
	// System.Single Vuforia.SurfaceImpl::mSurfaceArea
	float ___mSurfaceArea_10;
	// System.Boolean Vuforia.SurfaceImpl::mAreaNeedsUpdate
	bool ___mAreaNeedsUpdate_11;

public:
	inline static int32_t get_offset_of_mNavMesh_7() { return static_cast<int32_t>(offsetof(SurfaceImpl_t2999658851, ___mNavMesh_7)); }
	inline Mesh_t1525280346 * get_mNavMesh_7() const { return ___mNavMesh_7; }
	inline Mesh_t1525280346 ** get_address_of_mNavMesh_7() { return &___mNavMesh_7; }
	inline void set_mNavMesh_7(Mesh_t1525280346 * value)
	{
		___mNavMesh_7 = value;
		Il2CppCodeGenWriteBarrier(&___mNavMesh_7, value);
	}

	inline static int32_t get_offset_of_mMeshBoundaries_8() { return static_cast<int32_t>(offsetof(SurfaceImpl_t2999658851, ___mMeshBoundaries_8)); }
	inline Int32U5BU5D_t1809983122* get_mMeshBoundaries_8() const { return ___mMeshBoundaries_8; }
	inline Int32U5BU5D_t1809983122** get_address_of_mMeshBoundaries_8() { return &___mMeshBoundaries_8; }
	inline void set_mMeshBoundaries_8(Int32U5BU5D_t1809983122* value)
	{
		___mMeshBoundaries_8 = value;
		Il2CppCodeGenWriteBarrier(&___mMeshBoundaries_8, value);
	}

	inline static int32_t get_offset_of_mBoundingBox_9() { return static_cast<int32_t>(offsetof(SurfaceImpl_t2999658851, ___mBoundingBox_9)); }
	inline Rect_t1525428817  get_mBoundingBox_9() const { return ___mBoundingBox_9; }
	inline Rect_t1525428817 * get_address_of_mBoundingBox_9() { return &___mBoundingBox_9; }
	inline void set_mBoundingBox_9(Rect_t1525428817  value)
	{
		___mBoundingBox_9 = value;
	}

	inline static int32_t get_offset_of_mSurfaceArea_10() { return static_cast<int32_t>(offsetof(SurfaceImpl_t2999658851, ___mSurfaceArea_10)); }
	inline float get_mSurfaceArea_10() const { return ___mSurfaceArea_10; }
	inline float* get_address_of_mSurfaceArea_10() { return &___mSurfaceArea_10; }
	inline void set_mSurfaceArea_10(float value)
	{
		___mSurfaceArea_10 = value;
	}

	inline static int32_t get_offset_of_mAreaNeedsUpdate_11() { return static_cast<int32_t>(offsetof(SurfaceImpl_t2999658851, ___mAreaNeedsUpdate_11)); }
	inline bool get_mAreaNeedsUpdate_11() const { return ___mAreaNeedsUpdate_11; }
	inline bool* get_address_of_mAreaNeedsUpdate_11() { return &___mAreaNeedsUpdate_11; }
	inline void set_mAreaNeedsUpdate_11(bool value)
	{
		___mAreaNeedsUpdate_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
