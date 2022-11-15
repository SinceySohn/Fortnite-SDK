// VerseClass VersePlayspace.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VersePlayspace.playspace_component
// Size: 0x138 (Inherited: 0x60)
struct Uplayspace_component : UEntityComponent {
	char pad_60[0x80]; // 0x60(0x80)
	VerseFunctionProperty __verse_0xAAFD1B07__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Nany_R; // 0xe0(0x10)
	VerseFunctionProperty __verse_0x579A67A4___WaitForMatchBegin; // 0x90(0x10)
	VerseFunctionProperty __verse_0xB30FF5AF___WaitForMatchEnd; // 0xa0(0x10)
	VerseFunctionProperty __verse_0xF324C2B5___WaitForPlayerAdded; // 0xb0(0x10)
	VerseFunctionProperty __verse_0x74B0F4F3___WaitForPlayerRemoved; // 0xc0(0x10)
	VerseFunctionProperty __verse_0x112880C6___WaitForSetupComplete; // 0x80(0x10)
	VerseFunctionProperty __verse_0x68A1B3A5__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R; // 0x70(0x10)
	VerseFunctionProperty __verse_0xC8D21C45__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R; // 0x60(0x10)
	VerseFunctionProperty __verse_0x4908ACA9__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R; // 0xd0(0x10)

	void _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x63bbe0c
	struct TArray<struct Uplayer_component*> _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R(enum class PlayerType __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbe04
	int64_t _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R(enum class PlayerType __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63bbdfc
	struct Utask(t)* __WaitForSetupComplete(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForSetupComplete // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* __WaitForPlayerRemoved(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForPlayerRemoved // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* __WaitForPlayerAdded(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForPlayerAdded // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* __WaitForMatchEnd(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForMatchEnd // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* __WaitForMatchBegin(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForMatchBegin // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Nany_R // (Native|Public|BlueprintCallable) // @ game+0x63bbdf4
	void $InitInstance(); // Function VersePlayspace.playspace_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VersePlayspace.playspace_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VersePlayspace.playspace_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForMatchBegin
// Size: 0x151 (Inherited: 0x148)
struct Utask_playspace_component$__WaitForMatchBegin : Utask(t) {
	struct Uplayspace_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForMatchBegin.Update // (Native|Public|HasOutParms) // @ game+0x63bbe5c
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForMatchEnd
// Size: 0x151 (Inherited: 0x148)
struct Utask_playspace_component$__WaitForMatchEnd : Utask(t) {
	struct Uplayspace_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForMatchEnd.Update // (Native|Public|HasOutParms) // @ game+0x63bbe64
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForPlayerAdded
// Size: 0x160 (Inherited: 0x148)
struct Utask_playspace_component$__WaitForPlayerAdded : Utask(t) {
	struct Uplayspace_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct Uplayer_component* _RetVal; // 0x158(0x08)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForPlayerAdded.Update // (Native|Public|HasOutParms) // @ game+0x63bbe6c
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForPlayerRemoved
// Size: 0x160 (Inherited: 0x148)
struct Utask_playspace_component$__WaitForPlayerRemoved : Utask(t) {
	struct Uplayspace_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct Uplayer_component* _RetVal; // 0x158(0x08)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForPlayerRemoved.Update // (Native|Public|HasOutParms) // @ game+0x63bbe7c
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForSetupComplete
// Size: 0x151 (Inherited: 0x148)
struct Utask_playspace_component$__WaitForSetupComplete : Utask(t) {
	struct Uplayspace_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForSetupComplete.Update // (Native|Public|HasOutParms) // @ game+0x63bbe84
};

