// VerseClass VerseSimulation.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseSimulation.Player
// Size: 0x58 (Inherited: 0x58)
struct UPlayer : UPlayerHandle {

	void $InitInstance(); // Function VerseSimulation.Player.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseSimulation.Player.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseSimulation.Player.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseSimulation.player_array_helper
// Size: 0x28 (Inherited: 0x28)
struct Uplayer_array_helper : UObject {

	int64_t _L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseSimulation.player_array_helper._L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x638953c
	void $InitCDO(); // Function VerseSimulation.player_array_helper.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseSimulation.player_component
// Size: 0xf8 (Inherited: 0xe8)
struct Uplayer_component : UEntityActorPlayerComponent {
	VerseFunctionProperty __verse_0x2959FF1C__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle; // 0xe8(0x10)

	struct UPlayer* _L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.player_component._L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x638a2e4
	void $InitInstance(); // Function VerseSimulation.player_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseSimulation.player_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseSimulation.player_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseSimulation.player_multicast_delegate
// Size: 0xa8 (Inherited: 0x98)
struct Uplayer_multicast_delegate : Umulticast_delegate(t) {
	VerseFunctionProperty __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R; // 0x98(0x10)

	void $InitInstance(); // Function VerseSimulation.player_multicast_delegate.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseSimulation.player_multicast_delegate.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseSimulation.player_multicast_delegate.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseSimulation.Simulation
// Size: 0x28 (Inherited: 0x28)
struct USimulation : UObject {

	struct Utask(t)* Sleep_L_Nfloat_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation.Sleep_L_Nfloat_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	double _L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x638956c
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6389564
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Nany_R(struct Ftuple_Lplayer__component_Many_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Nany_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x638955c
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Nany_R(struct Ftuple_Lint_Many_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Nany_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6389554
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Nany_R(struct Ftuple_Lplayer__component_Many_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Nany_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x638954c
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Nany_R(struct Ftuple_Lint_Many_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Nany_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6389544
	void $InitCDO(); // Function VerseSimulation.Simulation.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseSimulation.task_Simulation$Sleep_L_Nfloat_R
// Size: 0x150 (Inherited: 0x148)
struct Utask_Simulation$Sleep_L_Nfloat_R : Utask(t) {
	double __verse_0xB2CDDD72_Argument; // 0x148(0x08)

	int64_t Update(); // Function VerseSimulation.task_Simulation$Sleep_L_Nfloat_R.Update // (Native|Public|HasOutParms) // @ game+0x6389534
};

