// Class VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
// Size: 0x258 (Inherited: 0xa0)
struct UFortControllerComponent_VictoryCrowns : UFortControllerComponent {
	struct FMulticastInlineDelegate OnVictoryCrownStatusChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnHasWonCrownInMatch; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnHasWonRoyalRoyale; // 0xc0(0x10)
	char pad_D0[0x18]; // 0xd0(0x18)
	struct TSoftObjectPtr<UFortWorldItemDefinition> CrownInventoryItemClass; // 0xe8(0x28)
	bool bWonCrownInMatch; // 0x110(0x01)
	bool bWonRoyalRoyale; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x118(0x08)
	struct TSoftObjectPtr<UFortMontageItemDefinitionBase> RoyalRoyaleEmoteItemDefinition; // 0x120(0x28)
	struct UDataTable* VictoryCrownPlaylistData; // 0x148(0x08)
	struct FGameplayTagContainer SourceTagsForRoyalRoyale; // 0x150(0x20)
	struct FVictoryCrownAccountData VictoryCrownAccountData; // 0x170(0x10)
	struct FScalableFloat InitialGrantDelay; // 0x180(0x28)
	char pad_1A8[0xa8]; // 0x1a8(0xa8)
	bool bKillFeedBroadcastReady; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)

	void OnRep_WonRoyalRoyale(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale // (Final|Native|Private) // @ game+0x67549d0
	void OnRep_WonCrownInMatch(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch // (Final|Native|Private) // @ game+0x675499c
	void OnAthenaProfileInitialized(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized // (Final|Native|Private) // @ game+0x258f6c0
	bool IsCrownInPlayerInventory(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6754970
	bool HasWonRoyalRoyale(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67548cc
	bool HasWonCrownInMatch(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67548b4
	void HandlePawnChanged(struct APawn* OldPawn, struct APawn* NewPawn); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged // (Final|Native|Protected) // @ game+0x6754718
	void HandleExitAircraft(struct AController* ExitingController); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft // (Final|Native|Protected) // @ game+0x6754680
	void HandleEnterAircraft(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft // (Final|Native|Protected) // @ game+0x675466c
	int32_t GetVictoryCrownsBestowedCount(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26d15e4
	int32_t GetRoyalRoyaleAchievedCount(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x675445c
	struct UFortWorldItem* GetCrownInPlayerInventory(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6754438
	void DebugForceSetRoyalRoyaleAchievedCount(int32_t NewRoyalRoyaleCount); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount // (Final|Exec|Native|Public) // @ game+0x65c5aa0
	void CacheAccountItemData(); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData // (Final|Native|Private) // @ game+0x258f6c0
	bool AuthoritySquadHasSeenCrownItem(struct UFortItem* CrownItem, bool bDropped); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x6754374
	bool AuthorityHasSquadHeldCrownItem(struct UFortItem* CrownItem); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x67542e4
	bool AuthorityHasSquadDroppedCrownItem(struct UFortItem* CrownItem); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x6754254
	bool AuthorityHasHeldCrownItem(struct UFortItem* CrownItem); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x67541c4
	bool AuthorityHasDroppedCrownItem(struct UFortItem* CrownItem); // Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x6754134
};

// Class VictoryCrownsRuntime.FortCosmeticStatObject_HasCrown
// Size: 0x90 (Inherited: 0x88)
struct UFortCosmeticStatObject_HasCrown : UFortCosmeticStatObject {
	struct UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x88(0x08)
};

// Class VictoryCrownsRuntime.FortCosmeticStatObject_TotalRoyalRoyales
// Size: 0xa0 (Inherited: 0x88)
struct UFortCosmeticStatObject_TotalRoyalRoyales : UFortCosmeticStatObject {
	struct UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x88(0x08)
	struct TArray<struct UFortControllerComponent_VictoryCrowns*> CachedCrownComponents; // 0x90(0x10)
};

// Class VictoryCrownsRuntime.FortCosmeticStatObject_TotalVictoryCrowns
// Size: 0x90 (Inherited: 0x88)
struct UFortCosmeticStatObject_TotalVictoryCrowns : UFortCosmeticStatObject {
	struct UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x88(0x08)
};

// Class VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
// Size: 0xf8 (Inherited: 0xa0)
struct UFortGameStateComponent_VictoryCrowns : UFortGameStateComponent {
	struct TArray<struct AFortPlayerStateAthena*> CrownBearerPlayerStates; // 0xa0(0x10)
	struct FText KillFeedFormat_Dropped; // 0xb0(0x18)
	struct FText KillFeedFormat_PickedUp; // 0xc8(0x18)
	char pad_E0[0x18]; // 0xe0(0x18)

	void OnRep_CrownBearerPlayerStates(); // Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates // (Final|Native|Protected) // @ game+0x2736fc0
	bool IsCrownBearer(struct AFortPlayerStateAthena* FortPSA); // Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67548e4
	void HandleCrownStatusChanged(struct AFortPlayerControllerAthena* FortPlayerControllerAthena, struct UFortItem* CrownItem); // Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged // (Final|Native|Protected) // @ game+0x6754474
	void ClientKillFeedMessage(struct AFortPlayerStateAthena* FortPSA, bool bAdded); // Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a40bcc
};

// Class VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
// Size: 0xb8 (Inherited: 0xa0)
struct UFortPawnComponent_VictoryCrownsFrontEnd : UFortPawnComponent {
	struct UDataTable* VictoryCrownPlaylistData; // 0xa0(0x08)
	bool bInitializeSuccess; // 0xa8(0x01)
	bool bSelectedPlaylistSupportCrown; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct UFortSocialParty* PersistentParty; // 0xb0(0x08)

	void PlaylistChanged(); // Function VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd.PlaylistChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
// Size: 0xa8 (Inherited: 0xa0)
struct UFortPlayerStateComponent_VictoryCrowns : UFortPlayerStateComponent {
	bool bHasWonRoyalRoyale; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	bool GetWonRoyalRoyale(); // Function VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x217c674
};

