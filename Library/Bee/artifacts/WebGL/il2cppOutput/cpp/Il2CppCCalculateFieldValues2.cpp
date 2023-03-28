#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Func`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2>>
struct Func_1_tF5F7F5DCF1679E08B2536581A6E1EEF5529155C9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_tDAE7DF0D2B0BE3EB2FD25FB4418704E27A2BF1D5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesAvailable
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable_0;
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesOverflow
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow_1;
};

// UnityEngine.AudioSettings
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};

struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged_0;
	// System.Action UnityEngine.AudioSettings::OnAudioSystemShuttingDown
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown_1;
	// System.Action UnityEngine.AudioSettings::OnAudioSystemStartedUp
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.AssetFileNameExtensionAttribute
struct AssetFileNameExtensionAttribute_tEA86B663DC42BB5C4F9A2A081CD7D28845D9D056  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.AssetFileNameExtensionAttribute::<preferredExtension>k__BackingField
	String_t* ___U3CpreferredExtensionU3Ek__BackingField_0;
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.AssetFileNameExtensionAttribute::<otherExtensions>k__BackingField
	RuntimeObject* ___U3CotherExtensionsU3Ek__BackingField_1;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.Bindings.IgnoreAttribute
struct IgnoreAttribute_tAB3F6C4808BA16CD585D60A6353B3E0599DFCE4D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean UnityEngine.Bindings.IgnoreAttribute::<DoesNotContributeToSize>k__BackingField
	bool ___U3CDoesNotContributeToSizeU3Ek__BackingField_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.NativeClassAttribute
struct NativeClassAttribute_t774C48B9F745C9B0FD2FA82F9B42D4A18E162FA7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;
	// System.String UnityEngine.NativeClassAttribute::<Declaration>k__BackingField
	String_t* ___U3CDeclarationU3Ek__BackingField_1;
};

// UnityEngine.Bindings.NativeConditionalAttribute
struct NativeConditionalAttribute_tB722B3ED350E82853F8CEFF672A6CDC4B6B362CA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Bindings.NativeConditionalAttribute::<Condition>k__BackingField
	String_t* ___U3CConditionU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Bindings.NativeConditionalAttribute::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
};

// UnityEngine.Bindings.NativeHeaderAttribute
struct NativeHeaderAttribute_t35DDAA41C31EEE4C94D2586F33D3EB26C0EA6F51  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Bindings.NativeHeaderAttribute::<Header>k__BackingField
	String_t* ___U3CHeaderU3Ek__BackingField_0;
};

// UnityEngine.Bindings.NativeMethodAttribute
struct NativeMethodAttribute_tDE40C2DA59999D4870D672D8EDACC3504D2FA270  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Bindings.NativeMethodAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<IsThreadSafe>k__BackingField
	bool ___U3CIsThreadSafeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<IsFreeFunction>k__BackingField
	bool ___U3CIsFreeFunctionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<ThrowsException>k__BackingField
	bool ___U3CThrowsExceptionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<HasExplicitThis>k__BackingField
	bool ___U3CHasExplicitThisU3Ek__BackingField_4;
};

// UnityEngine.Bindings.NativeNameAttribute
struct NativeNameAttribute_t222751782B5418807DFE2A88CA0B24CA691B8621  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Bindings.NativeNameAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// UnityEngine.Bindings.NativeThrowsAttribute
struct NativeThrowsAttribute_t211CE8D047A8D45676C9ED399D5AA3B4A2C3E625  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean UnityEngine.Bindings.NativeThrowsAttribute::<ThrowsException>k__BackingField
	bool ___U3CThrowsExceptionU3Ek__BackingField_0;
};

// UnityEngine.Bindings.NativeTypeAttribute
struct NativeTypeAttribute_tB60F1675F1F20B6CB1B871FDDD067D672F75B8D1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Bindings.NativeTypeAttribute::<Header>k__BackingField
	String_t* ___U3CHeaderU3Ek__BackingField_0;
	// System.String UnityEngine.Bindings.NativeTypeAttribute::<IntermediateScriptingStructName>k__BackingField
	String_t* ___U3CIntermediateScriptingStructNameU3Ek__BackingField_1;
	// UnityEngine.Bindings.CodegenOptions UnityEngine.Bindings.NativeTypeAttribute::<CodegenOptions>k__BackingField
	int32_t ___U3CCodegenOptionsU3Ek__BackingField_2;
};

// UnityEngine.Bindings.NotNullAttribute
struct NotNullAttribute_t2E29B7802E8ED55CEA04EC4A6C254C6B60272DF7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Bindings.NotNullAttribute::<Exception>k__BackingField
	String_t* ___U3CExceptionU3Ek__BackingField_0;
};

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct RequiredByNativeCodeAttribute_t86B11F2BA12BB463CE3258E64E16B43484014FCA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Scripting.RequiredByNativeCodeAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Scripting.RequiredByNativeCodeAttribute::<Optional>k__BackingField
	bool ___U3COptionalU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Scripting.RequiredByNativeCodeAttribute::<GenerateProxy>k__BackingField
	bool ___U3CGenerateProxyU3Ek__BackingField_2;
};

