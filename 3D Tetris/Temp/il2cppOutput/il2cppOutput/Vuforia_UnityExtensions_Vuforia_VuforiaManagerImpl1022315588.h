#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_807317499.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_t1022315588 
{
public:
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/VuMarkTargetResultData::pose
	PoseData_t807317499  ___pose_0;
	// System.Double Vuforia.VuforiaManagerImpl/VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.VuforiaManagerImpl/VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.VuforiaManagerImpl/VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t1022315588, ___pose_0)); }
	inline PoseData_t807317499  get_pose_0() const { return ___pose_0; }
	inline PoseData_t807317499 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t807317499  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t1022315588, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t1022315588, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t1022315588, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t1022315588, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t1022315588, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct VuMarkTargetResultData_t1022315588_marshaled_pinvoke
{
	PoseData_t807317499_marshaled_pinvoke ___pose_0;
	double ___timeStamp_1;
	int32_t ___statusInteger_2;
	int32_t ___targetID_3;
	int32_t ___resultID_4;
	int32_t ___unused_5;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct VuMarkTargetResultData_t1022315588_marshaled_com
{
	PoseData_t807317499_marshaled_com ___pose_0;
	double ___timeStamp_1;
	int32_t ___statusInteger_2;
	int32_t ___targetID_3;
	int32_t ___resultID_4;
	int32_t ___unused_5;
};
#pragma pack(pop, tp)
