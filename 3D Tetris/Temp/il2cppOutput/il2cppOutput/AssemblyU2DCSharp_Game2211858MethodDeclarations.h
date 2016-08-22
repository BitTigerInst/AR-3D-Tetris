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

// Game
struct Game_t2211858;
// Tetromino
struct Tetromino_t1668662749;
// UnityEngine.Transform
struct Transform_t284553113;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Tetromino1668662749.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Game::.ctor()
extern "C"  void Game__ctor_m3565141705 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::.cctor()
extern "C"  void Game__cctor_m2663114244 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::Start()
extern "C"  void Game_Start_m2512279497 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::Update()
extern "C"  void Game_Update_m577105252 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::UpdateUI()
extern "C"  void Game_UpdateUI_m548738616 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::UpdateScore()
extern "C"  void Game_UpdateScore_m4158741616 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::ClearedOneRow()
extern "C"  void Game_ClearedOneRow_m3754251847 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::ClearedTwoRows()
extern "C"  void Game_ClearedTwoRows_m3055917972 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::ClearedThreeRows()
extern "C"  void Game_ClearedThreeRows_m2502823398 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::DeleteRow()
extern "C"  void Game_DeleteRow_m3576056150 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Game::IsFullRowAt(System.Int32)
extern "C"  bool Game_IsFullRowAt_m411627096 (Game_t2211858 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::DeleteMinoAt(System.Int32)
extern "C"  void Game_DeleteMinoAt_m1753053159 (Game_t2211858 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::MoveAllRowDown(System.Int32)
extern "C"  void Game_MoveAllRowDown_m3476780056 (Game_t2211858 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::MoveRowDown(System.Int32)
extern "C"  void Game_MoveRowDown_m4152678275 (Game_t2211858 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::SpawnNextTetronimo()
extern "C"  void Game_SpawnNextTetronimo_m3895337194 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Game::CheckIsAboveGrid(Tetromino)
extern "C"  bool Game_CheckIsAboveGrid_m3030909653 (Game_t2211858 * __this, Tetromino_t1668662749 * ___tetromino0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::UpdateGrid(Tetromino)
extern "C"  void Game_UpdateGrid_m2784459115 (Game_t2211858 * __this, Tetromino_t1668662749 * ___tetromino0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Game::GetTransformAtGridPosition(UnityEngine.Vector3)
extern "C"  Transform_t284553113 * Game_GetTransformAtGridPosition_m3451931336 (Game_t2211858 * __this, Vector3_t3525329789  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Game::CheckIsInsideGrid(UnityEngine.Vector3)
extern "C"  bool Game_CheckIsInsideGrid_m3866875762 (Game_t2211858 * __this, Vector3_t3525329789  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Game::Round(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Game_Round_m2243468606 (Game_t2211858 * __this, Vector3_t3525329789  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Game::GetRandomTetromino()
extern "C"  String_t* Game_GetRandomTetromino_m224341378 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::GameOver()
extern "C"  void Game_GameOver_m1359349441 (Game_t2211858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
