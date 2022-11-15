// VerseClass VerseDevices.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseDevices.animation_controller
// Size: 0x158 (Inherited: 0x28)
struct Uanimation_controller : UObject {
	char pad_28[0xd0]; // 0x28(0xd0)
	struct Ulog* __verse_0x63A8D5FA_DebugLog; // 0xf8(0x08)
	struct UObject* __verse_0x1A3A2D49_KeyframeReachedEvent; // 0x100(0x08)
	struct UObject* __verse_0xEC8DE8C6_MovementCompleteEvent; // 0x108(0x08)
	struct UObject* __verse_0xDE60FD58_StateChangedEvent; // 0x110(0x08)
	VerseFunctionProperty __verse_0x053E8BA6_AwaitNextKeyframe; // 0x38(0x10)
	VerseFunctionProperty __verse_0x4A2A0F34__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState; // 0xa8(0x10)
	VerseFunctionProperty __verse_0xDCA25E7B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid; // 0xb8(0x10)
	VerseFunctionProperty __verse_0x0E85E6FA__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R; // 0x28(0x10)
	VerseFunctionProperty __verse_0x1E385FBF__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause; // 0x78(0x10)
	VerseFunctionProperty __verse_0x1A1EC93E__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal; // 0x68(0x10)
	VerseFunctionProperty __verse_0x6B727DF3__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay; // 0x58(0x10)
	VerseFunctionProperty __verse_0x5D81E59F__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal; // 0x48(0x10)
	VerseFunctionProperty __verse_0x25C48BD2__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R; // 0xe8(0x10)
	VerseFunctionProperty __verse_0x2DAABA8B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R; // 0xc8(0x10)
	VerseFunctionProperty __verse_0x230023B8__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop; // 0x98(0x10)
	VerseFunctionProperty __verse_0xDF78CD56__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal; // 0x88(0x10)
	VerseFunctionProperty __verse_0x30521B48__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R; // 0xd8(0x10)

