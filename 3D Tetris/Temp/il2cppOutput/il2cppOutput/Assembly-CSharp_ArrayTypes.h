#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Vuforia.WireframeBehaviour
struct WireframeBehaviour_t2976175819;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Vuforia_WireframeBehaviour2976175819.h"

#pragma once
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t2272146858  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) WireframeBehaviour_t2976175819 * m_Items[1];

public:
	inline WireframeBehaviour_t2976175819 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WireframeBehaviour_t2976175819 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WireframeBehaviour_t2976175819 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
