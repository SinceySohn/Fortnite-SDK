// VerseClass EpicGamesSimulation.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass EpicGamesSimulation.Team
// Size: 0xa8 (Inherited: 0x28)
struct UTeam : UVerseTeam {
	char pad_28[0x10]; // 0x28(0x10)
	VerseFunctionProperty __verse_0x5274733B__L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RAddPlayer_L_Nplayer_R; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	VerseFunctionProperty __verse_0x03A455D9__L_2fEpicGames_2ecom_2fSimulation_2fteam_N_REmpty; // 0x58(0x10)
	VerseFunctionProperty __verse_0x8325FA58__L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RGetPlayers; // 0x28(0x10)
	VerseFunctionProperty __verse_0xC73C4045__L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RRemovePlayer_L_Nplayer_R; // 0x48(0x10)
	char pad_88[0x20]; // 0x88(0x20)

	void _L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RRemovePlayer_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function EpicGamesSimulation.Team._L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RRemovePlayer_L_Nplayer_R // (Native|Public|BlueprintCallable) // @ game+0x6388954
	struct TArray<struct UPlayer*> _L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RGetPlayers(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function EpicGamesSimulation.Team._L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RGetPlayers // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x638894c
	void _L_2fEpicGames_2ecom_2fSimulation_2fteam_N_REmpty(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function EpicGamesSimulation.Team._L_2fEpicGames_2ecom_2fSimulation_2fteam_N_REmpty // (Native|Public|BlueprintCallable) // @ game+0x6388944
	void _L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RAddPlayer_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function EpicGamesSimulation.Team._L_2fEpicGames_2ecom_2fSimulation_2fteam_N_RAddPlayer_L_Nplayer_R // (Native|Public|BlueprintCallable) // @ game+0x638893c
	void $InitInstance(); // Function EpicGamesSimulation.Team.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function EpicGamesSimulation.Team.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function EpicGamesSimulation.Team.$InitCDO // (None) // @ game+0xdef49c
};

