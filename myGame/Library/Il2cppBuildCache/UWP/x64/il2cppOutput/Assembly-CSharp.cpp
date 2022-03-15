#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.UInt64>
struct Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4;
// System.Action`3<System.Byte[],System.UInt64,MLAPI.NetworkManager/ConnectionApprovedDelegate>
struct Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Action`3<MLAPI.NetworkBehaviour,MLAPI.Serialization.NetworkSerializer,MLAPI.Messaging.__RpcParams>>
struct Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0;
// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.NetworkClient>
struct Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD;
// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.PendingClient>
struct Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4;
// System.Collections.Generic.List`1<MLAPI.Connection.NetworkClient>
struct List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F;
// System.Collections.Generic.List`1<MLAPI.NetworkObject>
struct List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// MLAPI.Transports.Tasks.SocketTask[]
struct SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A;
// UnityChan.SpringBone[]
struct SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65;
// UnityChan.SpringCollider[]
struct SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityChan.AutoBlink
struct AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityChan.CameraController
struct CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91;
// CameraMain
struct CameraMain_tAE22174E4AD37990123328B9515C9826A2E74241;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635;
// CircleRenderer
struct CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// ExitButton
struct ExitButton_t5CDCA27E210BF35B50839938DF75CF1A59657570;
// UnityChan.FaceUpdate
struct FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityChan.IKCtrlRightHand
struct IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4;
// UnityChan.IdleChanger
struct IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628;
// KeyHandler
struct KeyHandler_tAC184E6F8609DA7DBEE4D9443131412D1E08D30F;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MLAPI.Serialization.NetworkBuffer
struct NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188;
// NetworkCommandLine
struct NetworkCommandLine_t591ED2A215E4CBEE19B702E0953419E13962E50F;
// MLAPI.Configuration.NetworkConfig
struct NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE;
// MLAPI.NetworkManager
struct NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE;
// MLAPI.NetworkTickSystem
struct NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityChan.RandomWind
struct RandomWind_t0036D7F84C4A5013E2AE9612C7C3D6A8EB23EFBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// MLAPI.Messaging.RpcBatcher
struct RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57;
// MLAPI.Messaging.RpcQueueContainer
struct RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// ShowInGameMenu
struct ShowInGameMenu_tD126C02F53DFF4BD5EF54927941FC57DF81622EA;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// MLAPI.Transports.Tasks.SocketTasks
struct SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432;
// UnityChan.SplashScreen
struct SplashScreen_t5F8AF2DC7FB5802B3BA0C1FCB35E48E2D98795F7;
// SpotWithText
struct SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2;
// UnityChan.SpringBone
struct SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63;
// UnityChan.SpringCollider
struct SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF;
// UnityChan.SpringManager
struct SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityChan.ThirdPersonCamera
struct ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityChan.UnityChanControlScriptWithRgidBody
struct UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityChan.AutoBlink/<RandomChange>d__22
struct U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C;
// UnityChan.IdleChanger/<RandomChange>d__9
struct U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// MLAPI.NetworkManager/PerformanceDataEventHandler
struct PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04EC4F81AD07B2B6F76B2D7A56FC33E5558850A6;
IL2CPP_EXTERN_C String_t* _stringLiteral14F93B18F4A27E31C8383B5199FB110A2DEEB66F;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral1BED2DC0EC7095284E4DD921DFE0B428EF30564B;
IL2CPP_EXTERN_C String_t* _stringLiteral240C7FDF3C9B4066B07C1B58BCA1C949CB56ABEA;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral293542D9D93291B4BD2A5814172566525A7DDF57;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B543EDBE2E96E405B958B525BFD55181F6DCB83;
IL2CPP_EXTERN_C String_t* _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890;
IL2CPP_EXTERN_C String_t* _stringLiteral4EEB44230D18B63FD2EE917847EC8588A2354785;
IL2CPP_EXTERN_C String_t* _stringLiteral4F8E7863AB6F059155307444D42AD47E889F06CA;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral595DD015432EA032FD9DE15D430642872DCC3087;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral6142D87798990EB03763CFE5B4D7142F9FF6DB68;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7040FF69C8903BD258116DC869C58A972AF5E772;
IL2CPP_EXTERN_C String_t* _stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D;
IL2CPP_EXTERN_C String_t* _stringLiteral788728726FD14D18CB2F66203C12BFFE45659897;
IL2CPP_EXTERN_C String_t* _stringLiteral7A20AE6F53B8FA6C15C1E5AD4DB71F3CD355EA43;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846;
IL2CPP_EXTERN_C String_t* _stringLiteral880BA69446D7C58BFFFA1A35EF2C5C9CE3C71FFE;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC72435C50E2C88247E4FAE4A4F3CA3BE5418D4;
IL2CPP_EXTERN_C String_t* _stringLiteralADC179AF2B0468826DB85E74578463666CF4700F;
IL2CPP_EXTERN_C String_t* _stringLiteralAE4B715AAAA58DCCE03CE0702B58CE77A631DE43;
IL2CPP_EXTERN_C String_t* _stringLiteralB0F3EFB34B5BB26A1D0A3D4032611129C4ECC85C;
IL2CPP_EXTERN_C String_t* _stringLiteralBB61CD73B87847118A72F96FE50B72C6B8712F56;
IL2CPP_EXTERN_C String_t* _stringLiteralC473046B41946A22C532AEFD1B4D486A028D183C;
IL2CPP_EXTERN_C String_t* _stringLiteralC981FE8EBEBAD828602B958009B5539432A25F05;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE474B80F684635C9E8A2D82048BB64372275D715;
IL2CPP_EXTERN_C String_t* _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F;
IL2CPP_EXTERN_C String_t* _stringLiteralEA58F9BE54C16486B97A532CA51E3783D02B3F46;
IL2CPP_EXTERN_C String_t* _stringLiteralF30125084BBDCC9569A0DA8872BAA0181599E988;
IL2CPP_EXTERN_C String_t* _stringLiteralF3854292C6A5F740280B321414BA5B86A4FA856C;
IL2CPP_EXTERN_C String_t* _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4DF696C7896F255AA384C216C33E4BE82E9DDC;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisNetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_m0FAE471BA051A098231661F8D0946BCC56CD06AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRandomChangeU3Ed__22_System_Collections_IEnumerator_Reset_m311C92E24DB4DD743911926B395ADE09E8EF2ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRandomChangeU3Ed__9_System_Collections_IEnumerator_Reset_m66C0F00A852C1BBF499151E8607390B3BBD23B76_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65;
struct SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// MLAPI.Transports.Tasks.SocketTasks
struct SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432  : public RuntimeObject
{
public:
	// MLAPI.Transports.Tasks.SocketTask[] MLAPI.Transports.Tasks.SocketTasks::<Tasks>k__BackingField
	SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* ___U3CTasksU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTasksU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432, ___U3CTasksU3Ek__BackingField_0)); }
	inline SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* get_U3CTasksU3Ek__BackingField_0() const { return ___U3CTasksU3Ek__BackingField_0; }
	inline SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A** get_address_of_U3CTasksU3Ek__BackingField_0() { return &___U3CTasksU3Ek__BackingField_0; }
	inline void set_U3CTasksU3Ek__BackingField_0(SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* value)
	{
		___U3CTasksU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTasksU3Ek__BackingField_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityChan.AutoBlink/<RandomChange>d__22
struct U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C  : public RuntimeObject
{
public:
	// System.Int32 UnityChan.AutoBlink/<RandomChange>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityChan.AutoBlink/<RandomChange>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityChan.AutoBlink UnityChan.AutoBlink/<RandomChange>d__22::<>4__this
	AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C, ___U3CU3E4__this_2)); }
	inline AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityChan.IdleChanger/<RandomChange>d__9
struct U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295  : public RuntimeObject
{
public:
	// System.Int32 UnityChan.IdleChanger/<RandomChange>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityChan.IdleChanger/<RandomChange>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityChan.IdleChanger UnityChan.IdleChanger/<RandomChange>d__9::<>4__this
	IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295, ___U3CU3E4__this_2)); }
	inline IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.UInt64>
struct Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C 
{
public:
	// T System.Nullable`1::value
	uint64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___value_0)); }
	inline uint64_t get_value_0() const { return ___value_0; }
	inline uint64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Nullable`1<UnityEngine.Quaternion>
struct Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 
{
public:
	// T System.Nullable`1::value
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___value_0)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_value_0() const { return ___value_0; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AvatarIKGoal
struct AvatarIKGoal_t3A33B8127C253176E5C703917C8E7363E9D5627F 
{
public:
	// System.Int32 UnityEngine.AvatarIKGoal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvatarIKGoal_t3A33B8127C253176E5C703917C8E7363E9D5627F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ForceMode
struct ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Logging.LogLevel
struct LogLevel_tF7F83FF44C466BF9160949A112BDF4CB618EC00E 
{
public:
	// System.Int32 MLAPI.Logging.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tF7F83FF44C466BF9160949A112BDF4CB618EC00E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityChan.MouseButtonDown
struct MouseButtonDown_t22AED5F1909E65129507F31B23356CB4043133EA 
{
public:
	// System.Int32 UnityChan.MouseButtonDown::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MouseButtonDown_t22AED5F1909E65129507F31B23356CB4043133EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityChan.AutoBlink/Status
struct Status_tB2DDADE347BFEA7E4ED7EA1ACA106E40D6E48EEF 
{
public:
	// System.Int32 UnityChan.AutoBlink/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tB2DDADE347BFEA7E4ED7EA1ACA106E40D6E48EEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutOption/Type
struct Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityChan.AutoBlink
struct AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityChan.AutoBlink::isActive
	bool ___isActive_4;
	// UnityEngine.SkinnedMeshRenderer UnityChan.AutoBlink::ref_SMR_EYE_DEF
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___ref_SMR_EYE_DEF_5;
	// UnityEngine.SkinnedMeshRenderer UnityChan.AutoBlink::ref_SMR_EL_DEF
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___ref_SMR_EL_DEF_6;
	// System.Single UnityChan.AutoBlink::ratio_Close
	float ___ratio_Close_7;
	// System.Single UnityChan.AutoBlink::ratio_HalfClose
	float ___ratio_HalfClose_8;
	// System.Single UnityChan.AutoBlink::ratio_Open
	float ___ratio_Open_9;
	// System.Boolean UnityChan.AutoBlink::timerStarted
	bool ___timerStarted_10;
	// System.Boolean UnityChan.AutoBlink::isBlink
	bool ___isBlink_11;
	// System.Single UnityChan.AutoBlink::timeBlink
	float ___timeBlink_12;
	// System.Single UnityChan.AutoBlink::timeRemining
	float ___timeRemining_13;
	// System.Single UnityChan.AutoBlink::threshold
	float ___threshold_14;
	// System.Single UnityChan.AutoBlink::interval
	float ___interval_15;
	// UnityChan.AutoBlink/Status UnityChan.AutoBlink::eyeStatus
	int32_t ___eyeStatus_16;

public:
	inline static int32_t get_offset_of_isActive_4() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___isActive_4)); }
	inline bool get_isActive_4() const { return ___isActive_4; }
	inline bool* get_address_of_isActive_4() { return &___isActive_4; }
	inline void set_isActive_4(bool value)
	{
		___isActive_4 = value;
	}

	inline static int32_t get_offset_of_ref_SMR_EYE_DEF_5() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___ref_SMR_EYE_DEF_5)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get_ref_SMR_EYE_DEF_5() const { return ___ref_SMR_EYE_DEF_5; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of_ref_SMR_EYE_DEF_5() { return &___ref_SMR_EYE_DEF_5; }
	inline void set_ref_SMR_EYE_DEF_5(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		___ref_SMR_EYE_DEF_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ref_SMR_EYE_DEF_5), (void*)value);
	}

	inline static int32_t get_offset_of_ref_SMR_EL_DEF_6() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___ref_SMR_EL_DEF_6)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get_ref_SMR_EL_DEF_6() const { return ___ref_SMR_EL_DEF_6; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of_ref_SMR_EL_DEF_6() { return &___ref_SMR_EL_DEF_6; }
	inline void set_ref_SMR_EL_DEF_6(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		___ref_SMR_EL_DEF_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ref_SMR_EL_DEF_6), (void*)value);
	}

	inline static int32_t get_offset_of_ratio_Close_7() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___ratio_Close_7)); }
	inline float get_ratio_Close_7() const { return ___ratio_Close_7; }
	inline float* get_address_of_ratio_Close_7() { return &___ratio_Close_7; }
	inline void set_ratio_Close_7(float value)
	{
		___ratio_Close_7 = value;
	}

	inline static int32_t get_offset_of_ratio_HalfClose_8() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___ratio_HalfClose_8)); }
	inline float get_ratio_HalfClose_8() const { return ___ratio_HalfClose_8; }
	inline float* get_address_of_ratio_HalfClose_8() { return &___ratio_HalfClose_8; }
	inline void set_ratio_HalfClose_8(float value)
	{
		___ratio_HalfClose_8 = value;
	}

	inline static int32_t get_offset_of_ratio_Open_9() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___ratio_Open_9)); }
	inline float get_ratio_Open_9() const { return ___ratio_Open_9; }
	inline float* get_address_of_ratio_Open_9() { return &___ratio_Open_9; }
	inline void set_ratio_Open_9(float value)
	{
		___ratio_Open_9 = value;
	}

	inline static int32_t get_offset_of_timerStarted_10() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___timerStarted_10)); }
	inline bool get_timerStarted_10() const { return ___timerStarted_10; }
	inline bool* get_address_of_timerStarted_10() { return &___timerStarted_10; }
	inline void set_timerStarted_10(bool value)
	{
		___timerStarted_10 = value;
	}

	inline static int32_t get_offset_of_isBlink_11() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___isBlink_11)); }
	inline bool get_isBlink_11() const { return ___isBlink_11; }
	inline bool* get_address_of_isBlink_11() { return &___isBlink_11; }
	inline void set_isBlink_11(bool value)
	{
		___isBlink_11 = value;
	}

	inline static int32_t get_offset_of_timeBlink_12() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___timeBlink_12)); }
	inline float get_timeBlink_12() const { return ___timeBlink_12; }
	inline float* get_address_of_timeBlink_12() { return &___timeBlink_12; }
	inline void set_timeBlink_12(float value)
	{
		___timeBlink_12 = value;
	}

	inline static int32_t get_offset_of_timeRemining_13() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___timeRemining_13)); }
	inline float get_timeRemining_13() const { return ___timeRemining_13; }
	inline float* get_address_of_timeRemining_13() { return &___timeRemining_13; }
	inline void set_timeRemining_13(float value)
	{
		___timeRemining_13 = value;
	}

	inline static int32_t get_offset_of_threshold_14() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___threshold_14)); }
	inline float get_threshold_14() const { return ___threshold_14; }
	inline float* get_address_of_threshold_14() { return &___threshold_14; }
	inline void set_threshold_14(float value)
	{
		___threshold_14 = value;
	}

	inline static int32_t get_offset_of_interval_15() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___interval_15)); }
	inline float get_interval_15() const { return ___interval_15; }
	inline float* get_address_of_interval_15() { return &___interval_15; }
	inline void set_interval_15(float value)
	{
		___interval_15 = value;
	}

	inline static int32_t get_offset_of_eyeStatus_16() { return static_cast<int32_t>(offsetof(AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553, ___eyeStatus_16)); }
	inline int32_t get_eyeStatus_16() const { return ___eyeStatus_16; }
	inline int32_t* get_address_of_eyeStatus_16() { return &___eyeStatus_16; }
	inline void set_eyeStatus_16(int32_t value)
	{
		___eyeStatus_16 = value;
	}
};


// UnityChan.CameraController
struct CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 UnityChan.CameraController::focus
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___focus_4;
	// UnityEngine.GameObject UnityChan.CameraController::focusObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___focusObj_5;
	// System.Boolean UnityChan.CameraController::showInstWindow
	bool ___showInstWindow_6;
	// UnityEngine.Vector3 UnityChan.CameraController::oldPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldPos_7;

