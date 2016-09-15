#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/Obb3D
#pragma pack(push, tp, 1)
struct  Obb3D_t75973504 
{
public:
	// UnityEngine.Vector3 Vuforia.VuforiaManagerImpl/Obb3D::center
	Vector3_t3525329789  ___center_0;
	// UnityEngine.Vector3 Vuforia.VuforiaManagerImpl/Obb3D::halfExtents
	Vector3_t3525329789  ___halfExtents_1;
	// System.Single Vuforia.VuforiaManagerImpl/Obb3D::rotationZ
	float ___rotationZ_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/Obb3D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb3D_t75973504, ___center_0)); }
	inline Vector3_t3525329789  get_center_0() const { return ___center_0; }
	inline Vector3_t3525329789 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector3_t3525329789  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb3D_t75973504, ___halfExtents_1)); }
	inline Vector3_t3525329789  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector3_t3525329789 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector3_t3525329789  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotationZ_2() { return static_cast<int32_t>(offsetof(Obb3D_t75973504, ___rotationZ_2)); }
	inline float get_rotationZ_2() const { return ___rotationZ_2; }
	inline float* get_address_of_rotationZ_2() { return &___rotationZ_2; }
	inline void set_rotationZ_2(float value)
	{
		___rotationZ_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb3D_t75973504, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/Obb3D
#pragma pack(push, tp, 1)
struct Obb3D_t75973504_marshaled_pinvoke
{
	Vector3_t3525329789_marshaled_pinvoke ___center_0;
	Vector3_t3525329789_marshaled_pinvoke ___halfExtents_1;
	float ___rotationZ_2;
	int32_t ___unused_3;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/Obb3D
#pragma pack(push, tp, 1)
struct Obb3D_t75973504_marshaled_com
{
	Vector3_t3525329789_marshaled_com ___center_0;
	Vector3_t3525329789_marshaled_com ___halfExtents_1;
	float ___rotationZ_2;
	int32_t ___unused_3;
};
#pragma pack(pop, tp)
