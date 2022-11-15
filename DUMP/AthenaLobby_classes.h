// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// Size: 0x7b0 (Inherited: 0x778)
struct UAthenaLobby_C : UAthenaLobbyBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x778(0x08)
	struct UFeaturedCreativeContent_C* FeaturedCreativeContent; // 0x780(0x08)
	struct UFancyToastWidget_C* StoreToastWidget; // 0x788(0x08)
	struct UStoreToastRequest* StoreToastRequest; // 0x790(0x08)
	struct FTimerHandle TryShowToast; // 0x798(0x08)
	struct FDataTableRowHandle InputAction_InspectChallenges; // 0x7a0(0x10)

	void HandleLobbyColorSchemeChange(struct FLinearColor NewColorScheme, bool UseDefaultScheme); // Function AthenaLobby.AthenaLobby_C.HandleLobbyColorSchemeChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ConfigureGenericLinkButton(); // Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartAthenaLobbyMusic(); // Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFailure_DA5E62624D068772EA890193344BA4AE(); // Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSuccess_DA5E62624D068772EA890193344BA4AE(); // Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnComplete_9036807A49B907A7A1B78EB727BAB97A(struct UUserWidget* UserWidget); // Function AthenaLobby.AthenaLobby_C.OnComplete_9036807A49B907A7A1B78EB727BAB97A // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function AthenaLobby.AthenaLobby_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaLobby.AthenaLobby_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function AthenaLobby.AthenaLobby_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DisplayStoreUpdated(struct UStoreToastRequest* StoreUpdatedRequest); // Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void AttemptToShowToast(); // Function AthenaLobby.AthenaLobby_C.AttemptToShowToast // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryToastAgainNextFrame(); // Function AthenaLobby.AthenaLobby_C.TryToastAgainNextFrame // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature(); // Function AthenaLobby.AthenaLobby_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnPlaylistChanged(enum class EFortLobbyType LobbyType, struct UFortPlaylistAthena* PlaylistData); // Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DisplayGlyphQuestUpdated(int32_t NewGlyphs); // Function AthenaLobby.AthenaLobby_C.DisplayGlyphQuestUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMatchmakingWidgetChanged(); // Function AthenaLobby.AthenaLobby_C.OnMatchmakingWidgetChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaLobby(int32_t EntryPoint); // Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

