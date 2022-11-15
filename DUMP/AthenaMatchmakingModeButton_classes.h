// WidgetBlueprintGeneratedClass AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C
// Size: 0x1490 (Inherited: 0x1430)
struct UAthenaMatchmakingModeButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* OnHover; // 0x1438(0x08)
	struct UWidgetAnimation* ConfirmSelection; // 0x1440(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x1448(0x08)
	struct UImage* ConfirmSelectionShine; // 0x1450(0x08)
	struct UImage* GameModeIcon; // 0x1458(0x08)
	struct UCommonTextBlock* GameModeName; // 0x1460(0x08)
	struct UImage* LTMModeSubIcon; // 0x1468(0x08)
	struct UCommonTextBlock* SubGameModeName; // 0x1470(0x08)
	struct UHorizontalBox* SubGameModeNameHB; // 0x1478(0x08)
	bool FillSquad; // 0x1480(0x01)
	char pad_1481[0x7]; // 0x1481(0x07)
	struct UFortPlaylistAthena* PlaylistData; // 0x1488(0x08)

	void RefreshLimitedPoolWarning(bool IsCrossplayEnabled); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshLimitedPoolWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshFillText(); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSquadFillText(bool bFill); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaylistChanged(struct UFortPlaylistAthena* NewPlaylist, struct FText OverrideName); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaMatchmakingModeButton(int32_t EntryPoint); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

