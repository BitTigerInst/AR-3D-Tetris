struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 72 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//7. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//15. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//16. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//21. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//22. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//25. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//26. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//27. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//28. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//29. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//30. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//31. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//32. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//33. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//34. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//35. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//36. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//37. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//38. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//39. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//40. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//41. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//42. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//43. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//44. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//45. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//46. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//47. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//48. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//49. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//50. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//51. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//52. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//53. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//54. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//55. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//56. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//57. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//58. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//59. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//60. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//61. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//62. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//63. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//64. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//65. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//66. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//67. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//68. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//69. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//70. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//71. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
