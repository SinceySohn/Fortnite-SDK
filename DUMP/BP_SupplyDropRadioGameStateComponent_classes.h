// BlueprintGeneratedClass BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C
// Size: 0x1ac (Inherited: 0xa0)
struct UBP_SupplyDropRadioGameStateComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct UDataTable* SupplyDropRadioDatatable; // 0xa8(0x08)
	struct TArray<struct FSupplyDropRadioRepDataStruct> SupplyDropRadioRepData; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnSupplyDropRadioRepDataUpdated; // 0xc0(0x10)
	struct TMap<struct AFortPlayerPawn*, int32_t> AuthoritySupplyDropReservationMap; // 0xd0(0x50)
	struct FGameplayTagContainer PlaylistTags; // 0x120(0x20)
	struct TArray<struct FSupplyDropRadioPlaylistDatatableStruct> PlaylistDatatables; // 0x140(0x10)
	int32_t Analytics_SupplyDropRadioUsed; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct TMap<struct FGameplayTag, int32_t> Analytics_SupplyDropsRequestedMap; // 0x158(0x50)
	int32_t Analytics_PlayerDestroyedFallingBalloons; // 0x1a8(0x04)

	void Analytics_IncrementPlayerDestroyedFallingBalloon(); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.Analytics_IncrementPlayerDestroyedFallingBalloon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReportEndGameAnalytics(); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.ReportEndGameAnalytics // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetReservedSupplyDropRadioDataForPlayer(struct AFortPlayerPawn* PlayerPawn, bool& bSuccess, struct FSupplyDropRadioDataStruct& Data); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.GetReservedSupplyDropRadioDataForPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CacheSupplyDropRadioDatatable(); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.CacheSupplyDropRadioDatatable // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetReservedSupplyDropToFlare(struct AFortPlayerPawn* RequestingPlayerPawn, bool& bSuccess); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.SetReservedSupplyDropToFlare // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefundSupplyDrop(struct AFortPlayerPawn* RequestingPlayerPawn); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.RefundSupplyDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReserveSupplyDrop(struct AFortPlayerPawn* RequestingPlayerPawn, int32_t ConversationIndex, bool& bSuccessful); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.ReserveSupplyDrop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_SupplyDropRadioRepData(); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.OnRep_SupplyDropRadioRepData // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsConversationIndexEnabled(int32_t ConversationIndex, bool& bEnabled); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.IsConversationIndexEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void IsStockAvailableForConversationIndex(int32_t ConversationIndex, bool& bAvailable, int32_t& Count); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.IsStockAvailableForConversationIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetSupplyDropRadioDataUsingGameplayTag(struct FGameplayTag GameplayTag, bool& IsValid, struct FSupplyDropRadioDataStruct& Data); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.GetSupplyDropRadioDataUsingGameplayTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetSupplyDropRadioDataUsingConversationIndex(int32_t ConversationIndex, bool& IsValid, struct FSupplyDropRadioDataStruct& Data); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.GetSupplyDropRadioDataUsingConversationIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void ProcessSupplyDropRadioData(); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.ProcessSupplyDropRadioData // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_1DC021954C93DD18FBDAB2834CD56429(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.OnReady_1DC021954C93DD18FBDAB2834CD56429 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleGameStatePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.HandleGameStatePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ResetAllStock(); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.ResetAllStock // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetStock(struct FGameplayTag GameplayTag); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.ResetStock // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_SupplyDropRadioGameStateComponent(int32_t EntryPoint); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.ExecuteUbergraph_BP_SupplyDropRadioGameStateComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnSupplyDropRadioRepDataUpdated__DelegateSignature(); // Function BP_SupplyDropRadioGameStateComponent.BP_SupplyDropRadioGameStateComponent_C.OnSupplyDropRadioRepDataUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

