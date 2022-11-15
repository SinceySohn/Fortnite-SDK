// VerseClass VerseNPC.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseNPC.health_component
// Size: 0x160 (Inherited: 0x80)
struct Uhealth_component : UHealthComponentBase {
	char pad_80[0x30]; // 0x80(0x30)
	VerseFunctionProperty __verse_0x79B8B7C1__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealth; // 0xb0(0x10)
	VerseFunctionProperty __verse_0x22AD90AC__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealthPercent; // 0xc0(0x10)
	VerseFunctionProperty __verse_0x1DA8DD1B__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxHealth; // 0xd0(0x10)
	char pad_E0[0x40]; // 0xe0(0x40)
	VerseFunctionProperty __verse_0xE374C653__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxShield; // 0x120(0x10)
	VerseFunctionProperty __verse_0x8764AC89__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShield; // 0x100(0x10)
	VerseFunctionProperty __verse_0xA28ECA65__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShieldPercent; // 0x110(0x10)
	VerseFunctionProperty __verse_0x2FFCBCA6__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDown; // 0x80(0x10)
	VerseFunctionProperty __verse_0x2D3FD260__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDownButNotOut; // 0x90(0x10)
	VerseFunctionProperty __verse_0x3F6CEAA0__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsVulnerable; // 0xa0(0x10)
	VerseFunctionProperty __verse_0x0B93B3DC_OnDamaged; // 0x150(0x10)
	VerseFunctionProperty __verse_0xB2464231__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetHealth_L_Nfloat_R; // 0xe0(0x10)
	VerseFunctionProperty __verse_0x2E407283__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxHealth_L_Nfloat_R; // 0xf0(0x10)
	VerseFunctionProperty __verse_0x6F567929__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxShield_L_Nfloat_R; // 0x140(0x10)
	VerseFunctionProperty __verse_0xF350499B__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetShield_L_Nfloat_R; // 0x130(0x10)

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetShield_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x65a7e60
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxShield_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x65a7e58
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetMaxHealth_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x65a7e50
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RSetHealth_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x65a7e48
	struct Utask(t)* OnDamaged(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component.OnDamaged // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsVulnerable(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsVulnerable // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e40
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDownButNotOut(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDownButNotOut // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e30
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDown(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RIsDown // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e38
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShieldPercent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShieldPercent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e20
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShield(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetShield // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e28
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxShield(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxShield // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e18
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxHealth(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetMaxHealth // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e10
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealthPercent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealthPercent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e00
	double _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealth(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__health__interface_N_RGetHealth // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e08
	void $InitInstance(); // Function VerseNPC.health_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseNPC.health_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseNPC.health_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseNPC.inventory_component
// Size: 0x128 (Inherited: 0x90)
struct Uinventory_component : UInventoryComponentBase {
	char pad_90[0x20]; // 0x90(0x20)
	VerseFunctionProperty __verse_0xF20F6F7A__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__weapon__descriptor_R; // 0xb0(0x10)
	VerseFunctionProperty __verse_0x1C4E34BA__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllWeapons; // 0x90(0x10)
	VerseFunctionProperty __verse_0x5EDD40A0__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon; // 0xa0(0x10)
	VerseFunctionProperty __verse_0x3384F8A8__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsEquipped_L_Nfort__weapon__descriptor_R; // 0xc0(0x10)
	VerseFunctionProperty __verse_0xF2BD4A6A__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__weapon__descriptor_Tlogic_R; // 0xd0(0x10)
	VerseFunctionProperty __verse_0x52D1687A__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R; // 0xe0(0x10)
	char pad_110[0x18]; // 0x110(0x18)

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseNPC.inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x65a7e90
	int64_t _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__weapon__descriptor_Tlogic_R(VerseFunctionProperty __verse_0xB2CDDD72_Argument); // Function VerseNPC.inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__weapon__descriptor_Tlogic_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e88
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsEquipped_L_Nfort__weapon__descriptor_R(struct Ffort_weapon_descriptor __verse_0xB2CDDD72_Argument); // Function VerseNPC.inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsEquipped_L_Nfort__weapon__descriptor_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e80
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e78
	struct TArray<struct Ffort_weapon_descriptor> _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllWeapons(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllWeapons // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e70
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__weapon__descriptor_R(struct Ffort_weapon_descriptor __verse_0xB2CDDD72_Argument); // Function VerseNPC.inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__weapon__descriptor_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e68
	void $InitInstance(); // Function VerseNPC.inventory_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseNPC.inventory_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseNPC.inventory_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseNPC.npc_component
// Size: 0x338 (Inherited: 0xf0)
struct Unpc_component : Uai_component {
	char pad_F0[0x220]; // 0xf0(0x220)
	VerseFunctionProperty __verse_0x41F0ABB6_NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R; // 0x310(0x10)
	VerseFunctionProperty __verse_0xDF2A90F7__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__ai__movement__interface_N_RStopNavigating; // 0x320(0x10)
	VerseFunctionProperty __verse_0x6C1D2881__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot; // 0x2a0(0x10)
	VerseFunctionProperty __verse_0x8BA2334B_OnBestObjectToLootChanged; // 0x2b0(0x10)
	VerseFunctionProperty __verse_0xA043FAF9_Idle_L_Nfloat_R; // 0x1c0(0x10)
	VerseFunctionProperty __verse_0xC907A4E0_LookAt_L_Nvector3_R; // 0x1f0(0x10)
	VerseFunctionProperty __verse_0x3C8F838B_LootObject_L_Nfort__loot__info_R; // 0x200(0x10)
	VerseFunctionProperty __verse_0x9765CB04_PlayRandomEmote; // 0x1d0(0x10)
	VerseFunctionProperty __verse_0xE661986A_Revive_L_Nfort__character_R; // 0x1e0(0x10)
	VerseFunctionProperty __verse_0xE4D0BB73_Crouch; // 0x130(0x10)
	VerseFunctionProperty __verse_0x75C81039__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentDestination; // 0x120(0x10)
	VerseFunctionProperty __verse_0xDAFCBC61__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentNavLocation; // 0x110(0x10)
	VerseFunctionProperty __verse_0x91E44EAA_Jump; // 0x170(0x10)
	VerseFunctionProperty __verse_0x514829C1_MoveInRangeToAttack; // 0x100(0x10)
	VerseFunctionProperty __verse_0xBF43B604__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RResetLeash; // 0x1b0(0x10)
	VerseFunctionProperty __verse_0xF83B0EED_RoamAround_L_Nfort__navigation__parameters_R; // 0xf0(0x10)
	VerseFunctionProperty __verse_0x66BC399F__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R; // 0x1a0(0x10)
	VerseFunctionProperty __verse_0xD27C8306_Slide; // 0x180(0x10)
	VerseFunctionProperty __verse_0x19F8ABA1_Sprint; // 0x150(0x10)
	VerseFunctionProperty __verse_0xB8336456__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RStandUp; // 0x190(0x10)
	VerseFunctionProperty __verse_0xCB7DDA42_TacticalSprint; // 0x160(0x10)
	VerseFunctionProperty __verse_0x8BC8C68F_UsePatrolSpeed; // 0x140(0x10)
	VerseFunctionProperty __verse_0x47C9249E__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo; // 0x280(0x10)
	VerseFunctionProperty __verse_0xA19AC819_OnObstacleChanged; // 0x290(0x10)
	VerseFunctionProperty __verse_0x83990954__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RForgetThreat_L_Nfort__threat__info_R; // 0x250(0x10)
	VerseFunctionProperty __verse_0xD020DBCD__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetAllThreatInfo; // 0x220(0x10)
	VerseFunctionProperty __verse_0x4EF5F14A__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetCurrentThreatInfo; // 0x210(0x10)
	VerseFunctionProperty __verse_0x37601346__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetOrCreateThreatInfo_L_Nfort__character_M_Nlogic_R; // 0x240(0x10)
	VerseFunctionProperty __verse_0x265EC7F8__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nfort__character_R; // 0x230(0x10)
	VerseFunctionProperty __verse_0x13EC72B3_OnBestThreatChanged; // 0x260(0x10)
	VerseFunctionProperty __verse_0xA27F291B_OnThreatPerceptionChanged_L_Nfort__threat__info_R; // 0x270(0x10)
	VerseFunctionProperty __verse_0x6874F6BC_DestroyObstacle_L_Nfort__obstacle__info_R; // 0x2d0(0x10)
	VerseFunctionProperty __verse_0x67754AE9_EngageFight_L_Nfort__threat__info_R; // 0x2c0(0x10)
	VerseFunctionProperty __verse_0x96D81014__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire; // 0x2e0(0x10)
	VerseFunctionProperty __verse_0x3B37FA9B__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack; // 0x300(0x10)
	VerseFunctionProperty __verse_0x48209BC3__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload; // 0x2f0(0x10)

	struct Utask(t)* UsePatrolSpeed(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.UsePatrolSpeed // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* TacticalSprint(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.TacticalSprint // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	enum class action_result _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__ai__movement__interface_N_RStopNavigating(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__ai__movement__interface_N_RStopNavigating // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65988d4
	enum class action_result _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RStandUp(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RStandUp // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6598904
	struct Utask(t)* Sprint(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Sprint // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Slide(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Slide // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R(struct Ftuple_Lvector3_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x65988fc
	struct Utask(t)* RoamAround_L_Nfort__navigation__parameters_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, OptionProperty __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.RoamAround_L_Nfort__navigation__parameters_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Revive_L_Nfort__character_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Revive_L_Nfort__character_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RResetLeash(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RResetLeash // (Native|Public|BlueprintCallable) // @ game+0x65988f4
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x659894c
	struct Utask(t)* PlayRandomEmote(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.PlayRandomEmote // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnThreatPerceptionChanged_L_Nfort__threat__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_threat_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnThreatPerceptionChanged_L_Nfort__threat__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnObstacleChanged(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnObstacleChanged // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnBestThreatChanged(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnBestThreatChanged // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnBestObjectToLootChanged(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnBestObjectToLootChanged // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* MoveInRangeToAttack(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.MoveInRangeToAttack // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6598944
	struct Utask(t)* LootObject_L_Nfort__loot__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_loot_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.LootObject_L_Nfort__loot__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* LookAt_L_Nvector3_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.LookAt_L_Nvector3_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Jump(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Jump // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Idle_L_Nfloat_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Idle_L_Nfloat_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nfort__character_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nfort__character_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6598934
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetOrCreateThreatInfo_L_Nfort__character_M_Nlogic_R(struct Ftuple_Lfort__character_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetOrCreateThreatInfo_L_Nfort__character_M_Nlogic_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x659892c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x659890c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetCurrentThreatInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetCurrentThreatInfo // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6598924
	struct Fvector3 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentNavLocation(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentNavLocation // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65988ec
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentDestination(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__npc__movement__interface_N_RGetCurrentDestination // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65988e4
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65988dc
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetAllThreatInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetAllThreatInfo // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x659891c
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RForgetThreat_L_Nfort__threat__info_R(struct Ffort_threat_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RForgetThreat_L_Nfort__threat__info_R // (Native|Public|BlueprintCallable) // @ game+0x6598914
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x659893c
	struct Utask(t)* EngageFight_L_Nfort__threat__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_threat_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.EngageFight_L_Nfort__threat__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* DestroyObstacle_L_Nfort__obstacle__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_obstacle_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.DestroyObstacle_L_Nfort__obstacle__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* Crouch(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Crouch // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseNPC.npc_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseNPC.npc_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseNPC.npc_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseNPC.NPCTeam
// Size: 0x28 (Inherited: 0x28)
struct UNPCTeam : UObject {

	struct TArray<struct UObject*> _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fNPCTeam_N_RGetTeamMembers_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VerseNPC.NPCTeam._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fNPCTeam_N_RGetTeamMembers_L_Nentity_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7ea0
	struct TArray<struct UObject*> _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fNPCTeam_N_RGetSquadMembers_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VerseNPC.NPCTeam._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fNPCTeam_N_RGetSquadMembers_L_Nentity_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65a7e98
	void $InitCDO(); // Function VerseNPC.NPCTeam.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseNPC.task_health_component$OnDamaged
// Size: 0x198 (Inherited: 0x148)
struct Utask_health_component$OnDamaged : Utask(t) {
	struct Uhealth_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct Ffort_damage_info _RetVal; // 0x158(0x40)

	int64_t Update(); // Function VerseNPC.task_health_component$OnDamaged.Update // (Native|Public|HasOutParms) // @ game+0x65a7df8
};

// VerseClass VerseNPC.task_npc_component$Crouch
// Size: 0x152 (Inherited: 0x148)
struct Utask_npc_component$Crouch : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Crouch.Update // (Native|Public|HasOutParms) // @ game+0x65987dc
};

// VerseClass VerseNPC.task_npc_component$DestroyObstacle_L_Nfort__obstacle__info_R
// Size: 0x179 (Inherited: 0x148)
struct Utask_npc_component$DestroyObstacle_L_Nfort__obstacle__info_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ffort_obstacle_info __verse_0xB2CDDD72_Argument; // 0x150(0x28)
	enum class action_result _RetVal; // 0x178(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$DestroyObstacle_L_Nfort__obstacle__info_R.Update // (Native|Public|HasOutParms) // @ game+0x65987e4
};

// VerseClass VerseNPC.task_npc_component$EngageFight_L_Nfort__threat__info_R
// Size: 0x189 (Inherited: 0x148)
struct Utask_npc_component$EngageFight_L_Nfort__threat__info_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ffort_threat_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class action_result _RetVal; // 0x188(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$EngageFight_L_Nfort__threat__info_R.Update // (Native|Public|HasOutParms) // @ game+0x65987ec
};

// VerseClass VerseNPC.task_npc_component$Idle_L_Nfloat_R
// Size: 0x158 (Inherited: 0x148)
struct Utask_npc_component$Idle_L_Nfloat_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	double __verse_0xB2CDDD72_Argument; // 0x150(0x08)

	int64_t Update(); // Function VerseNPC.task_npc_component$Idle_L_Nfloat_R.Update // (Native|Public|HasOutParms) // @ game+0x65987f4
};

// VerseClass VerseNPC.task_npc_component$Jump
// Size: 0x152 (Inherited: 0x148)
struct Utask_npc_component$Jump : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Jump.Update // (Native|Public|HasOutParms) // @ game+0x65987fc
};

// VerseClass VerseNPC.task_npc_component$LookAt_L_Nvector3_R
// Size: 0x168 (Inherited: 0x148)
struct Utask_npc_component$LookAt_L_Nvector3_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Fvector3 __verse_0xB2CDDD72_Argument; // 0x150(0x18)

	int64_t Update(); // Function VerseNPC.task_npc_component$LookAt_L_Nvector3_R.Update // (Native|Public|HasOutParms) // @ game+0x6598804
};

// VerseClass VerseNPC.task_npc_component$LootObject_L_Nfort__loot__info_R
// Size: 0x179 (Inherited: 0x148)
struct Utask_npc_component$LootObject_L_Nfort__loot__info_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ffort_loot_info __verse_0xB2CDDD72_Argument; // 0x150(0x28)
	enum class action_result _RetVal; // 0x178(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$LootObject_L_Nfort__loot__info_R.Update // (Native|Public|HasOutParms) // @ game+0x659880c
};

// VerseClass VerseNPC.task_npc_component$MoveInRangeToAttack
// Size: 0x152 (Inherited: 0x148)
struct Utask_npc_component$MoveInRangeToAttack : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$MoveInRangeToAttack.Update // (Native|Public|HasOutParms) // @ game+0x6598814
};

// VerseClass VerseNPC.task_npc_component$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R
// Size: 0x171 (Inherited: 0x148)
struct Utask_npc_component$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument; // 0x150(0x20)
	enum class fort_navigate_result _RetVal; // 0x170(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R.Update // (Native|Public|HasOutParms) // @ game+0x659881c
};

// VerseClass VerseNPC.task_npc_component$OnBestObjectToLootChanged
// Size: 0x181 (Inherited: 0x148)
struct Utask_npc_component$OnBestObjectToLootChanged : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x29)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnBestObjectToLootChanged.Update // (Native|Public|HasOutParms) // @ game+0x6598824
};

// VerseClass VerseNPC.task_npc_component$OnBestThreatChanged
// Size: 0x191 (Inherited: 0x148)
struct Utask_npc_component$OnBestThreatChanged : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x39)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnBestThreatChanged.Update // (Native|Public|HasOutParms) // @ game+0x659882c
};

// VerseClass VerseNPC.task_npc_component$OnObstacleChanged
// Size: 0x181 (Inherited: 0x148)
struct Utask_npc_component$OnObstacleChanged : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x29)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnObstacleChanged.Update // (Native|Public|HasOutParms) // @ game+0x659883c
};

// VerseClass VerseNPC.task_npc_component$OnThreatPerceptionChanged_L_Nfort__threat__info_R
// Size: 0x1c1 (Inherited: 0x148)
struct Utask_npc_component$OnThreatPerceptionChanged_L_Nfort__threat__info_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ffort_threat_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	OptionProperty _RetVal; // 0x188(0x39)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnThreatPerceptionChanged_L_Nfort__threat__info_R.Update // (Native|Public|HasOutParms) // @ game+0x6598844
};

// VerseClass VerseNPC.task_npc_component$PlayRandomEmote
// Size: 0x152 (Inherited: 0x148)
struct Utask_npc_component$PlayRandomEmote : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$PlayRandomEmote.Update // (Native|Public|HasOutParms) // @ game+0x659884c
};

// VerseClass VerseNPC.task_npc_component$Revive_L_Nfort__character_R
// Size: 0x159 (Inherited: 0x148)
struct Utask_npc_component$Revive_L_Nfort__character_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct UObject* __verse_0xB2CDDD72_Argument; // 0x150(0x08)
	enum class action_result _RetVal; // 0x158(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Revive_L_Nfort__character_R.Update // (Native|Public|HasOutParms) // @ game+0x6598854
};

// VerseClass VerseNPC.task_npc_component$RoamAround_L_Nfort__navigation__parameters_R
// Size: 0x162 (Inherited: 0x148)
struct Utask_npc_component$RoamAround_L_Nfort__navigation__parameters_R : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	OptionProperty __verse_0xB2CDDD72_Argument; // 0x150(0x11)
	enum class fort_navigate_result _RetVal; // 0x161(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$RoamAround_L_Nfort__navigation__parameters_R.Update // (Native|Public|HasOutParms) // @ game+0x659885c
};

// VerseClass VerseNPC.task_npc_component$Slide
// Size: 0x152 (Inherited: 0x148)
struct Utask_npc_component$Slide : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Slide.Update // (Native|Public|HasOutParms) // @ game+0x6598874
};

// VerseClass VerseNPC.task_npc_component$Sprint
// Size: 0x151 (Inherited: 0x148)
struct Utask_npc_component$Sprint : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Sprint.Update // (Native|Public|HasOutParms) // @ game+0x659887c
};

// VerseClass VerseNPC.task_npc_component$TacticalSprint
// Size: 0x151 (Inherited: 0x148)
struct Utask_npc_component$TacticalSprint : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$TacticalSprint.Update // (Native|Public|HasOutParms) // @ game+0x6598884
};

// VerseClass VerseNPC.task_npc_component$UsePatrolSpeed
// Size: 0x152 (Inherited: 0x148)
struct Utask_npc_component$UsePatrolSpeed : Utask(t) {
	struct Unpc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$UsePatrolSpeed.Update // (Native|Public|HasOutParms) // @ game+0x659888c
};

