// SolarisGeneratedEnum VerseDevices.animation_controller_state
enum class animation_controller_state : uint8 {
	InvalidObject = 0,
	AnimationNotSet = 1,
	Stopped = 2,
	Playing = 3,
	Paused = 4
};

// SolarisGeneratedEnum VerseDevices.animation_mode
enum class animation_mode : uint8 {
	OneShot = 0,
	PingPong = 1,
	Loop = 2
};

// SolarisGeneratedEnum VerseDevices.await_next_keyframe_result
enum class await_next_keyframe_result : uint8 {
	KeyframeReached = 0,
	NotPlaying = 1,
	AnimationAborted = 2
};

// SolarisGeneratedEnum VerseDevices.get_animation_controller_result
enum class get_animation_controller_result : uint8 {
	Ok = 0,
	UnknownError = 1,
	InvalidObject = 2
};

// SolarisGeneratedEnum VerseDevices.move_to_internal_result
enum class move_to_internal_result : uint8 {
	DestinationReached = 0,
	WillNotReachDestination = 1,
	UnknownError = 2,
	InvalidDestination = 3,
	InvalidTime = 4,
	InvalidObject = 5,
	DestinationOutOfBounds = 6
};

// SolarisGeneratedEnum VerseDevices.move_to_result
enum class move_to_result : uint8 {
	DestinationReached = 0,
	WillNotReachDestination = 1
};

// SolarisGeneratedEnum VerseDevices.playstoppause_result
enum class playstoppause_result : uint8 {
	Ok = 0,
	AnimationNotSet = 1,
	InvalidObject = 2
};

// SolarisGeneratedEnum VerseDevices.set_animation_result
enum class set_animation_result : uint8 {
	Ok = 0,
	UnknownError = 1,
	NoKeyframes = 2,
	LoopingAnimationDoesNotLoop = 3,
	KeyframeOutOfBounds = 4,
	InvalidLocation = 5,
	InvalidTime = 6,
	InvalidInterpolationParameters = 7,
	InvalidObject = 8
};

// SolarisGeneratedEnum VerseDevices.spawn_prop_result
enum class spawn_prop_result : uint8 {
	Ok = 0,
	UnknownError = 1,
	InvalidSpawnPoint = 2,
	SpawnPointOutOfBounds = 3,
	InvalidAsset = 4,
	TooManyProps = 5
};

// SolarisGeneratedEnum VerseDevices.teleport_to_result
enum class teleport_to_result : uint8 {
	Ok = 0,
	UnknownError = 1,
	InvalidDestination = 2,
	InvalidObject = 3,
	DestinationOutOfBounds = 4
};

// VerseStruct VerseDevices.cubic_bezier_parameters
// Size: 0x20 (Inherited: 0x00)
struct Fcubic_bezier_parameters {
	double __verse_0xBBCFCA13_X0; // 0x00(0x08)
	double __verse_0x25CF60DF_Y0; // 0x08(0x08)
	double __verse_0xDEA876AB_X1; // 0x10(0x08)
	double __verse_0x40A8DC67_Y1; // 0x18(0x08)
};

// VerseStruct VerseDevices.keyframe_delta
// Size: 0x70 (Inherited: 0x00)
struct Fkeyframe_delta {
	struct Fvector3 __verse_0xC51B5857_DeltaLocation; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVerseRotation __verse_0x0D1E29AE_DeltaRotation; // 0x20(0x20)
	double __verse_0x742B3E02_Time; // 0x40(0x08)
	struct Fcubic_bezier_parameters __verse_0xB7FF3D07_Interpolation; // 0x48(0x20)
	char pad_68[0x8]; // 0x68(0x08)
};

// VerseStruct VerseDevices.tuple_L_Kchar_M_Kchar_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
};

// VerseStruct VerseDevices.tuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
// Size: 0x12 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x02)
};

// VerseStruct VerseDevices.tuple_L_Kchar_M_QLevel_Nlog__level_R
// Size: 0x12 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x02)
};

// VerseStruct VerseDevices.tuple_L_Kchar_Mplaystoppause__result_R
// Size: 0x11 (Inherited: 0x00)
struct Ftuple_L_Kchar_Mplaystoppause__result_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	enum class playstoppause_result __verse_0x7D844C3C_Elem1; // 0x10(0x01)
};

