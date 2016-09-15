#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.KeepAliveAbstractBehaviour
struct KeepAliveAbstractBehaviour_t1537620105;
// System.Collections.Generic.List`1<Vuforia.ILoadLevelEventHandler>
struct List_1_t2464558580;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.KeepAliveAbstractBehaviour
struct  KeepAliveAbstractBehaviour_t1537620105  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepARCameraAlive
	bool ___mKeepARCameraAlive_2;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepTrackableBehavioursAlive
	bool ___mKeepTrackableBehavioursAlive_3;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepTextRecoBehaviourAlive
	bool ___mKeepTextRecoBehaviourAlive_4;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepUDTBuildingBehaviourAlive
	bool ___mKeepUDTBuildingBehaviourAlive_5;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepCloudRecoBehaviourAlive
	bool ___mKeepCloudRecoBehaviourAlive_6;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepSmartTerrainAlive
	bool ___mKeepSmartTerrainAlive_7;
	// System.Collections.Generic.List`1<Vuforia.ILoadLevelEventHandler> Vuforia.KeepAliveAbstractBehaviour::mHandlers
	List_1_t2464558580 * ___mHandlers_9;

public:
	inline static int32_t get_offset_of_mKeepARCameraAlive_2() { return static_cast<int32_t>(offsetof(KeepAliveAbstractBehaviour_t1537620105, ___mKeepARCameraAlive_2)); }
	inline bool get_mKeepARCameraAlive_2() const { return ___mKeepARCameraAlive_2; }
	inline bool* get_address_of_mKeepARCameraAlive_2() { return &___mKeepARCameraAlive_2; }
	inline void set_mKeepARCameraAlive_2(bool value)
	{
		___mKeepARCameraAlive_2 = value;
	}

	inline static int32_t get_offset_of_mKeepTrackableBehavioursAlive_3() { return static_cast<int32_t>(offsetof(KeepAliveAbstractBehaviour_t1537620105, ___mKeepTrackableBehavioursAlive_3)); }
	inline bool get_mKeepTrackableBehavioursAlive_3() const { return ___mKeepTrackableBehavioursAlive_3; }
	inline bool* get_address_of_mKeepTrackableBehavioursAlive_3() { return &___mKeepTrackableBehavioursAlive_3; }
	inline void set_mKeepTrackableBehavioursAlive_3(bool value)
	{
		___mKeepTrackableBehavioursAlive_3 = value;
	}

	inline static int32_t get_offset_of_mKeepTextRecoBehaviourAlive_4() { return static_cast<int32_t>(offsetof(KeepAliveAbstractBehaviour_t1537620105, ___mKeepTextRecoBehaviourAlive_4)); }
	inline bool get_mKeepTextRecoBehaviourAlive_4() const { return ___mKeepTextRecoBehaviourAlive_4; }
	inline bool* get_address_of_mKeepTextRecoBehaviourAlive_4() { return &___mKeepTextRecoBehaviourAlive_4; }
	inline void set_mKeepTextRecoBehaviourAlive_4(bool value)
	{
		___mKeepTextRecoBehaviourAlive_4 = value;
	}

	inline static int32_t get_offset_of_mKeepUDTBuildingBehaviourAlive_5() { return static_cast<int32_t>(offsetof(KeepAliveAbstractBehaviour_t1537620105, ___mKeepUDTBuildingBehaviourAlive_5)); }
	inline bool get_mKeepUDTBuildingBehaviourAlive_5() const { return ___mKeepUDTBuildingBehaviourAlive_5; }
	inline bool* get_address_of_mKeepUDTBuildingBehaviourAlive_5() { return &___mKeepUDTBuildingBehaviourAlive_5; }
	inline void set_mKeepUDTBuildingBehaviourAlive_5(bool value)
	{
		___mKeepUDTBuildingBehaviourAlive_5 = value;
	}

	inline static int32_t get_offset_of_mKeepCloudRecoBehaviourAlive_6() { return static_cast<int32_t>(offsetof(KeepAliveAbstractBehaviour_t1537620105, ___mKeepCloudRecoBehaviourAlive_6)); }
	inline bool get_mKeepCloudRecoBehaviourAlive_6() const { return ___mKeepCloudRecoBehaviourAlive_6; }
	inline bool* get_address_of_mKeepCloudRecoBehaviourAlive_6() { return &___mKeepCloudRecoBehaviourAlive_6; }
	inline void set_mKeepCloudRecoBehaviourAlive_6(bool value)
	{
		___mKeepCloudRecoBehaviourAlive_6 = value;
	}

	inline static int32_t get_offset_of_mKeepSmartTerrainAlive_7() { return static_cast<int32_t>(offsetof(KeepAliveAbstractBehaviour_t1537620105, ___mKeepSmartTerrainAlive_7)); }
	inline bool get_mKeepSmartTerrainAlive_7() const { return ___mKeepSmartTerrainAlive_7; }
	inline bool* get_address_of_mKeepSmartTerrainAlive_7() { return &___mKeepSmartTerrainAlive_7; }
	inline void set_mKeepSmartTerrainAlive_7(bool value)
	{
		___mKeepSmartTerrainAlive_7 = value;
	}

	inline static int32_t get_offset_of_mHandlers_9() { return static_cast<int32_t>(offsetof(KeepAliveAbstractBehaviour_t1537620105, ___mHandlers_9)); }
	inline List_1_t2464558580 * get_mHandlers_9() const { return ___mHandlers_9; }
	inline List_1_t2464558580 ** get_address_of_mHandlers_9() { return &___mHandlers_9; }
	inline void set_mHandlers_9(List_1_t2464558580 * value)
	{
		___mHandlers_9 = value;
		Il2CppCodeGenWriteBarrier(&___mHandlers_9, value);
	}
};

struct KeepAliveAbstractBehaviour_t1537620105_StaticFields
{
public:
	// Vuforia.KeepAliveAbstractBehaviour Vuforia.KeepAliveAbstractBehaviour::sKeepAliveBehaviour
	KeepAliveAbstractBehaviour_t1537620105 * ___sKeepAliveBehaviour_8;

public:
	inline static int32_t get_offset_of_sKeepAliveBehaviour_8() { return static_cast<int32_t>(offsetof(KeepAliveAbstractBehaviour_t1537620105_StaticFields, ___sKeepAliveBehaviour_8)); }
	inline KeepAliveAbstractBehaviour_t1537620105 * get_sKeepAliveBehaviour_8() const { return ___sKeepAliveBehaviour_8; }
	inline KeepAliveAbstractBehaviour_t1537620105 ** get_address_of_sKeepAliveBehaviour_8() { return &___sKeepAliveBehaviour_8; }
	inline void set_sKeepAliveBehaviour_8(KeepAliveAbstractBehaviour_t1537620105 * value)
	{
		___sKeepAliveBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier(&___sKeepAliveBehaviour_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