public:
	inline static int32_t get_offset_of_focus_4() { return static_cast<int32_t>(offsetof(CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91, ___focus_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_focus_4() const { return ___focus_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_focus_4() { return &___focus_4; }
	inline void set_focus_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___focus_4 = value;
	}

	inline static int32_t get_offset_of_focusObj_5() { return static_cast<int32_t>(offsetof(CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91, ___focusObj_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_focusObj_5() const { return ___focusObj_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_focusObj_5() { return &___focusObj_5; }
	inline void set_focusObj_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___focusObj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusObj_5), (void*)value);
	}

	inline static int32_t get_offset_of_showInstWindow_6() { return static_cast<int32_t>(offsetof(CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91, ___showInstWindow_6)); }
	inline bool get_showInstWindow_6() const { return ___showInstWindow_6; }
	inline bool* get_address_of_showInstWindow_6() { return &___showInstWindow_6; }
	inline void set_showInstWindow_6(bool value)
	{
		___showInstWindow_6 = value;
	}

	inline static int32_t get_offset_of_oldPos_7() { return static_cast<int32_t>(offsetof(CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91, ___oldPos_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldPos_7() const { return ___oldPos_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldPos_7() { return &___oldPos_7; }
	inline void set_oldPos_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldPos_7 = value;
	}
};


// CameraMain
struct CameraMain_tAE22174E4AD37990123328B9515C9826A2E74241  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraMain::unityChanPos
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___unityChanPos_4;
	// UnityEngine.Vector3 CameraMain::shift
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___shift_5;

public:
	inline static int32_t get_offset_of_unityChanPos_4() { return static_cast<int32_t>(offsetof(CameraMain_tAE22174E4AD37990123328B9515C9826A2E74241, ___unityChanPos_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_unityChanPos_4() const { return ___unityChanPos_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_unityChanPos_4() { return &___unityChanPos_4; }
	inline void set_unityChanPos_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___unityChanPos_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityChanPos_4), (void*)value);
	}

	inline static int32_t get_offset_of_shift_5() { return static_cast<int32_t>(offsetof(CameraMain_tAE22174E4AD37990123328B9515C9826A2E74241, ___shift_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_shift_5() const { return ___shift_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_shift_5() { return &___shift_5; }
	inline void set_shift_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___shift_5 = value;
	}
};


// CircleRenderer
struct CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 CircleRenderer::pointsNumber
	int32_t ___pointsNumber_4;
	// System.Single CircleRenderer::radius
	float ___radius_5;
	// System.Single CircleRenderer::step
	float ___step_6;
	// UnityEngine.LineRenderer CircleRenderer::lineDrawer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lineDrawer_7;

public:
	inline static int32_t get_offset_of_pointsNumber_4() { return static_cast<int32_t>(offsetof(CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176, ___pointsNumber_4)); }
	inline int32_t get_pointsNumber_4() const { return ___pointsNumber_4; }
	inline int32_t* get_address_of_pointsNumber_4() { return &___pointsNumber_4; }
	inline void set_pointsNumber_4(int32_t value)
	{
		___pointsNumber_4 = value;
	}

	inline static int32_t get_offset_of_radius_5() { return static_cast<int32_t>(offsetof(CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176, ___radius_5)); }
	inline float get_radius_5() const { return ___radius_5; }
	inline float* get_address_of_radius_5() { return &___radius_5; }
	inline void set_radius_5(float value)
	{
		___radius_5 = value;
	}

	inline static int32_t get_offset_of_step_6() { return static_cast<int32_t>(offsetof(CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176, ___step_6)); }
	inline float get_step_6() const { return ___step_6; }
	inline float* get_address_of_step_6() { return &___step_6; }
	inline void set_step_6(float value)
	{
		___step_6 = value;
	}

	inline static int32_t get_offset_of_lineDrawer_7() { return static_cast<int32_t>(offsetof(CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176, ___lineDrawer_7)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lineDrawer_7() const { return ___lineDrawer_7; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lineDrawer_7() { return &___lineDrawer_7; }
	inline void set_lineDrawer_7(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lineDrawer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineDrawer_7), (void*)value);
	}
};


// ExitButton
struct ExitButton_t5CDCA27E210BF35B50839938DF75CF1A59657570  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityChan.FaceUpdate
struct FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AnimationClip[] UnityChan.FaceUpdate::animations
	AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* ___animations_4;
	// UnityEngine.Animator UnityChan.FaceUpdate::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_5;
	// System.Single UnityChan.FaceUpdate::delayWeight
	float ___delayWeight_6;
	// System.Boolean UnityChan.FaceUpdate::isKeepFace
	bool ___isKeepFace_7;
	// System.Single UnityChan.FaceUpdate::current
	float ___current_8;

public:
	inline static int32_t get_offset_of_animations_4() { return static_cast<int32_t>(offsetof(FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774, ___animations_4)); }
	inline AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* get_animations_4() const { return ___animations_4; }
	inline AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489** get_address_of_animations_4() { return &___animations_4; }
	inline void set_animations_4(AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* value)
	{
		___animations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animations_4), (void*)value);
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774, ___anim_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_5() const { return ___anim_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_5), (void*)value);
	}

	inline static int32_t get_offset_of_delayWeight_6() { return static_cast<int32_t>(offsetof(FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774, ___delayWeight_6)); }
	inline float get_delayWeight_6() const { return ___delayWeight_6; }
	inline float* get_address_of_delayWeight_6() { return &___delayWeight_6; }
	inline void set_delayWeight_6(float value)
	{
		___delayWeight_6 = value;
	}

	inline static int32_t get_offset_of_isKeepFace_7() { return static_cast<int32_t>(offsetof(FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774, ___isKeepFace_7)); }
	inline bool get_isKeepFace_7() const { return ___isKeepFace_7; }
	inline bool* get_address_of_isKeepFace_7() { return &___isKeepFace_7; }
	inline void set_isKeepFace_7(bool value)
	{
		___isKeepFace_7 = value;
	}

	inline static int32_t get_offset_of_current_8() { return static_cast<int32_t>(offsetof(FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774, ___current_8)); }
	inline float get_current_8() const { return ___current_8; }
	inline float* get_address_of_current_8() { return &___current_8; }
	inline void set_current_8(float value)
	{
		___current_8 = value;
	}
};


// UnityChan.IKCtrlRightHand
struct IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator UnityChan.IKCtrlRightHand::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// UnityEngine.Transform UnityChan.IKCtrlRightHand::targetObj
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___targetObj_5;
	// System.Boolean UnityChan.IKCtrlRightHand::isIkActive
	bool ___isIkActive_6;
	// System.Single UnityChan.IKCtrlRightHand::mixWeight
	float ___mixWeight_7;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of_targetObj_5() { return static_cast<int32_t>(offsetof(IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4, ___targetObj_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_targetObj_5() const { return ___targetObj_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_targetObj_5() { return &___targetObj_5; }
	inline void set_targetObj_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___targetObj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetObj_5), (void*)value);
	}

	inline static int32_t get_offset_of_isIkActive_6() { return static_cast<int32_t>(offsetof(IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4, ___isIkActive_6)); }
	inline bool get_isIkActive_6() const { return ___isIkActive_6; }
	inline bool* get_address_of_isIkActive_6() { return &___isIkActive_6; }
	inline void set_isIkActive_6(bool value)
	{
		___isIkActive_6 = value;
	}

	inline static int32_t get_offset_of_mixWeight_7() { return static_cast<int32_t>(offsetof(IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4, ___mixWeight_7)); }
	inline float get_mixWeight_7() const { return ___mixWeight_7; }
	inline float* get_address_of_mixWeight_7() { return &___mixWeight_7; }
	inline void set_mixWeight_7(float value)
	{
		___mixWeight_7 = value;
	}
};


// UnityChan.IdleChanger
struct IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator UnityChan.IdleChanger::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// UnityEngine.AnimatorStateInfo UnityChan.IdleChanger::currentState
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___currentState_5;
	// UnityEngine.AnimatorStateInfo UnityChan.IdleChanger::previousState
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___previousState_6;
	// System.Boolean UnityChan.IdleChanger::_random
	bool ____random_7;
	// System.Single UnityChan.IdleChanger::_threshold
	float ____threshold_8;
	// System.Single UnityChan.IdleChanger::_interval
	float ____interval_9;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentState_5() { return static_cast<int32_t>(offsetof(IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628, ___currentState_5)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_currentState_5() const { return ___currentState_5; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_currentState_5() { return &___currentState_5; }
	inline void set_currentState_5(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___currentState_5 = value;
	}

	inline static int32_t get_offset_of_previousState_6() { return static_cast<int32_t>(offsetof(IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628, ___previousState_6)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_previousState_6() const { return ___previousState_6; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_previousState_6() { return &___previousState_6; }
	inline void set_previousState_6(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___previousState_6 = value;
	}

	inline static int32_t get_offset_of__random_7() { return static_cast<int32_t>(offsetof(IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628, ____random_7)); }
	inline bool get__random_7() const { return ____random_7; }
	inline bool* get_address_of__random_7() { return &____random_7; }
	inline void set__random_7(bool value)
	{
		____random_7 = value;
	}

	inline static int32_t get_offset_of__threshold_8() { return static_cast<int32_t>(offsetof(IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628, ____threshold_8)); }
	inline float get__threshold_8() const { return ____threshold_8; }
	inline float* get_address_of__threshold_8() { return &____threshold_8; }
	inline void set__threshold_8(float value)
	{
		____threshold_8 = value;
	}

	inline static int32_t get_offset_of__interval_9() { return static_cast<int32_t>(offsetof(IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628, ____interval_9)); }
	inline float get__interval_9() const { return ____interval_9; }
	inline float* get_address_of__interval_9() { return &____interval_9; }
	inline void set__interval_9(float value)
	{
		____interval_9 = value;
	}
};


// KeyHandler
struct KeyHandler_tAC184E6F8609DA7DBEE4D9443131412D1E08D30F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// NetworkCommandLine
struct NetworkCommandLine_t591ED2A215E4CBEE19B702E0953419E13962E50F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MLAPI.NetworkManager NetworkCommandLine::netManager
	NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * ___netManager_4;
	// System.String NetworkCommandLine::netRole
	String_t* ___netRole_5;

public:
	inline static int32_t get_offset_of_netManager_4() { return static_cast<int32_t>(offsetof(NetworkCommandLine_t591ED2A215E4CBEE19B702E0953419E13962E50F, ___netManager_4)); }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * get_netManager_4() const { return ___netManager_4; }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE ** get_address_of_netManager_4() { return &___netManager_4; }
	inline void set_netManager_4(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * value)
	{
		___netManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___netManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_netRole_5() { return static_cast<int32_t>(offsetof(NetworkCommandLine_t591ED2A215E4CBEE19B702E0953419E13962E50F, ___netRole_5)); }
	inline String_t* get_netRole_5() const { return ___netRole_5; }
	inline String_t** get_address_of_netRole_5() { return &___netRole_5; }
	inline void set_netRole_5(String_t* value)
	{
		___netRole_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___netRole_5), (void*)value);
	}
};


// MLAPI.NetworkManager
struct NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MLAPI.Messaging.RpcQueueContainer MLAPI.NetworkManager::<RpcQueueContainer>k__BackingField
	RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572 * ___U3CRpcQueueContainerU3Ek__BackingField_5;
	// MLAPI.NetworkTickSystem MLAPI.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F * ___U3CNetworkTickSystemU3Ek__BackingField_6;
	// System.Single MLAPI.NetworkManager::m_NetworkTimeOffset
	float ___m_NetworkTimeOffset_8;
	// System.Single MLAPI.NetworkManager::m_CurrentNetworkTimeOffset
	float ___m_CurrentNetworkTimeOffset_9;
	// System.Boolean MLAPI.NetworkManager::DontDestroy
	bool ___DontDestroy_10;
	// System.Boolean MLAPI.NetworkManager::RunInBackground
	bool ___RunInBackground_11;
	// MLAPI.Logging.LogLevel MLAPI.NetworkManager::LogLevel
	int32_t ___LogLevel_12;
	// System.UInt64 MLAPI.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_14;
	// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.NetworkClient> MLAPI.NetworkManager::ConnectedClients
	Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD * ___ConnectedClients_15;
	// System.Collections.Generic.List`1<MLAPI.Connection.NetworkClient> MLAPI.NetworkManager::ConnectedClientsList
	List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * ___ConnectedClientsList_16;
	// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.PendingClient> MLAPI.NetworkManager::PendingClients
	Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * ___PendingClients_17;
	// System.Boolean MLAPI.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_18;
	// System.Boolean MLAPI.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_19;
	// System.Boolean MLAPI.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_20;
	// System.Boolean MLAPI.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_21;
	// System.Action`1<System.UInt64> MLAPI.NetworkManager::OnClientConnectedCallback
	Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * ___OnClientConnectedCallback_22;
	// System.Action`1<System.UInt64> MLAPI.NetworkManager::OnClientDisconnectCallback
	Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * ___OnClientDisconnectCallback_23;
	// System.Action MLAPI.NetworkManager::OnServerStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnServerStarted_24;
	// System.Action`3<System.Byte[],System.UInt64,MLAPI.NetworkManager/ConnectionApprovedDelegate> MLAPI.NetworkManager::ConnectionApprovalCallback
	Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA * ___ConnectionApprovalCallback_25;
	// MLAPI.Configuration.NetworkConfig MLAPI.NetworkManager::NetworkConfig
	NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE * ___NetworkConfig_26;
	// System.String MLAPI.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_27;
	// System.Single MLAPI.NetworkManager::m_LastReceiveTickTime
	float ___m_LastReceiveTickTime_29;
	// System.Single MLAPI.NetworkManager::m_LastEventTickTime
	float ___m_LastEventTickTime_30;
	// System.Single MLAPI.NetworkManager::m_LastTimeSyncTime
	float ___m_LastTimeSyncTime_31;
	// MLAPI.Serialization.NetworkBuffer MLAPI.NetworkManager::m_InputBufferWrapper
	NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * ___m_InputBufferWrapper_32;
	// MLAPI.Messaging.RpcBatcher MLAPI.NetworkManager::m_RpcBatcher
	RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57 * ___m_RpcBatcher_33;
	// System.Collections.Generic.List`1<MLAPI.NetworkObject> MLAPI.NetworkManager::m_ObservedObjects
	List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * ___m_ObservedObjects_34;

public:
	inline static int32_t get_offset_of_U3CRpcQueueContainerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CRpcQueueContainerU3Ek__BackingField_5)); }
	inline RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572 * get_U3CRpcQueueContainerU3Ek__BackingField_5() const { return ___U3CRpcQueueContainerU3Ek__BackingField_5; }
	inline RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572 ** get_address_of_U3CRpcQueueContainerU3Ek__BackingField_5() { return &___U3CRpcQueueContainerU3Ek__BackingField_5; }
	inline void set_U3CRpcQueueContainerU3Ek__BackingField_5(RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572 * value)
	{
		___U3CRpcQueueContainerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRpcQueueContainerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkTickSystemU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CNetworkTickSystemU3Ek__BackingField_6)); }
	inline NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F * get_U3CNetworkTickSystemU3Ek__BackingField_6() const { return ___U3CNetworkTickSystemU3Ek__BackingField_6; }
	inline NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F ** get_address_of_U3CNetworkTickSystemU3Ek__BackingField_6() { return &___U3CNetworkTickSystemU3Ek__BackingField_6; }
	inline void set_U3CNetworkTickSystemU3Ek__BackingField_6(NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F * value)
	{
		___U3CNetworkTickSystemU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkTickSystemU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkTimeOffset_8() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_NetworkTimeOffset_8)); }
	inline float get_m_NetworkTimeOffset_8() const { return ___m_NetworkTimeOffset_8; }
	inline float* get_address_of_m_NetworkTimeOffset_8() { return &___m_NetworkTimeOffset_8; }
	inline void set_m_NetworkTimeOffset_8(float value)
	{
		___m_NetworkTimeOffset_8 = value;
	}

	inline static int32_t get_offset_of_m_CurrentNetworkTimeOffset_9() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_CurrentNetworkTimeOffset_9)); }
	inline float get_m_CurrentNetworkTimeOffset_9() const { return ___m_CurrentNetworkTimeOffset_9; }
	inline float* get_address_of_m_CurrentNetworkTimeOffset_9() { return &___m_CurrentNetworkTimeOffset_9; }
	inline void set_m_CurrentNetworkTimeOffset_9(float value)
	{
		___m_CurrentNetworkTimeOffset_9 = value;
	}

	inline static int32_t get_offset_of_DontDestroy_10() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___DontDestroy_10)); }
	inline bool get_DontDestroy_10() const { return ___DontDestroy_10; }
	inline bool* get_address_of_DontDestroy_10() { return &___DontDestroy_10; }
	inline void set_DontDestroy_10(bool value)
	{
		___DontDestroy_10 = value;
	}

	inline static int32_t get_offset_of_RunInBackground_11() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___RunInBackground_11)); }
	inline bool get_RunInBackground_11() const { return ___RunInBackground_11; }
	inline bool* get_address_of_RunInBackground_11() { return &___RunInBackground_11; }
	inline void set_RunInBackground_11(bool value)
	{
		___RunInBackground_11 = value;
	}

	inline static int32_t get_offset_of_LogLevel_12() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___LogLevel_12)); }
	inline int32_t get_LogLevel_12() const { return ___LogLevel_12; }
	inline int32_t* get_address_of_LogLevel_12() { return &___LogLevel_12; }
	inline void set_LogLevel_12(int32_t value)
	{
		___LogLevel_12 = value;
	}

	inline static int32_t get_offset_of_m_LocalClientId_14() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_LocalClientId_14)); }
	inline uint64_t get_m_LocalClientId_14() const { return ___m_LocalClientId_14; }
	inline uint64_t* get_address_of_m_LocalClientId_14() { return &___m_LocalClientId_14; }
	inline void set_m_LocalClientId_14(uint64_t value)
	{
		___m_LocalClientId_14 = value;
	}

	inline static int32_t get_offset_of_ConnectedClients_15() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___ConnectedClients_15)); }
	inline Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD * get_ConnectedClients_15() const { return ___ConnectedClients_15; }
	inline Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD ** get_address_of_ConnectedClients_15() { return &___ConnectedClients_15; }
	inline void set_ConnectedClients_15(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD * value)
	{
		___ConnectedClients_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectedClients_15), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectedClientsList_16() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___ConnectedClientsList_16)); }
	inline List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * get_ConnectedClientsList_16() const { return ___ConnectedClientsList_16; }
	inline List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F ** get_address_of_ConnectedClientsList_16() { return &___ConnectedClientsList_16; }
	inline void set_ConnectedClientsList_16(List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * value)
	{
		___ConnectedClientsList_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectedClientsList_16), (void*)value);
	}

	inline static int32_t get_offset_of_PendingClients_17() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___PendingClients_17)); }
	inline Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * get_PendingClients_17() const { return ___PendingClients_17; }
	inline Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 ** get_address_of_PendingClients_17() { return &___PendingClients_17; }
	inline void set_PendingClients_17(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * value)
	{
		___PendingClients_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PendingClients_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsServerU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CIsServerU3Ek__BackingField_18)); }
	inline bool get_U3CIsServerU3Ek__BackingField_18() const { return ___U3CIsServerU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CIsServerU3Ek__BackingField_18() { return &___U3CIsServerU3Ek__BackingField_18; }
	inline void set_U3CIsServerU3Ek__BackingField_18(bool value)
	{
		___U3CIsServerU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsClientU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CIsClientU3Ek__BackingField_19)); }
	inline bool get_U3CIsClientU3Ek__BackingField_19() const { return ___U3CIsClientU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsClientU3Ek__BackingField_19() { return &___U3CIsClientU3Ek__BackingField_19; }
	inline void set_U3CIsClientU3Ek__BackingField_19(bool value)
	{
		___U3CIsClientU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CIsListeningU3Ek__BackingField_20)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_20() const { return ___U3CIsListeningU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_20() { return &___U3CIsListeningU3Ek__BackingField_20; }
	inline void set_U3CIsListeningU3Ek__BackingField_20(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CIsConnectedClientU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CIsConnectedClientU3Ek__BackingField_21)); }
	inline bool get_U3CIsConnectedClientU3Ek__BackingField_21() const { return ___U3CIsConnectedClientU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsConnectedClientU3Ek__BackingField_21() { return &___U3CIsConnectedClientU3Ek__BackingField_21; }
	inline void set_U3CIsConnectedClientU3Ek__BackingField_21(bool value)
	{
		___U3CIsConnectedClientU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_OnClientConnectedCallback_22() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___OnClientConnectedCallback_22)); }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * get_OnClientConnectedCallback_22() const { return ___OnClientConnectedCallback_22; }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 ** get_address_of_OnClientConnectedCallback_22() { return &___OnClientConnectedCallback_22; }
	inline void set_OnClientConnectedCallback_22(Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * value)
	{
		___OnClientConnectedCallback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnectedCallback_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnectCallback_23() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___OnClientDisconnectCallback_23)); }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * get_OnClientDisconnectCallback_23() const { return ___OnClientDisconnectCallback_23; }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 ** get_address_of_OnClientDisconnectCallback_23() { return &___OnClientDisconnectCallback_23; }
	inline void set_OnClientDisconnectCallback_23(Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * value)
	{
		___OnClientDisconnectCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnectCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerStarted_24() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___OnServerStarted_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnServerStarted_24() const { return ___OnServerStarted_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnServerStarted_24() { return &___OnServerStarted_24; }
	inline void set_OnServerStarted_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnServerStarted_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerStarted_24), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionApprovalCallback_25() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___ConnectionApprovalCallback_25)); }
	inline Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA * get_ConnectionApprovalCallback_25() const { return ___ConnectionApprovalCallback_25; }
	inline Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA ** get_address_of_ConnectionApprovalCallback_25() { return &___ConnectionApprovalCallback_25; }
	inline void set_ConnectionApprovalCallback_25(Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA * value)
	{
		___ConnectionApprovalCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionApprovalCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkConfig_26() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___NetworkConfig_26)); }
	inline NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE * get_NetworkConfig_26() const { return ___NetworkConfig_26; }
	inline NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE ** get_address_of_NetworkConfig_26() { return &___NetworkConfig_26; }
	inline void set_NetworkConfig_26(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE * value)
	{
		___NetworkConfig_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkConfig_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectedHostnameU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CConnectedHostnameU3Ek__BackingField_27)); }
	inline String_t* get_U3CConnectedHostnameU3Ek__BackingField_27() const { return ___U3CConnectedHostnameU3Ek__BackingField_27; }
	inline String_t** get_address_of_U3CConnectedHostnameU3Ek__BackingField_27() { return &___U3CConnectedHostnameU3Ek__BackingField_27; }
	inline void set_U3CConnectedHostnameU3Ek__BackingField_27(String_t* value)
	{
		___U3CConnectedHostnameU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectedHostnameU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastReceiveTickTime_29() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_LastReceiveTickTime_29)); }
	inline float get_m_LastReceiveTickTime_29() const { return ___m_LastReceiveTickTime_29; }
	inline float* get_address_of_m_LastReceiveTickTime_29() { return &___m_LastReceiveTickTime_29; }
	inline void set_m_LastReceiveTickTime_29(float value)
	{
		___m_LastReceiveTickTime_29 = value;
	}

	inline static int32_t get_offset_of_m_LastEventTickTime_30() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_LastEventTickTime_30)); }
	inline float get_m_LastEventTickTime_30() const { return ___m_LastEventTickTime_30; }
	inline float* get_address_of_m_LastEventTickTime_30() { return &___m_LastEventTickTime_30; }
	inline void set_m_LastEventTickTime_30(float value)
	{
		___m_LastEventTickTime_30 = value;
	}

	inline static int32_t get_offset_of_m_LastTimeSyncTime_31() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_LastTimeSyncTime_31)); }
	inline float get_m_LastTimeSyncTime_31() const { return ___m_LastTimeSyncTime_31; }
	inline float* get_address_of_m_LastTimeSyncTime_31() { return &___m_LastTimeSyncTime_31; }
	inline void set_m_LastTimeSyncTime_31(float value)
	{
		___m_LastTimeSyncTime_31 = value;
	}

	inline static int32_t get_offset_of_m_InputBufferWrapper_32() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_InputBufferWrapper_32)); }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * get_m_InputBufferWrapper_32() const { return ___m_InputBufferWrapper_32; }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 ** get_address_of_m_InputBufferWrapper_32() { return &___m_InputBufferWrapper_32; }
	inline void set_m_InputBufferWrapper_32(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * value)
	{
		___m_InputBufferWrapper_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputBufferWrapper_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_RpcBatcher_33() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_RpcBatcher_33)); }
	inline RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57 * get_m_RpcBatcher_33() const { return ___m_RpcBatcher_33; }
	inline RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57 ** get_address_of_m_RpcBatcher_33() { return &___m_RpcBatcher_33; }
	inline void set_m_RpcBatcher_33(RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57 * value)
	{
		___m_RpcBatcher_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RpcBatcher_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObservedObjects_34() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_ObservedObjects_34)); }
	inline List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * get_m_ObservedObjects_34() const { return ___m_ObservedObjects_34; }
	inline List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B ** get_address_of_m_ObservedObjects_34() { return &___m_ObservedObjects_34; }
	inline void set_m_ObservedObjects_34(List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * value)
	{
		___m_ObservedObjects_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObservedObjects_34), (void*)value);
	}
};

