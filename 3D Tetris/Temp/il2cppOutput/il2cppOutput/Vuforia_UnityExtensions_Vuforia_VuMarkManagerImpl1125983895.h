#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Vuforia.VuMarkAbstractBehaviour>>
struct Dictionary_2_t4116618621;
// System.Collections.Generic.List`1<Vuforia.VuMarkTarget>
struct List_1_t270659852;
// System.Collections.Generic.List`1<Vuforia.VuMarkAbstractBehaviour>
struct List_1_t3625807838;
// System.Action`1<Vuforia.VuMarkTarget>
struct Action_1_t3917120884;
// System.Action`1<Vuforia.VuMarkAbstractBehaviour>
struct Action_1_t2977301574;

#include "Vuforia_UnityExtensions_Vuforia_VuMarkManager2792364247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkManagerImpl
struct  VuMarkManagerImpl_t1125983895  : public VuMarkManager_t2792364247
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Vuforia.VuMarkAbstractBehaviour>> Vuforia.VuMarkManagerImpl::mBehaviours
	Dictionary_2_t4116618621 * ___mBehaviours_0;
	// System.Collections.Generic.List`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManagerImpl::mActiveVuMarkTargets
	List_1_t270659852 * ___mActiveVuMarkTargets_1;
	// System.Collections.Generic.List`1<Vuforia.VuMarkAbstractBehaviour> Vuforia.VuMarkManagerImpl::mDestroyedBehaviours
	List_1_t3625807838 * ___mDestroyedBehaviours_2;
	// System.Action`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManagerImpl::mOnVuMarkDetected
	Action_1_t3917120884 * ___mOnVuMarkDetected_3;
	// System.Action`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManagerImpl::mOnVuMarkLost
	Action_1_t3917120884 * ___mOnVuMarkLost_4;
	// System.Action`1<Vuforia.VuMarkAbstractBehaviour> Vuforia.VuMarkManagerImpl::mOnVuMarkBehaviourDetected
	Action_1_t2977301574 * ___mOnVuMarkBehaviourDetected_5;

public:
	inline static int32_t get_offset_of_mBehaviours_0() { return static_cast<int32_t>(offsetof(VuMarkManagerImpl_t1125983895, ___mBehaviours_0)); }
	inline Dictionary_2_t4116618621 * get_mBehaviours_0() const { return ___mBehaviours_0; }
	inline Dictionary_2_t4116618621 ** get_address_of_mBehaviours_0() { return &___mBehaviours_0; }
	inline void set_mBehaviours_0(Dictionary_2_t4116618621 * value)
	{
		___mBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier(&___mBehaviours_0, value);
	}

	inline static int32_t get_offset_of_mActiveVuMarkTargets_1() { return static_cast<int32_t>(offsetof(VuMarkManagerImpl_t1125983895, ___mActiveVuMarkTargets_1)); }
	inline List_1_t270659852 * get_mActiveVuMarkTargets_1() const { return ___mActiveVuMarkTargets_1; }
	inline List_1_t270659852 ** get_address_of_mActiveVuMarkTargets_1() { return &___mActiveVuMarkTargets_1; }
	inline void set_mActiveVuMarkTargets_1(List_1_t270659852 * value)
	{
		___mActiveVuMarkTargets_1 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveVuMarkTargets_1, value);
	}

	inline static int32_t get_offset_of_mDestroyedBehaviours_2() { return static_cast<int32_t>(offsetof(VuMarkManagerImpl_t1125983895, ___mDestroyedBehaviours_2)); }
	inline List_1_t3625807838 * get_mDestroyedBehaviours_2() const { return ___mDestroyedBehaviours_2; }
	inline List_1_t3625807838 ** get_address_of_mDestroyedBehaviours_2() { return &___mDestroyedBehaviours_2; }
	inline void set_mDestroyedBehaviours_2(List_1_t3625807838 * value)
	{
		___mDestroyedBehaviours_2 = value;
		Il2CppCodeGenWriteBarrier(&___mDestroyedBehaviours_2, value);
	}

	inline static int32_t get_offset_of_mOnVuMarkDetected_3() { return static_cast<int32_t>(offsetof(VuMarkManagerImpl_t1125983895, ___mOnVuMarkDetected_3)); }
	inline Action_1_t3917120884 * get_mOnVuMarkDetected_3() const { return ___mOnVuMarkDetected_3; }
	inline Action_1_t3917120884 ** get_address_of_mOnVuMarkDetected_3() { return &___mOnVuMarkDetected_3; }
	inline void set_mOnVuMarkDetected_3(Action_1_t3917120884 * value)
	{
		___mOnVuMarkDetected_3 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuMarkDetected_3, value);
	}

	inline static int32_t get_offset_of_mOnVuMarkLost_4() { return static_cast<int32_t>(offsetof(VuMarkManagerImpl_t1125983895, ___mOnVuMarkLost_4)); }
	inline Action_1_t3917120884 * get_mOnVuMarkLost_4() const { return ___mOnVuMarkLost_4; }
	inline Action_1_t3917120884 ** get_address_of_mOnVuMarkLost_4() { return &___mOnVuMarkLost_4; }
	inline void set_mOnVuMarkLost_4(Action_1_t3917120884 * value)
	{
		___mOnVuMarkLost_4 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuMarkLost_4, value);
	}

	inline static int32_t get_offset_of_mOnVuMarkBehaviourDetected_5() { return static_cast<int32_t>(offsetof(VuMarkManagerImpl_t1125983895, ___mOnVuMarkBehaviourDetected_5)); }
	inline Action_1_t2977301574 * get_mOnVuMarkBehaviourDetected_5() const { return ___mOnVuMarkBehaviourDetected_5; }
	inline Action_1_t2977301574 ** get_address_of_mOnVuMarkBehaviourDetected_5() { return &___mOnVuMarkBehaviourDetected_5; }
	inline void set_mOnVuMarkBehaviourDetected_5(Action_1_t2977301574 * value)
	{
		___mOnVuMarkBehaviourDetected_5 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuMarkBehaviourDetected_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