// UnityEngine.Bindings.StaticAccessorAttribute
struct StaticAccessorAttribute_tDE194716AED7A414D473DC570B2E0035A5CE130A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Bindings.StaticAccessorAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// UnityEngine.Bindings.StaticAccessorType UnityEngine.Bindings.StaticAccessorAttribute::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 
{
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_1;
};

// UnityEngine.Bindings.NativePropertyAttribute
struct NativePropertyAttribute_tAF7FB03BF7FFE9E8AB0E75B0F842FC0AA22AE607  : public NativeMethodAttribute_tDE40C2DA59999D4870D672D8EDACC3504D2FA270
{
	// UnityEngine.Bindings.TargetType UnityEngine.Bindings.NativePropertyAttribute::<TargetType>k__BackingField
	int32_t ___U3CTargetTypeU3Ek__BackingField_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.SendMouseEvents
struct SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39  : public RuntimeObject
{
};

struct SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields
{
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_tDAE7DF0D2B0BE3EB2FD25FB4418704E27A2BF1D5* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_tDAE7DF0D2B0BE3EB2FD25FB4418704E27A2BF1D5* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_tDAE7DF0D2B0BE3EB2FD25FB4418704E27A2BF1D5* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___m_Cameras_4;
	// System.Func`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2>> UnityEngine.SendMouseEvents::s_GetMouseState
	Func_1_tF5F7F5DCF1679E08B2536581A6E1EEF5529155C9* ___s_GetMouseState_5;
	// UnityEngine.Vector2 UnityEngine.SendMouseEvents::s_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_MousePosition_6;
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseButtonPressedThisFrame
	bool ___s_MouseButtonPressedThisFrame_7;
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseButtonIsPressed
	bool ___s_MouseButtonIsPressed_8;
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Audio.AudioClipPlayable
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Audio.AudioMixerPlayable
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Audio.AudioPlayableOutput
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 
{
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_MeshIndexSet
	bool ___m_MeshIndexSet_10;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_pinvoke
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_com
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6000[2] = 
{
	static_cast<int32_t>(offsetof(HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314, ___target_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314, ___camera_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6001[9] = 
{
	static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___s_MouseUsed_0)),static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___m_LastHit_1)),static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___m_MouseDownHit_2)),static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___m_CurrentHit_3)),static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___m_Cameras_4)),static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___s_GetMouseState_5)),static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___s_MousePosition_6)),static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___s_MouseButtonPressedThisFrame_7)),static_cast<int32_t>(offsetof(SendMouseEvents_t30F6848ABBD277C51340A02CF6664B8D6183EC39_StaticFields, ___s_MouseButtonIsPressed_8)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6003[2] = 
{
	static_cast<int32_t>(offsetof(AssetFileNameExtensionAttribute_tEA86B663DC42BB5C4F9A2A081CD7D28845D9D056, ___U3CpreferredExtensionU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(AssetFileNameExtensionAttribute_tEA86B663DC42BB5C4F9A2A081CD7D28845D9D056, ___U3CotherExtensionsU3Ek__BackingField_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6007[2] = 
{
	static_cast<int32_t>(offsetof(NativeClassAttribute_t774C48B9F745C9B0FD2FA82F9B42D4A18E162FA7, ___U3CQualifiedNativeNameU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(NativeClassAttribute_t774C48B9F745C9B0FD2FA82F9B42D4A18E162FA7, ___U3CDeclarationU3Ek__BackingField_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6010[2] = 
{
	static_cast<int32_t>(offsetof(NativeConditionalAttribute_tB722B3ED350E82853F8CEFF672A6CDC4B6B362CA, ___U3CConditionU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(NativeConditionalAttribute_tB722B3ED350E82853F8CEFF672A6CDC4B6B362CA, ___U3CEnabledU3Ek__BackingField_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6011[1] = 
{
	static_cast<int32_t>(offsetof(NativeHeaderAttribute_t35DDAA41C31EEE4C94D2586F33D3EB26C0EA6F51, ___U3CHeaderU3Ek__BackingField_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6012[1] = 
{
	static_cast<int32_t>(offsetof(NativeNameAttribute_t222751782B5418807DFE2A88CA0B24CA691B8621, ___U3CNameU3Ek__BackingField_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6013[5] = 
{
	static_cast<int32_t>(offsetof(NativeMethodAttribute_tDE40C2DA59999D4870D672D8EDACC3504D2FA270, ___U3CNameU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(NativeMethodAttribute_tDE40C2DA59999D4870D672D8EDACC3504D2FA270, ___U3CIsThreadSafeU3Ek__BackingField_1)),static_cast<int32_t>(offsetof(NativeMethodAttribute_tDE40C2DA59999D4870D672D8EDACC3504D2FA270, ___U3CIsFreeFunctionU3Ek__BackingField_2)),static_cast<int32_t>(offsetof(NativeMethodAttribute_tDE40C2DA59999D4870D672D8EDACC3504D2FA270, ___U3CThrowsExceptionU3Ek__BackingField_3)),static_cast<int32_t>(offsetof(NativeMethodAttribute_tDE40C2DA59999D4870D672D8EDACC3504D2FA270, ___U3CHasExplicitThisU3Ek__BackingField_4)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6014[3] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6015[1] = 
{
	static_cast<int32_t>(offsetof(NativePropertyAttribute_tAF7FB03BF7FFE9E8AB0E75B0F842FC0AA22AE607, ___U3CTargetTypeU3Ek__BackingField_5)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6016[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6018[3] = 
{
	static_cast<int32_t>(offsetof(NativeTypeAttribute_tB60F1675F1F20B6CB1B871FDDD067D672F75B8D1, ___U3CHeaderU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(NativeTypeAttribute_tB60F1675F1F20B6CB1B871FDDD067D672F75B8D1, ___U3CIntermediateScriptingStructNameU3Ek__BackingField_1)),static_cast<int32_t>(offsetof(NativeTypeAttribute_tB60F1675F1F20B6CB1B871FDDD067D672F75B8D1, ___U3CCodegenOptionsU3Ek__BackingField_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6019[1] = 
{
	static_cast<int32_t>(offsetof(NotNullAttribute_t2E29B7802E8ED55CEA04EC4A6C254C6B60272DF7, ___U3CExceptionU3Ek__BackingField_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6023[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6024[2] = 
{
	static_cast<int32_t>(offsetof(StaticAccessorAttribute_tDE194716AED7A414D473DC570B2E0035A5CE130A, ___U3CNameU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(StaticAccessorAttribute_tDE194716AED7A414D473DC570B2E0035A5CE130A, ___U3CTypeU3Ek__BackingField_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6025[1] = 
{
	static_cast<int32_t>(offsetof(NativeThrowsAttribute_t211CE8D047A8D45676C9ED399D5AA3B4A2C3E625, ___U3CThrowsExceptionU3Ek__BackingField_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6026[1] = 
{
	static_cast<int32_t>(offsetof(IgnoreAttribute_tAB3F6C4808BA16CD585D60A6353B3E0599DFCE4D, ___U3CDoesNotContributeToSizeU3Ek__BackingField_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6029[3] = 
{
	static_cast<int32_t>(offsetof(RequiredByNativeCodeAttribute_t86B11F2BA12BB463CE3258E64E16B43484014FCA, ___U3CNameU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(RequiredByNativeCodeAttribute_t86B11F2BA12BB463CE3258E64E16B43484014FCA, ___U3COptionalU3Ek__BackingField_1)),static_cast<int32_t>(offsetof(RequiredByNativeCodeAttribute_t86B11F2BA12BB463CE3258E64E16B43484014FCA, ___U3CGenerateProxyU3Ek__BackingField_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6031[17] = 
{
	static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Position_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Velocity_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_AnimatedVelocity_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_InitialVelocity_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_AxisOfRotation_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Rotation_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_AngularVelocity_6)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_StartSize_7)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_StartColor_8)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_RandomSeed_9)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_ParentRandomSeed_10)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Lifetime_11)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_StartLifetime_12)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_MeshIndex_13)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_EmitAccumulator0_14)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_EmitAccumulator1_15)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Flags_16)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6032[12] = 
{
	static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_Particle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_PositionSet_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_VelocitySet_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_AxisOfRotationSet_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_RotationSet_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_AngularVelocitySet_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartSizeSet_6)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartColorSet_7)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_RandomSeedSet_8)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartLifetimeSet_9)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_MeshIndexSet_10)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_ApplyShapeToPosition_11)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6034[3] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6038[3] = 
{
	static_cast<int32_t>(offsetof(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields, ___OnAudioConfigurationChanged_0)),static_cast<int32_t>(offsetof(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields, ___OnAudioSystemShuttingDown_1)),static_cast<int32_t>(offsetof(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields, ___OnAudioSystemStartedUp_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6041[2] = 
{
	static_cast<int32_t>(offsetof(AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20, ___m_PCMReaderCallback_4)),static_cast<int32_t>(offsetof(AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20, ___m_PCMSetPositionCallback_5)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6045[2] = 
{
	static_cast<int32_t>(offsetof(AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2, ___sampleFramesAvailable_0)),static_cast<int32_t>(offsetof(AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2, ___sampleFramesOverflow_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6046[1] = 
{
	static_cast<int32_t>(offsetof(AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0, ___m_Handle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6047[1] = 
{
	static_cast<int32_t>(offsetof(AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C, ___m_Handle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6048[1] = 
{
	static_cast<int32_t>(offsetof(AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20, ___m_Handle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6062[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
