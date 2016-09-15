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
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
struct Dictionary_2_t2362405532;
// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t2668553718;
// System.Collections.Generic.List`1<Vuforia.Word>
struct List_1_t3534666041;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>
struct Dictionary_2_t653023078;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t959171264;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct Dictionary_2_t2596869168;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t2427322319;

#include "Vuforia_UnityExtensions_Vuforia_WordManager1476806201.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation3189805734.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordManagerImpl
struct  WordManagerImpl_t3107574521  : public WordManager_t1476806201
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult> Vuforia.WordManagerImpl::mTrackedWords
	Dictionary_2_t2362405532 * ___mTrackedWords_1;
	// System.Collections.Generic.List`1<Vuforia.WordResult> Vuforia.WordManagerImpl::mNewWords
	List_1_t2668553718 * ___mNewWords_2;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mLostWords
	List_1_t3534666041 * ___mLostWords_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mActiveWordBehaviours
	Dictionary_2_t653023078 * ___mActiveWordBehaviours_4;
	// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mWordBehavioursMarkedForDeletion
	List_1_t959171264 * ___mWordBehavioursMarkedForDeletion_5;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mWaitingQueue
	List_1_t3534666041 * ___mWaitingQueue_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>> Vuforia.WordManagerImpl::mWordBehaviours
	Dictionary_2_t2596869168 * ___mWordBehaviours_7;
	// System.Boolean Vuforia.WordManagerImpl::mAutomaticTemplate
	bool ___mAutomaticTemplate_8;
	// System.Int32 Vuforia.WordManagerImpl::mMaxInstances
	int32_t ___mMaxInstances_9;
	// Vuforia.WordPrefabCreationMode Vuforia.WordManagerImpl::mWordPrefabCreationMode
	int32_t ___mWordPrefabCreationMode_10;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.WordManagerImpl::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t2427322319 * ___mVuforiaBehaviour_11;

