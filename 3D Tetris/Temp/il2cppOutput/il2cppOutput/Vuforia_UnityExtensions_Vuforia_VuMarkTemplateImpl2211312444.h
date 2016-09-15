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

#include "Vuforia_UnityExtensions_Vuforia_ObjectTargetImpl1236268326.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTemplateImpl
struct  VuMarkTemplateImpl_t2211312444  : public ObjectTargetImpl_t1236268326
{
public:
	// System.String Vuforia.VuMarkTemplateImpl::mUserData
	String_t* ___mUserData_4;
	// UnityEngine.Vector2 Vuforia.VuMarkTemplateImpl::mOrigin
	Vector2_t3525329788  ___mOrigin_5;
	// System.Boolean Vuforia.VuMarkTemplateImpl::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_6;

public:
	inline static int32_t get_offset_of_mUserData_4() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t2211312444, ___mUserData_4)); }
	inline String_t* get_mUserData_4() const { return ___mUserData_4; }
	inline String_t** get_address_of_mUserData_4() { return &___mUserData_4; }
	inline void set_mUserData_4(String_t* value)
	{
		___mUserData_4 = value;
		Il2CppCodeGenWriteBarrier(&___mUserData_4, value);
	}

	inline static int32_t get_offset_of_mOrigin_5() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t2211312444, ___mOrigin_5)); }
	inline Vector2_t3525329788  get_mOrigin_5() const { return ___mOrigin_5; }
	inline Vector2_t3525329788 * get_address_of_mOrigin_5() { return &___mOrigin_5; }
	inline void set_mOrigin_5(Vector2_t3525329788  value)
	{
		___mOrigin_5 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_6() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t2211312444, ___mTrackingFromRuntimeAppearance_6)); }
	inline bool get_mTrackingFromRuntimeAppearance_6() const { return ___mTrackingFromRuntimeAppearance_6; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_6() { return &___mTrackingFromRuntimeAppearance_6; }
	inline void set_mTrackingFromRuntimeAppearance_6(bool value)
	{
		___mTrackingFromRuntimeAppearance_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
