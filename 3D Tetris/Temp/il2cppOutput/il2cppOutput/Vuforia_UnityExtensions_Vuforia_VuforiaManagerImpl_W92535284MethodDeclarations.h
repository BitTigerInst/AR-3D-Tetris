#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct WordData_t92535284;
struct WordData_t92535284_marshaled_pinvoke;

extern "C" void WordData_t92535284_marshal_pinvoke(const WordData_t92535284& unmarshaled, WordData_t92535284_marshaled_pinvoke& marshaled);
extern "C" void WordData_t92535284_marshal_pinvoke_back(const WordData_t92535284_marshaled_pinvoke& marshaled, WordData_t92535284& unmarshaled);
extern "C" void WordData_t92535284_marshal_pinvoke_cleanup(WordData_t92535284_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct WordData_t92535284;
struct WordData_t92535284_marshaled_com;

extern "C" void WordData_t92535284_marshal_com(const WordData_t92535284& unmarshaled, WordData_t92535284_marshaled_com& marshaled);
extern "C" void WordData_t92535284_marshal_com_back(const WordData_t92535284_marshaled_com& marshaled, WordData_t92535284& unmarshaled);
extern "C" void WordData_t92535284_marshal_com_cleanup(WordData_t92535284_marshaled_com& marshaled);