struct NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Action`3<MLAPI.NetworkBehaviour,MLAPI.Serialization.NetworkSerializer,MLAPI.Messaging.__RpcParams>> MLAPI.NetworkManager::__ntable
	Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0 * _____ntable_4;
	// MLAPI.NetworkManager/PerformanceDataEventHandler MLAPI.NetworkManager::OnPerformanceDataEvent
	PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * ___OnPerformanceDataEvent_7;
	// MLAPI.NetworkManager MLAPI.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * ___U3CSingletonU3Ek__BackingField_13;
	// System.Action MLAPI.NetworkManager::OnSingletonReady
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSingletonReady_28;

public:
	inline static int32_t get_offset_of___ntable_4() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, _____ntable_4)); }
	inline Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0 * get___ntable_4() const { return _____ntable_4; }
	inline Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0 ** get_address_of___ntable_4() { return &_____ntable_4; }
	inline void set___ntable_4(Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0 * value)
	{
		_____ntable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____ntable_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPerformanceDataEvent_7() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___OnPerformanceDataEvent_7)); }
	inline PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * get_OnPerformanceDataEvent_7() const { return ___OnPerformanceDataEvent_7; }
	inline PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 ** get_address_of_OnPerformanceDataEvent_7() { return &___OnPerformanceDataEvent_7; }
	inline void set_OnPerformanceDataEvent_7(PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * value)
	{
		___OnPerformanceDataEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPerformanceDataEvent_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSingletonU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___U3CSingletonU3Ek__BackingField_13)); }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * get_U3CSingletonU3Ek__BackingField_13() const { return ___U3CSingletonU3Ek__BackingField_13; }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE ** get_address_of_U3CSingletonU3Ek__BackingField_13() { return &___U3CSingletonU3Ek__BackingField_13; }
	inline void set_U3CSingletonU3Ek__BackingField_13(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * value)
	{
		___U3CSingletonU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSingletonU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnSingletonReady_28() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___OnSingletonReady_28)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSingletonReady_28() const { return ___OnSingletonReady_28; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSingletonReady_28() { return &___OnSingletonReady_28; }
	inline void set_OnSingletonReady_28(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSingletonReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSingletonReady_28), (void*)value);
	}
};


// UnityChan.RandomWind
struct RandomWind_t0036D7F84C4A5013E2AE9612C7C3D6A8EB23EFBB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityChan.SpringBone[] UnityChan.RandomWind::springBones
	SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* ___springBones_4;
	// System.Boolean UnityChan.RandomWind::isWindActive
	bool ___isWindActive_5;

public:
	inline static int32_t get_offset_of_springBones_4() { return static_cast<int32_t>(offsetof(RandomWind_t0036D7F84C4A5013E2AE9612C7C3D6A8EB23EFBB, ___springBones_4)); }
	inline SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* get_springBones_4() const { return ___springBones_4; }
	inline SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65** get_address_of_springBones_4() { return &___springBones_4; }
	inline void set_springBones_4(SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* value)
	{
		___springBones_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___springBones_4), (void*)value);
	}

	inline static int32_t get_offset_of_isWindActive_5() { return static_cast<int32_t>(offsetof(RandomWind_t0036D7F84C4A5013E2AE9612C7C3D6A8EB23EFBB, ___isWindActive_5)); }
	inline bool get_isWindActive_5() const { return ___isWindActive_5; }
	inline bool* get_address_of_isWindActive_5() { return &___isWindActive_5; }
	inline void set_isWindActive_5(bool value)
	{
		___isWindActive_5 = value;
	}
};


// ShowInGameMenu
struct ShowInGameMenu_tD126C02F53DFF4BD5EF54927941FC57DF81622EA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ShowInGameMenu::inGameMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___inGameMenu_4;
	// UnityEngine.GameObject ShowInGameMenu::playerScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerScreen_5;

public:
	inline static int32_t get_offset_of_inGameMenu_4() { return static_cast<int32_t>(offsetof(ShowInGameMenu_tD126C02F53DFF4BD5EF54927941FC57DF81622EA, ___inGameMenu_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_inGameMenu_4() const { return ___inGameMenu_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_inGameMenu_4() { return &___inGameMenu_4; }
	inline void set_inGameMenu_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___inGameMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerScreen_5() { return static_cast<int32_t>(offsetof(ShowInGameMenu_tD126C02F53DFF4BD5EF54927941FC57DF81622EA, ___playerScreen_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerScreen_5() const { return ___playerScreen_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerScreen_5() { return &___playerScreen_5; }
	inline void set_playerScreen_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerScreen_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerScreen_5), (void*)value);
	}
};


// UnityChan.SplashScreen
struct SplashScreen_t5F8AF2DC7FB5802B3BA0C1FCB35E48E2D98795F7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SpotWithText
struct SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SpotWithText::radius
	float ___radius_4;
	// UnityEngine.Transform SpotWithText::playerPos
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerPos_5;
	// UnityEngine.GameObject SpotWithText::UIText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___UIText_6;
	// System.Boolean SpotWithText::isTriggered
	bool ___isTriggered_7;
	// UnityEngine.UI.Text SpotWithText::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_8;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_playerPos_5() { return static_cast<int32_t>(offsetof(SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2, ___playerPos_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerPos_5() const { return ___playerPos_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerPos_5() { return &___playerPos_5; }
	inline void set_playerPos_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerPos_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPos_5), (void*)value);
	}

	inline static int32_t get_offset_of_UIText_6() { return static_cast<int32_t>(offsetof(SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2, ___UIText_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_UIText_6() const { return ___UIText_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_UIText_6() { return &___UIText_6; }
	inline void set_UIText_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___UIText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIText_6), (void*)value);
	}

	inline static int32_t get_offset_of_isTriggered_7() { return static_cast<int32_t>(offsetof(SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2, ___isTriggered_7)); }
	inline bool get_isTriggered_7() const { return ___isTriggered_7; }
	inline bool* get_address_of_isTriggered_7() { return &___isTriggered_7; }
	inline void set_isTriggered_7(bool value)
	{
		___isTriggered_7 = value;
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2, ___text_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_8() const { return ___text_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_8), (void*)value);
	}
};


// UnityChan.SpringBone
struct SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform UnityChan.SpringBone::child
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___child_4;
	// UnityEngine.Vector3 UnityChan.SpringBone::boneAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___boneAxis_5;
	// System.Single UnityChan.SpringBone::radius
	float ___radius_6;
	// System.Boolean UnityChan.SpringBone::isUseEachBoneForceSettings
	bool ___isUseEachBoneForceSettings_7;
	// System.Single UnityChan.SpringBone::stiffnessForce
	float ___stiffnessForce_8;
	// System.Single UnityChan.SpringBone::dragForce
	float ___dragForce_9;
	// UnityEngine.Vector3 UnityChan.SpringBone::springForce
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___springForce_10;
	// UnityChan.SpringCollider[] UnityChan.SpringBone::colliders
	SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* ___colliders_11;
	// System.Boolean UnityChan.SpringBone::debug
	bool ___debug_12;
	// System.Single UnityChan.SpringBone::threshold
	float ___threshold_13;
	// System.Single UnityChan.SpringBone::springLength
	float ___springLength_14;
	// UnityEngine.Quaternion UnityChan.SpringBone::localRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation_15;
	// UnityEngine.Transform UnityChan.SpringBone::trs
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trs_16;
	// UnityEngine.Vector3 UnityChan.SpringBone::currTipPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currTipPos_17;
	// UnityEngine.Vector3 UnityChan.SpringBone::prevTipPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___prevTipPos_18;
	// UnityEngine.Transform UnityChan.SpringBone::org
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___org_19;
	// UnityChan.SpringManager UnityChan.SpringBone::managerRef
	SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * ___managerRef_20;

public:
	inline static int32_t get_offset_of_child_4() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___child_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_child_4() const { return ___child_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_child_4() { return &___child_4; }
	inline void set_child_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___child_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_4), (void*)value);
	}

	inline static int32_t get_offset_of_boneAxis_5() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___boneAxis_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_boneAxis_5() const { return ___boneAxis_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_boneAxis_5() { return &___boneAxis_5; }
	inline void set_boneAxis_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___boneAxis_5 = value;
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_isUseEachBoneForceSettings_7() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___isUseEachBoneForceSettings_7)); }
	inline bool get_isUseEachBoneForceSettings_7() const { return ___isUseEachBoneForceSettings_7; }
	inline bool* get_address_of_isUseEachBoneForceSettings_7() { return &___isUseEachBoneForceSettings_7; }
	inline void set_isUseEachBoneForceSettings_7(bool value)
	{
		___isUseEachBoneForceSettings_7 = value;
	}

	inline static int32_t get_offset_of_stiffnessForce_8() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___stiffnessForce_8)); }
	inline float get_stiffnessForce_8() const { return ___stiffnessForce_8; }
	inline float* get_address_of_stiffnessForce_8() { return &___stiffnessForce_8; }
	inline void set_stiffnessForce_8(float value)
	{
		___stiffnessForce_8 = value;
	}

	inline static int32_t get_offset_of_dragForce_9() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___dragForce_9)); }
	inline float get_dragForce_9() const { return ___dragForce_9; }
	inline float* get_address_of_dragForce_9() { return &___dragForce_9; }
	inline void set_dragForce_9(float value)
	{
		___dragForce_9 = value;
	}

	inline static int32_t get_offset_of_springForce_10() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___springForce_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_springForce_10() const { return ___springForce_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_springForce_10() { return &___springForce_10; }
	inline void set_springForce_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___springForce_10 = value;
	}

	inline static int32_t get_offset_of_colliders_11() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___colliders_11)); }
	inline SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* get_colliders_11() const { return ___colliders_11; }
	inline SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345** get_address_of_colliders_11() { return &___colliders_11; }
	inline void set_colliders_11(SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* value)
	{
		___colliders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_11), (void*)value);
	}

	inline static int32_t get_offset_of_debug_12() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___debug_12)); }
	inline bool get_debug_12() const { return ___debug_12; }
	inline bool* get_address_of_debug_12() { return &___debug_12; }
	inline void set_debug_12(bool value)
	{
		___debug_12 = value;
	}

	inline static int32_t get_offset_of_threshold_13() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___threshold_13)); }
	inline float get_threshold_13() const { return ___threshold_13; }
	inline float* get_address_of_threshold_13() { return &___threshold_13; }
	inline void set_threshold_13(float value)
	{
		___threshold_13 = value;
	}

	inline static int32_t get_offset_of_springLength_14() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___springLength_14)); }
	inline float get_springLength_14() const { return ___springLength_14; }
	inline float* get_address_of_springLength_14() { return &___springLength_14; }
	inline void set_springLength_14(float value)
	{
		___springLength_14 = value;
	}

	inline static int32_t get_offset_of_localRotation_15() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___localRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_localRotation_15() const { return ___localRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_localRotation_15() { return &___localRotation_15; }
	inline void set_localRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___localRotation_15 = value;
	}

	inline static int32_t get_offset_of_trs_16() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___trs_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_trs_16() const { return ___trs_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_trs_16() { return &___trs_16; }
	inline void set_trs_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___trs_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trs_16), (void*)value);
	}

	inline static int32_t get_offset_of_currTipPos_17() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___currTipPos_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currTipPos_17() const { return ___currTipPos_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currTipPos_17() { return &___currTipPos_17; }
	inline void set_currTipPos_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currTipPos_17 = value;
	}

	inline static int32_t get_offset_of_prevTipPos_18() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___prevTipPos_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_prevTipPos_18() const { return ___prevTipPos_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_prevTipPos_18() { return &___prevTipPos_18; }
	inline void set_prevTipPos_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___prevTipPos_18 = value;
	}

	inline static int32_t get_offset_of_org_19() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___org_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_org_19() const { return ___org_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_org_19() { return &___org_19; }
	inline void set_org_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___org_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___org_19), (void*)value);
	}

	inline static int32_t get_offset_of_managerRef_20() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___managerRef_20)); }
	inline SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * get_managerRef_20() const { return ___managerRef_20; }
	inline SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 ** get_address_of_managerRef_20() { return &___managerRef_20; }
	inline void set_managerRef_20(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * value)
	{
		___managerRef_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___managerRef_20), (void*)value);
	}
};


// UnityChan.SpringCollider
struct SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityChan.SpringCollider::radius
	float ___radius_4;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}
};


// UnityChan.SpringManager
struct SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityChan.SpringManager::dynamicRatio
	float ___dynamicRatio_4;
	// System.Single UnityChan.SpringManager::stiffnessForce
	float ___stiffnessForce_5;
	// UnityEngine.AnimationCurve UnityChan.SpringManager::stiffnessCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___stiffnessCurve_6;
	// System.Single UnityChan.SpringManager::dragForce
	float ___dragForce_7;
	// UnityEngine.AnimationCurve UnityChan.SpringManager::dragCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___dragCurve_8;
	// UnityChan.SpringBone[] UnityChan.SpringManager::springBones
	SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* ___springBones_9;

public:
	inline static int32_t get_offset_of_dynamicRatio_4() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___dynamicRatio_4)); }
	inline float get_dynamicRatio_4() const { return ___dynamicRatio_4; }
	inline float* get_address_of_dynamicRatio_4() { return &___dynamicRatio_4; }
	inline void set_dynamicRatio_4(float value)
	{
		___dynamicRatio_4 = value;
	}

	inline static int32_t get_offset_of_stiffnessForce_5() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___stiffnessForce_5)); }
	inline float get_stiffnessForce_5() const { return ___stiffnessForce_5; }
	inline float* get_address_of_stiffnessForce_5() { return &___stiffnessForce_5; }
	inline void set_stiffnessForce_5(float value)
	{
		___stiffnessForce_5 = value;
	}

	inline static int32_t get_offset_of_stiffnessCurve_6() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___stiffnessCurve_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_stiffnessCurve_6() const { return ___stiffnessCurve_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_stiffnessCurve_6() { return &___stiffnessCurve_6; }
	inline void set_stiffnessCurve_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___stiffnessCurve_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stiffnessCurve_6), (void*)value);
	}

	inline static int32_t get_offset_of_dragForce_7() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___dragForce_7)); }
	inline float get_dragForce_7() const { return ___dragForce_7; }
	inline float* get_address_of_dragForce_7() { return &___dragForce_7; }
	inline void set_dragForce_7(float value)
	{
		___dragForce_7 = value;
	}

	inline static int32_t get_offset_of_dragCurve_8() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___dragCurve_8)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_dragCurve_8() const { return ___dragCurve_8; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_dragCurve_8() { return &___dragCurve_8; }
	inline void set_dragCurve_8(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___dragCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dragCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_springBones_9() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___springBones_9)); }
	inline SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* get_springBones_9() const { return ___springBones_9; }
	inline SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65** get_address_of_springBones_9() { return &___springBones_9; }
	inline void set_springBones_9(SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* value)
	{
		___springBones_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___springBones_9), (void*)value);
	}
};


// UnityChan.ThirdPersonCamera
struct ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityChan.ThirdPersonCamera::smooth
	float ___smooth_4;
	// UnityEngine.Transform UnityChan.ThirdPersonCamera::standardPos
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___standardPos_5;
	// UnityEngine.Transform UnityChan.ThirdPersonCamera::frontPos
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___frontPos_6;
	// UnityEngine.Transform UnityChan.ThirdPersonCamera::jumpPos
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___jumpPos_7;
	// System.Boolean UnityChan.ThirdPersonCamera::bQuickSwitch
	bool ___bQuickSwitch_8;

public:
	inline static int32_t get_offset_of_smooth_4() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C, ___smooth_4)); }
	inline float get_smooth_4() const { return ___smooth_4; }
	inline float* get_address_of_smooth_4() { return &___smooth_4; }
	inline void set_smooth_4(float value)
	{
		___smooth_4 = value;
	}

	inline static int32_t get_offset_of_standardPos_5() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C, ___standardPos_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_standardPos_5() const { return ___standardPos_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_standardPos_5() { return &___standardPos_5; }
	inline void set_standardPos_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___standardPos_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardPos_5), (void*)value);
	}

	inline static int32_t get_offset_of_frontPos_6() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C, ___frontPos_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_frontPos_6() const { return ___frontPos_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_frontPos_6() { return &___frontPos_6; }
	inline void set_frontPos_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___frontPos_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frontPos_6), (void*)value);
	}

	inline static int32_t get_offset_of_jumpPos_7() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C, ___jumpPos_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_jumpPos_7() const { return ___jumpPos_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_jumpPos_7() { return &___jumpPos_7; }
	inline void set_jumpPos_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___jumpPos_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpPos_7), (void*)value);
	}

	inline static int32_t get_offset_of_bQuickSwitch_8() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C, ___bQuickSwitch_8)); }
	inline bool get_bQuickSwitch_8() const { return ___bQuickSwitch_8; }
	inline bool* get_address_of_bQuickSwitch_8() { return &___bQuickSwitch_8; }
	inline void set_bQuickSwitch_8(bool value)
	{
		___bQuickSwitch_8 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityChan.UnityChanControlScriptWithRgidBody
struct UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::animSpeed
	float ___animSpeed_4;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::lookSmoother
	float ___lookSmoother_5;
	// System.Boolean UnityChan.UnityChanControlScriptWithRgidBody::useCurves
	bool ___useCurves_6;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::useCurvesHeight
	float ___useCurvesHeight_7;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::forwardSpeed
	float ___forwardSpeed_8;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::backwardSpeed
	float ___backwardSpeed_9;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::rotateSpeed
	float ___rotateSpeed_10;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::jumpPower
	float ___jumpPower_11;
	// UnityEngine.CapsuleCollider UnityChan.UnityChanControlScriptWithRgidBody::col
	CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * ___col_12;
	// UnityEngine.Rigidbody UnityChan.UnityChanControlScriptWithRgidBody::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_13;
	// UnityEngine.Vector3 UnityChan.UnityChanControlScriptWithRgidBody::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_14;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::orgColHight
	float ___orgColHight_15;
	// UnityEngine.Vector3 UnityChan.UnityChanControlScriptWithRgidBody::orgVectColCenter
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___orgVectColCenter_16;
	// UnityEngine.Animator UnityChan.UnityChanControlScriptWithRgidBody::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_17;
	// UnityEngine.AnimatorStateInfo UnityChan.UnityChanControlScriptWithRgidBody::currentBaseState
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___currentBaseState_18;
	// UnityEngine.GameObject UnityChan.UnityChanControlScriptWithRgidBody::cameraObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cameraObject_19;
	// System.Single UnityChan.UnityChanControlScriptWithRgidBody::dir
	float ___dir_24;

public:
	inline static int32_t get_offset_of_animSpeed_4() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___animSpeed_4)); }
	inline float get_animSpeed_4() const { return ___animSpeed_4; }
	inline float* get_address_of_animSpeed_4() { return &___animSpeed_4; }
	inline void set_animSpeed_4(float value)
	{
		___animSpeed_4 = value;
	}

	inline static int32_t get_offset_of_lookSmoother_5() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___lookSmoother_5)); }
	inline float get_lookSmoother_5() const { return ___lookSmoother_5; }
	inline float* get_address_of_lookSmoother_5() { return &___lookSmoother_5; }
	inline void set_lookSmoother_5(float value)
	{
		___lookSmoother_5 = value;
	}

	inline static int32_t get_offset_of_useCurves_6() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___useCurves_6)); }
	inline bool get_useCurves_6() const { return ___useCurves_6; }
	inline bool* get_address_of_useCurves_6() { return &___useCurves_6; }
	inline void set_useCurves_6(bool value)
	{
		___useCurves_6 = value;
	}

	inline static int32_t get_offset_of_useCurvesHeight_7() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___useCurvesHeight_7)); }
	inline float get_useCurvesHeight_7() const { return ___useCurvesHeight_7; }
	inline float* get_address_of_useCurvesHeight_7() { return &___useCurvesHeight_7; }
	inline void set_useCurvesHeight_7(float value)
	{
		___useCurvesHeight_7 = value;
	}

	inline static int32_t get_offset_of_forwardSpeed_8() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___forwardSpeed_8)); }
	inline float get_forwardSpeed_8() const { return ___forwardSpeed_8; }
	inline float* get_address_of_forwardSpeed_8() { return &___forwardSpeed_8; }
	inline void set_forwardSpeed_8(float value)
	{
		___forwardSpeed_8 = value;
	}

	inline static int32_t get_offset_of_backwardSpeed_9() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___backwardSpeed_9)); }
	inline float get_backwardSpeed_9() const { return ___backwardSpeed_9; }
	inline float* get_address_of_backwardSpeed_9() { return &___backwardSpeed_9; }
	inline void set_backwardSpeed_9(float value)
	{
		___backwardSpeed_9 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_10() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___rotateSpeed_10)); }
	inline float get_rotateSpeed_10() const { return ___rotateSpeed_10; }
	inline float* get_address_of_rotateSpeed_10() { return &___rotateSpeed_10; }
	inline void set_rotateSpeed_10(float value)
	{
		___rotateSpeed_10 = value;
	}

	inline static int32_t get_offset_of_jumpPower_11() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___jumpPower_11)); }
	inline float get_jumpPower_11() const { return ___jumpPower_11; }
	inline float* get_address_of_jumpPower_11() { return &___jumpPower_11; }
	inline void set_jumpPower_11(float value)
	{
		___jumpPower_11 = value;
	}

	inline static int32_t get_offset_of_col_12() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___col_12)); }
	inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * get_col_12() const { return ___col_12; }
	inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 ** get_address_of_col_12() { return &___col_12; }
	inline void set_col_12(CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * value)
	{
		___col_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col_12), (void*)value);
	}

	inline static int32_t get_offset_of_rb_13() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___rb_13)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_13() const { return ___rb_13; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_13() { return &___rb_13; }
	inline void set_rb_13(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_13), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_14() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___velocity_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_14() const { return ___velocity_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_14() { return &___velocity_14; }
	inline void set_velocity_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_14 = value;
	}

	inline static int32_t get_offset_of_orgColHight_15() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___orgColHight_15)); }
	inline float get_orgColHight_15() const { return ___orgColHight_15; }
	inline float* get_address_of_orgColHight_15() { return &___orgColHight_15; }
	inline void set_orgColHight_15(float value)
	{
		___orgColHight_15 = value;
	}

	inline static int32_t get_offset_of_orgVectColCenter_16() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___orgVectColCenter_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_orgVectColCenter_16() const { return ___orgVectColCenter_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_orgVectColCenter_16() { return &___orgVectColCenter_16; }
	inline void set_orgVectColCenter_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___orgVectColCenter_16 = value;
	}

	inline static int32_t get_offset_of_anim_17() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___anim_17)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_17() const { return ___anim_17; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_17() { return &___anim_17; }
	inline void set_anim_17(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_17), (void*)value);
	}

	inline static int32_t get_offset_of_currentBaseState_18() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___currentBaseState_18)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_currentBaseState_18() const { return ___currentBaseState_18; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_currentBaseState_18() { return &___currentBaseState_18; }
	inline void set_currentBaseState_18(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___currentBaseState_18 = value;
	}

	inline static int32_t get_offset_of_cameraObject_19() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___cameraObject_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cameraObject_19() const { return ___cameraObject_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cameraObject_19() { return &___cameraObject_19; }
	inline void set_cameraObject_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cameraObject_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraObject_19), (void*)value);
	}

	inline static int32_t get_offset_of_dir_24() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9, ___dir_24)); }
	inline float get_dir_24() const { return ___dir_24; }
	inline float* get_address_of_dir_24() { return &___dir_24; }
	inline void set_dir_24(float value)
	{
		___dir_24 = value;
	}
};

struct UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields
{
public:
	// System.Int32 UnityChan.UnityChanControlScriptWithRgidBody::idleState
	int32_t ___idleState_20;
	// System.Int32 UnityChan.UnityChanControlScriptWithRgidBody::locoState
	int32_t ___locoState_21;
	// System.Int32 UnityChan.UnityChanControlScriptWithRgidBody::jumpState
	int32_t ___jumpState_22;
	// System.Int32 UnityChan.UnityChanControlScriptWithRgidBody::restState
	int32_t ___restState_23;

public:
	inline static int32_t get_offset_of_idleState_20() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields, ___idleState_20)); }
	inline int32_t get_idleState_20() const { return ___idleState_20; }
	inline int32_t* get_address_of_idleState_20() { return &___idleState_20; }
	inline void set_idleState_20(int32_t value)
	{
		___idleState_20 = value;
	}

	inline static int32_t get_offset_of_locoState_21() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields, ___locoState_21)); }
	inline int32_t get_locoState_21() const { return ___locoState_21; }
	inline int32_t* get_address_of_locoState_21() { return &___locoState_21; }
	inline void set_locoState_21(int32_t value)
	{
		___locoState_21 = value;
	}

	inline static int32_t get_offset_of_jumpState_22() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields, ___jumpState_22)); }
	inline int32_t get_jumpState_22() const { return ___jumpState_22; }
	inline int32_t* get_address_of_jumpState_22() { return &___jumpState_22; }
	inline void set_jumpState_22(int32_t value)
	{
		___jumpState_22 = value;
	}

	inline static int32_t get_offset_of_restState_23() { return static_cast<int32_t>(offsetof(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields, ___restState_23)); }
	inline int32_t get_restState_23() const { return ___restState_23; }
	inline int32_t* get_address_of_restState_23() { return &___restState_23; }
	inline void set_restState_23(int32_t value)
	{
		___restState_23 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * m_Items[1];

public:
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityChan.SpringBone[]
struct SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * m_Items[1];

public:
	inline SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityChan.SpringCollider[]
struct SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * m_Items[1];

public:
	inline SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void UnityChan.AutoBlink::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_ResetTimer_m3541C5D77FF9D5BB85C7396836E15DD7732D05F2 (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityChan.AutoBlink::SetCloseEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetCloseEyes_m4C01655E589DDD770772863A3087ED9F06BC6C4E (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method);
// System.Void UnityChan.AutoBlink::SetHalfCloseEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetHalfCloseEyes_m01C91D16C77BD2546651AEEE530C55D8F4E4F63A (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method);
// System.Void UnityChan.AutoBlink::SetOpenEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetOpenEyes_mF06A221EE50B0F47BF154A653004C456D4C432AF (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void UnityChan.AutoBlink/<RandomChange>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__22__ctor_mF0050FD4597EFBA55FE4AE1C29AAB0D9DD7193A7 (U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityChan.CameraController::setupFocusObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setupFocusObject_m25FBBEED2E4859432BCE3BC8692F972187FAE16E (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityChan.CameraController::mouseEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseEvent_m841260E5FC727979C7AE845B28902B26DB8626E4 (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityChan.CameraController::mouseWheelEvent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseWheelEvent_mB7C1D1059D1EFC58E609D5DF87E82BAA61CEEA0A (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, float ___delta0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Void UnityChan.CameraController::mouseDragEvent(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseDragEvent_mB4779285B13A773B27562DE1DD2FE0F820424CAB (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityChan.CameraController::cameraTranslate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_cameraTranslate_m9CD3EDF614A97513772B6C1B33F84DBBF82D29A9 (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityChan.CameraController::cameraRotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_cameraRotate_m77D776AA04601A15D9DAD152674DF7B8BFB1AA5B (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulerAngle0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::SetLookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_SetLookRotation_m51FB0FD3F6EB54C4674C0B3690D3825D954EABE5 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___view0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53 (float ___width0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464 (float ___height0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Box_m0EECE38EC754153D8414151BA4B11BA3E756861D (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Boolean UnityEngine.GUILayout::RepeatButton(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_RepeatButton_m9E65EFF35060E96B0476897F1B71118CBAE45C7A (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mD3F99D6835AA415C0B32AE0C574B1815CC07586F (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options2, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_mFC527EAF68AAA25156B5A5B838FB9AB7231DDDF7 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityChan.FaceUpdate::ChangeFace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_ChangeFace_m99C90D6367EE019F27A25B0AC182FAC3B329525B (FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m306B0B0F32E27DF24FB66FB6A1A47C86EA6020EF (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m380781D1EB25E7221C25F96EE5B99C32407FB8E4 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_m5D061142B0796E3E733A7FE490C6AC761DC0FFFF (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___goal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___goalPosition1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotation_mBBBDDF64761D8FCD67BCEF99B18770738E366DA5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___goal0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___goalRotation1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Toggle_mBBBD205D65CCBD3F737E90AC53FAE8A3C4AE0F1C (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, bool ___value1, String_t* ___text2, const RuntimeMethod* method);
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityChan.IdleChanger/<RandomChange>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__9__ctor_mFAE66ADAD4A28AC46AE92E738D02D51FC5F73355 (U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<MLAPI.NetworkManager>()
inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * Component_GetComponentInParent_TisNetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_m0FAE471BA051A098231661F8D0946BCC56CD06AB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// MLAPI.Transports.Tasks.SocketTasks MLAPI.NetworkManager::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * NetworkManager_StartServer_m5A212BB8491EB8B459B9C29904313B9CDC36D666 (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, const RuntimeMethod* method);
// MLAPI.Transports.Tasks.SocketTasks MLAPI.NetworkManager::StartHost(System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<System.Boolean>,System.Nullable`1<System.UInt64>,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * NetworkManager_StartHost_mA94AF1A168F07FAF13107C602DC7EAD002341A9B (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position0, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation1, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___createPlayerObject2, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___prefabHash3, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___payloadStream4, const RuntimeMethod* method);
// MLAPI.Transports.Tasks.SocketTasks MLAPI.NetworkManager::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * NetworkManager_StartClient_m1DF609A5478CFE30892D738E3CF94B0B373572C8 (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityChan.SpringManager>()
inline SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519 (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityChan.SpringManager UnityChan.SpringBone::GetParentSpringManager(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityChan.SpringManager::UpdateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameters_mC7B00164F9AE3B3EBB0641FB12E3DA8B1AF5D02A (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method);
// System.Void UnityChan.SpringBone::UpdateSpring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_UpdateSpring_mCBB26D530A0FB706D426785811662B19C48527D0 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method);
// System.Void UnityChan.SpringManager::UpdateParameter(System.String,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameter_mC7FC23D3FC30CA860881A18E911D04457CB3A523 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, String_t* ___fieldName0, float ___baseValue1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionFrontView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionFrontView_m4832BD4C9ACAFE5343A90361878700B66C7C11FF (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method);
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionJumpView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionJumpView_m4B2CFD5A6D4FC9C6686BDD4E7987773E824EA1E7 (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method);
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionNormalView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionNormalView_mA8F936A20380BC2C8FF944526CC0B15B212D2E78 (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CapsuleCollider_get_center_m6374F7457A9450CAFFAD2DF0C9D1419BF9E304CB (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::resetCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_resetCollider_mF89B2D5F1538FE630201D70696EAA440EF3C463C (UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m74C168FD46C780CD153838BDCE77F8B371456D46 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m36F35F070DFC2CBFC87532004073CA8D56F3678F (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.AutoBlink::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_Awake_m04AB87C37F52E221C6B0FA213146A16E8702BA75 (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_Start_m6957DE7E267B0B9179F32F716D42F10D79C6E008 (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetTimer();
		AutoBlink_ResetTimer_m3541C5D77FF9D5BB85C7396836E15DD7732D05F2(__this, /*hidden argument*/NULL);
		// StartCoroutine("RandomChange");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0;
		L_0 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_ResetTimer_m3541C5D77FF9D5BB85C7396836E15DD7732D05F2 (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	{
		// timeRemining = timeBlink;
		float L_0 = __this->get_timeBlink_12();
		__this->set_timeRemining_13(L_0);
		// timerStarted = false;
		__this->set_timerStarted_10((bool)0);
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_Update_mD758B8A1EBCEF05D8A5C8BECC5A8B8D7977812E6 (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	{
		// if (!timerStarted)
		bool L_0 = __this->get_timerStarted_10();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// eyeStatus = Status.Close;
		__this->set_eyeStatus_16(0);
		// timerStarted = true;
		__this->set_timerStarted_10((bool)1);
	}

IL_0016:
	{
		// if (timerStarted)
		bool L_1 = __this->get_timerStarted_10();
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// timeRemining -= Time.deltaTime;
		float L_2 = __this->get_timeRemining_13();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeRemining_13(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// if (timeRemining <= 0.0f)
		float L_4 = __this->get_timeRemining_13();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// eyeStatus = Status.Open;
		__this->set_eyeStatus_16(2);
		// ResetTimer();
		AutoBlink_ResetTimer_m3541C5D77FF9D5BB85C7396836E15DD7732D05F2(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// else if (timeRemining <= timeBlink * 0.3f)
		float L_5 = __this->get_timeRemining_13();
		float L_6 = __this->get_timeBlink_12();
		if ((!(((float)L_5) <= ((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(0.300000012f)))))))
		{
			goto IL_0066;
		}
	}
	{
		// eyeStatus = Status.HalfClose;
		__this->set_eyeStatus_16(1);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_LateUpdate_m1A894146B1B3F8F8A4C6EBD21A5A6E05FC13B51A (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (isActive)
		bool L_0 = __this->get_isActive_4();
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// if (isBlink)
		bool L_1 = __this->get_isBlink_11();
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// switch (eyeStatus)
		int32_t L_2 = __this->get_eyeStatus_16();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		return;
	}

IL_002a:
	{
		// SetCloseEyes();
		AutoBlink_SetCloseEyes_m4C01655E589DDD770772863A3087ED9F06BC6C4E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0031:
	{
		// SetHalfCloseEyes();
		AutoBlink_SetHalfCloseEyes_m01C91D16C77BD2546651AEEE530C55D8F4E4F63A(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0038:
	{
		// SetOpenEyes();
		AutoBlink_SetOpenEyes_mF06A221EE50B0F47BF154A653004C456D4C432AF(__this, /*hidden argument*/NULL);
		// isBlink = false;
		__this->set_isBlink_11((bool)0);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::SetCloseEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetCloseEyes_m4C01655E589DDD770772863A3087ED9F06BC6C4E (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	{
		// ref_SMR_EYE_DEF.SetBlendShapeWeight(6, ratio_Close);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_0 = __this->get_ref_SMR_EYE_DEF_5();
		float L_1 = __this->get_ratio_Close_7();
		NullCheck(L_0);
		SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_0, 6, L_1, /*hidden argument*/NULL);
		// ref_SMR_EL_DEF.SetBlendShapeWeight(6, ratio_Close);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_2 = __this->get_ref_SMR_EL_DEF_6();
		float L_3 = __this->get_ratio_Close_7();
		NullCheck(L_2);
		SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_2, 6, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::SetHalfCloseEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetHalfCloseEyes_m01C91D16C77BD2546651AEEE530C55D8F4E4F63A (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	{
		// ref_SMR_EYE_DEF.SetBlendShapeWeight(6, ratio_HalfClose);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_0 = __this->get_ref_SMR_EYE_DEF_5();
		float L_1 = __this->get_ratio_HalfClose_8();
		NullCheck(L_0);
		SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_0, 6, L_1, /*hidden argument*/NULL);
		// ref_SMR_EL_DEF.SetBlendShapeWeight(6, ratio_HalfClose);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_2 = __this->get_ref_SMR_EL_DEF_6();
		float L_3 = __this->get_ratio_HalfClose_8();
		NullCheck(L_2);
		SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_2, 6, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.AutoBlink::SetOpenEyes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink_SetOpenEyes_mF06A221EE50B0F47BF154A653004C456D4C432AF (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	{
		// ref_SMR_EYE_DEF.SetBlendShapeWeight(6, ratio_Open);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_0 = __this->get_ref_SMR_EYE_DEF_5();
		float L_1 = __this->get_ratio_Open_9();
		NullCheck(L_0);
		SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_0, 6, L_1, /*hidden argument*/NULL);
		// ref_SMR_EL_DEF.SetBlendShapeWeight(6, ratio_Open);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_2 = __this->get_ref_SMR_EL_DEF_6();
		float L_3 = __this->get_ratio_Open_9();
		NullCheck(L_2);
		SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_2, 6, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityChan.AutoBlink::RandomChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AutoBlink_RandomChange_m905AD6B0269AB48C4F8C58F5F582B201534D6893 (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * L_0 = (U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C *)il2cpp_codegen_object_new(U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C_il2cpp_TypeInfo_var);
		U3CRandomChangeU3Ed__22__ctor_mF0050FD4597EFBA55FE4AE1C29AAB0D9DD7193A7(L_0, 0, /*hidden argument*/NULL);
		U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UnityChan.AutoBlink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoBlink__ctor_m279BE14A4983BAFB591A677EAA0FF677DB9A2D8E (AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * __this, const RuntimeMethod* method)
{
	{
		// public bool isActive = true;                //オート目パチ有効
		__this->set_isActive_4((bool)1);
		// public float ratio_Close = 85.0f;           //閉じ目ブレンドシェイプ比率
		__this->set_ratio_Close_7((85.0f));
		// public float ratio_HalfClose = 20.0f;       //半閉じ目ブレンドシェイプ比率
		__this->set_ratio_HalfClose_8((20.0f));
		// public float timeBlink = 0.4f;              //目パチの時間
		__this->set_timeBlink_12((0.400000006f));
		// public float threshold = 0.3f;              // ランダム判定の閾値
		__this->set_threshold_14((0.300000012f));
		// public float interval = 3.0f;               // ランダム判定のインターバル
		__this->set_interval_15((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.CameraController::setupFocusObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setupFocusObject_m25FBBEED2E4859432BCE3BC8692F972187FAE16E (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject obj = this.focusObj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1;
		V_0 = L_2;
		__this->set_focusObj_5(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		// obj.transform.position = this.focus;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_focus_4();
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_6, /*hidden argument*/NULL);
		// obj.transform.LookAt(this.transform.position);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_7, L_9, /*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_m2E30C513BF69C283ABA84E7A359DCEBFB5A1BF30 (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral788728726FD14D18CB2F66203C12BFFE45659897);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.focusObj == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_focusObj_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.setupFocusObject("CameraFocusObject");
		CameraController_setupFocusObject_m25FBBEED2E4859432BCE3BC8692F972187FAE16E(__this, _stringLiteral788728726FD14D18CB2F66203C12BFFE45659897, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// Transform trans = this.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		// transform.parent = this.focusObj.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_focusObj_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_3, L_5, /*hidden argument*/NULL);
		// trans.LookAt(this.focus);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_focus_4();
		NullCheck(L_2);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_2, L_6, /*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m0D1E50FF581ABFD22B8BE41D19D8F91391B8896C (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, const RuntimeMethod* method)
{
	{
		// this.mouseEvent();
		CameraController_mouseEvent_m841260E5FC727979C7AE845B28902B26DB8626E4(__this, /*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_OnGUI_mB90356412E7F223DD99C01164571106EDBDE9821 (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B543EDBE2E96E405B958B525BFD55181F6DCB83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595DD015432EA032FD9DE15D430642872DCC3087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADC179AF2B0468826DB85E74578463666CF4700F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF4DF696C7896F255AA384C216C33E4BE82E9DDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showInstWindow)
		bool L_0 = __this->get_showInstWindow_6();
		if (!L_0)
		{
			goto IL_00c3;
		}
	}
	{
		// GUI.Box(new Rect(Screen.width - 210, Screen.height - 100, 200, 90), "Camera Operations");
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)210))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)100))))), (200.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_3, _stringLiteral3B543EDBE2E96E405B958B525BFD55181F6DCB83, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, Screen.height - 80, 200, 30), "RMB / Alt+LMB: Tumble");
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)200))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)80))))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_6, _stringLiteralFF4DF696C7896F255AA384C216C33E4BE82E9DDC, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, Screen.height - 60, 200, 30), "MMB / Alt+Cmd+LMB: Track");
		int32_t L_7;
		L_7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_9), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)200))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)60))))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_9, _stringLiteral595DD015432EA032FD9DE15D430642872DCC3087, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, Screen.height - 40, 200, 30), "Wheel / 2 Fingers Swipe: Dolly");
		int32_t L_10;
		L_10 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_12), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)200))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)40))))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_12, _stringLiteralADC179AF2B0468826DB85E74578463666CF4700F, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void UnityChan.CameraController::mouseEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseEvent_m841260E5FC727979C7AE845B28902B26DB8626E4 (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float delta = Input.GetAxis("Mouse ScrollWheel");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (delta != 0.0f)
		float L_1 = V_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		// this.mouseWheelEvent(delta);
		float L_2 = V_0;
		CameraController_mouseWheelEvent_mB7C1D1059D1EFC58E609D5DF87E82BAA61CEEA0A(__this, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// if (Input.GetMouseButtonDown((int)MouseButtonDown.MBD_LEFT) ||
		//     Input.GetMouseButtonDown((int)MouseButtonDown.MBD_MIDDLE) ||
		//     Input.GetMouseButtonDown((int)MouseButtonDown.MBD_RIGHT))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(2, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}

IL_0032:
	{
		// this.oldPos = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_oldPos_7(L_6);
	}

IL_003d:
	{
		// this.mouseDragEvent(Input.mousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		CameraController_mouseDragEvent_mB4779285B13A773B27562DE1DD2FE0F820424CAB(__this, L_7, /*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::mouseDragEvent(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseDragEvent_mB4779285B13A773B27562DE1DD2FE0F820424CAB (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePos0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 diff = mousePos - oldPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___mousePos0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_oldPos_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (Input.GetMouseButton((int)MouseButtonDown.MBD_LEFT))
		bool L_3;
		L_3 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftAlt) && Input.GetKey(KeyCode.LeftCommand))
		bool L_4;
		L_4 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)308), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)310), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		// if (diff.magnitude > Vector3.kEpsilon)
		float L_6;
		L_6 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_6) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// this.cameraTranslate(-diff / 100.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_8, (100.0f), /*hidden argument*/NULL);
		CameraController_cameraTranslate_m9CD3EDF614A97513772B6C1B33F84DBBF82D29A9(__this, L_9, /*hidden argument*/NULL);
		// }
		goto IL_00f4;
	}

IL_0059:
	{
		// else if (Input.GetKey(KeyCode.LeftAlt))
		bool L_10;
		L_10 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)308), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00f4;
		}
	}
	{
		// if (diff.magnitude > Vector3.kEpsilon)
		float L_11;
		L_11 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_11) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// this.cameraRotate(new Vector3(diff.y, diff.x, 0.0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		float L_13 = L_12.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), L_13, L_15, (0.0f), /*hidden argument*/NULL);
		CameraController_cameraRotate_m77D776AA04601A15D9DAD152674DF7B8BFB1AA5B(__this, L_16, /*hidden argument*/NULL);
		// }
		goto IL_00f4;
	}

IL_0094:
	{
		// else if (Input.GetMouseButton((int)MouseButtonDown.MBD_MIDDLE))
		bool L_17;
		L_17 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(2, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c2;
		}
	}
	{
		// if (diff.magnitude > Vector3.kEpsilon)
		float L_18;
		L_18 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_18) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// this.cameraTranslate(-diff / 100.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_20, (100.0f), /*hidden argument*/NULL);
		CameraController_cameraTranslate_m9CD3EDF614A97513772B6C1B33F84DBBF82D29A9(__this, L_21, /*hidden argument*/NULL);
		// }
		goto IL_00f4;
	}

IL_00c2:
	{
		// else if (Input.GetMouseButton((int)MouseButtonDown.MBD_RIGHT))
		bool L_22;
		L_22 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00f4;
		}
	}
	{
		// if (diff.magnitude > Vector3.kEpsilon)
		float L_23;
		L_23 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_23) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// this.cameraRotate(new Vector3(diff.y, diff.x, 0.0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		float L_25 = L_24.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_0;
		float L_27 = L_26.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_25, L_27, (0.0f), /*hidden argument*/NULL);
		CameraController_cameraRotate_m77D776AA04601A15D9DAD152674DF7B8BFB1AA5B(__this, L_28, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// this.oldPos = mousePos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = ___mousePos0;
		__this->set_oldPos_7(L_29);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::mouseWheelEvent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_mouseWheelEvent_mB7C1D1059D1EFC58E609D5DF87E82BAA61CEEA0A (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, float ___delta0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 focusToPosition = this.transform.position - this.focus;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_focus_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_2, /*hidden argument*/NULL);
		// Vector3 post = focusToPosition * (1.0f + delta);
		float L_4 = ___delta0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_4)), /*hidden argument*/NULL);
		V_0 = L_5;
		// if (post.magnitude > 0.01)
		float L_6;
		L_6 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((double)((double)((double)L_6))) > ((double)(0.01)))))
		{
			goto IL_004d;
		}
	}
	{
		// this.transform.position = this.focus + post;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_focus_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_10, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::cameraTranslate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_cameraTranslate_m9CD3EDF614A97513772B6C1B33F84DBBF82D29A9 (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// Transform focusTrans = this.focusObj.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_focusObj_5();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// vec.x *= -1;
		float* L_2 = (&___vec0)->get_address_of_x_2();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f)));
		// focusTrans.Translate(Vector3.right * vec.x);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___vec0;
		float L_8 = L_7.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_5, L_9, /*hidden argument*/NULL);
		// focusTrans.Translate(Vector3.up * vec.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___vec0;
		float L_13 = L_12.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_10, L_14, /*hidden argument*/NULL);
		// this.focus = focusTrans.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_0;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		__this->set_focus_4(L_16);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::cameraRotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_cameraRotate_m77D776AA04601A15D9DAD152674DF7B8BFB1AA5B (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulerAngle0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion q = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		V_0 = L_0;
		// Transform focusTrans = this.focusObj.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_focusObj_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		// focusTrans.localEulerAngles = focusTrans.localEulerAngles + eulerAngle;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___eulerAngle0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_3, L_6, /*hidden argument*/NULL);
		// q.SetLookRotation(this.focus);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_focus_4();
		Quaternion_SetLookRotation_m51FB0FD3F6EB54C4674C0B3690D3825D954EABE5((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), L_7, /*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Void UnityChan.CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m1D378F6AABF18FF3154735458C4A69A25C693BC8 (CameraController_t0384D454C7471537F30105E82901F2FC00E7DC91 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 focus = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_focus_4(L_0);
		// public bool showInstWindow = true;
		__this->set_showInstWindow_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMain::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMain_Start_mB01C9B9A8FD9B5EF50213661C33EF04234AFF4E2 (CameraMain_tAE22174E4AD37990123328B9515C9826A2E74241 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3854292C6A5F740280B321414BA5B86A4FA856C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityChanPos = GameObject.Find("UnityChan").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralF3854292C6A5F740280B321414BA5B86A4FA856C, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_unityChanPos_4(L_1);
		// }
		return;
	}
}
// System.Void CameraMain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMain_Update_m466FB70D0895E1293E1450B80AC7816F612D38A6 (CameraMain_tAE22174E4AD37990123328B9515C9826A2E74241 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = unityChanPos.position + shift;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_unityChanPos_4();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_shift_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraMain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMain__ctor_m1DD44048906D8F76EDC09CCC36D39E0730EF2C2E (CameraMain_tAE22174E4AD37990123328B9515C9826A2E74241 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 shift = new Vector3(0, 10, -15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (10.0f), (-15.0f), /*hidden argument*/NULL);
		__this->set_shift_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CircleRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleRenderer_Start_m70B923A16BE8451A5876D8203A26FE902115CC96 (CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lineDrawer = transform.GetChild(0).GetComponent<LineRenderer>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2;
		L_2 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(L_1, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		__this->set_lineDrawer_7(L_2);
		// step = 2 * Mathf.PI / pointsNumber;
		int32_t L_3 = __this->get_pointsNumber_4();
		__this->set_step_6(((float)((float)(6.28318548f)/(float)((float)((float)L_3)))));
		// lineDrawer.positionCount = pointsNumber + 1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_4 = __this->get_lineDrawer_7();
		int32_t L_5 = __this->get_pointsNumber_4();
		NullCheck(L_4);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CircleRenderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleRenderer_Update_mAF68A749DBF6E55513EFBEA00C56AD6BA88A421F (CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < pointsNumber + 1; i++)
		V_0 = 0;
		goto IL_0048;
	}

IL_0004:
	{
		// lineDrawer.SetPosition(i, new Vector3(radius * Mathf.Cos(i * step), 0.1f, radius * Mathf.Sin(i * step)));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lineDrawer_7();
		int32_t L_1 = V_0;
		float L_2 = __this->get_radius_5();
		int32_t L_3 = V_0;
		float L_4 = __this->get_step_6();
		float L_5;
		L_5 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)L_4)));
		float L_6 = __this->get_radius_5();
		int32_t L_7 = V_0;
		float L_8 = __this->get_step_6();
		float L_9;
		L_9 = sinf(((float)il2cpp_codegen_multiply((float)((float)((float)L_7)), (float)L_8)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_5)), (0.100000001f), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_0);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_0, L_1, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i < pointsNumber + 1; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0048:
	{
		// for (int i = 0; i < pointsNumber + 1; i++)
		int32_t L_12 = V_0;
		int32_t L_13 = __this->get_pointsNumber_4();
		if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CircleRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleRenderer__ctor_mA1CC020E2E4184530152B5DA494DB029C056E197 (CircleRenderer_tCE873E33F42E523279B671E30A15BBE6295B6176 * __this, const RuntimeMethod* method)
{
	{
		// private int pointsNumber = 100;
		__this->set_pointsNumber_4(((int32_t)100));
		// private float radius = 0.7f;
		__this->set_radius_5((0.699999988f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitButton::exitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitButton_exitGame_m34A8CD4562817D87F3D93210BFE5632045EC90F1 (ExitButton_t5CDCA27E210BF35B50839938DF75CF1A59657570 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExitButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitButton__ctor_m3E4A35FFE830273EE8832B1209039ACD25E98750 (ExitButton_t5CDCA27E210BF35B50839938DF75CF1A59657570 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.FaceUpdate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_Start_m0F53628600801819B9A3C716948CA518B8BFC734 (FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_5(L_0);
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_OnGUI_mD1EF6FE4753A5D0D0A337B71C30B9626D2DA023B (FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240C7FDF3C9B4066B07C1B58BCA1C949CB56ABEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293542D9D93291B4BD2A5814172566525A7DDF57);
		s_Il2CppMethodInitialized = true;
	}
	AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * V_2 = NULL;
	{
		// GUILayout.Box("Face Update", GUILayout.Width(170), GUILayout.Height(25 * (animations.Length + 2)));
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_0 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_1 = L_0;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_2;
		L_2 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((170.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_2);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_3 = L_1;
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_4 = __this->get_animations_4();
		NullCheck(L_4);
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_5;
		L_5 = GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)25), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)2)))))), /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_5);
		GUILayout_Box_m0EECE38EC754153D8414151BA4B11BA3E756861D(_stringLiteral240C7FDF3C9B4066B07C1B58BCA1C949CB56ABEA, L_3, /*hidden argument*/NULL);
		// Rect screenRect = new Rect(10, 25, 150, 25 * (animations.Length + 1));
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_6 = __this->get_animations_4();
		NullCheck(L_6);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_7), (10.0f), (25.0f), (150.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)25), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1)))))), /*hidden argument*/NULL);
		// GUILayout.BeginArea(screenRect);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_7, /*hidden argument*/NULL);
		// foreach (var animation in animations)
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_8 = __this->get_animations_4();
		V_0 = L_8;
		V_1 = 0;
		goto IL_0095;
	}

