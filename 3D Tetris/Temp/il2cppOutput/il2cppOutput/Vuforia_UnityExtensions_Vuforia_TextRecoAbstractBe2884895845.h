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
// System.Collections.Generic.List`1<Vuforia.ITextRecoEventHandler>
struct List_1_t568940052;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "Vuforia_UnityExtensions_Vuforia_WordFilterMode2162328859.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation3189805734.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextRecoAbstractBehaviour
struct  TextRecoAbstractBehaviour_t2884895845  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Vuforia.TextRecoAbstractBehaviour::mHasInitialized
	bool ___mHasInitialized_2;
	// System.Boolean Vuforia.TextRecoAbstractBehaviour::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_3;
	// System.Boolean Vuforia.TextRecoAbstractBehaviour::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_4;
	// System.String Vuforia.TextRecoAbstractBehaviour::mWordListFile
	String_t* ___mWordListFile_5;
	// System.String Vuforia.TextRecoAbstractBehaviour::mCustomWordListFile
	String_t* ___mCustomWordListFile_6;
	// System.String Vuforia.TextRecoAbstractBehaviour::mAdditionalCustomWords
	String_t* ___mAdditionalCustomWords_7;
	// Vuforia.WordFilterMode Vuforia.TextRecoAbstractBehaviour::mFilterMode
	int32_t ___mFilterMode_8;
	// System.String Vuforia.TextRecoAbstractBehaviour::mFilterListFile
	String_t* ___mFilterListFile_9;
	// System.String Vuforia.TextRecoAbstractBehaviour::mAdditionalFilterWords
	String_t* ___mAdditionalFilterWords_10;
	// Vuforia.WordPrefabCreationMode Vuforia.TextRecoAbstractBehaviour::mWordPrefabCreationMode
	int32_t ___mWordPrefabCreationMode_11;
	// System.Int32 Vuforia.TextRecoAbstractBehaviour::mMaximumWordInstances
	int32_t ___mMaximumWordInstances_12;
	// System.Collections.Generic.List`1<Vuforia.ITextRecoEventHandler> Vuforia.TextRecoAbstractBehaviour::mTextRecoEventHandlers
	List_1_t568940052 * ___mTextRecoEventHandlers_13;

