// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
// Size: 0x5c9 (Inherited: 0x590)
struct UCareerScreen_C : UAthenaCareerScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)
	struct UWidgetSwitcher* FeatDisplaySwitcher; // 0x598(0x08)
	struct UCommonRichTextBlock* NoAchievementMessage; // 0x5a0(0x08)
	struct UCommonTextBlock* SeasonHeadingTextLabel; // 0x5a8(0x08)
	struct UWidgetSwitcher* Switcher; // 0x5b0(0x08)
	struct FDataTableRowHandle Input_ReplayCinematic; // 0x5b8(0x10)
	bool AutoPlayVideo; // 0x5c8(0x01)

	void ReplayCinematic(bool& PassThrough); // Function CareerScreen.CareerScreen_C.ReplayCinematic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayCinematic(); // Function CareerScreen.CareerScreen_C.PlayCinematic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowFeats(bool bHasCompletedFeats); // Function CareerScreen.CareerScreen_C.ShowFeats // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function CareerScreen.CareerScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function CareerScreen.CareerScreen_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CareerScreen(int32_t EntryPoint); // Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