	VerseStringProperty _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R(enum class set_animation_result __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	enum class playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015560
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	enum class set_animation_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R(struct Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015558
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R(struct Ftuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	enum class playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015550
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	enum class playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015548
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R(struct Ftuple_L_Kchar_Mplaystoppause__result_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015540
	enum class animation_controller_state _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015538
	struct Utask(t)* AwaitNextKeyframe(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.animation_controller.AwaitNextKeyframe // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseDevices.animation_controller.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.animation_controller.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.animation_controller.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseDevices.animation_controller_debug_log
// Size: 0x28 (Inherited: 0x28)
struct Uanimation_controller_debug_log : Ulog_channel {

	void $InitInstance(); // Function VerseDevices.animation_controller_debug_log.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.animation_controller_debug_log.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.animation_controller_debug_log.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.creative_device
// Size: 0x70 (Inherited: 0x30)
struct Ucreative_device : UVerseCreativeDevice {
	char pad_30[0x30]; // 0x30(0x30)
	VerseFunctionProperty __verse_0xFBAFC9A4__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RGetTransform; // 0x60(0x10)
	VerseFunctionProperty __verse_0x1F792AAA_OnBegin; // 0x30(0x10)
	VerseFunctionProperty __verse_0xEAC73ECC__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal; // 0x50(0x10)
	VerseFunctionProperty __verse_0x3DFFEDE4__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd; // 0x40(0x10)

	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd // (Public|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnBegin(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_device.OnBegin // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct FTransform _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RGetTransform(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RGetTransform // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015570
	void $InitInstance(); // Function VerseDevices.creative_device.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.creative_device.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.creative_device.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.creative_device_asset
// Size: 0xe8 (Inherited: 0xe8)
struct Ucreative_device_asset : UAsset {

	void $InitInstance(); // Function VerseDevices.creative_device_asset.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.creative_device_asset.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.creative_device_asset.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.creative_object
// Size: 0xb0 (Inherited: 0x38)
struct Ucreative_object : UVerseCreativeObject {
	VerseFunctionProperty __verse_0x10291527__L_2fFortnite_2ecom_2fDevices_2fcreative__object_N_RGetTransform; // 0x38(0x10)
	char pad_48[0x68]; // 0x48(0x68)

	struct FTransform _L_2fFortnite_2ecom_2fDevices_2fcreative__object_N_RGetTransform(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_object._L_2fFortnite_2ecom_2fDevices_2fcreative__object_N_RGetTransform // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015578
	void $InitInstance(); // Function VerseDevices.creative_object.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.creative_object.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.creative_object.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.creative_device_base
// Size: 0xb0 (Inherited: 0xb0)
struct Ucreative_device_base : Ucreative_object {
	struct Ucreative_device_asset* __verse_0x3DA42836_DeviceAsset; // 0xa8(0x08)

	void $InitInstance(); // Function VerseDevices.creative_device_base.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.creative_device_base.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.creative_device_base.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.creative_prop
// Size: 0xf0 (Inherited: 0xb0)
struct Ucreative_prop : Ucreative_object {
	char pad_B0[0x8]; // 0xb0(0x08)
	VerseFunctionProperty __verse_0x30E66B48__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R; // 0xb8(0x10)
	VerseFunctionProperty __verse_0x58E9ADAD__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R; // 0xa8(0x10)
	VerseFunctionProperty __verse_0x5201150D__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose; // 0xd8(0x10)
	VerseFunctionProperty __verse_0x1E6B9248__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid; // 0xc8(0x10)

	enum class teleport_to_result _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R(struct Ftuple_Lvector3_Mrotation_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015580
	OptionProperty _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R(struct Ftuple_Lvector3_Mrotation_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_prop._L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60156c8
	void _L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_prop._L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose // (Native|Public|BlueprintCallable) // @ game+0x60156c0
	void $InitInstance(); // Function VerseDevices.creative_prop.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.creative_prop.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.creative_prop.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.creative_prop_asset
// Size: 0xe8 (Inherited: 0xe8)
struct Ucreative_prop_asset : UAsset {

	void $InitInstance(); // Function VerseDevices.creative_prop_asset.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.creative_prop_asset.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.creative_prop_asset.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.creative_prop_debug_log
// Size: 0x28 (Inherited: 0x28)
struct Ucreative_prop_debug_log : Ulog_channel {

	void $InitInstance(); // Function VerseDevices.creative_prop_debug_log.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.creative_prop_debug_log.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.creative_prop_debug_log.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.CreativeAnimation
// Size: 0x28 (Inherited: 0x28)
struct UCreativeAnimation : UObject {

	struct Utask(t)* operator_U_2eMoveTo_U_L_Ncreative__prop_M_Ntuple_L_R_M_Nvector3_M_Nrotation_M_Nfloat_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lcreative__prop_Mtuple_L_R_Mvector3_Mrotation_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.CreativeAnimation.operator_U_2eMoveTo_U_L_Ncreative__prop_M_Ntuple_L_R_M_Nvector3_M_Nrotation_M_Nfloat_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R(struct Ftuple_Lcreative__prop_Mtuple_L_R_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.CreativeAnimation._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	VerseStringProperty _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RToString_L_Nmove__to__internal__result_R(enum class move_to_internal_result __verse_0xB2CDDD72_Argument); // Function VerseDevices.CreativeAnimation._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RToString_L_Nmove__to__internal__result_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* MoveToInternal_L_Ncreative__prop_M_Nvector3_M_Nrotation_M_Nfloat_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lcreative__prop_Mvector3_Mrotation_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.CreativeAnimation.MoveToInternal_L_Ncreative__prop_M_Nvector3_M_Nrotation_M_Nfloat_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R(struct Ucreative_prop* __verse_0xB2CDDD72_Argument); // Function VerseDevices.CreativeAnimation._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6015568
	struct Fkeyframe_delta keyframe_delta$Factory(); // Function VerseDevices.CreativeAnimation.keyframe_delta$Factory // (Static|HasOutParms) // @ game+0xdef49c
	struct Fcubic_bezier_parameters cubic_bezier_parameters$Factory(); // Function VerseDevices.CreativeAnimation.cubic_bezier_parameters$Factory // (Static|HasOutParms) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.CreativeAnimation.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_event(t)
// Size: 0x58 (Inherited: 0x28)
struct Udevice_event(t) : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	VerseStringProperty __verse_0x21011A72_EventName; // 0x48(0x10)
	VerseFunctionProperty __verse_0x8DE7DBE5_Await; // 0x38(0x10)
	VerseFunctionProperty __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R; // 0x28(0x10)

	void $InitInstance(); // Function VerseDevices.device_event(t).$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_event(t).$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_event(t).$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_event_optional_player
// Size: 0x78 (Inherited: 0x58)
struct Udevice_event_optional_player : Udevice_event(t) {
	char pad_58[0x10]; // 0x58(0x10)
	VerseFunctionProperty __verse_0x8DE7DBE5_Await; // 0x68(0x10)
	VerseFunctionProperty __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R; // 0x58(0x10)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(VerseFunctionProperty __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_optional_player._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60156d0
	struct Utask(t)* Await(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_optional_player.Await // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseDevices.device_event_optional_player.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_event_optional_player.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_event_optional_player.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_event_player
// Size: 0x78 (Inherited: 0x58)
struct Udevice_event_player : Udevice_event(t) {
	char pad_58[0x10]; // 0x58(0x10)
	VerseFunctionProperty __verse_0x8DE7DBE5_Await; // 0x68(0x10)
	VerseFunctionProperty __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R; // 0x58(0x10)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(VerseFunctionProperty __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_player._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60156d8
	struct Utask(t)* Await(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_player.Await // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseDevices.device_event_player.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_event_player.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_event_player.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_event_void
// Size: 0x78 (Inherited: 0x58)
struct Udevice_event_void : Udevice_event(t) {
	char pad_58[0x10]; // 0x58(0x10)
	VerseFunctionProperty __verse_0x8DE7DBE5_Await; // 0x68(0x10)
	VerseFunctionProperty __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R; // 0x58(0x10)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(VerseFunctionProperty __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_void._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60156e0
	struct Utask(t)* Await(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_void.Await // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseDevices.device_event_void.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_event_void.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_event_void.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function
// Size: 0x58 (Inherited: 0x28)
struct Udevice_function : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	VerseStringProperty __verse_0xF8B4D924_FunctionName; // 0x48(0x10)
	VerseFunctionProperty __verse_0xF0D51961__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nplayer_R; // 0x38(0x10)
	VerseFunctionProperty __verse_0x72D2D0E5__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke; // 0x28(0x10)

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function._L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke // (Native|Public|BlueprintCallable) // @ game+0x6015590
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function._L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nplayer_R // (Native|Public|BlueprintCallable) // @ game+0x6015588
	void $InitInstance(); // Function VerseDevices.device_function.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_get_base
// Size: 0x38 (Inherited: 0x28)
struct Udevice_function_get_base : UObject {
	VerseStringProperty __verse_0xF8B4D924_FunctionName; // 0x28(0x10)

	void $InitInstance(); // Function VerseDevices.device_function_get_base.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_get_base.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_get_base.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_get_color
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_get_color : Udevice_function_get_base {
	VerseFunctionProperty __verse_0xB39E982F__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke; // 0x38(0x10)

	struct FColor _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_get_color._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015598
	void $InitInstance(); // Function VerseDevices.device_function_get_color.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_get_color.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_get_color.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_get_float
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_get_float : Udevice_function_get_base {
	VerseFunctionProperty __verse_0xC98DA7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke; // 0x38(0x10)

	double _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_get_float._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60155a0
	void $InitInstance(); // Function VerseDevices.device_function_get_float.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_get_float.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_get_float.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_get_int
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_get_int : Udevice_function_get_base {
	VerseFunctionProperty __verse_0x5F417C53__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke; // 0x38(0x10)

	int64_t _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_get_int._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60155a8
	void $InitInstance(); // Function VerseDevices.device_function_get_int.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_get_int.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_get_int.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_get_logic
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_get_logic : Udevice_function_get_base {
	VerseFunctionProperty __verse_0x546054FC__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke; // 0x38(0x10)

	char _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_get_logic._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60155b0
	void $InitInstance(); // Function VerseDevices.device_function_get_logic.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_get_logic.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_get_logic.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_get_player
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_get_player : Udevice_function_get_base {
	VerseFunctionProperty __verse_0x5448C9C2__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__player_N_RInvoke; // 0x38(0x10)

	OptionProperty _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__player_N_RInvoke(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_get_player._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__player_N_RInvoke // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60155b8
	void $InitInstance(); // Function VerseDevices.device_function_get_player.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_get_player.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_get_player.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_get_string
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_get_string : Udevice_function_get_base {
	VerseFunctionProperty __verse_0xBD53BC40__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke; // 0x38(0x10)

	VerseStringProperty _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_get_string._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60155c0
	void $InitInstance(); // Function VerseDevices.device_function_get_string.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_get_string.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_get_string.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_base
// Size: 0x38 (Inherited: 0x28)
struct Udevice_function_set_base : UObject {
	VerseStringProperty __verse_0xF8B4D924_FunctionName; // 0x28(0x10)

	void $InitInstance(); // Function VerseDevices.device_function_set_base.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_base.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_base.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_color
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_set_color : Udevice_function_set_base {
	VerseFunctionProperty __verse_0xBEAEBA6C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R; // 0x38(0x10)

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R(struct FColor __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_color._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R // (Native|Public|BlueprintCallable) // @ game+0x60155c8
	void $InitInstance(); // Function VerseDevices.device_function_set_color.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_color.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_color.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_float
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_set_float : Udevice_function_set_base {
	VerseFunctionProperty __verse_0xBE6D2C82__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R; // 0x38(0x10)

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_float._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x60155d0
	void $InitInstance(); // Function VerseDevices.device_function_set_float.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_float.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_float.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_int
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_set_int : Udevice_function_set_base {
	VerseFunctionProperty __verse_0x53CE1022__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R; // 0x38(0x10)

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_int._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x60155d8
	void $InitInstance(); // Function VerseDevices.device_function_set_int.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_int.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_int.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_logic
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_set_logic : Udevice_function_set_base {
	VerseFunctionProperty __verse_0x5B52ED6E__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R; // 0x38(0x10)

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_logic._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x60155e0
	void $InitInstance(); // Function VerseDevices.device_function_set_logic.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_logic.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_logic.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_multi_parameter_base
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_set_multi_parameter_base : Udevice_function_set_base {
	OptionProperty __verse_0xBF5FC553_ReturnType; // 0x38(0x09)
	char pad_41[0x7]; // 0x41(0x07)

	void $InitInstance(); // Function VerseDevices.device_function_set_multi_parameter_base.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_multi_parameter_base.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_multi_parameter_base.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_params_by_name
// Size: 0xa8 (Inherited: 0x48)
struct Udevice_function_set_params_by_name : Udevice_function_set_multi_parameter_base {
	char pad_48[0x10]; // 0x48(0x10)
	struct TMap<VerseStringProperty, struct UObject*> __verse_0x8F623C81_ParameterTypes; // 0x58(0x50)
	VerseFunctionProperty __verse_0xD67AF8BF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R; // 0x48(0x10)

	OptionProperty _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R(struct TMap<VerseStringProperty, struct Ufunction_parameter_base*> __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_params_by_name._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60155e8
	void $InitInstance(); // Function VerseDevices.device_function_set_params_by_name.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_params_by_name.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_params_by_name.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_params_by_name_const
// Size: 0xb8 (Inherited: 0xa8)
struct Udevice_function_set_params_by_name_const : Udevice_function_set_params_by_name {
	VerseFunctionProperty __verse_0xE5C254F3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R; // 0xa8(0x10)

	OptionProperty _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R(struct TMap<VerseStringProperty, struct Ufunction_parameter_base*> __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_params_by_name_const._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60155f0
	void $InitInstance(); // Function VerseDevices.device_function_set_params_by_name_const.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_params_by_name_const.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_params_by_name_const.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_params_by_type
// Size: 0x68 (Inherited: 0x48)
struct Udevice_function_set_params_by_type : Udevice_function_set_multi_parameter_base {
	char pad_48[0x10]; // 0x48(0x10)
	struct TArray<struct UObject*> __verse_0x8F623C81_ParameterTypes; // 0x58(0x10)
	VerseFunctionProperty __verse_0x59B457FF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R; // 0x48(0x10)

	OptionProperty _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R(struct TArray<struct Ufunction_parameter_base*> __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_params_by_type._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x60155f8
	void $InitInstance(); // Function VerseDevices.device_function_set_params_by_type.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_params_by_type.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_params_by_type.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_params_by_type_const
// Size: 0x78 (Inherited: 0x68)
struct Udevice_function_set_params_by_type_const : Udevice_function_set_params_by_type {
	VerseFunctionProperty __verse_0x4A59905A__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R; // 0x68(0x10)

	OptionProperty _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R(struct TArray<struct Ufunction_parameter_base*> __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_params_by_type_const._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015600
	void $InitInstance(); // Function VerseDevices.device_function_set_params_by_type_const.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_params_by_type_const.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_params_by_type_const.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_player
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_set_player : Udevice_function_set_base {
	VerseFunctionProperty __verse_0x4AAAE4CD__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__player_N_RInvoke_L_N_Qplayer_R; // 0x38(0x10)

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__player_N_RInvoke_L_N_Qplayer_R(OptionProperty __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_player._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__player_N_RInvoke_L_N_Qplayer_R // (Native|Public|BlueprintCallable) // @ game+0x6015608
	void $InitInstance(); // Function VerseDevices.device_function_set_player.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_player.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_player.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_function_set_string
// Size: 0x48 (Inherited: 0x38)
struct Udevice_function_set_string : Udevice_function_set_base {
	VerseFunctionProperty __verse_0x23330E3C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R; // 0x38(0x10)

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function_set_string._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x6015610
	void $InitInstance(); // Function VerseDevices.device_function_set_string.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_function_set_string.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_function_set_string.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.device_subscription
// Size: 0x58 (Inherited: 0x28)
struct Udevice_subscription : UObject {
	VerseFunctionProperty __verse_0x017551E0__L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel; // 0x28(0x10)
	char pad_38[0x20]; // 0x38(0x20)

	void _L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_subscription._L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel // (Native|Public|BlueprintCallable) // @ game+0x60156b8
	void $InitInstance(); // Function VerseDevices.device_subscription.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.device_subscription.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.device_subscription.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.Devices
// Size: 0x30 (Inherited: 0x28)
struct UDevices : UObject {
	struct Ucreative_prop_asset* __verse_0x88F30926_DefaultCreativePropAsset; // 0x28(0x08)

	struct Utag_container* _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__device__base_M_Ntuple_L_R_R(struct Ftuple_Lcreative__device__base_Mtuple_L_R_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__device__base_M_Ntuple_L_R_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6015630
	struct UObject* _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__device_M_Ntuple_L_R_R(struct Ftuple_Lcreative__device_Mtuple_L_R_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__device_M_Ntuple_L_R_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6015628
	struct UObject* _L_2fFortnite_2ecom_2fDevices_N_Rdevice__event(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Rdevice__event // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct UObject* _L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Ftuple_L_Qcreative__prop_Mspawn__prop__result_R _L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R(struct Ftuple_Lcreative__prop__asset_Mvector3_Mrotation_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6015620
	struct TArray<struct Ucreative_device_base*> _L_2fFortnite_2ecom_2fDevices_N_RGetDevicesWithTags_L_Ntag__search__criteria_R(struct Utag_search_criteria* __verse_0xB2CDDD72_Argument); // Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RGetDevicesWithTags_L_Ntag__search__criteria_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6015618
	struct TArray<struct Ucreative_device_base*> _L_2fFortnite_2ecom_2fDevices_N_RGetDevicesWithTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RGetDevicesWithTag_L_Ntag_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6015618
	void $InitCDO(); // Function VerseDevices.Devices.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseDevices.function_parameter_base
// Size: 0x28 (Inherited: 0x28)
struct Ufunction_parameter_base : UObject {

	void $InitInstance(); // Function VerseDevices.function_parameter_base.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.function_parameter_base.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.function_parameter_base.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.function_parameter_color
// Size: 0x40 (Inherited: 0x28)
struct Ufunction_parameter_color : Ufunction_parameter_base {
	struct FColor __verse_0x31A8F10C_Value; // 0x28(0x18)

	void $InitInstance(); // Function VerseDevices.function_parameter_color.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.function_parameter_color.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.function_parameter_color.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.function_parameter_float
// Size: 0x30 (Inherited: 0x28)
struct Ufunction_parameter_float : Ufunction_parameter_base {
	double __verse_0x31A8F10C_Value; // 0x28(0x08)

	void $InitInstance(); // Function VerseDevices.function_parameter_float.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.function_parameter_float.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.function_parameter_float.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.function_parameter_int
// Size: 0x30 (Inherited: 0x28)
struct Ufunction_parameter_int : Ufunction_parameter_base {
	int64_t __verse_0x31A8F10C_Value; // 0x28(0x08)

	void $InitInstance(); // Function VerseDevices.function_parameter_int.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.function_parameter_int.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.function_parameter_int.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.function_parameter_logic
// Size: 0x30 (Inherited: 0x28)
struct Ufunction_parameter_logic : Ufunction_parameter_base {
	char __verse_0x31A8F10C_Value : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	void $InitInstance(); // Function VerseDevices.function_parameter_logic.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.function_parameter_logic.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.function_parameter_logic.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.function_parameter_player
// Size: 0x30 (Inherited: 0x28)
struct Ufunction_parameter_player : Ufunction_parameter_base {
	OptionProperty __verse_0x31A8F10C_Value; // 0x28(0x08)

	void $InitInstance(); // Function VerseDevices.function_parameter_player.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.function_parameter_player.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.function_parameter_player.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.function_parameter_string
// Size: 0x38 (Inherited: 0x28)
struct Ufunction_parameter_string : Ufunction_parameter_base {
	VerseStringProperty __verse_0x31A8F10C_Value; // 0x28(0x10)

	void $InitInstance(); // Function VerseDevices.function_parameter_string.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseDevices.function_parameter_string.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseDevices.function_parameter_string.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseDevices.InterpolationTypes
// Size: 0xc8 (Inherited: 0x28)
struct UInterpolationTypes : UObject {
	struct Fcubic_bezier_parameters __verse_0x9B27EB9D_Linear; // 0x28(0x20)
	struct Fcubic_bezier_parameters __verse_0x9CD14C25_Ease; // 0x48(0x20)
	struct Fcubic_bezier_parameters __verse_0xB345298C_EaseIn; // 0x68(0x20)
	struct Fcubic_bezier_parameters __verse_0xF59E2BD2_EaseOut; // 0x88(0x20)
	struct Fcubic_bezier_parameters __verse_0x29A389AE_EaseInOut; // 0xa8(0x20)

	void $InitCDO(); // Function VerseDevices.InterpolationTypes.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseDevices.task_animation_controller$AwaitNextKeyframe
// Size: 0x152 (Inherited: 0x148)
struct Utask_animation_controller$AwaitNextKeyframe : Utask(t) {
	struct Uanimation_controller* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class await_next_keyframe_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseDevices.task_animation_controller$AwaitNextKeyframe.Update // (Native|Public|HasOutParms) // @ game+0x6015518
};

// VerseClass VerseDevices.task_creative_device$OnBegin
// Size: 0x151 (Inherited: 0x148)
struct Utask_creative_device$OnBegin : Utask(t) {
	struct Ucreative_device* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VerseDevices.task_creative_device$OnBegin.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseDevices.task_CreativeAnimation$MoveToInternal_L_Ncreative__prop_M_Nvector3_M_Nrotation_M_Nfloat_R
// Size: 0x650 (Inherited: 0x148)
struct Utask_CreativeAnimation$MoveToInternal_L_Ncreative__prop_M_Nvector3_M_Nrotation_M_Nfloat_R : Utask(t) {
	char pad_148[0x8]; // 0x148(0x08)
	struct Ftuple_Lcreative__prop_Mvector3_Mrotation_Mfloat_R __verse_0xB2CDDD72_Argument; // 0x150(0x50)
	enum class move_to_internal_result _RetVal; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	OptionProperty ; // 0x1a8(0x09)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R ; // 0x1b8(0x10)
	VerseFunctionProperty ; // 0x1c8(0x10)
	struct Uanimation_controller* ; // 0x1d8(0x08)
	OptionProperty ; // 0x1e0(0x08)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	struct FTransform ; // 0x1f0(0x50)
	struct Ucreative_prop* ; // 0x240(0x08)
	VerseFunctionProperty ; // 0x248(0x10)
	struct Ftuple_L_R ; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct TArray<struct Fkeyframe_delta> ; // 0x260(0x10)
	struct Fkeyframe_delta ; // 0x270(0x70)
	struct Fvector3 ; // 0x2e0(0x18)
	VerseFunctionProperty ; // 0x2f8(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x308(0x30)
	char pad_338[0x8]; // 0x338(0x08)
	struct FVerseRotation ; // 0x340(0x20)
	VerseFunctionProperty ; // 0x360(0x10)
	struct Ftuple_Lrotation_Mrotation_R ; // 0x370(0x40)
	enum class set_animation_result ; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct Uanimation_controller* ; // 0x3b8(0x08)
	VerseFunctionProperty ; // 0x3c0(0x10)
	struct Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R ; // 0x3d0(0x18)
	OptionProperty ; // 0x3e8(0x02)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	VerseDynamicProperty ; // 0x3f0(0x10)
	OptionProperty ; // 0x400(0x11)
	char pad_411[0x7]; // 0x411(0x07)
	VerseDynamicProperty ; // 0x418(0x10)
	VerseDynamicProperty ; // 0x428(0x10)
	enum class playstoppause_result ; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct Uanimation_controller* ; // 0x440(0x08)
	VerseFunctionProperty ; // 0x448(0x10)
	struct Ftuple_L_R ; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	VerseDynamicProperty ; // 0x460(0x10)
	OptionProperty ; // 0x470(0x11)
	char pad_481[0x7]; // 0x481(0x07)
	VerseDynamicProperty ; // 0x488(0x10)
	VerseDynamicProperty ; // 0x498(0x10)
	enum class await_next_keyframe_result ; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct Uanimation_controller* ; // 0x4b0(0x08)
	struct Utask(t)* ; // 0x4b8(0x08)
	VerseFunctionProperty ; // 0x4c0(0x10)
	struct Ftuple_L_R ; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	int64_t ; // 0x4d8(0x08)
	enum class await_next_keyframe_result ; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	VerseDynamicProperty ; // 0x4e8(0x10)
	OptionProperty ; // 0x4f8(0x11)
	char pad_509[0x7]; // 0x509(0x07)
	VerseDynamicProperty ; // 0x510(0x10)
	VerseDynamicProperty ; // 0x520(0x10)
	VerseDynamicProperty ; // 0x530(0x10)
	OptionProperty ; // 0x540(0x11)
	char pad_551[0x7]; // 0x551(0x07)
	VerseDynamicProperty ; // 0x558(0x10)
	VerseDynamicProperty ; // 0x568(0x10)
	VerseDynamicProperty ; // 0x578(0x10)
	OptionProperty ; // 0x588(0x11)
	char pad_599[0x7]; // 0x599(0x07)
	VerseDynamicProperty ; // 0x5a0(0x10)
	VerseDynamicProperty ; // 0x5b0(0x10)
	VerseDynamicProperty ; // 0x5c0(0x10)
	OptionProperty ; // 0x5d0(0x11)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	VerseDynamicProperty ; // 0x5e8(0x10)
	VerseDynamicProperty ; // 0x5f8(0x10)
	VerseDynamicProperty ; // 0x608(0x10)
	OptionProperty ; // 0x618(0x11)
	char pad_629[0x7]; // 0x629(0x07)
	VerseDynamicProperty ; // 0x630(0x10)
	VerseDynamicProperty ; // 0x640(0x10)

	int64_t Update(); // Function VerseDevices.task_CreativeAnimation$MoveToInternal_L_Ncreative__prop_M_Nvector3_M_Nrotation_M_Nfloat_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseDevices.task_CreativeAnimation$operator_U_2eMoveTo_U_L_Ncreative__prop_M_Ntuple_L_R_M_Nvector3_M_Nrotation_M_Nfloat_R
// Size: 0x473 (Inherited: 0x148)
struct Utask_CreativeAnimation$operator_U_2eMoveTo_U_L_Ncreative__prop_M_Ntuple_L_R_M_Nvector3_M_Nrotation_M_Nfloat_R : Utask(t) {
	char pad_148[0x8]; // 0x148(0x08)
	struct Ftuple_Lcreative__prop_Mtuple_L_R_Mvector3_Mrotation_Mfloat_R __verse_0xB2CDDD72_Argument; // 0x150(0x60)
	enum class move_to_result _RetVal; // 0x1b0(0x01)
	enum class move_to_internal_result ; // 0x1b1(0x01)
	char pad_1B2[0x6]; // 0x1b2(0x06)
	struct Utask(t)* ; // 0x1b8(0x08)
	VerseFunctionProperty ; // 0x1c0(0x10)
	struct Ftuple_Lcreative__prop_Mvector3_Mrotation_Mfloat_R ; // 0x1d0(0x50)
	int64_t ; // 0x220(0x08)
	VerseDynamicProperty ; // 0x228(0x10)
	OptionProperty ; // 0x238(0x11)
	char pad_249[0x7]; // 0x249(0x07)
	VerseDynamicProperty ; // 0x250(0x10)
	VerseDynamicProperty ; // 0x260(0x10)
	VerseDynamicProperty ; // 0x270(0x10)
	OptionProperty ; // 0x280(0x11)
	char pad_291[0x7]; // 0x291(0x07)
	VerseDynamicProperty ; // 0x298(0x10)
	VerseDynamicProperty ; // 0x2a8(0x10)
	struct Ulog* ; // 0x2b8(0x08)
	struct Ulog* ; // 0x2c0(0x08)
	enum class EVerseTrue ; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	VerseFunctionProperty ; // 0x2d0(0x10)
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R ; // 0x2e0(0x18)
	VerseStringProperty ; // 0x2f8(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x308(0x10)
	VerseFunctionProperty ; // 0x318(0x10)
	struct TArray<struct TArray<VerseDynamicProperty>> ; // 0x328(0x10)
	struct TArray<VerseStringProperty> ; // 0x338(0x10)
	struct Ftuple_L_Kchar_M_Kchar_R ; // 0x348(0x20)
	VerseStringProperty ; // 0x368(0x10)
	VerseStringProperty ; // 0x378(0x10)
	VerseFunctionProperty ; // 0x388(0x10)
	VerseStringProperty ; // 0x398(0x10)
	VerseStringProperty ; // 0x3a8(0x10)
	struct TArray<struct TArray<VerseDynamicProperty>> ; // 0x3b8(0x10)
	int64_t ; // 0x3c8(0x08)
	int64_t ; // 0x3d0(0x08)
	VerseStringProperty ; // 0x3d8(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x3e8(0x10)
	VerseStringProperty ; // 0x3f8(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x408(0x10)
	int64_t ; // 0x418(0x08)
	int64_t ; // 0x420(0x08)
	char ; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	VerseDynamicProperty ; // 0x430(0x10)
	VerseStringProperty ; // 0x440(0x10)
	int64_t ; // 0x450(0x08)
	int64_t ; // 0x458(0x08)
	VerseDynamicProperty ; // 0x460(0x10)
	char ; // 0x470(0x01)
	OptionProperty ; // 0x471(0x02)

	int64_t Update(); // Function VerseDevices.task_CreativeAnimation$operator_U_2eMoveTo_U_L_Ncreative__prop_M_Ntuple_L_R_M_Nvector3_M_Nrotation_M_Nfloat_R.Update // (Public|HasOutParms|HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseDevices.task_device_event_optional_player$Await
// Size: 0x168 (Inherited: 0x148)
struct Utask_device_event_optional_player$Await : Utask(t) {
	struct Udevice_event_optional_player* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	VerseDynamicProperty _RetVal; // 0x158(0x10)

	int64_t Update(); // Function VerseDevices.task_device_event_optional_player$Await.Update // (Native|Public|HasOutParms) // @ game+0x6015520
};

// VerseClass VerseDevices.task_device_event_player$Await
// Size: 0x168 (Inherited: 0x148)
struct Utask_device_event_player$Await : Utask(t) {
	struct Udevice_event_player* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	VerseDynamicProperty _RetVal; // 0x158(0x10)

	int64_t Update(); // Function VerseDevices.task_device_event_player$Await.Update // (Native|Public|HasOutParms) // @ game+0x6015528
};

// VerseClass VerseDevices.task_device_event_void$Await
// Size: 0x168 (Inherited: 0x148)
struct Utask_device_event_void$Await : Utask(t) {
	struct Udevice_event_void* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	VerseDynamicProperty _RetVal; // 0x158(0x10)

	int64_t Update(); // Function VerseDevices.task_device_event_void$Await.Update // (Native|Public|HasOutParms) // @ game+0x6015530
};

