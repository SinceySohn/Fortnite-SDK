// VerseClass VerseCreature.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseCreature.creature_component
// Size: 0x110 (Inherited: 0xf0)
struct Ucreature_component : Uai_component {
	VerseFunctionProperty __verse_0x41F0ABB6_NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R; // 0xf0(0x10)
	VerseFunctionProperty __verse_0xDF2A90F7__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__ai__movement__interface_N_RStopNavigating; // 0x100(0x10)

	enum class action_result _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__ai__movement__interface_N_RStopNavigating(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseCreature.creature_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__ai__movement__interface_N_RStopNavigating // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65988d4
	struct Utask(t)* NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseCreature.creature_component.NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseCreature.creature_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseCreature.creature_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseCreature.creature_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseCreature.task_creature_component$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R
// Size: 0x171 (Inherited: 0x148)
struct Utask_creature_component$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R : Utask(t) {
	struct Ucreature_component* _Self; // 0x148(0x08)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument; // 0x150(0x20)
	enum class fort_navigate_result _RetVal; // 0x170(0x01)

	int64_t Update(); // Function VerseCreature.task_creature_component$NavigateTo_L_Nfort__navigation__target_M_Nfort__navigation__parameters_R.Update // (Native|Public|HasOutParms) // @ game+0x659881c
};