// VerseStruct VerseDevices.tuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R
// Size: 0x12 (Inherited: 0x00)
struct Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R {
	struct TArray<struct Fkeyframe_delta> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x02)
};

// VerseStruct VerseDevices.tuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R
// Size: 0x12 (Inherited: 0x00)
struct Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R {
	struct TArray<struct Fkeyframe_delta> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x02)
};

// VerseStruct VerseDevices.tuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R
// Size: 0x12 (Inherited: 0x00)
struct Ftuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R {
	struct TArray<struct Fkeyframe_delta> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x02)
};

// VerseStruct VerseDevices.tuple_L_Qanimation__controller_Mget__animation__controller__result_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R {
	OptionProperty __verse_0x18E3F084_Elem0; // 0x00(0x08)
	enum class get_animation_controller_result __verse_0x7D844C3C_Elem1; // 0x08(0x01)
};

// VerseStruct VerseDevices.tuple_L_Qcreative__prop_Mspawn__prop__result_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_L_Qcreative__prop_Mspawn__prop__result_R {
	OptionProperty __verse_0x18E3F084_Elem0; // 0x00(0x08)
	enum class spawn_prop_result __verse_0x7D844C3C_Elem1; // 0x08(0x01)
};

// VerseStruct VerseDevices.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseDevices.tuple_Lcreative__device__base_Mtuple_L_R_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lcreative__device__base_Mtuple_L_R_R {
	struct Ucreative_device_base* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ftuple_L_R __verse_0x7D844C3C_Elem1; // 0x08(0x01)
};

// VerseStruct VerseDevices.tuple_Lcreative__device_Mtuple_L_R_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lcreative__device_Mtuple_L_R_R {
	struct Ucreative_device* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ftuple_L_R __verse_0x7D844C3C_Elem1; // 0x08(0x01)
};

// VerseStruct VerseDevices.tuple_Lcreative__prop__asset_Mvector3_Mrotation_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_Lcreative__prop__asset_Mvector3_Mrotation_R {
	struct Ucreative_prop_asset* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x08(0x18)
	struct FVerseRotation __verse_0x932BF92E_Elem2; // 0x20(0x20)
};

// VerseStruct VerseDevices.tuple_Lcreative__prop_Mtuple_L_R_Mvector3_Mrotation_Mfloat_R
// Size: 0x58 (Inherited: 0x00)
struct Ftuple_Lcreative__prop_Mtuple_L_R_Mvector3_Mrotation_Mfloat_R {
	struct Ucreative_prop* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ftuple_L_R __verse_0x7D844C3C_Elem1; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct Fvector3 __verse_0x932BF92E_Elem2; // 0x10(0x18)
	char pad_28[0x8]; // 0x28(0x08)
	struct FVerseRotation __verse_0xF64C4596_Elem3; // 0x30(0x20)
	double __verse_0x4F74920B_Elem4; // 0x50(0x08)
};

// VerseStruct VerseDevices.tuple_Lcreative__prop_Mtuple_L_R_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lcreative__prop_Mtuple_L_R_R {
	struct Ucreative_prop* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ftuple_L_R __verse_0x7D844C3C_Elem1; // 0x08(0x01)
};

// VerseStruct VerseDevices.tuple_Lcreative__prop_Mvector3_Mrotation_Mfloat_R
// Size: 0x48 (Inherited: 0x00)
struct Ftuple_Lcreative__prop_Mvector3_Mrotation_Mfloat_R {
	struct Ucreative_prop* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x08(0x18)
	struct FVerseRotation __verse_0x932BF92E_Elem2; // 0x20(0x20)
	double __verse_0xF64C4596_Elem3; // 0x40(0x08)
};

// VerseStruct VerseDevices.tuple_Lrotation_Mrotation_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_Lrotation_Mrotation_R {
	struct FVerseRotation __verse_0x18E3F084_Elem0; // 0x00(0x20)
	struct FVerseRotation __verse_0x7D844C3C_Elem1; // 0x20(0x20)
};

// VerseStruct VerseDevices.tuple_Lvector3_Mrotation_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_Lvector3_Mrotation_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVerseRotation __verse_0x7D844C3C_Elem1; // 0x20(0x20)
};

// VerseStruct VerseDevices.tuple_Lvector3_Mvector3_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
};