IL_0065:
	{
		// foreach (var animation in animations)
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// if (GUILayout.RepeatButton(animation.name))
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_13 = V_2;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_15;
		L_15 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_16;
		L_16 = GUILayout_RepeatButton_m9E65EFF35060E96B0476897F1B71118CBAE45C7A(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		// anim.CrossFade(animation.name, 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = __this->get_anim_5();
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_18 = V_2;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Animator_CrossFade_mD3F99D6835AA415C0B32AE0C574B1815CC07586F(L_17, L_19, (0.0f), /*hidden argument*/NULL);
	}

IL_0091:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0095:
	{
		// foreach (var animation in animations)
		int32_t L_21 = V_1;
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0065;
		}
	}
	{
		// isKeepFace = GUILayout.Toggle(isKeepFace, " Keep Face");
		bool L_23 = __this->get_isKeepFace_7();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_24;
		L_24 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_25;
		L_25 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_23, _stringLiteral293542D9D93291B4BD2A5814172566525A7DDF57, L_24, /*hidden argument*/NULL);
		__this->set_isKeepFace_7(L_25);
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_Update_mA22F72FF1A727643066931034D3CF708F4F63F7B (FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// current = 1;
		__this->set_current_8((1.0f));
		// }
		goto IL_0039;
	}

