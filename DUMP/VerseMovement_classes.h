// VerseClass VerseMovement.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseMovement.move_config_asset
// Size: 0xe8 (Inherited: 0xe8)
struct Umove_config_asset : UAsset {

	void $InitInstance(); // Function VerseMovement.move_config_asset.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseMovement.move_config_asset.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseMovement.move_config_asset.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseMovement.movement_component
// Size: 0x130 (Inherited: 0x90)
struct Umovement_component : UVerseMovementComponentBase {
	char pad_90[0x70]; // 0x90(0x70)
	VerseFunctionProperty __verse_0x09E834C8__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R; // 0x100(0x10)
	VerseFunctionProperty __verse_0x7995CBAC__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R; // 0xf0(0x10)
	VerseFunctionProperty __verse_0xF91671FF__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R; // 0x120(0x10)
	VerseFunctionProperty __verse_0x9D5237F3__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R; // 0x110(0x10)
	VerseFunctionProperty __verse_0xA1CC94F9__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R; // 0xb0(0x10)
	VerseFunctionProperty __verse_0xDD1E1C78__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R; // 0xa0(0x10)
	VerseFunctionProperty __verse_0xDDD0E1FA__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R; // 0x90(0x10)
	VerseFunctionProperty __verse_0xF92F8A2F__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R; // 0xc0(0x10)
	VerseFunctionProperty __verse_0xCD9EB304__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R; // 0xd0(0x10)
	VerseFunctionProperty __verse_0x897A3BB6__L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R; // 0xe0(0x10)

	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x640e2ac
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R(struct FVerseRotation __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R // (Native|Public|BlueprintCallable) // @ game+0x640e2a4
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x640e29c
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x640e294
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R(struct Umove_config_asset* __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R // (Native|Public|BlueprintCallable) // @ game+0x640e28c
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R(struct Fmove_config __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R // (Native|Public|BlueprintCallable) // @ game+0x640e284
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x640e27c
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x640e274
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x640e26c
	void _L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseMovement.movement_component._L_2fVerse_2eorg_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x640e264
	void $InitInstance(); // Function VerseMovement.movement_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseMovement.movement_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseMovement.movement_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseMovement.VerseMovement
// Size: 0x28 (Inherited: 0x28)
struct UVerseMovement : UObject {

	OptionProperty _L_2fVerse_2eorg_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseMovement.VerseMovement._L_2fVerse_2eorg_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x640e2b4
	struct Fmove_config move_config$Factory(); // Function VerseMovement.VerseMovement.move_config$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fmove_config_entry move_config_entry$Factory(); // Function VerseMovement.VerseMovement.move_config_entry$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fmove_response move_response$Factory(); // Function VerseMovement.VerseMovement.move_response$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fmove_trigger move_trigger$Factory(); // Function VerseMovement.VerseMovement.move_trigger$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fmove_trace_trigger_params move_trace_trigger_params$Factory(); // Function VerseMovement.VerseMovement.move_trace_trigger_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fmove_physics_trigger_params move_physics_trigger_params$Factory(); // Function VerseMovement.VerseMovement.move_physics_trigger_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fmove_input_trigger_params move_input_trigger_params$Factory(); // Function VerseMovement.VerseMovement.move_input_trigger_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	void $InitCDO(); // Function VerseMovement.VerseMovement.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseMovement.VerseMovementUtil
// Size: 0x38 (Inherited: 0x28)
struct UVerseMovementUtil : UObject {
	struct Fmove_config __verse_0x40F5E85A_CarConfig; // 0x28(0x10)

	void $InitCDO(); // Function VerseMovement.VerseMovementUtil.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

