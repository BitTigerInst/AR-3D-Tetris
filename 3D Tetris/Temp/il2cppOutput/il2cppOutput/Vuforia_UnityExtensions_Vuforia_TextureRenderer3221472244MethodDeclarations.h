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

// Vuforia.TextureRenderer
struct TextureRenderer_t3221472244;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec282528459.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C"  int32_t TextureRenderer_get_Width_m2127279953 (TextureRenderer_t3221472244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C"  int32_t TextureRenderer_get_Height_m2024983454 (TextureRenderer_t3221472244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void TextureRenderer__ctor_m2013633034 (TextureRenderer_t3221472244 * __this, Texture_t1769722184 * ___textureToRender0, int32_t ___renderTextureLayer1, Vec2I_t82528459  ___requestedTextureSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C"  RenderTexture_t12905170 * TextureRenderer_Render_m3707259627 (TextureRenderer_t3221472244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C"  void TextureRenderer_Destroy_m651155170 (TextureRenderer_t3221472244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