IL_0015:
	{
		// else if (!isKeepFace)
		bool L_1 = __this->get_isKeepFace_7();
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// current = Mathf.Lerp(current, 0, delayWeight);
		float L_2 = __this->get_current_8();
		float L_3 = __this->get_delayWeight_6();
		float L_4;
		L_4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_2, (0.0f), L_3, /*hidden argument*/NULL);
		__this->set_current_8(L_4);
	}

IL_0039:
	{
		// anim.SetLayerWeight(1, current);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_anim_5();
		float L_6 = __this->get_current_8();
		NullCheck(L_5);
		Animator_SetLayerWeight_mFC527EAF68AAA25156B5A5B838FB9AB7231DDDF7(L_5, 1, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::OnCallChangeFace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_OnCallChangeFace_m9A6F799C8735168A53856E6F424D8537AECA7E09 (FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BED2DC0EC7095284E4DD921DFE0B428EF30564B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* V_1 = NULL;
	int32_t V_2 = 0;
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * V_3 = NULL;
	{
		// int ichecked = 0;
		V_0 = 0;
		// foreach (var animation in animations)
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_0 = __this->get_animations_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_004a;
	}

IL_000d:
	{
		// foreach (var animation in animations)
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// if (str == animation.name)
		String_t* L_5 = ___str0;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_6 = V_3;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0027;
		}
	}
	{
		// ChangeFace(str);
		String_t* L_9 = ___str0;
		FaceUpdate_ChangeFace_m99C90D6367EE019F27A25B0AC182FAC3B329525B(__this, L_9, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0027:
	{
		// else if (ichecked <= animations.Length)
		int32_t L_10 = V_0;
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_11 = __this->get_animations_4();
		NullCheck(L_11);
		if ((((int32_t)L_10) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// ichecked++;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		// }
		goto IL_0046;
	}

IL_0038:
	{
		// str = "default@unitychan";
		___str0 = _stringLiteral1BED2DC0EC7095284E4DD921DFE0B428EF30564B;
		// ChangeFace(str);
		String_t* L_13 = ___str0;
		FaceUpdate_ChangeFace_m99C90D6367EE019F27A25B0AC182FAC3B329525B(__this, L_13, /*hidden argument*/NULL);
	}

IL_0046:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004a:
	{
		// foreach (var animation in animations)
		int32_t L_15 = V_2;
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::ChangeFace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate_ChangeFace_m99C90D6367EE019F27A25B0AC182FAC3B329525B (FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	{
		// isKeepFace = true;
		__this->set_isKeepFace_7((bool)1);
		// current = 1;
		__this->set_current_8((1.0f));
		// anim.CrossFade(str, 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_5();
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		Animator_CrossFade_mD3F99D6835AA415C0B32AE0C574B1815CC07586F(L_0, L_1, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.FaceUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceUpdate__ctor_mFE8015DE581FC98D8986B701970A699A86773B9F (FaceUpdate_tFF77647144DFD51B67F19EB864060CB761901774 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.IKCtrlRightHand::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand_Awake_m426301221709038B645BF035473A51B02BB9CC10 (IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_4(L_0);
		// }
		return;
	}
}
// System.Void UnityChan.IKCtrlRightHand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand_Update_mE2B5F13EB37FA3B34D0FDBBCA174F2493F6C2333 (IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4 * __this, const RuntimeMethod* method)
{
	{
		// if (mixWeight >= 1.0f)
		float L_0 = __this->get_mixWeight_7();
		if ((!(((float)L_0) >= ((float)(1.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// mixWeight = 1.0f;
		__this->set_mixWeight_7((1.0f));
		return;
	}

IL_0019:
	{
		// else if (mixWeight <= 0.0f)
		float L_1 = __this->get_mixWeight_7();
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// mixWeight = 0.0f;
		__this->set_mixWeight_7((0.0f));
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UnityChan.IKCtrlRightHand::OnAnimatorIK(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand_OnAnimatorIK_m87F31C854F51CFBB07987D2B6FE7F7545E769619 (IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	{
		// if (isIkActive)
		bool L_0 = __this->get_isIkActive_6();
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// anim.SetIKPositionWeight(AvatarIKGoal.RightHand, mixWeight);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_anim_4();
		float L_2 = __this->get_mixWeight_7();
		NullCheck(L_1);
		Animator_SetIKPositionWeight_m306B0B0F32E27DF24FB66FB6A1A47C86EA6020EF(L_1, 3, L_2, /*hidden argument*/NULL);
		// anim.SetIKRotationWeight(AvatarIKGoal.RightHand, mixWeight);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_anim_4();
		float L_4 = __this->get_mixWeight_7();
		NullCheck(L_3);
		Animator_SetIKRotationWeight_m380781D1EB25E7221C25F96EE5B99C32407FB8E4(L_3, 3, L_4, /*hidden argument*/NULL);
		// anim.SetIKPosition(AvatarIKGoal.RightHand, targetObj.position);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_anim_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_targetObj_5();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Animator_SetIKPosition_m5D061142B0796E3E733A7FE490C6AC761DC0FFFF(L_5, 3, L_7, /*hidden argument*/NULL);
		// anim.SetIKRotation(AvatarIKGoal.RightHand, targetObj.rotation);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_anim_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_targetObj_5();
		NullCheck(L_9);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Animator_SetIKRotation_mBBBDDF64761D8FCD67BCEF99B18770738E366DA5(L_8, 3, L_10, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void UnityChan.IKCtrlRightHand::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand_OnGUI_m48D0542A1143644F3F66D28A8B37A84D11F7414F (IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC72435C50E2C88247E4FAE4A4F3CA3BE5418D4);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect rect1 = new Rect(10, Screen.height - 20, 400, 30);
		int32_t L_0;
		L_0 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), (10.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)20))))), (400.0f), (30.0f), /*hidden argument*/NULL);
		// isIkActive = GUI.Toggle(rect1, isIkActive, "IK Active");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = V_0;
		bool L_2 = __this->get_isIkActive_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GUI_Toggle_mBBBD205D65CCBD3F737E90AC53FAE8A3C4AE0F1C(L_1, L_2, _stringLiteralAAC72435C50E2C88247E4FAE4A4F3CA3BE5418D4, /*hidden argument*/NULL);
		__this->set_isIkActive_6(L_3);
		// }
		return;
	}
}
// System.Void UnityChan.IKCtrlRightHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKCtrlRightHand__ctor_m1D2918FED2275D8443E7B9B71BDF6C9842BF6A04 (IKCtrlRightHand_tB38B3C85CABF6458EEB71C71062E70838A9543B4 * __this, const RuntimeMethod* method)
{
	{
		// public float mixWeight = 1.0f;
		__this->set_mixWeight_7((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.IdleChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleChanger_Start_mF0F8F42F08940C69B1DD9020E4333CAF2C6C8753 (IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_4(L_0);
		// currentState = anim.GetCurrentAnimatorStateInfo(0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_anim_4();
		NullCheck(L_1);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_2;
		L_2 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_1, 0, /*hidden argument*/NULL);
		__this->set_currentState_5(L_2);
		// previousState = currentState;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_3 = __this->get_currentState_5();
		__this->set_previousState_6(L_3);
		// StartCoroutine("RandomChange");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral7456FF61D92F368E7DB05C258B9683B2CA9DBE5D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.IdleChanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleChanger_Update_mA198A27373DD4C13D5EA174F521E28F8D32EEE7E (IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown("up") || Input.GetButton("Jump"))
		bool L_0;
		L_0 = Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5(_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}

IL_0018:
	{
		// anim.SetBool("Next", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_4();
		NullCheck(L_2);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (bool)1, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (Input.GetKeyDown("down"))
		bool L_3;
		L_3 = Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// anim.SetBool("Back", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_anim_4();
		NullCheck(L_4);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)1, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// if (anim.GetBool("Next"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_anim_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_5, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_009f;
		}
	}
	{
		// currentState = anim.GetCurrentAnimatorStateInfo(0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_anim_4();
		NullCheck(L_7);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_7, 0, /*hidden argument*/NULL);
		__this->set_currentState_5(L_8);
		// if (previousState.nameHash != currentState.nameHash)
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_9 = __this->get_address_of_previousState_6();
		int32_t L_10;
		L_10 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_9, /*hidden argument*/NULL);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_11 = __this->get_address_of_currentState_5();
		int32_t L_12;
		L_12 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_009f;
		}
	}
	{
		// anim.SetBool("Next", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = __this->get_anim_4();
		NullCheck(L_13);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_13, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (bool)0, /*hidden argument*/NULL);
		// previousState = currentState;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_14 = __this->get_currentState_5();
		__this->set_previousState_6(L_14);
	}

IL_009f:
	{
		// if (anim.GetBool("Back"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_15 = __this->get_anim_4();
		NullCheck(L_15);
		bool L_16;
		L_16 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_15, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00f8;
		}
	}
	{
		// currentState = anim.GetCurrentAnimatorStateInfo(0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = __this->get_anim_4();
		NullCheck(L_17);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_18;
		L_18 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_17, 0, /*hidden argument*/NULL);
		__this->set_currentState_5(L_18);
		// if (previousState.nameHash != currentState.nameHash)
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_19 = __this->get_address_of_previousState_6();
		int32_t L_20;
		L_20 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_19, /*hidden argument*/NULL);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_21 = __this->get_address_of_currentState_5();
		int32_t L_22;
		L_22 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_00f8;
		}
	}
	{
		// anim.SetBool("Back", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_23 = __this->get_anim_4();
		NullCheck(L_23);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_23, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)0, /*hidden argument*/NULL);
		// previousState = currentState;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_24 = __this->get_currentState_5();
		__this->set_previousState_6(L_24);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void UnityChan.IdleChanger::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleChanger_OnGUI_mAE86B03017F4F75700B59621B9A485183738D178 (IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0F3EFB34B5BB26A1D0A3D4032611129C4ECC85C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.Box(new Rect(Screen.width - 110, 10, 100, 90), "Change Motion");
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_1), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)110))))), (10.0f), (100.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_1, _stringLiteralB0F3EFB34B5BB26A1D0A3D4032611129C4ECC85C, /*hidden argument*/NULL);
		// if (GUI.Button(new Rect(Screen.width - 100, 40, 80, 20), "Next"))
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)100))))), (40.0f), (80.0f), (20.0f), /*hidden argument*/NULL);
		bool L_4;
		L_4 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_3, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// anim.SetBool("Next", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_anim_4();
		NullCheck(L_5);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_5, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (bool)1, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if (GUI.Button(new Rect(Screen.width - 100, 70, 80, 20), "Back"))
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_7), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)100))))), (70.0f), (80.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_7, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_009b;
		}
	}
	{
		// anim.SetBool("Back", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_anim_4();
		NullCheck(L_9);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_9, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)1, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityChan.IdleChanger::RandomChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IdleChanger_RandomChange_mBD728634AC8BEEE2BEE1EB2ED63086397B7ACCCC (IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * L_0 = (U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 *)il2cpp_codegen_object_new(U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295_il2cpp_TypeInfo_var);
		U3CRandomChangeU3Ed__9__ctor_mFAE66ADAD4A28AC46AE92E738D02D51FC5F73355(L_0, 0, /*hidden argument*/NULL);
		U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UnityChan.IdleChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleChanger__ctor_mD4D10F55646A6C4B175FAA1C94CA3B1DC8D2B46C (IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * __this, const RuntimeMethod* method)
{
	{
		// public float _threshold = 0.5f;             // ランダム判定の閾値
		__this->set__threshold_8((0.5f));
		// public float _interval = 10f;               // ランダム判定のインターバル
		__this->set__interval_9((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KeyHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyHandler_Start_mDEA14DCFC031EEF2E7F76360730CC5E8372EC61B (KeyHandler_tAC184E6F8609DA7DBEE4D9443131412D1E08D30F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void KeyHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyHandler_Update_m0147C8A95B885500D8CEDCD6EE73460E1C06BDCB (KeyHandler_tAC184E6F8609DA7DBEE4D9443131412D1E08D30F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void KeyHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyHandler__ctor_m026D39285DF331C50B94E1B37B110B1AEC09E255 (KeyHandler_tAC184E6F8609DA7DBEE4D9443131412D1E08D30F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NetworkCommandLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCommandLine_Start_m450BB45BA40BE028F014D49371F918C565073D8A (NetworkCommandLine_t591ED2A215E4CBEE19B702E0953419E13962E50F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisNetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_m0FAE471BA051A098231661F8D0946BCC56CD06AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// netManager = GetComponentInParent<NetworkManager>();
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_0;
		L_0 = Component_GetComponentInParent_TisNetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_m0FAE471BA051A098231661F8D0946BCC56CD06AB(__this, /*hidden argument*/Component_GetComponentInParent_TisNetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_m0FAE471BA051A098231661F8D0946BCC56CD06AB_RuntimeMethod_var);
		__this->set_netManager_4(L_0);
		// if (Application.isEditor) return;
		bool L_1;
		L_1 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (Application.isEditor) return;
		return;
	}

IL_0014:
	{
		// switch (netRole)
		String_t* L_2 = __this->get_netRole_5();
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0092;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0046:
	{
		// netManager.StartServer();
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_10 = __this->get_netManager_4();
		NullCheck(L_10);
		SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * L_11;
		L_11 = NetworkManager_StartServer_m5A212BB8491EB8B459B9C29904313B9CDC36D666(L_10, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0053:
	{
		// netManager.StartHost();
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_12 = __this->get_netManager_4();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_13 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 ));
		Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  L_14 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_15 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C ));
		Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  L_16 = V_4;
		NullCheck(L_12);
		SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * L_17;
		L_17 = NetworkManager_StartHost_mA94AF1A168F07FAF13107C602DC7EAD002341A9B(L_12, L_13, L_14, L_15, L_16, (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0086:
	{
		// netManager.StartClient();
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_18 = __this->get_netManager_4();
		NullCheck(L_18);
		SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * L_19;
		L_19 = NetworkManager_StartClient_m1DF609A5478CFE30892D738E3CF94B0B373572C8(L_18, /*hidden argument*/NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void NetworkCommandLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCommandLine__ctor_m319EE5BD5D7DC42642A051CD5CF69662D7F2D26D (NetworkCommandLine_t591ED2A215E4CBEE19B702E0953419E13962E50F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.RandomWind::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomWind_Start_m70CBE3C74ABBCD64482CA6EEB37226AFE63400AD (RandomWind_t0036D7F84C4A5013E2AE9612C7C3D6A8EB23EFBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// springBones = GetComponent<SpringManager>().springBones;
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_0;
		L_0 = Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566(__this, /*hidden argument*/Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566_RuntimeMethod_var);
		NullCheck(L_0);
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_1 = L_0->get_springBones_9();
		__this->set_springBones_4(L_1);
		// }
		return;
	}
}
// System.Void UnityChan.RandomWind::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomWind_Update_mA44031F05C2803C509199B8D45D45A2514BF6D9D (RandomWind_t0036D7F84C4A5013E2AE9612C7C3D6A8EB23EFBB * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 force = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (isWindActive)
		bool L_1 = __this->get_isWindActive_5();
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// force = new Vector3(Mathf.PerlinNoise(Time.time, 0.0f) * 0.005f, 0, 0);
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_3;
		L_3 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(L_2, (0.0f), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_3, (float)(0.00499999989f))), (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_0034:
	{
		// for (int i = 0; i < springBones.Length; i++)
		V_1 = 0;
		goto IL_004a;
	}

IL_0038:
	{
		// springBones[i].springForce = force;
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_4 = __this->get_springBones_4();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		NullCheck(L_7);
		L_7->set_springForce_10(L_8);
		// for (int i = 0; i < springBones.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < springBones.Length; i++)
		int32_t L_10 = V_1;
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_11 = __this->get_springBones_4();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityChan.RandomWind::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomWind_OnGUI_m708494CF0D4D64E2F5AB416963AD7AD6212A2F71 (RandomWind_t0036D7F84C4A5013E2AE9612C7C3D6A8EB23EFBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC473046B41946A22C532AEFD1B4D486A028D183C);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect rect1 = new Rect(10, Screen.height - 40, 400, 30);
		int32_t L_0;
		L_0 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), (10.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)40))))), (400.0f), (30.0f), /*hidden argument*/NULL);
		// isWindActive = GUI.Toggle(rect1, isWindActive, "Random Wind");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = V_0;
		bool L_2 = __this->get_isWindActive_5();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GUI_Toggle_mBBBD205D65CCBD3F737E90AC53FAE8A3C4AE0F1C(L_1, L_2, _stringLiteralC473046B41946A22C532AEFD1B4D486A028D183C, /*hidden argument*/NULL);
		__this->set_isWindActive_5(L_3);
		// }
		return;
	}
}
// System.Void UnityChan.RandomWind::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomWind__ctor_mC85B9B2A686A1E97A34E7EC2EBD8E651F8276574 (RandomWind_t0036D7F84C4A5013E2AE9612C7C3D6A8EB23EFBB * __this, const RuntimeMethod* method)
{
	{
		// public bool isWindActive = true;
		__this->set_isWindActive_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShowInGameMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowInGameMenu_Start_m4A0AF90B44CD3CC7BC72F95CE87D8FF19E53B4E9 (ShowInGameMenu_tD126C02F53DFF4BD5EF54927941FC57DF81622EA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ShowInGameMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowInGameMenu_Update_mB24AC9DA86837B123FAEF966A9EB16A9049AEABA (ShowInGameMenu_tD126C02F53DFF4BD5EF54927941FC57DF81622EA * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// inGameMenu.SetActive(!inGameMenu.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_inGameMenu_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_inGameMenu_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// playerScreen.SetActive(!playerScreen.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_playerScreen_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_playerScreen_5();
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ShowInGameMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowInGameMenu__ctor_m35DB1567B1B3C4B5D3DF1DAC4AEF08384E9DE338 (ShowInGameMenu_tD126C02F53DFF4BD5EF54927941FC57DF81622EA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.SplashScreen::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen_NextLevel_mE5533F84F19DBC3B04B54FDCB81BB87405487CD3 (SplashScreen_t5F8AF2DC7FB5802B3BA0C1FCB35E48E2D98795F7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityChan.SplashScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen__ctor_m45532172EE7B7F9624155B4EA7C4B4503308A44A (SplashScreen_t5F8AF2DC7FB5802B3BA0C1FCB35E48E2D98795F7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpotWithText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpotWithText_Start_mFC2B12FDEEEF1305183ABA4F96EC2826E77FEAE8 (SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC981FE8EBEBAD828602B958009B5539432A25F05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3854292C6A5F740280B321414BA5B86A4FA856C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerPos = GameObject.Find("UnityChan").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralF3854292C6A5F740280B321414BA5B86A4FA856C, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_playerPos_5(L_1);
		// UIText = GameObject.Find("UIText");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC981FE8EBEBAD828602B958009B5539432A25F05, /*hidden argument*/NULL);
		__this->set_UIText_6(L_2);
		// isTriggered = false;
		__this->set_isTriggered_7((bool)0);
		// text = gameObject.GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_3, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_text_8(L_4);
		// }
		return;
	}
}
// System.Void SpotWithText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpotWithText_Update_m63F7570DDC646986F6D4FA54C7A3598D1AFB0E97 (SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if ((transform.position - playerPos.position).magnitude < radius && !isTriggered)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_playerPos_5();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5;
		L_5 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_6 = __this->get_radius_4();
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_0056;
		}
	}
	{
		bool L_7 = __this->get_isTriggered_7();
		if (L_7)
		{
			goto IL_0056;
		}
	}
	{
		// isTriggered = true;
		__this->set_isTriggered_7((bool)1);
		// UIText.GetComponent<Text>().text = text.text;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_UIText_6();
		NullCheck(L_8);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_8, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_text_8();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// }
		return;
	}

IL_0056:
	{
		// else if ((transform.position - playerPos.position).magnitude > radius && isTriggered)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_playerPos_5();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_13, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		float L_17;
		L_17 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_18 = __this->get_radius_4();
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_00a5;
		}
	}
	{
		bool L_19 = __this->get_isTriggered_7();
		if (!L_19)
		{
			goto IL_00a5;
		}
	}
	{
		// isTriggered = false;
		__this->set_isTriggered_7((bool)0);
		// UIText.GetComponent<Text>().text = "";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_UIText_6();
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21;
		L_21 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_20, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void SpotWithText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpotWithText__ctor_mF90CFBDD8DEA25A63A3EA063273D1A4EA9C57EAA (SpotWithText_tB9A10FE915B375E6CBE626C0B791696D3756F2A2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.SpringBone::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_Awake_m9E69A3F5DACEC5AA80575E19794209B7843E4417 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	{
		// trs = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_trs_16(L_0);
		// localRotation = transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_1, /*hidden argument*/NULL);
		__this->set_localRotation_15(L_2);
		// managerRef = GetParentSpringManager(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_4;
		L_4 = SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3(__this, L_3, /*hidden argument*/NULL);
		__this->set_managerRef_20(L_4);
		// }
		return;
	}
}
// UnityChan.SpringManager UnityChan.SpringBone::GetParentSpringManager(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * V_0 = NULL;
	{
		// var springManager = t.GetComponent<SpringManager>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_1;
		L_1 = Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566(L_0, /*hidden argument*/Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566_RuntimeMethod_var);
		V_0 = L_1;
		// if (springManager != null)
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return springManager;
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_4 = V_0;
		return L_4;
	}

IL_0012:
	{
		// if (t.parent != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___t0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// return GetParentSpringManager(t.parent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___t0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_10;
		L_10 = SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3(__this, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002d:
	{
		// return null;
		return (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 *)NULL;
	}
}
// System.Void UnityChan.SpringBone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_Start_m69C8AD54C36FABD984EBA1156AC54BC7FA3AA421 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	{
		// springLength = Vector3.Distance(trs.position, child.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_trs_16();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_child_4();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_1, L_3, /*hidden argument*/NULL);
		__this->set_springLength_14(L_4);
		// currTipPos = child.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_child_4();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_6);
		// prevTipPos = child.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_child_4();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		__this->set_prevTipPos_18(L_8);
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::UpdateSpring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_UpdateSpring_mCBB26D530A0FB706D426785811662B19C48527D0 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// org = trs;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_trs_16();
		__this->set_org_19(L_0);
		// trs.localRotation = Quaternion.identity * localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_trs_16();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = __this->get_localRotation_15();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_1, L_4, /*hidden argument*/NULL);
		// float sqrDt = Time.deltaTime * Time.deltaTime;
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		// Vector3 force = trs.rotation * (boneAxis * stiffnessForce) / sqrDt;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_trs_16();
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_boneAxis_5();
		float L_10 = __this->get_stiffnessForce_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_8, L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// force += (prevTipPos - currTipPos) * dragForce / sqrDt;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_prevTipPos_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_currTipPos_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = __this->get_dragForce_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		float L_21 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_20, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		// force += springForce / sqrDt;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_springForce_10();
		float L_26 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_24, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		// Vector3 temp = currTipPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_currTipPos_17();
		V_2 = L_29;
		// currTipPos = (currTipPos - prevTipPos) + currTipPos + (force * sqrDt);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = __this->get_currTipPos_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = __this->get_prevTipPos_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_30, L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_currTipPos_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_1;
		float L_36 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_35, L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_34, L_37, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_38);
		// currTipPos = ((currTipPos - trs.position).normalized * springLength) + trs.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = __this->get_currTipPos_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = __this->get_trs_16();
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_39, L_41, /*hidden argument*/NULL);
		V_4 = L_42;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_44 = __this->get_springLength_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = __this->get_trs_16();
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_45, L_47, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_48);
		// for (int i = 0; i < colliders.Length; i++)
		V_5 = 0;
		goto IL_01f5;
	}

IL_0114:
	{
		// if (Vector3.Distance(currTipPos, colliders[i].transform.position) <= (radius + colliders[i].radius))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = __this->get_currTipPos_17();
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_50 = __this->get_colliders_11();
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		float L_56;
		L_56 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_49, L_55, /*hidden argument*/NULL);
		float L_57 = __this->get_radius_6();
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_58 = __this->get_colliders_11();
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		float L_62 = L_61->get_radius_4();
		if ((!(((float)L_56) <= ((float)((float)il2cpp_codegen_add((float)L_57, (float)L_62))))))
		{
			goto IL_01ef;
		}
	}
	{
		// Vector3 normal = (currTipPos - colliders[i].transform.position).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = __this->get_currTipPos_17();
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_64 = __this->get_colliders_11();
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_68, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_63, L_69, /*hidden argument*/NULL);
		V_4 = L_70;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		V_6 = L_71;
		// currTipPos = colliders[i].transform.position + (normal * (radius + colliders[i].radius));
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_72 = __this->get_colliders_11();
		int32_t L_73 = V_5;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_76, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = V_6;
		float L_79 = __this->get_radius_6();
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_80 = __this->get_colliders_11();
		int32_t L_81 = V_5;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		float L_84 = L_83->get_radius_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_78, ((float)il2cpp_codegen_add((float)L_79, (float)L_84)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		L_86 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_77, L_85, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_86);
		// currTipPos = ((currTipPos - trs.position).normalized * springLength) + trs.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = __this->get_currTipPos_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88 = __this->get_trs_16();
		NullCheck(L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_88, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_87, L_89, /*hidden argument*/NULL);
		V_4 = L_90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_92 = __this->get_springLength_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_91, L_92, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94 = __this->get_trs_16();
		NullCheck(L_94);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_94, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_93, L_95, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_96);
	}

IL_01ef:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_97 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_01f5:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_98 = V_5;
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_99 = __this->get_colliders_11();
		NullCheck(L_99);
		if ((((int32_t)L_98) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length))))))
		{
			goto IL_0114;
		}
	}
	{
		// prevTipPos = temp;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = V_2;
		__this->set_prevTipPos_18(L_100);
		// Vector3 aimVector = trs.TransformDirection(boneAxis);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101 = __this->get_trs_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = __this->get_boneAxis_5();
		NullCheck(L_101);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_101, L_102, /*hidden argument*/NULL);
		// Quaternion aimRotation = Quaternion.FromToRotation(aimVector, currTipPos - trs.position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = __this->get_currTipPos_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_105 = __this->get_trs_16();
		NullCheck(L_105);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
		L_106 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_105, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_104, L_106, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_108;
		L_108 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_103, L_107, /*hidden argument*/NULL);
		// Quaternion secondaryRotation = aimRotation * trs.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109 = __this->get_trs_16();
		NullCheck(L_109);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_110;
		L_110 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_109, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_111;
		L_111 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_108, L_110, /*hidden argument*/NULL);
		V_3 = L_111;
		// trs.rotation = Quaternion.Lerp(org.rotation, secondaryRotation, managerRef.dynamicRatio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_112 = __this->get_trs_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113 = __this->get_org_19();
		NullCheck(L_113);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_114;
		L_114 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_113, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_115 = V_3;
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_116 = __this->get_managerRef_20();
		NullCheck(L_116);
		float L_117 = L_116->get_dynamicRatio_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_118;
		L_118 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_114, L_115, L_117, /*hidden argument*/NULL);
		NullCheck(L_112);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_112, L_118, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_OnDrawGizmos_mF1426F6930ECA9616C023B54476074AD0F6D2FF9 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	{
		// if (debug)
		bool L_0 = __this->get_debug_12();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// Gizmos.color = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_1, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere(currTipPos, radius);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_currTipPos_17();
		float L_3 = __this->get_radius_6();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone__ctor_m3E77E3F2F607AB5F5CE94425005F956B5BCF2F48 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 boneAxis = new Vector3(-1.0f, 0.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_boneAxis_5(L_0);
		// public float radius = 0.05f;
		__this->set_radius_6((0.0500000007f));
		// public float stiffnessForce = 0.01f;
		__this->set_stiffnessForce_8((0.00999999978f));
		// public float dragForce = 0.4f;
		__this->set_dragForce_9((0.400000006f));
		// public Vector3 springForce = new Vector3(0.0f, -0.0001f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (-9.99999975E-05f), (0.0f), /*hidden argument*/NULL);
		__this->set_springForce_10(L_1);
		// public bool debug = true;
		__this->set_debug_12((bool)1);
		// public float threshold = 0.01f;
		__this->set_threshold_13((0.00999999978f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.SpringCollider::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringCollider_OnDrawGizmosSelected_m5454E18924D23D20F29D63FA6ACCC21BA38F3F62 (SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.color = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_0, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere(transform.position, radius);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_radius_4();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringCollider__ctor_mFA646F2BE2E4837D49EA5AC3485BCA32A7D973BE (SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * __this, const RuntimeMethod* method)
{
	{
		// public float radius = 0.5f;
		__this->set_radius_4((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.SpringManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_Start_mFDBBC09D5BC8FB882D46B5534CEA319E38E9F7F2 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	{
		// UpdateParameters();
		SpringManager_UpdateParameters_mC7B00164F9AE3B3EBB0641FB12E3DA8B1AF5D02A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_Update_m965F5EF76D559E5420AA1F87D236544C85577277 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_LateUpdate_m8BD1D389415F7CDC4A0F36735FB491F804150F9A (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (dynamicRatio != 0.0f)
		float L_0 = __this->get_dynamicRatio_4();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// for (int i = 0; i < springBones.Length; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0011:
	{
		// if (dynamicRatio > springBones[i].threshold)
		float L_1 = __this->get_dynamicRatio_4();
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_2 = __this->get_springBones_9();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		float L_6 = L_5->get_threshold_13();
		if ((!(((float)L_1) > ((float)L_6))))
		{
			goto IL_0033;
		}
	}
	{
		// springBones[i].UpdateSpring();
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_7 = __this->get_springBones_9();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		SpringBone_UpdateSpring_mCBB26D530A0FB706D426785811662B19C48527D0(L_10, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// for (int i = 0; i < springBones.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < springBones.Length; i++)
		int32_t L_12 = V_0;
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_13 = __this->get_springBones_9();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0011;
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::UpdateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameters_mC7B00164F9AE3B3EBB0641FB12E3DA8B1AF5D02A (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14F93B18F4A27E31C8383B5199FB110A2DEEB66F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF30125084BBDCC9569A0DA8872BAA0181599E988);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateParameter("stiffnessForce", stiffnessForce, stiffnessCurve);
		float L_0 = __this->get_stiffnessForce_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get_stiffnessCurve_6();
		SpringManager_UpdateParameter_mC7FC23D3FC30CA860881A18E911D04457CB3A523(__this, _stringLiteralF30125084BBDCC9569A0DA8872BAA0181599E988, L_0, L_1, /*hidden argument*/NULL);
		// UpdateParameter("dragForce", dragForce, dragCurve);
		float L_2 = __this->get_dragForce_7();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_dragCurve_8();
		SpringManager_UpdateParameter_mC7FC23D3FC30CA860881A18E911D04457CB3A523(__this, _stringLiteral14F93B18F4A27E31C8383B5199FB110A2DEEB66F, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::UpdateParameter(System.String,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameter_mC7FC23D3FC30CA860881A18E911D04457CB3A523 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, String_t* ___fieldName0, float ___baseValue1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	FieldInfo_t * V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		// var start = curve.keys[0].time;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve2;
		NullCheck(L_0);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1;
		L_1 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		V_0 = L_2;
		// var end = curve.keys[curve.length - 1].time;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve2;
		NullCheck(L_3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_4;
		L_4 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_3, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = ___curve2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_7;
		L_7 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1))))), /*hidden argument*/NULL);
		V_1 = L_7;
		// var prop = springBones[0].GetType().GetField(fieldName, System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Public);
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_8 = __this->get_springBones_9();
		NullCheck(L_8);
		int32_t L_9 = 0;
		SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Type_t * L_11;
		L_11 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___fieldName0;
		NullCheck(L_11);
		FieldInfo_t * L_13;
		L_13 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(42 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_11, L_12, ((int32_t)20));
		V_2 = L_13;
		// for (int i = 0; i < springBones.Length; i++)
		V_3 = 0;
		goto IL_008b;
	}

IL_0045:
	{
		// if (!springBones[i].isUseEachBoneForceSettings)
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_14 = __this->get_springBones_9();
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		bool L_18 = L_17->get_isUseEachBoneForceSettings_7();
		if (L_18)
		{
			goto IL_0087;
		}
	}
	{
		// var scale = curve.Evaluate(start + (end - start) * i / (springBones.Length - 1));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_19 = ___curve2;
		float L_20 = V_0;
		float L_21 = V_1;
		float L_22 = V_0;
		int32_t L_23 = V_3;
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_24 = __this->get_springBones_9();
		NullCheck(L_24);
		NullCheck(L_19);
		float L_25;
		L_25 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_19, ((float)il2cpp_codegen_add((float)L_20, (float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22)), (float)((float)((float)L_23))))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))), (int32_t)1)))))))), /*hidden argument*/NULL);
		V_4 = L_25;
		// prop.SetValue(springBones[i], baseValue * scale);
		FieldInfo_t * L_26 = V_2;
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_27 = __this->get_springBones_9();
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = ___baseValue1;
		float L_32 = V_4;
		float L_33 = ((float)il2cpp_codegen_multiply((float)L_31, (float)L_32));
		RuntimeObject * L_34 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_26);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_26, L_30, L_34, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// for (int i = 0; i < springBones.Length; i++)
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_008b:
	{
		// for (int i = 0; i < springBones.Length; i++)
		int32_t L_36 = V_3;
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_37 = __this->get_springBones_9();
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager__ctor_m6DB5D801F7C40927A5BEB80C25E709C3A52D8526 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	{
		// public float dynamicRatio = 1.0f;
		__this->set_dynamicRatio_4((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.ThirdPersonCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_Start_m1A9953FCA7F5B333C2229975E9B10C41914106CA (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A20AE6F53B8FA6C15C1E5AD4DB71F3CD355EA43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB61CD73B87847118A72F96FE50B72C6B8712F56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA58F9BE54C16486B97A532CA51E3783D02B3F46);
		s_Il2CppMethodInitialized = true;
	}
	{
		// standardPos = GameObject.Find("CamPos").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralBB61CD73B87847118A72F96FE50B72C6B8712F56, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_standardPos_5(L_1);
		// if (GameObject.Find("FrontPos"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral7A20AE6F53B8FA6C15C1E5AD4DB71F3CD355EA43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// frontPos = GameObject.Find("FrontPos").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral7A20AE6F53B8FA6C15C1E5AD4DB71F3CD355EA43, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		__this->set_frontPos_6(L_5);
	}

IL_003b:
	{
		// if (GameObject.Find("JumpPos"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralEA58F9BE54C16486B97A532CA51E3783D02B3F46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// jumpPos = GameObject.Find("JumpPos").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralEA58F9BE54C16486B97A532CA51E3783D02B3F46, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		__this->set_jumpPos_7(L_9);
	}

IL_0061:
	{
		// transform.position = standardPos.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_standardPos_5();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_12, /*hidden argument*/NULL);
		// transform.forward = standardPos.forward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_standardPos_5();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_13, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_FixedUpdate_m7E6C54600135847FCA8BA1F3220530DD3AA52BD3 (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButton("Fire1"))
		bool L_0;
		L_0 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// setCameraPositionFrontView();
		ThirdPersonCamera_setCameraPositionFrontView_m4832BD4C9ACAFE5343A90361878700B66C7C11FF(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0013:
	{
		// else if (Input.GetButton("Fire2"))
		bool L_1;
		L_1 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// setCameraPositionJumpView();
		ThirdPersonCamera_setCameraPositionJumpView_m4B2CFD5A6D4FC9C6686BDD4E7987773E824EA1E7(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// setCameraPositionNormalView();
		ThirdPersonCamera_setCameraPositionNormalView_mA8F936A20380BC2C8FF944526CC0B15B212D2E78(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionNormalView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionNormalView_mA8F936A20380BC2C8FF944526CC0B15B212D2E78 (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method)
{
	{
		// if (bQuickSwitch == false)
		bool L_0 = __this->get_bQuickSwitch_8();
		if (L_0)
		{
			goto IL_006d;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, standardPos.position, Time.fixedDeltaTime * smooth);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_standardPos_5();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		float L_7 = __this->get_smooth_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_3, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_8, /*hidden argument*/NULL);
		// transform.forward = Vector3.Lerp(transform.forward, standardPos.forward, Time.fixedDeltaTime * smooth);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_standardPos_5();
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_12, /*hidden argument*/NULL);
		float L_14;
		L_14 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		float L_15 = __this->get_smooth_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_11, L_13, ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_9, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006d:
	{
		// transform.position = standardPos.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_standardPos_5();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_19, /*hidden argument*/NULL);
		// transform.forward = standardPos.forward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get_standardPos_5();
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_20, L_22, /*hidden argument*/NULL);
		// bQuickSwitch = false;
		__this->set_bQuickSwitch_8((bool)0);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionFrontView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionFrontView_m4832BD4C9ACAFE5343A90361878700B66C7C11FF (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method)
{
	{
		// bQuickSwitch = true;
		__this->set_bQuickSwitch_8((bool)1);
		// transform.position = frontPos.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_frontPos_6();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_2, /*hidden argument*/NULL);
		// transform.forward = frontPos.forward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_frontPos_6();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::setCameraPositionJumpView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_setCameraPositionJumpView_m4B2CFD5A6D4FC9C6686BDD4E7987773E824EA1E7 (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method)
{
	{
		// bQuickSwitch = false;
		__this->set_bQuickSwitch_8((bool)0);
		// transform.position = Vector3.Lerp(transform.position, jumpPos.position, Time.fixedDeltaTime * smooth);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_jumpPos_7();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		float L_6 = __this->get_smooth_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_2, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_7, /*hidden argument*/NULL);
		// transform.forward = Vector3.Lerp(transform.forward, jumpPos.forward, Time.fixedDeltaTime * smooth);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_jumpPos_7();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		float L_14 = __this->get_smooth_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_10, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_8, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.ThirdPersonCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera__ctor_mE3BA993B20D07C5A6719623449FC385D65F61E39 (ThirdPersonCamera_tC0FD20290D0F69290144F828CD7D58D3EF00BF5C * __this, const RuntimeMethod* method)
{
	{
		// public float smooth = 3f;       // カメラモーションのスムーズ化用変数
		__this->set_smooth_4((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_Start_m0A740416BDD03BED13683E84014995B7F227C07C (UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_17(L_0);
		// col = GetComponent<CapsuleCollider>();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		__this->set_col_12(L_1);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2;
		L_2 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_13(L_2);
		// cameraObject = GameObject.FindWithTag("MainCamera");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		__this->set_cameraObject_19(L_3);
		// orgColHight = col.height;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_4 = __this->get_col_12();
		NullCheck(L_4);
		float L_5;
		L_5 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_4, /*hidden argument*/NULL);
		__this->set_orgColHight_15(L_5);
		// orgVectColCenter = col.center;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_6 = __this->get_col_12();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = CapsuleCollider_get_center_m6374F7457A9450CAFFAD2DF0C9D1419BF9E304CB(L_6, /*hidden argument*/NULL);
		__this->set_orgVectColCenter_16(L_7);
		// }
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_FixedUpdate_mDFFC0EB424AD4B922637D3C4486F03DD43DB3A0C (UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EEB44230D18B63FD2EE917847EC8588A2354785);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6142D87798990EB03763CFE5B4D7142F9FF6DB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral880BA69446D7C58BFFFA1A35EF2C5C9CE3C71FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE4B715AAAA58DCCE03CE0702B58CE77A631DE43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	String_t* G_B2_0 = NULL;
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * G_B3_2 = NULL;
	{
		// float h = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// float v = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 inputDirection = h * Vector3.right + v * Vector3.forward;
		float L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// float direction = 0;
		V_3 = (0.0f);
		// anim.SetFloat("Speed", inputDirection.magnitude > 1 ? 1 : inputDirection.magnitude);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_anim_17();
		float L_10;
		L_10 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		G_B1_0 = _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
		G_B1_1 = L_9;
		if ((((float)L_10) > ((float)(1.0f))))
		{
			G_B2_0 = _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
			G_B2_1 = L_9;
			goto IL_005a;
		}
	}
	{
		float L_11;
		L_11 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// if (inputDirection.magnitude > 0)
		float L_12;
		L_12 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0182;
		}
	}
	{
		// inputDirection = inputDirection.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_2 = L_13;
		// float angle = Vector3.Angle(Vector3.forward, inputDirection);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
		float L_16;
		L_16 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		// float angleIni = transform.eulerAngles[1];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		float L_19;
		L_19 = Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), 1, /*hidden argument*/NULL);
		V_5 = L_19;
		// if (angleIni > 180) angleIni = -360 + angleIni;
		float L_20 = V_5;
		if ((!(((float)L_20) > ((float)(180.0f)))))
		{
			goto IL_00b4;
		}
	}
	{
		// if (angleIni > 180) angleIni = -360 + angleIni;
		float L_21 = V_5;
		V_5 = ((float)il2cpp_codegen_add((float)(-360.0f), (float)L_21));
	}

IL_00b4:
	{
		// if (h < 0) angle = -angle;
		float L_22 = V_0;
		if ((!(((float)L_22) < ((float)(0.0f)))))
		{
			goto IL_00c1;
		}
	}
	{
		// if (h < 0) angle = -angle;
		float L_23 = V_4;
		V_4 = ((-L_23));
	}

IL_00c1:
	{
		// float alfa = angle - angleIni;
		float L_24 = V_4;
		float L_25 = V_5;
		V_6 = ((float)il2cpp_codegen_subtract((float)L_24, (float)L_25));
		// dir = angle;
		float L_26 = V_4;
		__this->set_dir_24(L_26);
		// if (Mathf.Abs(alfa) > 1)
		float L_27 = V_6;
		float L_28;
		L_28 = fabsf(L_27);
		if ((!(((float)L_28) > ((float)(1.0f)))))
		{
			goto IL_016b;
		}
	}
	{
		// if ((alfa >= 0 && alfa < 180) || alfa <= -180)
		float L_29 = V_6;
		if ((!(((float)L_29) >= ((float)(0.0f)))))
		{
			goto IL_00f3;
		}
	}
	{
		float L_30 = V_6;
		if ((((float)L_30) < ((float)(180.0f))))
		{
			goto IL_00fc;
		}
	}

IL_00f3:
	{
		float L_31 = V_6;
		if ((!(((float)L_31) <= ((float)(-180.0f)))))
		{
			goto IL_0119;
		}
	}

IL_00fc:
	{
		// anim.SetFloat("Direction", 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_32 = __this->get_anim_17();
		NullCheck(L_32);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_32, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, (0.0f), /*hidden argument*/NULL);
		// direction = 1;
		V_3 = (1.0f);
		// }
		goto IL_0134;
	}

IL_0119:
	{
		// anim.SetFloat("Direction", 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_33 = __this->get_anim_17();
		NullCheck(L_33);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_33, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, (0.0f), /*hidden argument*/NULL);
		// direction = -1;
		V_3 = (-1.0f);
	}

IL_0134:
	{
		// if (Mathf.Abs(alfa) < rotateSpeed)
		float L_34 = V_6;
		float L_35;
		L_35 = fabsf(L_34);
		float L_36 = __this->get_rotateSpeed_10();
		if ((!(((float)L_35) < ((float)L_36))))
		{
			goto IL_0197;
		}
	}
	{
		// direction = direction * Mathf.Abs(alfa) / rotateSpeed;
		float L_37 = V_3;
		float L_38 = V_6;
		float L_39;
		L_39 = fabsf(L_38);
		float L_40 = __this->get_rotateSpeed_10();
		V_3 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_37, (float)L_39))/(float)L_40));
		// anim.SetFloat("Direction", 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_41 = __this->get_anim_17();
		NullCheck(L_41);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_41, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, (0.0f), /*hidden argument*/NULL);
		// }
		goto IL_0197;
	}

IL_016b:
	{
		// else anim.SetFloat("Direction", 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_42 = __this->get_anim_17();
		NullCheck(L_42);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_42, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, (0.0f), /*hidden argument*/NULL);
		// }
		goto IL_0197;
	}

IL_0182:
	{
		// else anim.SetFloat("Direction", 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_43 = __this->get_anim_17();
		NullCheck(L_43);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_43, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, (0.0f), /*hidden argument*/NULL);
	}

IL_0197:
	{
		// anim.speed = animSpeed;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_44 = __this->get_anim_17();
		float L_45 = __this->get_animSpeed_4();
		NullCheck(L_44);
		Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041(L_44, L_45, /*hidden argument*/NULL);
		// currentBaseState = anim.GetCurrentAnimatorStateInfo(0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_46 = __this->get_anim_17();
		NullCheck(L_46);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_47;
		L_47 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_46, 0, /*hidden argument*/NULL);
		__this->set_currentBaseState_18(L_47);
		// rb.useGravity = true;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_48 = __this->get_rb_13();
		NullCheck(L_48);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_48, (bool)1, /*hidden argument*/NULL);
		// velocity = inputDirection;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
		__this->set_velocity_14(L_49);
		// velocity *= forwardSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = __this->get_velocity_14();
		float L_51 = __this->get_forwardSpeed_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_50, L_51, /*hidden argument*/NULL);
		__this->set_velocity_14(L_52);
		// if (Input.GetButtonDown("Jump"))
		bool L_53;
		L_53 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_023d;
		}
	}
	{
		// if (currentBaseState.nameHash == locoState)
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_54 = __this->get_address_of_currentBaseState_18();
		int32_t L_55;
		L_55 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var);
		int32_t L_56 = ((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->get_locoState_21();
		if ((!(((uint32_t)L_55) == ((uint32_t)L_56))))
		{
			goto IL_023d;
		}
	}
	{
		// if (!anim.IsInTransition(0))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_57 = __this->get_anim_17();
		NullCheck(L_57);
		bool L_58;
		L_58 = Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9(L_57, 0, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_023d;
		}
	}
	{
		// rb.AddForce(Vector3.up * jumpPower, ForceMode.VelocityChange);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_59 = __this->get_rb_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_61 = __this->get_jumpPower_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_60, L_61, /*hidden argument*/NULL);
		NullCheck(L_59);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_59, L_62, 2, /*hidden argument*/NULL);
		// anim.SetBool("Jump", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_63 = __this->get_anim_17();
		NullCheck(L_63);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_63, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, (bool)1, /*hidden argument*/NULL);
	}