public:
	inline static int32_t get_offset_of_mHasInitialized_2() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mHasInitialized_2)); }
	inline bool get_mHasInitialized_2() const { return ___mHasInitialized_2; }
	inline bool* get_address_of_mHasInitialized_2() { return &___mHasInitialized_2; }
	inline void set_mHasInitialized_2(bool value)
	{
		___mHasInitialized_2 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_3() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mTrackerWasActiveBeforePause_3)); }
	inline bool get_mTrackerWasActiveBeforePause_3() const { return ___mTrackerWasActiveBeforePause_3; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_3() { return &___mTrackerWasActiveBeforePause_3; }
	inline void set_mTrackerWasActiveBeforePause_3(bool value)
	{
		___mTrackerWasActiveBeforePause_3 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_4() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mTrackerWasActiveBeforeDisabling_4)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_4() const { return ___mTrackerWasActiveBeforeDisabling_4; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_4() { return &___mTrackerWasActiveBeforeDisabling_4; }
	inline void set_mTrackerWasActiveBeforeDisabling_4(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_4 = value;
	}

	inline static int32_t get_offset_of_mWordListFile_5() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mWordListFile_5)); }
	inline String_t* get_mWordListFile_5() const { return ___mWordListFile_5; }
	inline String_t** get_address_of_mWordListFile_5() { return &___mWordListFile_5; }
	inline void set_mWordListFile_5(String_t* value)
	{
		___mWordListFile_5 = value;
		Il2CppCodeGenWriteBarrier(&___mWordListFile_5, value);
	}

	inline static int32_t get_offset_of_mCustomWordListFile_6() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mCustomWordListFile_6)); }
	inline String_t* get_mCustomWordListFile_6() const { return ___mCustomWordListFile_6; }
	inline String_t** get_address_of_mCustomWordListFile_6() { return &___mCustomWordListFile_6; }
	inline void set_mCustomWordListFile_6(String_t* value)
	{
		___mCustomWordListFile_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCustomWordListFile_6, value);
	}

	inline static int32_t get_offset_of_mAdditionalCustomWords_7() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mAdditionalCustomWords_7)); }
	inline String_t* get_mAdditionalCustomWords_7() const { return ___mAdditionalCustomWords_7; }
	inline String_t** get_address_of_mAdditionalCustomWords_7() { return &___mAdditionalCustomWords_7; }
	inline void set_mAdditionalCustomWords_7(String_t* value)
	{
		___mAdditionalCustomWords_7 = value;
		Il2CppCodeGenWriteBarrier(&___mAdditionalCustomWords_7, value);
	}

	inline static int32_t get_offset_of_mFilterMode_8() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mFilterMode_8)); }
	inline int32_t get_mFilterMode_8() const { return ___mFilterMode_8; }
	inline int32_t* get_address_of_mFilterMode_8() { return &___mFilterMode_8; }
	inline void set_mFilterMode_8(int32_t value)
	{
		___mFilterMode_8 = value;
	}

	inline static int32_t get_offset_of_mFilterListFile_9() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mFilterListFile_9)); }
	inline String_t* get_mFilterListFile_9() const { return ___mFilterListFile_9; }
	inline String_t** get_address_of_mFilterListFile_9() { return &___mFilterListFile_9; }
	inline void set_mFilterListFile_9(String_t* value)
	{
		___mFilterListFile_9 = value;
		Il2CppCodeGenWriteBarrier(&___mFilterListFile_9, value);
	}

	inline static int32_t get_offset_of_mAdditionalFilterWords_10() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mAdditionalFilterWords_10)); }
	inline String_t* get_mAdditionalFilterWords_10() const { return ___mAdditionalFilterWords_10; }
	inline String_t** get_address_of_mAdditionalFilterWords_10() { return &___mAdditionalFilterWords_10; }
	inline void set_mAdditionalFilterWords_10(String_t* value)
	{
		___mAdditionalFilterWords_10 = value;
		Il2CppCodeGenWriteBarrier(&___mAdditionalFilterWords_10, value);
	}

	inline static int32_t get_offset_of_mWordPrefabCreationMode_11() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mWordPrefabCreationMode_11)); }
	inline int32_t get_mWordPrefabCreationMode_11() const { return ___mWordPrefabCreationMode_11; }
	inline int32_t* get_address_of_mWordPrefabCreationMode_11() { return &___mWordPrefabCreationMode_11; }
	inline void set_mWordPrefabCreationMode_11(int32_t value)
	{
		___mWordPrefabCreationMode_11 = value;
	}

	inline static int32_t get_offset_of_mMaximumWordInstances_12() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mMaximumWordInstances_12)); }
	inline int32_t get_mMaximumWordInstances_12() const { return ___mMaximumWordInstances_12; }
	inline int32_t* get_address_of_mMaximumWordInstances_12() { return &___mMaximumWordInstances_12; }
	inline void set_mMaximumWordInstances_12(int32_t value)
	{
		___mMaximumWordInstances_12 = value;
	}

	inline static int32_t get_offset_of_mTextRecoEventHandlers_13() { return static_cast<int32_t>(offsetof(TextRecoAbstractBehaviour_t2884895845, ___mTextRecoEventHandlers_13)); }
	inline List_1_t568940052 * get_mTextRecoEventHandlers_13() const { return ___mTextRecoEventHandlers_13; }
	inline List_1_t568940052 ** get_address_of_mTextRecoEventHandlers_13() { return &___mTextRecoEventHandlers_13; }
	inline void set_mTextRecoEventHandlers_13(List_1_t568940052 * value)
	{
		___mTextRecoEventHandlers_13 = value;
		Il2CppCodeGenWriteBarrier(&___mTextRecoEventHandlers_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
