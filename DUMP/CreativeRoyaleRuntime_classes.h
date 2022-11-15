// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen
// Size: 0x128 (Inherited: 0xa0)
struct UCreativeRoyalePlayspaceComponent_LoadingScreen : UPlayspaceComponent_LoadingScreen {
	bool bShouldDisplayLoadingScreenDuringPostGame; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FText PlotNotFinishedLoadingContext; // 0xa8(0x18)
	struct FText MinigameResetContext; // 0xc0(0x18)
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FScalableFloat FailsafeTimeoutLength; // 0xf0(0x28)
	char pad_118[0x10]; // 0x118(0x10)

	void OnPlotLoadComplete(); // Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlotLoadComplete // (Final|Native|Private) // @ game+0x67e1ca8
	void OnPlayspaceUserAdded(struct FPlayspaceUser& AddedUser); // Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlayspaceUserAdded // (Final|Native|Private|HasOutParms) // @ game+0x67e1bac
	void OnMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnMinigameStateChanged // (Final|Native|Private) // @ game+0x67e1a68
};

// Class CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale
// Size: 0xea0 (Inherited: 0xe80)
struct UAthenaAIServicePlayerBots_CreativeRoyale : UAthenaAIServiceCreativePlayerBots {
	struct FScalableFloat PlayerBotsEnabled; // 0xe78(0x28)

	void OnPlayerJoiningInProgress(struct AFortPlayerState* FortPlayerState); // Function CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.OnPlayerJoiningInProgress // (Final|Native|Protected) // @ game+0x67e1b2c
};

// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_PlayerSpawning
// Size: 0xb0 (Inherited: 0xb0)
struct UCreativeRoyalePlayspaceComponent_PlayerSpawning : UFortPlayspaceComponent_PlayerSpawning {
};

// Class CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace
// Size: 0x658 (Inherited: 0x620)
struct ACreativeRoyaleRootPlayspace : AFortPlayspace {
	char pad_620[0x18]; // 0x620(0x18)
	struct AFortPlayerControllerAthena* EditorIslandOwnerPlayerController; // 0x638(0x08)
	char pad_640[0x8]; // 0x640(0x08)
	bool bHasPlotLoaded; // 0x648(0x01)
	char pad_649[0xf]; // 0x649(0x0f)

	void TeleportPlayersToPlayerStarts(); // Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayersToPlayerStarts // (Final|Native|Protected) // @ game+0x258f6c0
	void OnRep_bHasPlotLoaded(); // Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnRep_bHasPlotLoaded // (Final|Native|Private) // @ game+0x67e1cbc
	void OnPlotLoadComplete(); // Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnPlotLoadComplete // (Final|Native|Private) // @ game+0x67e1c8c
	void Cheat_LoadEditorIsland(); // Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.Cheat_LoadEditorIsland // (Final|Native|Protected) // @ game+0x258f6c0
	bool BuildDataRegistryResolverScope_Implementation(struct TArray<struct FName>& InOutResolverScopes, int32_t& InOutPriority); // Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.BuildDataRegistryResolverScope_Implementation // (Native|Public|HasOutParms|Const) // @ game+0x67e1938
};

// Class CreativeRoyaleRuntime.FortAthenaMutator_CreativeRoyaleSafeZoneOverride
// Size: 0x330 (Inherited: 0x330)
struct AFortAthenaMutator_CreativeRoyaleSafeZoneOverride : AFortAthenaMutator {
};

// Class CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
// Size: 0x48 (Inherited: 0x38)
struct UFortCheatManager_CreativeRoyale : UFortCheatManager_Coupled {
	struct UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition; // 0x38(0x08)
	struct FGameplayTag CreativeRoyaleVolumeTag; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	void TeleportToPlotAferLoad(); // Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.TeleportToPlotAferLoad // (Final|Native|Protected|Const) // @ game+0x67e1cec
	void CreativeRoyaleTeleportToEditZone(); // Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleTeleportToEditZone // (Final|Exec|Native|Public|Const) // @ game+0x258f6c0
	void CreativeRoyaleResetIslandFile(); // Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleResetIslandFile // (Final|Exec|Native|Public|Const) // @ game+0x67e1a3c
	void CreativeRoyaleLoadEditPlot(); // Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleLoadEditPlot // (Final|Exec|Native|Public|Const) // @ game+0x258f6c0
};

// Class CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale
// Size: 0x430 (Inherited: 0x420)
struct UFortProjectEditComponent_CreativeRoyale : UFortProjectEditComponent {
	char pad_420[0x8]; // 0x420(0x08)
	struct UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition; // 0x428(0x08)

	void OnPlayerLoggedIn(struct APlayerController* PlayerController); // Function CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.OnPlayerLoggedIn // (Final|Native|Protected) // @ game+0x6537ae4
	void LoadPlotFromProject(); // Function CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.LoadPlotFromProject // (Final|Native|Protected) // @ game+0x258f6c0
};