IL_023d:
	{
		// transform.localPosition += velocity * Time.fixedDeltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65 = L_64;
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_65, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = __this->get_velocity_14();
		float L_68;
		L_68 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_67, L_68, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_66, L_69, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_65, L_70, /*hidden argument*/NULL);
		// transform.Rotate(0, direction * rotateSpeed, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_72 = V_3;
		float L_73 = __this->get_rotateSpeed_10();
		NullCheck(L_71);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_71, (0.0f), ((float)il2cpp_codegen_multiply((float)L_72, (float)L_73)), (0.0f), /*hidden argument*/NULL);
		// if (currentBaseState.nameHash == locoState)
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_74 = __this->get_address_of_currentBaseState_18();
		int32_t L_75;
		L_75 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var);
		int32_t L_76 = ((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->get_locoState_21();
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_02a4;
		}
	}
	{
		// if (useCurves)
		bool L_77 = __this->get_useCurves_6();
		if (!L_77)
		{
			goto IL_0427;
		}
	}
	{
		// resetCollider();
		UnityChanControlScriptWithRgidBody_resetCollider_mF89B2D5F1538FE630201D70696EAA440EF3C463C(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_02a4:
	{
		// else if (currentBaseState.nameHash == jumpState)
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_78 = __this->get_address_of_currentBaseState_18();
		int32_t L_79;
		L_79 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_78, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var);
		int32_t L_80 = ((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->get_jumpState_22();
		if ((!(((uint32_t)L_79) == ((uint32_t)L_80))))
		{
			goto IL_03b8;
		}
	}
	{
		// cameraObject.SendMessage("setCameraPositionJumpView");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = __this->get_cameraObject_19();
		NullCheck(L_81);
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(L_81, _stringLiteral880BA69446D7C58BFFFA1A35EF2C5C9CE3C71FFE, /*hidden argument*/NULL);
		// if (!anim.IsInTransition(0))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_82 = __this->get_anim_17();
		NullCheck(L_82);
		bool L_83;
		L_83 = Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9(L_82, 0, /*hidden argument*/NULL);
		if (L_83)
		{
			goto IL_0427;
		}
	}
	{
		// if (useCurves)
		bool L_84 = __this->get_useCurves_6();
		if (!L_84)
		{
			goto IL_03a6;
		}
	}
	{
		// float jumpHeight = anim.GetFloat("JumpHeight");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_85 = __this->get_anim_17();
		NullCheck(L_85);
		float L_86;
		L_86 = Animator_GetFloat_m74C168FD46C780CD153838BDCE77F8B371456D46(L_85, _stringLiteral4EEB44230D18B63FD2EE917847EC8588A2354785, /*hidden argument*/NULL);
		V_8 = L_86;
		// float gravityControl = anim.GetFloat("GravityControl");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_87 = __this->get_anim_17();
		NullCheck(L_87);
		float L_88;
		L_88 = Animator_GetFloat_m74C168FD46C780CD153838BDCE77F8B371456D46(L_87, _stringLiteral6142D87798990EB03763CFE5B4D7142F9FF6DB68, /*hidden argument*/NULL);
		// if (gravityControl > 0)
		if ((!(((float)L_88) > ((float)(0.0f)))))
		{
			goto IL_031a;
		}
	}
	{
		// rb.useGravity = false;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_89 = __this->get_rb_13();
		NullCheck(L_89);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_89, (bool)0, /*hidden argument*/NULL);
	}

IL_031a:
	{
		// Ray ray = new Ray(transform.position + Vector3.up, -Vector3.up);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90;
		L_90 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_90, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_91, L_92, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_94, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_96;
		memset((&L_96), 0, sizeof(L_96));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_96), L_93, L_95, /*hidden argument*/NULL);
		// RaycastHit hitInfo = new RaycastHit();
		il2cpp_codegen_initobj((&V_9), sizeof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 ));
		// if (Physics.Raycast(ray, out hitInfo))
		bool L_97;
		L_97 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_96, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_9), /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_03a6;
		}
	}
	{
		// if (hitInfo.distance > useCurvesHeight)
		float L_98;
		L_98 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_9), /*hidden argument*/NULL);
		float L_99 = __this->get_useCurvesHeight_7();
		if ((!(((float)L_98) > ((float)L_99))))
		{
			goto IL_03a0;
		}
	}
	{
		// col.height = orgColHight - jumpHeight;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_100 = __this->get_col_12();
		float L_101 = __this->get_orgColHight_15();
		float L_102 = V_8;
		NullCheck(L_100);
		CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496(L_100, ((float)il2cpp_codegen_subtract((float)L_101, (float)L_102)), /*hidden argument*/NULL);
		// float adjCenterY = orgVectColCenter.y + jumpHeight;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_103 = __this->get_address_of_orgVectColCenter_16();
		float L_104 = L_103->get_y_3();
		float L_105 = V_8;
		V_10 = ((float)il2cpp_codegen_add((float)L_104, (float)L_105));
		// col.center = new Vector3(0, adjCenterY, 0);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_106 = __this->get_col_12();
		float L_107 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_108), (0.0f), L_107, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_106);
		CapsuleCollider_set_center_m36F35F070DFC2CBFC87532004073CA8D56F3678F(L_106, L_108, /*hidden argument*/NULL);
		// }
		goto IL_03a6;
	}

