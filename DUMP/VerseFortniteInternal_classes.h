// VerseClass VerseFortniteInternal.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseFortniteInternal.ability_component
// Size: 0x128 (Inherited: 0x98)
struct Uability_component : UVerseFortniteAbilityComponentBase {
	char pad_98[0x30]; // 0x98(0x30)
	VerseFunctionProperty __verse_0xFC826A64__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R; // 0xc8(0x10)
	VerseFunctionProperty __verse_0x3D5F94B4__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Nany_R; // 0xa8(0x10)
	VerseFunctionProperty __verse_0x4E0147BD__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Nany_R; // 0x98(0x10)
	VerseFunctionProperty __verse_0xB8708772__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Nany_R; // 0xb8(0x10)
	char pad_108[0x20]; // 0x108(0x20)

	char _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Nany_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb0c
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Nany_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb04
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Nany_R // (Native|Public|BlueprintCallable) // @ game+0x63bbafc
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R(struct Ftuple_Lgameplay__effect__asset_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63bbaf4
	void $InitInstance(); // Function VerseFortniteInternal.ability_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.ability_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.ability_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.ability_target_data
// Size: 0x90 (Inherited: 0x28)
struct Uability_target_data : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	VerseFunctionProperty __verse_0x4A52FED5__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetEndPoint; // 0x48(0x10)
	VerseFunctionProperty __verse_0x8A30E19F__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetHitLocations; // 0x58(0x10)
	VerseFunctionProperty __verse_0xEB8B7087__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetOrigin; // 0x38(0x10)
	VerseFunctionProperty __verse_0x0293E06E__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RHasHits; // 0x28(0x10)
	char pad_88[0x8]; // 0x88(0x08)

	char _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RHasHits(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.ability_target_data._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RHasHits // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb2c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetOrigin(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.ability_target_data._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetOrigin // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb24
	struct TArray<struct Fvector3> _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetHitLocations(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.ability_target_data._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetHitLocations // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb1c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetEndPoint(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.ability_target_data._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetEndPoint // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb14
	void $InitInstance(); // Function VerseFortniteInternal.ability_target_data.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.ability_target_data.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.ability_target_data.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.AbilityComponent
// Size: 0x28 (Inherited: 0x28)
struct UAbilityComponent : UObject {

	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.AbilityComponent._L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbaec
	void $InitCDO(); // Function VerseFortniteInternal.AbilityComponent.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.fort_building_settings_component
// Size: 0xe0 (Inherited: 0x90)
struct Ufort_building_settings_component : UFortBuildingSettingsComponentBase {
	VerseFunctionProperty __verse_0x4AEE10CB__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R; // 0x90(0x10)
	VerseFunctionProperty __verse_0x59E03D8E__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R; // 0xa0(0x10)
	VerseFunctionProperty __verse_0xAEABD061__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R; // 0xb0(0x10)
	VerseFunctionProperty __verse_0x5073BE0E__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R; // 0xc0(0x10)
	VerseFunctionProperty __verse_0x5FED9001__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R; // 0xd0(0x10)

	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x63bbd4c
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x63bbd3c
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x63bbd44
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x63bbd2c
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x63bbd34
	void $InitInstance(); // Function VerseFortniteInternal.fort_building_settings_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.fort_building_settings_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.fort_building_settings_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.fort_item_definition
// Size: 0xe8 (Inherited: 0xe8)
struct Ufort_item_definition : UAsset {

	void $InitInstance(); // Function VerseFortniteInternal.fort_item_definition.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.fort_item_definition.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.fort_item_definition.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.fort_player_component
// Size: 0x138 (Inherited: 0xf8)
struct Ufort_player_component : Uplayer_component {
	char pad_F8[0x30]; // 0xf8(0x30)
	VerseFunctionProperty __verse_0xD2D3E7C6__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID; // 0x128(0x10)
	VerseFunctionProperty __verse_0xFF6DF990__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R; // 0x118(0x10)
	VerseFunctionProperty __verse_0xB834237F__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R; // 0x108(0x10)
	VerseFunctionProperty __verse_0x3DB6B216__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R; // 0xf8(0x10)

	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbcd4
	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbccc
	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbcc4
	VerseStringProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbcbc
	void $InitInstance(); // Function VerseFortniteInternal.fort_player_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.fort_player_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.fort_player_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.fort_playspace_component
// Size: 0x170 (Inherited: 0x138)
struct Ufort_playspace_component : Uplayspace_component {
	VerseFunctionProperty __verse_0x43E273F3___WaitForPlayerEliminated; // 0x138(0x10)
	char pad_148[0x28]; // 0x148(0x28)

	struct Utask(t)* __WaitForPlayerEliminated(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fort_playspace_component.__WaitForPlayerEliminated // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseFortniteInternal.fort_playspace_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.fort_playspace_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.fort_playspace_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.fortnite_building_component
// Size: 0xb8 (Inherited: 0x60)
struct Ufortnite_building_component : UEntityComponent {
	char pad_60[0x10]; // 0x60(0x10)
	VerseFunctionProperty __verse_0x9298102F__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged; // 0x70(0x10)
	VerseFunctionProperty __verse_0x49AF8941__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced; // 0x80(0x10)
	VerseFunctionProperty __verse_0xA0138077__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R; // 0x90(0x10)
	VerseFunctionProperty __verse_0x63EC639A__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R; // 0xa0(0x10)
	VerseFunctionProperty __verse_0xAD9C3374__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt; // 0x60(0x10)

	char _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd74
	void _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x63bbd6c
	void _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x63bbd64
	char _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd5c
	char _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd54
	void $InitInstance(); // Function VerseFortniteInternal.fortnite_building_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.fortnite_building_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.fortnite_building_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.gameplay_ability
// Size: 0xd08 (Inherited: 0xb30)
struct Ugameplay_ability : UVerseFortniteAbilityBase {
	char pad_B30[0x1b0]; // 0xb30(0x1b0)
	struct Uevent(t)* __verse_0xBB37B63F_AbilityEndedEvent; // 0xce0(0x08)
	VerseFunctionProperty __verse_0xD4B2C208_ActivateAbility; // 0xbc0(0x10)
	VerseFunctionProperty __verse_0x32D79620_ActivateAbilityAsync; // 0xbb0(0x10)
	VerseFunctionProperty __verse_0xAA473109__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToOwner_L_Ngameplay__effect__asset_M_Nfloat_R; // 0xb60(0x10)
	VerseFunctionProperty __verse_0x7E5CC1A0__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToTarget_L_Nability__target__data_M_Ngameplay__effect__asset_M_Nfloat_R; // 0xb70(0x10)
	VerseFunctionProperty __verse_0x630370EE__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RCallEndAbility; // 0xb30(0x10)
	VerseFunctionProperty __verse_0x2CAFA422__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RDoTargeting_L_Nint_R; // 0xb90(0x10)
	VerseFunctionProperty __verse_0x2B4CB662__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_REndAbility; // 0xbe0(0x10)
	VerseFunctionProperty __verse_0x7A86A420__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwnerAbilityComponent; // 0xb40(0x10)
	VerseFunctionProperty __verse_0xA654FA76__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwningPlayer; // 0xb50(0x10)
	VerseFunctionProperty __verse_0x47152F0A__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RRemoveGameplayEffectFromOwner_L_Ngameplay__effect__asset_R; // 0xb80(0x10)
	VerseFunctionProperty __verse_0x21C9F778__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__ActivateAbility; // 0xba0(0x10)
	VerseFunctionProperty __verse_0x0634A156__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__EndAbility; // 0xbd0(0x10)
	VerseFunctionProperty __verse_0x1ECDCD34__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActionName; // 0xc60(0x10)
	VerseFunctionProperty __verse_0x8C6E1DB0__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActivationAnim; // 0xcd0(0x10)
	VerseFunctionProperty __verse_0x907C8D5C__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCancelOnInputRelease; // 0xc70(0x10)
	VerseFunctionProperty __verse_0xD20ABED4__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCreateHitWhenNoTarget; // 0xc50(0x10)
	VerseFunctionProperty __verse_0xAF534E3B__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffect; // 0xcb0(0x10)
	VerseFunctionProperty __verse_0x51A285A1__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffectMagnitude; // 0xcc0(0x10)
	VerseFunctionProperty __verse_0x7C522A81__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultTargetingEffect; // 0xc80(0x10)
	VerseFunctionProperty __verse_0x6A81F84C__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetType; // 0xc30(0x10)
	VerseFunctionProperty __verse_0x696D61C1__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingActivationCues; // 0xc90(0x10)
	VerseFunctionProperty __verse_0xFF586EE0__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingImpactCues; // 0xca0(0x10)
	VerseFunctionProperty __verse_0x649F2F25__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingRange; // 0xc40(0x10)
	VerseFunctionProperty __verse_0xBF0DD999__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingShape; // 0xc10(0x10)
	VerseFunctionProperty __verse_0x96035A40__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingSource; // 0xc20(0x10)
	VerseFunctionProperty __verse_0x766AA0AF__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnGiveAbility; // 0xbf0(0x10)
	VerseFunctionProperty __verse_0xCA611812__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnRemoveAbility; // 0xc00(0x10)

	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnRemoveAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnRemoveAbility // (Public|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnGiveAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnGiveAbility // (Public|BlueprintCallable) // @ game+0xdef49c
	enum class verse_target_source _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingSource(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingSource // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	enum class verse_target_shape _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingShape(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingShape // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	double _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingRange(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingRange // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct TArray<VerseStringProperty> _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingImpactCues(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingImpactCues // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct TArray<VerseStringProperty> _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingActivationCues(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingActivationCues // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	enum class verse_target_type _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetType(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetType // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultTargetingEffect(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultTargetingEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	double _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffectMagnitude(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffectMagnitude // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffect(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCreateHitWhenNoTarget(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCreateHitWhenNoTarget // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCancelOnInputRelease(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCancelOnInputRelease // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActivationAnim(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActivationAnim // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	VerseStringProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActionName(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActionName // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__EndAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__EndAbility // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__ActivateAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__ActivateAbility // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RRemoveGameplayEffectFromOwner_L_Ngameplay__effect__asset_R(struct Ugameplay_effect_asset* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RRemoveGameplayEffectFromOwner_L_Ngameplay__effect__asset_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb5c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwningPlayer(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwnerAbilityComponent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwnerAbilityComponent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb54
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_REndAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_REndAbility // (Public|BlueprintCallable) // @ game+0xdef49c
	struct Uability_target_data* _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RDoTargeting_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RDoTargeting_L_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb4c
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RCallEndAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RCallEndAbility // (Native|Public|BlueprintCallable) // @ game+0x63bbb44
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToTarget_L_Nability__target__data_M_Ngameplay__effect__asset_M_Nfloat_R(struct Ftuple_Lability__target__data_Mgameplay__effect__asset_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToTarget_L_Nability__target__data_M_Ngameplay__effect__asset_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb3c
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToOwner_L_Ngameplay__effect__asset_M_Nfloat_R(struct Ftuple_Lgameplay__effect__asset_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToOwner_L_Ngameplay__effect__asset_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb34
	struct Utask(t)* ActivateAbilityAsync(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability.ActivateAbilityAsync // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* ActivateAbility(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.gameplay_ability.ActivateAbility // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseFortniteInternal.gameplay_ability.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.gameplay_ability.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.gameplay_ability.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.gameplay_ability_asset
// Size: 0xe8 (Inherited: 0xe8)
struct Ugameplay_ability_asset : UAsset {

	void $InitInstance(); // Function VerseFortniteInternal.gameplay_ability_asset.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.gameplay_ability_asset.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.gameplay_ability_asset.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.gameplay_effect_asset
// Size: 0xe8 (Inherited: 0xe8)
struct Ugameplay_effect_asset : UAsset {

	void $InitInstance(); // Function VerseFortniteInternal.gameplay_effect_asset.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.gameplay_effect_asset.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.gameplay_effect_asset.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.item_type
// Size: 0x30 (Inherited: 0x28)
struct Uitem_type : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void $InitInstance(); // Function VerseFortniteInternal.item_type.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.item_type.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.item_type.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.Player
// Size: 0x28 (Inherited: 0x28)
struct UPlayer : UObject {

	struct Fplayer_team player_team$Factory(); // Function VerseFortniteInternal.Player.player_team$Factory // (Static|HasOutParms) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.Player.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.player_eliminated_result
// Size: 0x38 (Inherited: 0x28)
struct Uplayer_eliminated_result : UObject {
	struct Uplayer_component* __verse_0x7C71103B_EliminatedPlayer; // 0x28(0x08)
	OptionProperty __verse_0xB989E158_Eliminator; // 0x30(0x08)

	void $InitInstance(); // Function VerseFortniteInternal.player_eliminated_result.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.player_eliminated_result.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.player_eliminated_result.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.player_pickup_component
// Size: 0xb8 (Inherited: 0x60)
struct Uplayer_pickup_component : UEntityComponent {
	char pad_60[0x30]; // 0x60(0x30)
	VerseFunctionProperty __verse_0xCBCBC029__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R; // 0x90(0x10)
	VerseFunctionProperty __verse_0xF4552B58__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R; // 0x80(0x10)
	VerseFunctionProperty __verse_0x92CBECB5__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType; // 0xa0(0x10)
	VerseFunctionProperty __verse_0x89400523__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R; // 0x60(0x10)
	VerseFunctionProperty __verse_0xC3A81506__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R; // 0x70(0x10)

	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R(struct Ftuple_Lvector3_M_Qplayer__component_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb8c
	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb84
	struct Uitem_type* _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb7c
	int64_t _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R(struct Uitem_type* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb74
	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R(struct Ftuple_Litem__type_Mint_Mplayer__component_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb6c
	void $InitInstance(); // Function VerseFortniteInternal.player_pickup_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.player_pickup_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.player_pickup_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.player_start_component
// Size: 0x90 (Inherited: 0x60)
struct Uplayer_start_component : UEntityComponent {
	char pad_60[0x20]; // 0x60(0x20)
	struct TArray<VerseStringProperty> __verse_0x7C32BFF7_tags; // 0x80(0x10)
	VerseFunctionProperty __verse_0xCC113DCA__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R; // 0x60(0x10)
	VerseFunctionProperty __verse_0xC6B8FBBB__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition; // 0x70(0x10)

	struct Fvector3 _L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.player_start_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbce4
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R(struct TArray<VerseStringProperty> __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.player_start_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x63bbcdc
	void $InitInstance(); // Function VerseFortniteInternal.player_start_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.player_start_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.player_start_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerAttributes
// Size: 0x28 (Inherited: 0x28)
struct UPlayerAttributes : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R(struct Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbbd4
	double _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R(struct Ftuple_Lplayer_MPlayerAttribute_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbbcc
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R(struct Ftuple_Lplayer_MPlayerAttribute_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbbc4
	void $InitCDO(); // Function VerseFortniteInternal.PlayerAttributes.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerInventory
// Size: 0x28 (Inherited: 0x28)
struct UPlayerInventory : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R(struct Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbbf4
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R(struct Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbbec
	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R(struct Ftuple_Lplayer_M_Kchar_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbbe4
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbbdc
	void $InitCDO(); // Function VerseFortniteInternal.PlayerInventory.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerInvulnerable
// Size: 0x28 (Inherited: 0x28)
struct UPlayerInvulnerable : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R(struct Ftuple_Lplayer_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerInvulnerable._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbc04
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerInvulnerable._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbbfc
	void $InitCDO(); // Function VerseFortniteInternal.PlayerInvulnerable.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerPickupComponent
// Size: 0x28 (Inherited: 0x28)
struct UPlayerPickupComponent : UObject {

	OptionProperty _L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R(struct Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerPickupComponent._L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbb64
	void $InitCDO(); // Function VerseFortniteInternal.PlayerPickupComponent.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerSpectator
// Size: 0x28 (Inherited: 0x28)
struct UPlayerSpectator : UObject {

	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R(struct Ftuple_Lplayer_Mplayer_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc2c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc24
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc1c
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc14
	struct TArray<struct UPlayer*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc0c
	void $InitCDO(); // Function VerseFortniteInternal.PlayerSpectator.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerStartComponent
// Size: 0x28 (Inherited: 0x28)
struct UPlayerStartComponent : UObject {

	struct TArray<struct Uplayer_start_component*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R(struct Ftuple_Lcomponent_M_K_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerStartComponent._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc34
	void $InitCDO(); // Function VerseFortniteInternal.PlayerStartComponent.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerStasis
// Size: 0x28 (Inherited: 0x28)
struct UPlayerStasis : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbc4c
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R(struct Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbc3c
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbc44
	void $InitCDO(); // Function VerseFortniteInternal.PlayerStasis.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerStatus
// Size: 0x28 (Inherited: 0x28)
struct UPlayerStatus : UObject {

	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R(struct Ftuple_Lplayer__component_Mplayer__status__type_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerStatus._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc54
	void $InitCDO(); // Function VerseFortniteInternal.PlayerStatus.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerTeam
// Size: 0x28 (Inherited: 0x28)
struct UPlayerTeam : UObject {

	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R(struct Ftuple_Lplayer_Mplayer__team_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbcac
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R(struct Ftuple_Lplayer_Mplayer__team_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbca4
	int64_t _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc94
	struct TArray<struct UPlayer*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc8c
	struct FColor _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc84
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc9c
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc7c
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc74
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc6c
	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R(struct Ftuple_Lplayer__team_Mplayer__team_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc64
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbc5c
	void $InitCDO(); // Function VerseFortniteInternal.PlayerTeam.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerTravel
// Size: 0x28 (Inherited: 0x28)
struct UPlayerTravel : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerTravel._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbbdc
	void $InitCDO(); // Function VerseFortniteInternal.PlayerTravel.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.PlayerVisibility
// Size: 0x28 (Inherited: 0x28)
struct UPlayerVisibility : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R(struct Ftuple_Lplayer_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.PlayerVisibility._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbcb4
	void $InitCDO(); // Function VerseFortniteInternal.PlayerVisibility.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.projectile_movement_component
// Size: 0xf0 (Inherited: 0x90)
struct Uprojectile_movement_component : UVerseFortniteMovementComponentBase {
	char pad_90[0x40]; // 0x90(0x40)
	VerseFunctionProperty __verse_0x8040185E__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R; // 0xd0(0x10)
	VerseFunctionProperty __verse_0x0B25997B__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R; // 0x90(0x10)
	VerseFunctionProperty __verse_0x68515442__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R; // 0xe0(0x10)
	VerseFunctionProperty __verse_0x7B2D42E9__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R; // 0xb0(0x10)
	VerseFunctionProperty __verse_0xF24F59C9__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R; // 0xc0(0x10)
	VerseFunctionProperty __verse_0x6C4C17DB__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R; // 0xa0(0x10)

	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63bbbbc
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x63bbbb4
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63bbbac
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63bbba4
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb9c
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63bbb94
	void $InitInstance(); // Function VerseFortniteInternal.projectile_movement_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.projectile_movement_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.projectile_movement_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.stat_container
// Size: 0x68 (Inherited: 0x28)
struct Ustat_container : UObject {
	VerseFunctionProperty __verse_0xBD62F3AE__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	VerseFunctionProperty __verse_0xF8339FFD__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R; // 0x48(0x10)
	VerseFunctionProperty __verse_0x15ECECB2__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R; // 0x38(0x10)

	char _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbdd4
	char _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbdcc
	int64_t _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd7c
	void $InitInstance(); // Function VerseFortniteInternal.stat_container.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.stat_container.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.stat_container.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.match_stats
// Size: 0x158 (Inherited: 0x68)
struct Umatch_stats : Ustat_container {
	char pad_68[0x70]; // 0x68(0x70)
	VerseFunctionProperty __verse_0xD6C53453__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R; // 0xd8(0x10)
	VerseFunctionProperty __verse_0x1F493C56__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R; // 0x78(0x10)
	VerseFunctionProperty __verse_0x384BE6C0__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R; // 0xa8(0x10)
	VerseFunctionProperty __verse_0xAB54707E__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R; // 0xe8(0x10)
	VerseFunctionProperty __verse_0xF099193F__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x88(0x10)
	VerseFunctionProperty __verse_0xDDA80A55__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R; // 0xb8(0x10)
	VerseFunctionProperty __verse_0x0F1148C3__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset; // 0xf8(0x10)
	VerseFunctionProperty __verse_0xC5F988D4__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R; // 0xc8(0x10)
	VerseFunctionProperty __verse_0x822BA24C__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x68(0x10)
	VerseFunctionProperty __verse_0xAD5EC947__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R; // 0x98(0x10)

	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(struct Ftuple_Lplayer__team_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x63bbdc4
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(struct Ftuple_Lplayer_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x63bbdbc
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x63bbdb4
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset // (Native|Public|BlueprintCallable) // @ game+0x63bbdac
	char _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(struct Ftuple_Lplayer__team_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbda4
	char _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(struct Ftuple_Lplayer_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd9c
	char _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd94
	int64_t _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R(struct Ftuple_Lplayer__team_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd8c
	int64_t _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R(struct Ftuple_Lplayer_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd84
	int64_t _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd7c
	void $InitInstance(); // Function VerseFortniteInternal.match_stats.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.match_stats.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.match_stats.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.player_stat_values
// Size: 0x70 (Inherited: 0x68)
struct Uplayer_stat_values : Ustat_container {
	struct UPlayer* __verse_0xDEE8E111_OwningPlayer; // 0x68(0x08)

	void $InitInstance(); // Function VerseFortniteInternal.player_stat_values.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.player_stat_values.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.player_stat_values.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.storm_controller_component
// Size: 0xf0 (Inherited: 0x70)
struct Ustorm_controller_component : UEntityFortniteStormControllerComponent {
	char pad_70[0x60]; // 0x70(0x60)
	double __verse_0xA5122212_startRadius; // 0xd0(0x08)
	double __verse_0xE6BD5D91_boundsRadius; // 0xd8(0x08)
	struct TArray<struct Ustorm_phase*> __verse_0xC2790393_phases; // 0xe0(0x10)
	VerseFunctionProperty __verse_0x7675A710__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin; // 0x70(0x10)
	VerseFunctionProperty __verse_0x4D705B14__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend; // 0x80(0x10)
	VerseFunctionProperty __verse_0xF5FB08F4__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists; // 0xc0(0x10)
	VerseFunctionProperty __verse_0xD93DC734__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause; // 0x90(0x10)
	VerseFunctionProperty __verse_0x64AA7497__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset; // 0xa0(0x10)
	VerseFunctionProperty __verse_0xD763A2FA__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases; // 0xb0(0x10)

	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause // (Native|Public|BlueprintCallable) // @ game+0x63bbd04
	char _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbcfc
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend // (Native|Public|BlueprintCallable) // @ game+0x63bbcf4
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin // (Native|Public|BlueprintCallable) // @ game+0x63bbcec
	void $InitInstance(); // Function VerseFortniteInternal.storm_controller_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.storm_controller_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.storm_controller_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.storm_phase
// Size: 0x90 (Inherited: 0x28)
struct Ustorm_phase : UObject {
	double __verse_0x4CDBEC4D_waitTime; // 0x28(0x08)
	double __verse_0xDFEF9A4E_shrinkTime; // 0x30(0x08)
	double __verse_0x96A9475A_endRadius; // 0x38(0x08)
	double __verse_0x61AAA523_endRadiusPercentage; // 0x40(0x08)
	int64_t __verse_0x7781DBF3_damageIndex; // 0x48(0x08)
	char __verse_0x3902DD0B_moves : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	double __verse_0xA376E20D_minMovementDistance; // 0x58(0x08)
	double __verse_0x2C327F1D_maxMovementDistance; // 0x60(0x08)
	double __verse_0xDA5EE7C4_minMovementDistancePercentage; // 0x68(0x08)
	double __verse_0x7B63CDBA_maxMovementDistancePercentage; // 0x70(0x08)
	struct Fvector3 __verse_0xD6F5A7B7_endLocation; // 0x78(0x18)

	void $InitInstance(); // Function VerseFortniteInternal.storm_phase.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.storm_phase.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.storm_phase.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.task_fort_playspace_component$__WaitForPlayerEliminated
// Size: 0x160 (Inherited: 0x148)
struct Utask_fort_playspace_component$__WaitForPlayerEliminated : Utask(t) {
	struct Ufort_playspace_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct Uplayer_eliminated_result* _RetVal; // 0x158(0x08)

	int64_t Update(); // Function VerseFortniteInternal.task_fort_playspace_component$__WaitForPlayerEliminated.Update // (Native|Public|HasOutParms) // @ game+0x63bbe74
};

// VerseClass VerseFortniteInternal.task_gameplay_ability$ActivateAbility
// Size: 0x169 (Inherited: 0x148)
struct Utask_gameplay_ability$ActivateAbility : Utask(t) {
	struct Ugameplay_ability* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class EVerseTrue ; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	VerseFunctionProperty ; // 0x158(0x10)
	struct Ftuple_L_R ; // 0x168(0x01)

	int64_t Update(); // Function VerseFortniteInternal.task_gameplay_ability$ActivateAbility.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.task_gameplay_ability$ActivateAbilityAsync
// Size: 0x1b8 (Inherited: 0x148)
struct Utask_gameplay_ability$ActivateAbilityAsync : Utask(t) {
	struct Ugameplay_ability* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	int64_t ; // 0x158(0x08)
	struct Utask(t)* ; // 0x160(0x08)
	VerseFunctionProperty ; // 0x168(0x10)
	struct Ftuple_L_R ; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	int64_t ; // 0x180(0x08)
	struct Uevent(t)* ; // 0x188(0x08)
	struct Utask(t)* ; // 0x190(0x08)
	VerseFunctionProperty ; // 0x198(0x10)
	struct Ftuple_L_R ; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	int64_t ; // 0x1b0(0x08)

	int64_t Update(); // Function VerseFortniteInternal.task_gameplay_ability$ActivateAbilityAsync.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.team_stat_values
// Size: 0xf0 (Inherited: 0x68)
struct Uteam_stat_values : Ustat_container {
	char pad_68[0x80]; // 0x68(0x80)
	struct Fplayer_team __verse_0x555B2F95_Team; // 0xe8(0x04)
	VerseFunctionProperty __verse_0xFFA43169__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R; // 0x78(0x10)
	VerseFunctionProperty __verse_0xFE7BA9E0__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x88(0x10)
	VerseFunctionProperty __verse_0xE0516D12__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x68(0x10)

	void _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(struct Ftuple_Lplayer_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x63bbdec
	char _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(struct Ftuple_Lplayer_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbde4
	int64_t _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R(struct Ftuple_Lplayer_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbddc
	void $InitInstance(); // Function VerseFortniteInternal.team_stat_values.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseFortniteInternal.team_stat_values.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseFortniteInternal.team_stat_values.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseFortniteInternal.VerseFortniteHacks
// Size: 0x28 (Inherited: 0x28)
struct UVerseFortniteHacks : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R(struct Ftuple_Lcomponent_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbd24
	void _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R(struct Ftuple_Lplayer__component_Mplayer__start__component_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63bbd1c
	struct TArray<struct UEntityComponent*> _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_Ntype_Lany_M_20component_R_R(struct Ftuple_Lcomponent_Mcomponent_R __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_Ntype_Lany_M_20component_R_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd14
	int64_t _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseFortniteInternal.VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbd0c
	void $InitCDO(); // Function VerseFortniteInternal.VerseFortniteHacks.$InitCDO // (None) // @ game+0xdef49c
};

