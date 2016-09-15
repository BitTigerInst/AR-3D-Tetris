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
// Vuforia.Word
struct Word_t2737707072;

#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2427445838.h"
#include "Vuforia_UnityExtensions_Vuforia_WordTemplateMode3511200413.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordAbstractBehaviour
struct  WordAbstractBehaviour_t162212295  : public TrackableBehaviour_t2427445838
{
public:
	// Vuforia.WordTemplateMode Vuforia.WordAbstractBehaviour::mMode
	int32_t ___mMode_10;
	// System.String Vuforia.WordAbstractBehaviour::mSpecificWord
	String_t* ___mSpecificWord_11;
	// Vuforia.Word Vuforia.WordAbstractBehaviour::mWord
	Il2CppObject * ___mWord_12;

public:
	inline static int32_t get_offset_of_mMode_10() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t162212295, ___mMode_10)); }
	inline int32_t get_mMode_10() const { return ___mMode_10; }
	inline int32_t* get_address_of_mMode_10() { return &___mMode_10; }
	inline void set_mMode_10(int32_t value)
	{
		___mMode_10 = value;
	}

	inline static int32_t get_offset_of_mSpecificWord_11() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t162212295, ___mSpecificWord_11)); }
	inline String_t* get_mSpecificWord_11() const { return ___mSpecificWord_11; }
	inline String_t** get_address_of_mSpecificWord_11() { return &___mSpecificWord_11; }
	inline void set_mSpecificWord_11(String_t* value)
	{
		___mSpecificWord_11 = value;
		Il2CppCodeGenWriteBarrier(&___mSpecificWord_11, value);
	}

	inline static int32_t get_offset_of_mWord_12() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t162212295, ___mWord_12)); }
	inline Il2CppObject * get_mWord_12() const { return ___mWord_12; }
	inline Il2CppObject ** get_address_of_mWord_12() { return &___mWord_12; }
	inline void set_mWord_12(Il2CppObject * value)
	{
		___mWord_12 = value;
		Il2CppCodeGenWriteBarrier(&___mWord_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