IL_03a0:
	{
		// resetCollider();
		UnityChanControlScriptWithRgidBody_resetCollider_mF89B2D5F1538FE630201D70696EAA440EF3C463C(__this, /*hidden argument*/NULL);
	}

IL_03a6:
	{
		// anim.SetBool("Jump", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_109 = __this->get_anim_17();
		NullCheck(L_109);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_109, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_03b8:
	{
		// else if (currentBaseState.nameHash == idleState)
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_110 = __this->get_address_of_currentBaseState_18();
		int32_t L_111;
		L_111 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_110, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var);
		int32_t L_112 = ((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->get_idleState_20();
		if ((!(((uint32_t)L_111) == ((uint32_t)L_112))))
		{
			goto IL_03f6;
		}
	}
	{
		// if (useCurves)
		bool L_113 = __this->get_useCurves_6();
		if (!L_113)
		{
			goto IL_03d8;
		}
	}
	{
		// resetCollider();
		UnityChanControlScriptWithRgidBody_resetCollider_mF89B2D5F1538FE630201D70696EAA440EF3C463C(__this, /*hidden argument*/NULL);
	}

IL_03d8:
	{
		// if (Input.GetButtonDown("Jump"))
		bool L_114;
		L_114 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_0427;
		}
	}
	{
		// anim.SetBool("Rest", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_115 = __this->get_anim_17();
		NullCheck(L_115);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_115, _stringLiteralAE4B715AAAA58DCCE03CE0702B58CE77A631DE43, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_03f6:
	{
		// else if (currentBaseState.nameHash == restState)
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_116 = __this->get_address_of_currentBaseState_18();
		int32_t L_117;
		L_117 = AnimatorStateInfo_get_nameHash_mC9F45156C83F42488C753C811229B50E74D97E5E((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_116, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var);
		int32_t L_118 = ((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->get_restState_23();
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_0427;
		}
	}
	{
		// if (!anim.IsInTransition(0))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_119 = __this->get_anim_17();
		NullCheck(L_119);
		bool L_120;
		L_120 = Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9(L_119, 0, /*hidden argument*/NULL);
		if (L_120)
		{
			goto IL_0427;
		}
	}
	{
		// anim.SetBool("Rest", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_121 = __this->get_anim_17();
		NullCheck(L_121);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_121, _stringLiteralAE4B715AAAA58DCCE03CE0702B58CE77A631DE43, (bool)0, /*hidden argument*/NULL);
	}

IL_0427:
	{
		// }
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::resetCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody_resetCollider_mF89B2D5F1538FE630201D70696EAA440EF3C463C (UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9 * __this, const RuntimeMethod* method)
{
	{
		// col.height = orgColHight;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_0 = __this->get_col_12();
		float L_1 = __this->get_orgColHight_15();
		NullCheck(L_0);
		CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496(L_0, L_1, /*hidden argument*/NULL);
		// col.center = orgVectColCenter;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_2 = __this->get_col_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_orgVectColCenter_16();
		NullCheck(L_2);
		CapsuleCollider_set_center_m36F35F070DFC2CBFC87532004073CA8D56F3678F(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody__ctor_mF2B8646FED2E5B255EA0AD65BCF1CB4BA30FA439 (UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9 * __this, const RuntimeMethod* method)
{
	{
		// public float animSpeed = 1.5f;
		__this->set_animSpeed_4((1.5f));
		// public float lookSmoother = 3.0f;
		__this->set_lookSmoother_5((3.0f));
		// public bool useCurves = true;
		__this->set_useCurves_6((bool)1);
		// public float useCurvesHeight = 0.5f;
		__this->set_useCurvesHeight_7((0.5f));
		// public float forwardSpeed = 7.0f;
		__this->set_forwardSpeed_8((7.0f));
		// public float backwardSpeed = 2.0f;
		__this->set_backwardSpeed_9((2.0f));
		// public float rotateSpeed = 10.0f;
		__this->set_rotateSpeed_10((10.0f));
		// public float jumpPower = 5.0f;
		__this->set_jumpPower_11((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChan.UnityChanControlScriptWithRgidBody::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChanControlScriptWithRgidBody__cctor_m334F03191AD5944C419F6F7E76767DC3A11D61EF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04EC4F81AD07B2B6F76B2D7A56FC33E5558850A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F8E7863AB6F059155307444D42AD47E889F06CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7040FF69C8903BD258116DC869C58A972AF5E772);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE474B80F684635C9E8A2D82048BB64372275D715);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int idleState = Animator.StringToHash("Base Layer.Idle");
		int32_t L_0;
		L_0 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteral4F8E7863AB6F059155307444D42AD47E889F06CA, /*hidden argument*/NULL);
		((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->set_idleState_20(L_0);
		// static int locoState = Animator.StringToHash("Base Layer.Locomotion");
		int32_t L_1;
		L_1 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteralE474B80F684635C9E8A2D82048BB64372275D715, /*hidden argument*/NULL);
		((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->set_locoState_21(L_1);
		// static int jumpState = Animator.StringToHash("Base Layer.Jump");
		int32_t L_2;
		L_2 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteral04EC4F81AD07B2B6F76B2D7A56FC33E5558850A6, /*hidden argument*/NULL);
		((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->set_jumpState_22(L_2);
		// static int restState = Animator.StringToHash("Base Layer.Rest");
		int32_t L_3;
		L_3 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteral7040FF69C8903BD258116DC869C58A972AF5E772, /*hidden argument*/NULL);
		((UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_StaticFields*)il2cpp_codegen_static_fields_for(UnityChanControlScriptWithRgidBody_tB6D8B69C5BACCEBC1437576C78FC97D0CD1532E9_il2cpp_TypeInfo_var))->set_restState_23(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.AutoBlink/<RandomChange>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__22__ctor_mF0050FD4597EFBA55FE4AE1C29AAB0D9DD7193A7 (U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityChan.AutoBlink/<RandomChange>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__22_System_IDisposable_Dispose_m941DD404A76CFD72E876DCDC063B9EDEDA2E6582 (U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityChan.AutoBlink/<RandomChange>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRandomChangeU3Ed__22_MoveNext_m1A74554E5EBEAB7C8050066E75529761ABE97B11 (U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// float _seed = Random.Range(0.0f, 1.0f);
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_4;
		// if (!isBlink)
		AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_isBlink_11();
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// if (_seed > threshold)
		float L_7 = V_2;
		AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_threshold_14();
		if ((!(((float)L_7) > ((float)L_9))))
		{
			goto IL_0046;
		}
	}
	{
		// isBlink = true;
		AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * L_10 = V_1;
		NullCheck(L_10);
		L_10->set_isBlink_11((bool)1);
	}

IL_0046:
	{
		// yield return new WaitForSeconds(interval);
		AutoBlink_t7FD10BC83924129CA8369618871EA358BD062553 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_interval_15();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0060:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object UnityChan.AutoBlink/<RandomChange>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRandomChangeU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF11B7BB58F57E0AD1B5F7E328FFE1091BDC44C69 (U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityChan.AutoBlink/<RandomChange>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__22_System_Collections_IEnumerator_Reset_m311C92E24DB4DD743911926B395ADE09E8EF2ECD (U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRandomChangeU3Ed__22_System_Collections_IEnumerator_Reset_m311C92E24DB4DD743911926B395ADE09E8EF2ECD_RuntimeMethod_var)));
	}
}
// System.Object UnityChan.AutoBlink/<RandomChange>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRandomChangeU3Ed__22_System_Collections_IEnumerator_get_Current_mE50EA4E7B4CAB5544B637C02AAF66A953F002A3A (U3CRandomChangeU3Ed__22_tE40C76FF365F4B172AFFC673B6B3C2CA0F83899C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.IdleChanger/<RandomChange>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__9__ctor_mFAE66ADAD4A28AC46AE92E738D02D51FC5F73355 (U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityChan.IdleChanger/<RandomChange>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__9_System_IDisposable_Dispose_m94F1876C193EF1B2B665EF61E715F1255F144190 (U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityChan.IdleChanger/<RandomChange>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRandomChangeU3Ed__9_MoveNext_mB17A379788918B7B21C28D50A5E3085DB6428125 (U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// if (_random)
		IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get__random_7();
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		// float _seed = Random.Range(0.0f, 1.0f);
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_6;
		// if (_seed < _threshold)
		float L_7 = V_2;
		IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get__threshold_8();
		if ((!(((float)L_7) < ((float)L_9))))
		{
			goto IL_0052;
		}
	}
	{
		// anim.SetBool("Back", true);
		IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * L_10 = V_1;
		NullCheck(L_10);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = L_10->get_anim_4();
		NullCheck(L_11);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_11, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_006c;
	}

IL_0052:
	{
		// else if (_seed >= _threshold)
		float L_12 = V_2;
		IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get__threshold_8();
		if ((!(((float)L_12) >= ((float)L_14))))
		{
			goto IL_006c;
		}
	}
	{
		// anim.SetBool("Next", true);
		IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * L_15 = V_1;
		NullCheck(L_15);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = L_15->get_anim_4();
		NullCheck(L_16);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_16, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (bool)1, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// yield return new WaitForSeconds(_interval);
		IdleChanger_t218A1AFF60E276AB24514BFFE70AB62E10D5A628 * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->get__interval_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_19 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_19, L_18, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0086:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object UnityChan.IdleChanger/<RandomChange>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRandomChangeU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7FE306D0C25908AA06C2D562DAF6A100603732EC (U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityChan.IdleChanger/<RandomChange>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomChangeU3Ed__9_System_Collections_IEnumerator_Reset_m66C0F00A852C1BBF499151E8607390B3BBD23B76 (U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRandomChangeU3Ed__9_System_Collections_IEnumerator_Reset_m66C0F00A852C1BBF499151E8607390B3BBD23B76_RuntimeMethod_var)));
	}
}
// System.Object UnityChan.IdleChanger/<RandomChange>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRandomChangeU3Ed__9_System_Collections_IEnumerator_get_Current_mABEE6E032D7E0ABF8495F5A9A96D4905167B5A49 (U3CRandomChangeU3Ed__9_t1BB70381D5EFFF14F83F8A8FB3FD8E64CD213295 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
