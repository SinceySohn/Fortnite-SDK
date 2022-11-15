// WidgetBlueprintGeneratedClass PlayerVisited.PlayerVisited_C
// Size: 0x388 (Inherited: 0x330)
struct UPlayerVisited_C : UAthenaVisitedAreaDisplay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* BriefShow; // 0x338(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_landmarkorPOI; // 0x340(0x08)
	struct UVerticalBox* MainBox; // 0x348(0x08)
	struct UCommonTextBlock* MainLocationText; // 0x350(0x08)
	struct FTimerHandle BriefShowFallbackTimerHandle; // 0x358(0x08)
	struct FText LastLocationVisited; // 0x360(0x18)
	double TimeLastLocationVisited; // 0x378(0x08)
	double LocationVisitedCooldown; // 0x380(0x08)

	void EndOfShow(); // Function PlayerVisited.PlayerVisited_C.EndOfShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNewVisited(struct FText& LocalizedLocationName, bool bIsNamedLocation); // Function PlayerVisited.PlayerVisited_C.OnNewVisited // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PlayerVisited.PlayerVisited_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Brief Show Finished(); // Function PlayerVisited.PlayerVisited_C.Brief Show Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStompFailed(); // Function PlayerVisited.PlayerVisited_C.OnStompFailed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStompedByOtherWidget(); // Function PlayerVisited.PlayerVisited_C.OnStompedByOtherWidget // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAnimBackupTimerFinished(); // Function PlayerVisited.PlayerVisited_C.OnAnimBackupTimerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnBecomeActive(); // Function PlayerVisited.PlayerVisited_C.K2_OnBecomeActive // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerVisited(int32_t EntryPoint); // Function PlayerVisited.PlayerVisited_C.ExecuteUbergraph_PlayerVisited // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