public:
	inline static int32_t get_offset_of_mTrackedWords_1() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mTrackedWords_1)); }
	inline Dictionary_2_t2362405532 * get_mTrackedWords_1() const { return ___mTrackedWords_1; }
	inline Dictionary_2_t2362405532 ** get_address_of_mTrackedWords_1() { return &___mTrackedWords_1; }
	inline void set_mTrackedWords_1(Dictionary_2_t2362405532 * value)
	{
		___mTrackedWords_1 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackedWords_1, value);
	}

	inline static int32_t get_offset_of_mNewWords_2() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mNewWords_2)); }
	inline List_1_t2668553718 * get_mNewWords_2() const { return ___mNewWords_2; }
	inline List_1_t2668553718 ** get_address_of_mNewWords_2() { return &___mNewWords_2; }
	inline void set_mNewWords_2(List_1_t2668553718 * value)
	{
		___mNewWords_2 = value;
		Il2CppCodeGenWriteBarrier(&___mNewWords_2, value);
	}

	inline static int32_t get_offset_of_mLostWords_3() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mLostWords_3)); }
	inline List_1_t3534666041 * get_mLostWords_3() const { return ___mLostWords_3; }
	inline List_1_t3534666041 ** get_address_of_mLostWords_3() { return &___mLostWords_3; }
	inline void set_mLostWords_3(List_1_t3534666041 * value)
	{
		___mLostWords_3 = value;
		Il2CppCodeGenWriteBarrier(&___mLostWords_3, value);
	}

	inline static int32_t get_offset_of_mActiveWordBehaviours_4() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mActiveWordBehaviours_4)); }
	inline Dictionary_2_t653023078 * get_mActiveWordBehaviours_4() const { return ___mActiveWordBehaviours_4; }
	inline Dictionary_2_t653023078 ** get_address_of_mActiveWordBehaviours_4() { return &___mActiveWordBehaviours_4; }
	inline void set_mActiveWordBehaviours_4(Dictionary_2_t653023078 * value)
	{
		___mActiveWordBehaviours_4 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveWordBehaviours_4, value);
	}

	inline static int32_t get_offset_of_mWordBehavioursMarkedForDeletion_5() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mWordBehavioursMarkedForDeletion_5)); }
	inline List_1_t959171264 * get_mWordBehavioursMarkedForDeletion_5() const { return ___mWordBehavioursMarkedForDeletion_5; }
	inline List_1_t959171264 ** get_address_of_mWordBehavioursMarkedForDeletion_5() { return &___mWordBehavioursMarkedForDeletion_5; }
	inline void set_mWordBehavioursMarkedForDeletion_5(List_1_t959171264 * value)
	{
		___mWordBehavioursMarkedForDeletion_5 = value;
		Il2CppCodeGenWriteBarrier(&___mWordBehavioursMarkedForDeletion_5, value);
	}

	inline static int32_t get_offset_of_mWaitingQueue_6() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mWaitingQueue_6)); }
	inline List_1_t3534666041 * get_mWaitingQueue_6() const { return ___mWaitingQueue_6; }
	inline List_1_t3534666041 ** get_address_of_mWaitingQueue_6() { return &___mWaitingQueue_6; }
	inline void set_mWaitingQueue_6(List_1_t3534666041 * value)
	{
		___mWaitingQueue_6 = value;
		Il2CppCodeGenWriteBarrier(&___mWaitingQueue_6, value);
	}

	inline static int32_t get_offset_of_mWordBehaviours_7() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mWordBehaviours_7)); }
	inline Dictionary_2_t2596869168 * get_mWordBehaviours_7() const { return ___mWordBehaviours_7; }
	inline Dictionary_2_t2596869168 ** get_address_of_mWordBehaviours_7() { return &___mWordBehaviours_7; }
	inline void set_mWordBehaviours_7(Dictionary_2_t2596869168 * value)
	{
		___mWordBehaviours_7 = value;
		Il2CppCodeGenWriteBarrier(&___mWordBehaviours_7, value);
	}

	inline static int32_t get_offset_of_mAutomaticTemplate_8() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mAutomaticTemplate_8)); }
	inline bool get_mAutomaticTemplate_8() const { return ___mAutomaticTemplate_8; }
	inline bool* get_address_of_mAutomaticTemplate_8() { return &___mAutomaticTemplate_8; }
	inline void set_mAutomaticTemplate_8(bool value)
	{
		___mAutomaticTemplate_8 = value;
	}

	inline static int32_t get_offset_of_mMaxInstances_9() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mMaxInstances_9)); }
	inline int32_t get_mMaxInstances_9() const { return ___mMaxInstances_9; }
	inline int32_t* get_address_of_mMaxInstances_9() { return &___mMaxInstances_9; }
	inline void set_mMaxInstances_9(int32_t value)
	{
		___mMaxInstances_9 = value;
	}

	inline static int32_t get_offset_of_mWordPrefabCreationMode_10() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mWordPrefabCreationMode_10)); }
	inline int32_t get_mWordPrefabCreationMode_10() const { return ___mWordPrefabCreationMode_10; }
	inline int32_t* get_address_of_mWordPrefabCreationMode_10() { return &___mWordPrefabCreationMode_10; }
	inline void set_mWordPrefabCreationMode_10(int32_t value)
	{
		___mWordPrefabCreationMode_10 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_11() { return static_cast<int32_t>(offsetof(WordManagerImpl_t3107574521, ___mVuforiaBehaviour_11)); }
	inline VuforiaAbstractBehaviour_t2427322319 * get_mVuforiaBehaviour_11() const { return ___mVuforiaBehaviour_11; }
	inline VuforiaAbstractBehaviour_t2427322319 ** get_address_of_mVuforiaBehaviour_11() { return &___mVuforiaBehaviour_11; }
	inline void set_mVuforiaBehaviour_11(VuforiaAbstractBehaviour_t2427322319 * value)
	{
		___mVuforiaBehaviour_11 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
