// VerseClass VerseBasicGameplay.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseBasicGameplay.basic_player_manager
// Size: 0x60 (Inherited: 0x28)
struct Ubasic_player_manager : UObject {
	struct Uplayspace_component* __verse_0xBC454097_ThePlayspace; // 0x28(0x08)
	struct UObject* __verse_0x7DC483AF_PlayerAddedEvent; // 0x30(0x08)
	struct UObject* __verse_0x5DE94DD9_PlayerRemovedEvent; // 0x38(0x08)
	VerseFunctionProperty __verse_0x243006F6__L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount; // 0x40(0x10)
	VerseFunctionProperty __verse_0xD75D4D0F__L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers; // 0x50(0x10)

	struct TArray<struct UPlayer*> _L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseBasicGameplay.basic_player_manager._L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	int64_t _L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseBasicGameplay.basic_player_manager._L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseBasicGameplay.basic_player_manager.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseBasicGameplay.basic_player_manager.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseBasicGameplay.basic_player_manager.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseBasicGameplay.basic_player_manager_impl
// Size: 0x70 (Inherited: 0x60)
struct Ubasic_player_manager_impl : Ubasic_player_manager {
	VerseFunctionProperty __verse_0xAB577854_BeginWaitingForEvents; // 0x60(0x10)

	struct Utask(t)* BeginWaitingForEvents(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseBasicGameplay.basic_player_manager_impl.BeginWaitingForEvents // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseBasicGameplay.basic_player_manager_impl.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseBasicGameplay.basic_player_manager_impl.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseBasicGameplay.basic_player_manager_impl.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseBasicGameplay.PlayerManager
// Size: 0x28 (Inherited: 0x28)
struct UPlayerManager : UObject {

	OptionProperty _L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseBasicGameplay.PlayerManager._L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void $InitCDO(); // Function VerseBasicGameplay.PlayerManager.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseBasicGameplay.task_basic_player_manager_impl$BeginWaitingForEvents
// Size: 0x2a8 (Inherited: 0x148)
struct Utask_basic_player_manager_impl$BeginWaitingForEvents : Utask(t) {
	struct Ubasic_player_manager_impl* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	int64_t ; // 0x158(0x08)
	int64_t ; // 0x160(0x08)
	enum class EVerseTrue ; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UPlayer* ; // 0x170(0x08)
	struct Uplayer_component* ; // 0x178(0x08)
	struct Uplayspace_component* ; // 0x180(0x08)
	struct Utask(t)* ; // 0x188(0x08)
	VerseFunctionProperty ; // 0x190(0x10)
	struct Ftuple_L_R ; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	int64_t ; // 0x1a8(0x08)
	VerseFunctionProperty ; // 0x1b0(0x10)
	struct Ftuple_L_R ; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct Uplayer_multicast_delegate* ; // 0x1c8(0x08)
	OptionProperty ; // 0x1d0(0x08)
	struct Uplayer_multicast_delegate* ; // 0x1d8(0x08)
	enum class EVerseTrue ; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	VerseFunctionProperty ; // 0x1e8(0x10)
	VerseDynamicProperty ; // 0x1f8(0x10)
	enum class EVerseTrue ; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct UPlayer* ; // 0x210(0x08)
	struct Uplayer_component* ; // 0x218(0x08)
	struct Uplayspace_component* ; // 0x220(0x08)
	struct Utask(t)* ; // 0x228(0x08)
	VerseFunctionProperty ; // 0x230(0x10)
	struct Ftuple_L_R ; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	int64_t ; // 0x248(0x08)
	VerseFunctionProperty ; // 0x250(0x10)
	struct Ftuple_L_R ; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct Uplayer_multicast_delegate* ; // 0x268(0x08)
	OptionProperty ; // 0x270(0x08)
	struct Uplayer_multicast_delegate* ; // 0x278(0x08)
	enum class EVerseTrue ; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	VerseFunctionProperty ; // 0x288(0x10)
	VerseDynamicProperty ; // 0x298(0x10)

	int64_t Update(); // Function VerseBasicGameplay.task_basic_player_manager_impl$BeginWaitingForEvents.Update // (Public|HasOutParms) // @ game+0xdef49c
};

