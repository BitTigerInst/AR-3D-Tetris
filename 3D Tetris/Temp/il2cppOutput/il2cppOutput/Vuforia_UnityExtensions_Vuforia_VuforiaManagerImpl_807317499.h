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
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t807317499 
{
public:
	// UnityEngine.Vector3 Vuforia.VuforiaManagerImpl/PoseData::position
	Vector3_t3525329789  ___position_0;
	// UnityEngine.Quaternion Vuforia.VuforiaManagerImpl/PoseData::orientation
	Quaternion_t1891715979  ___orientation_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t807317499, ___position_0)); }
	inline Vector3_t3525329789  get_position_0() const { return ___position_0; }
	inline Vector3_t3525329789 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3525329789  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t807317499, ___orientation_1)); }
	inline Quaternion_t1891715979  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t1891715979 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t1891715979  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_t807317499, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct PoseData_t807317499_marshaled_pinvoke
{
	Vector3_t3525329789_marshaled_pinvoke ___position_0;
	Quaternion_t1891715979_marshaled_pinvoke ___orientation_1;
	int32_t ___unused_2;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct PoseData_t807317499_marshaled_com
{
	Vector3_t3525329789_marshaled_com ___position_0;
	Quaternion_t1891715979_marshaled_com ___orientation_1;
	int32_t ___unused_2;
};
#pragma pack(pop, tp)
