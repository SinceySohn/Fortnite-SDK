// BlueprintGeneratedClass ChromeChestGameStateComponent.ChromeChestGameStateComponent_C
// Size: 0xe1 (Inherited: 0xa0)
struct UChromeChestGameStateComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct UDataTable* ChromeChestOverrideDatatable; // 0xa8(0x08)
	struct UGameplayEffect* ChromeChestGameplayEffect; // 0xb0(0x08)
	struct FScalableFloat HotfixAllowChromeChestGameplay; // 0xb8(0x28)
	bool bAllowChromeChestGameplay; // 0xe0(0x01)

	void GetChromeChestOverrideInfo(struct ABuildingContainer* Container, bool& bValid, struct FName& ChromeLootTierGroup); // Function ChromeChestGameStateComponent.ChromeChestGameStateComponent_C.GetChromeChestOverrideInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnReady_E50133D146E0E45D3DAFEE96499B6132(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function ChromeChestGameStateComponent.ChromeChestGameStateComponent_C.OnReady_E50133D146E0E45D3DAFEE96499B6132 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function ChromeChestGameStateComponent.ChromeChestGameStateComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleGamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function ChromeChestGameStateComponent.ChromeChestGameStateComponent_C.HandleGamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyChromeChestGameplayEffect(); // Function ChromeChestGameStateComponent.ChromeChestGameStateComponent_C.ApplyChromeChestGameplayEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ChromeChestGameStateComponent.ChromeChestGameStateComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ChromeChestGameStateComponent(int32_t EntryPoint); // Function ChromeChestGameStateComponent.ChromeChestGameStateComponent_C.ExecuteUbergraph_ChromeChestGameStateComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

