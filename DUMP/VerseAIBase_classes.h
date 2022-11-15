// VerseClass VerseAIBase.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseAIBase.ai_behavior
// Size: 0x110 (Inherited: 0xb8)
struct Uai_behavior : UAIBehaviorScript {
	char pad_B8[0x30]; // 0xb8(0x30)
	VerseFunctionProperty __verse_0xD21A7E39__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_RGetAIInterface_L_Nany_R; // 0xe8(0x10)
	VerseFunctionProperty __verse_0x53AA18D6__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_RGetCharacter; // 0xf8(0x10)
	VerseFunctionProperty __verse_0x1F792AAA_OnBegin; // 0xc8(0x10)
	VerseFunctionProperty __verse_0xBB3A9AC0__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_ROnEnd; // 0xd8(0x10)

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_ROnEnd(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.ai_behavior._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_ROnEnd // (Public|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnBegin(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.ai_behavior.OnBegin // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_RGetCharacter(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.ai_behavior._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_RGetCharacter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x659cb74
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_RGetAIInterface_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseAIBase.ai_behavior._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_RGetAIInterface_L_Nany_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x659cb6c
	void $InitInstance(); // Function VerseAIBase.ai_behavior.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAIBase.ai_behavior.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAIBase.ai_behavior.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAIBase.ai_component
// Size: 0xf0 (Inherited: 0xd8)
struct Uai_component : UAIComponentBase {
	VerseFunctionProperty __verse_0x7A73EB9F__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__component_N_RSwitchTeam_L_Nint_R; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__component_N_RSwitchTeam_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseAIBase.ai_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__component_N_RSwitchTeam_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x65988cc
	void $InitInstance(); // Function VerseAIBase.ai_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAIBase.ai_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAIBase.ai_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAIBase.ai_interface
// Size: 0x28 (Inherited: 0x28)
struct Uai_interface : UObject {
};

// VerseClass VerseAIBase.fort_ai_movement_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_ai_movement_interface : UObject {

	enum class action_result _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__ai__movement__interface_N_RStopNavigating(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_ai_movement_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__ai__movement__interface_N_RStopNavigating // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_ai_movement_interface.NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_creature_actions_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_creature_actions_interface : UObject {
};

// VerseClass VerseAIBase.fort_health_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_health_interface : UObject {

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetShield_L_Nfloat_R // (Public|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxShield_L_Nfloat_R // (Public|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxHealth_L_Nfloat_R // (Public|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetHealth_L_Nfloat_R // (Public|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnDamaged(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface.OnDamaged // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsVulnerable(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsVulnerable // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDownButNotOut(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDownButNotOut // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDown(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDown // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShieldPercent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShieldPercent // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShield(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShield // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxShield(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxShield // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxHealth(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxHealth // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealthPercent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealthPercent // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealth(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_health_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealth // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_inventory_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_inventory_interface : UObject {

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R // (Public|BlueprintCallable) // @ game+0xdef49c
	int64_t _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__weapon__descriptor_Tlogic_R(VerseFunctionProperty __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__weapon__descriptor_Tlogic_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsEquipped_L_Nfort__weapon__descriptor_R(struct Ffort_weapon_descriptor __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsEquipped_L_Nfort__weapon__descriptor_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct TArray<struct Ffort_weapon_descriptor> _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllWeapons(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllWeapons // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__weapon__descriptor_R(struct Ffort_weapon_descriptor __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__weapon__descriptor_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_loot_perception_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_loot_perception_interface : UObject {

	struct Utask(t)* OnBestObjectToLootChanged(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_loot_perception_interface.OnBestObjectToLootChanged // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_loot_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_navigation_target
// Size: 0x48 (Inherited: 0x28)
struct Ufort_navigation_target : UObject {
	char pad_28[0x20]; // 0x28(0x20)

	void $InitInstance(); // Function VerseAIBase.fort_navigation_target.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAIBase.fort_navigation_target.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAIBase.fort_navigation_target.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_npc_actions_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_npc_actions_interface : UObject {

	struct Utask(t)* Revive_L_Nfort__character_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_actions_interface.Revive_L_Nfort__character_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* PlayRandomEmote(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_actions_interface.PlayRandomEmote // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* LootObject_L_Nfort__loot__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_loot_info __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_actions_interface.LootObject_L_Nfort__loot__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* LookAt_L_Nvector3_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_actions_interface.LookAt_L_Nvector3_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Idle_L_Nfloat_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_actions_interface.Idle_L_Nfloat_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_npc_movement_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_npc_movement_interface : UObject {

	struct Utask(t)* UsePatrolSpeed(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface.UsePatrolSpeed // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* TacticalSprint(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface.TacticalSprint // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	enum class action_result _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RStandUp(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RStandUp // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Sprint(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface.Sprint // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Slide(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface.Slide // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R(struct Ftuple_Lvector3_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R // (Public|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* RoamAround_L_Nfort__navigation__parameters_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, OptionProperty __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface.RoamAround_L_Nfort__navigation__parameters_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RResetLeash(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RResetLeash // (Public|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* MoveInRangeToAttack(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface.MoveInRangeToAttack // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Jump(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface.Jump // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Fvector3 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentNavLocation(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentNavLocation // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentDestination(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentDestination // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Crouch(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_npc_movement_interface.Crouch // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_obstacle_perception_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_obstacle_perception_interface : UObject {

	struct Utask(t)* OnObstacleChanged(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_obstacle_perception_interface.OnObstacleChanged // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_obstacle_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_threat_perception_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_threat_perception_interface : UObject {

	struct Utask(t)* OnThreatPerceptionChanged_L_Nfort__threat__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_threat_info __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_threat_perception_interface.OnThreatPerceptionChanged_L_Nfort__threat__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnBestThreatChanged(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_threat_perception_interface.OnBestThreatChanged // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nfort__character_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_threat_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nfort__character_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetOrCreateThreatInfo_L_Nfort__character_M_Nlogic_R(struct Ftuple_Lfort__character_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_threat_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetOrCreateThreatInfo_L_Nfort__character_M_Nlogic_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetCurrentThreatInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_threat_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetCurrentThreatInfo // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetAllThreatInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_threat_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetAllThreatInfo // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RForgetThreat_L_Nfort__threat__info_R(struct Ffort_threat_info __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_threat_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RForgetThreat_L_Nfort__threat__info_R // (Public|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.fort_weapon_actions_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_weapon_actions_interface : UObject {

	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_weapon_actions_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_weapon_actions_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_weapon_actions_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* EngageFight_L_Nfort__threat__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_threat_info __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_weapon_actions_interface.EngageFight_L_Nfort__threat__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* DestroyObstacle_L_Nfort__obstacle__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_obstacle_info __verse_0xB2CDDD72_Argument); // Function VerseAIBase.fort_weapon_actions_interface.DestroyObstacle_L_Nfort__obstacle__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_ai_behavior$OnBegin
// Size: 0x151 (Inherited: 0x148)
struct Utask_ai_behavior$OnBegin : Utask(t) {
	struct Uai_behavior* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VerseAIBase.task_ai_behavior$OnBegin.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_ai_movement_interface$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R
// Size: 0x171 (Inherited: 0x148)
struct Utask_fort_ai_movement_interface$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R : Utask(t) {
	struct Ufort_ai_movement_interface* _Self; // 0x148(0x08)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument; // 0x150(0x20)
	enum class fort_navigate_result _RetVal; // 0x170(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_ai_movement_interface$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_health_interface$OnDamaged
// Size: 0x198 (Inherited: 0x148)
struct Utask_fort_health_interface$OnDamaged : Utask(t) {
	struct Ufort_health_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct Ffort_damage_info _RetVal; // 0x158(0x40)

	int64_t Update(); // Function VerseAIBase.task_fort_health_interface$OnDamaged.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_loot_perception_interface$OnBestObjectToLootChanged
// Size: 0x181 (Inherited: 0x148)
struct Utask_fort_loot_perception_interface$OnBestObjectToLootChanged : Utask(t) {
	struct Ufort_loot_perception_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x29)

	int64_t Update(); // Function VerseAIBase.task_fort_loot_perception_interface$OnBestObjectToLootChanged.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_actions_interface$Idle_L_Nfloat_R
// Size: 0x158 (Inherited: 0x148)
struct Utask_fort_npc_actions_interface$Idle_L_Nfloat_R : Utask(t) {
	struct Ufort_npc_actions_interface* _Self; // 0x148(0x08)
	double __verse_0xB2CDDD72_Argument; // 0x150(0x08)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_actions_interface$Idle_L_Nfloat_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_actions_interface$LookAt_L_Nvector3_R
// Size: 0x168 (Inherited: 0x148)
struct Utask_fort_npc_actions_interface$LookAt_L_Nvector3_R : Utask(t) {
	struct Ufort_npc_actions_interface* _Self; // 0x148(0x08)
	struct Fvector3 __verse_0xB2CDDD72_Argument; // 0x150(0x18)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_actions_interface$LookAt_L_Nvector3_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_actions_interface$LootObject_L_Nfort__loot__info_R
// Size: 0x179 (Inherited: 0x148)
struct Utask_fort_npc_actions_interface$LootObject_L_Nfort__loot__info_R : Utask(t) {
	struct Ufort_npc_actions_interface* _Self; // 0x148(0x08)
	struct Ffort_loot_info __verse_0xB2CDDD72_Argument; // 0x150(0x28)
	enum class action_result _RetVal; // 0x178(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_actions_interface$LootObject_L_Nfort__loot__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_actions_interface$PlayRandomEmote
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_npc_actions_interface$PlayRandomEmote : Utask(t) {
	struct Ufort_npc_actions_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_actions_interface$PlayRandomEmote.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_actions_interface$Revive_L_Nfort__character_R
// Size: 0x159 (Inherited: 0x148)
struct Utask_fort_npc_actions_interface$Revive_L_Nfort__character_R : Utask(t) {
	struct Ufort_npc_actions_interface* _Self; // 0x148(0x08)
	struct UObject* __verse_0xB2CDDD72_Argument; // 0x150(0x08)
	enum class action_result _RetVal; // 0x158(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_actions_interface$Revive_L_Nfort__character_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_movement_interface$Crouch
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_npc_movement_interface$Crouch : Utask(t) {
	struct Ufort_npc_movement_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_movement_interface$Crouch.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_movement_interface$Jump
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_npc_movement_interface$Jump : Utask(t) {
	struct Ufort_npc_movement_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_movement_interface$Jump.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_movement_interface$MoveInRangeToAttack
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_npc_movement_interface$MoveInRangeToAttack : Utask(t) {
	struct Ufort_npc_movement_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_movement_interface$MoveInRangeToAttack.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_movement_interface$RoamAround_L_Nfort__navigation__parameters_R
// Size: 0x162 (Inherited: 0x148)
struct Utask_fort_npc_movement_interface$RoamAround_L_Nfort__navigation__parameters_R : Utask(t) {
	struct Ufort_npc_movement_interface* _Self; // 0x148(0x08)
	OptionProperty __verse_0xB2CDDD72_Argument; // 0x150(0x11)
	enum class fort_navigate_result _RetVal; // 0x161(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_movement_interface$RoamAround_L_Nfort__navigation__parameters_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_movement_interface$Slide
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_npc_movement_interface$Slide : Utask(t) {
	struct Ufort_npc_movement_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_movement_interface$Slide.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_movement_interface$Sprint
// Size: 0x151 (Inherited: 0x148)
struct Utask_fort_npc_movement_interface$Sprint : Utask(t) {
	struct Ufort_npc_movement_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_movement_interface$Sprint.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_movement_interface$TacticalSprint
// Size: 0x151 (Inherited: 0x148)
struct Utask_fort_npc_movement_interface$TacticalSprint : Utask(t) {
	struct Ufort_npc_movement_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_movement_interface$TacticalSprint.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_npc_movement_interface$UsePatrolSpeed
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_npc_movement_interface$UsePatrolSpeed : Utask(t) {
	struct Ufort_npc_movement_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_npc_movement_interface$UsePatrolSpeed.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_obstacle_perception_interface$OnObstacleChanged
// Size: 0x181 (Inherited: 0x148)
struct Utask_fort_obstacle_perception_interface$OnObstacleChanged : Utask(t) {
	struct Ufort_obstacle_perception_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x29)

	int64_t Update(); // Function VerseAIBase.task_fort_obstacle_perception_interface$OnObstacleChanged.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_threat_perception_interface$OnBestThreatChanged
// Size: 0x191 (Inherited: 0x148)
struct Utask_fort_threat_perception_interface$OnBestThreatChanged : Utask(t) {
	struct Ufort_threat_perception_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x39)

	int64_t Update(); // Function VerseAIBase.task_fort_threat_perception_interface$OnBestThreatChanged.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_threat_perception_interface$OnThreatPerceptionChanged_L_Nfort__threat__info_R
// Size: 0x1c1 (Inherited: 0x148)
struct Utask_fort_threat_perception_interface$OnThreatPerceptionChanged_L_Nfort__threat__info_R : Utask(t) {
	struct Ufort_threat_perception_interface* _Self; // 0x148(0x08)
	struct Ffort_threat_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	OptionProperty _RetVal; // 0x188(0x39)

	int64_t Update(); // Function VerseAIBase.task_fort_threat_perception_interface$OnThreatPerceptionChanged_L_Nfort__threat__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_weapon_actions_interface$DestroyObstacle_L_Nfort__obstacle__info_R
// Size: 0x179 (Inherited: 0x148)
struct Utask_fort_weapon_actions_interface$DestroyObstacle_L_Nfort__obstacle__info_R : Utask(t) {
	struct Ufort_weapon_actions_interface* _Self; // 0x148(0x08)
	struct Ffort_obstacle_info __verse_0xB2CDDD72_Argument; // 0x150(0x28)
	enum class action_result _RetVal; // 0x178(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_weapon_actions_interface$DestroyObstacle_L_Nfort__obstacle__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.task_fort_weapon_actions_interface$EngageFight_L_Nfort__threat__info_R
// Size: 0x189 (Inherited: 0x148)
struct Utask_fort_weapon_actions_interface$EngageFight_L_Nfort__threat__info_R : Utask(t) {
	struct Ufort_weapon_actions_interface* _Self; // 0x148(0x08)
	struct Ffort_threat_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class action_result _RetVal; // 0x188(0x01)

	int64_t Update(); // Function VerseAIBase.task_fort_weapon_actions_interface$EngageFight_L_Nfort__threat__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseAIBase.VerseAIBase
// Size: 0x28 (Inherited: 0x28)
struct UVerseAIBase : UObject {

	VerseStringProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RToString_L_Naction__result_R(enum class action_result __verse_0xB2CDDD72_Argument); // Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RToString_L_Naction__result_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__loot__info_R(struct Ffort_loot_info __verse_0xB2CDDD72_Argument, uint64_t InstancingGraph, struct Ufort_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject); // Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__loot__info_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x659cb8c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__threat__info_R(struct Ffort_threat_info __verse_0xB2CDDD72_Argument, uint64_t InstancingGraph, struct Ufort_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject); // Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__threat__info_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x659cb94
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument, uint64_t InstancingGraph, struct Ufort_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject); // Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nvector3_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x659cb9c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__character_R(struct UObject* __verse_0xB2CDDD72_Argument, uint64_t InstancingGraph, struct Ufort_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject); // Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__character_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x659cb84
	struct Fvector3 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RGetThreatLocation_L_Nfort__threat__info_R(struct Ffort_threat_info __verse_0xB2CDDD72_Argument); // Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RGetThreatLocation_L_Nfort__threat__info_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x659cb7c
	struct Ffort_loot_info fort_loot_info$Factory(); // Function VerseAIBase.VerseAIBase.fort_loot_info$Factory // (Static|HasOutParms) // @ game+0xdef49c
	struct Ffort_obstacle_info fort_obstacle_info$Factory(); // Function VerseAIBase.VerseAIBase.fort_obstacle_info$Factory // (Static|HasOutParms) // @ game+0xdef49c
	struct Ffort_threat_info fort_threat_info$Factory(); // Function VerseAIBase.VerseAIBase.fort_threat_info$Factory // (Static|HasOutParms) // @ game+0xdef49c
	struct Ffort_weapon_descriptor fort_weapon_descriptor$Factory(); // Function VerseAIBase.VerseAIBase.fort_weapon_descriptor$Factory // (Static|HasOutParms) // @ game+0xdef49c
	struct Ffort_damage_info fort_damage_info$Factory(); // Function VerseAIBase.VerseAIBase.fort_damage_info$Factory // (Static|HasOutParms) // @ game+0xdef49c
	struct Ffort_navigation_parameters fort_navigation_parameters$Factory(); // Function VerseAIBase.VerseAIBase.fort_navigation_parameters$Factory // (Static|HasOutParms) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAIBase.VerseAIBase.$InitCDO // (None) // @ game+0xdef49c
};

