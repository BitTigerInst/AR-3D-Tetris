#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3886489431.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_O75973504.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_807317499.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/PropData
#pragma pack(push, tp, 1)
struct  PropData_t3365470669 
{
public:
	// Vuforia.VuforiaManagerImpl/MeshData Vuforia.VuforiaManagerImpl/PropData::meshData
	MeshData_t3886489431  ___meshData_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/PropData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/PropData::parentID
	int32_t ___parentID_2;
	// Vuforia.VuforiaManagerImpl/Obb3D Vuforia.VuforiaManagerImpl/PropData::boundingBox
	Obb3D_t75973504  ___boundingBox_3;
	// UnityEngine.Vector2 Vuforia.VuforiaManagerImpl/PropData::localPosition
	Vector2_t3525329788  ___localPosition_4;
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/PropData::localPose
	PoseData_t807317499  ___localPose_5;
	// System.Int32 Vuforia.VuforiaManagerImpl/PropData::revision
	int32_t ___revision_6;
	// System.Int32 Vuforia.VuforiaManagerImpl/PropData::unused
	int32_t ___unused_7;

public:
	inline static int32_t get_offset_of_meshData_0() { return static_cast<int32_t>(offsetof(PropData_t3365470669, ___meshData_0)); }
	inline MeshData_t3886489431  get_meshData_0() const { return ___meshData_0; }
	inline MeshData_t3886489431 * get_address_of_meshData_0() { return &___meshData_0; }
	inline void set_meshData_0(MeshData_t3886489431  value)
	{
		___meshData_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(PropData_t3365470669, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_parentID_2() { return static_cast<int32_t>(offsetof(PropData_t3365470669, ___parentID_2)); }
	inline int32_t get_parentID_2() const { return ___parentID_2; }
	inline int32_t* get_address_of_parentID_2() { return &___parentID_2; }
	inline void set_parentID_2(int32_t value)
	{
		___parentID_2 = value;
	}

	inline static int32_t get_offset_of_boundingBox_3() { return static_cast<int32_t>(offsetof(PropData_t3365470669, ___boundingBox_3)); }
	inline Obb3D_t75973504  get_boundingBox_3() const { return ___boundingBox_3; }
	inline Obb3D_t75973504 * get_address_of_boundingBox_3() { return &___boundingBox_3; }
	inline void set_boundingBox_3(Obb3D_t75973504  value)
	{
		___boundingBox_3 = value;
	}

	inline static int32_t get_offset_of_localPosition_4() { return static_cast<int32_t>(offsetof(PropData_t3365470669, ___localPosition_4)); }
	inline Vector2_t3525329788  get_localPosition_4() const { return ___localPosition_4; }
	inline Vector2_t3525329788 * get_address_of_localPosition_4() { return &___localPosition_4; }
	inline void set_localPosition_4(Vector2_t3525329788  value)
	{
		___localPosition_4 = value;
	}

	inline static int32_t get_offset_of_localPose_5() { return static_cast<int32_t>(offsetof(PropData_t3365470669, ___localPose_5)); }
	inline PoseData_t807317499  get_localPose_5() const { return ___localPose_5; }
	inline PoseData_t807317499 * get_address_of_localPose_5() { return &___localPose_5; }
	inline void set_localPose_5(PoseData_t807317499  value)
	{
		___localPose_5 = value;
	}

	inline static int32_t get_offset_of_revision_6() { return static_cast<int32_t>(offsetof(PropData_t3365470669, ___revision_6)); }
	inline int32_t get_revision_6() const { return ___revision_6; }
	inline int32_t* get_address_of_revision_6() { return &___revision_6; }
	inline void set_revision_6(int32_t value)
	{
		___revision_6 = value;
	}

	inline static int32_t get_offset_of_unused_7() { return static_cast<int32_t>(offsetof(PropData_t3365470669, ___unused_7)); }
	inline int32_t get_unused_7() const { return ___unused_7; }
	inline int32_t* get_address_of_unused_7() { return &___unused_7; }
	inline void set_unused_7(int32_t value)
	{
		___unused_7 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/PropData
#pragma pack(push, tp, 1)
struct PropData_t3365470669_marshaled_pinvoke
{
	MeshData_t3886489431_marshaled_pinvoke ___meshData_0;
	int32_t ___id_1;
	int32_t ___parentID_2;
	Obb3D_t75973504_marshaled_pinvoke ___boundingBox_3;
	Vector2_t3525329788_marshaled_pinvoke ___localPosition_4;
	PoseData_t807317499_marshaled_pinvoke ___localPose_5;
	int32_t ___revision_6;
	int32_t ___unused_7;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/PropData
#pragma pack(push, tp, 1)
struct PropData_t3365470669_marshaled_com
{
	MeshData_t3886489431_marshaled_com ___meshData_0;
	int32_t ___id_1;
	int32_t ___parentID_2;
	Obb3D_t75973504_marshaled_com ___boundingBox_3;
	Vector2_t3525329788_marshaled_com ___localPosition_4;
	PoseData_t807317499_marshaled_com ___localPose_5;
	int32_t ___revision_6;
	int32_t ___unused_7;
};
#pragma pack(pop, tp)
