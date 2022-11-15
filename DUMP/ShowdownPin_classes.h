// WidgetBlueprintGeneratedClass ShowdownPin.ShowdownPin_C
// Size: 0x7ba (Inherited: 0x720)
struct UShowdownPin_C : UFortShowdownPin {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)
	struct UWidgetAnimation* Hover; // 0x728(0x08)
	struct UWidgetAnimation* Focus; // 0x730(0x08)
	struct UWidgetAnimation* Reveal; // 0x738(0x08)
	struct UCommonTextBlock* CommonTextBlock_NoPinPts; // 0x740(0x08)
	struct UCommonTextBlock* CommonTextBlock_PinPts; // 0x748(0x08)
	struct UImage* Image_PinShadow; // 0x750(0x08)
	struct UOverlay* NoPinContent; // 0x758(0x08)
	struct UCommonLazyImage* NoPinIcon; // 0x760(0x08)
	struct UCommonTextBlock* NoPinPlusSign; // 0x768(0x08)
	struct UCommonNumericTextBlock* NoPinScoreText; // 0x770(0x08)
	struct UCommonLazyImage* NoPinShadow; // 0x778(0x08)
	struct UOverlay* PinContent; // 0x780(0x08)
	struct UImage* PinIcon; // 0x788(0x08)
	struct UCommonWidgetSwitcherLegacy* PinInfoSwitcher; // 0x790(0x08)
	struct UCommonTextBlock* PinScoreText; // 0x798(0x08)
	struct UVerticalBox* VerticalBox_PointValuesProgress; // 0x7a0(0x08)
	struct UVerticalBox* VerticalBoxPointValues; // 0x7a8(0x08)
	bool bRepresentsTournamentBestPin; // 0x7b0(0x01)
	bool DEVShowPin; // 0x7b1(0x01)
	bool HidePoints; // 0x7b2(0x01)
	char pad_7B3[0x1]; // 0x7b3(0x01)
	int32_t DEVPinScore; // 0x7b4(0x04)
	bool colorSilhouette; // 0x7b8(0x01)
	bool hideBackplate; // 0x7b9(0x01)

	void ChooseScoreToDisplay(int32_t& ScoreToDisplay); // Function ShowdownPin.ShowdownPin_C.ChooseScoreToDisplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Refresh(); // Function ShowdownPin.ShowdownPin_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshDataBP(); // Function ShowdownPin.ShowdownPin_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ShowdownPin.ShowdownPin_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventSetTier(int32_t Score); // Function ShowdownPin.ShowdownPin_C.EventSetTier // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventFixPts(int32_t Points); // Function ShowdownPin.ShowdownPin_C.EventFixPts // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventColorize(); // Function ShowdownPin.ShowdownPin_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventRevealAnim(); // Function ShowdownPin.ShowdownPin_C.EventRevealAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownPin(int32_t EntryPoint); // Function ShowdownPin.ShowdownPin_C.ExecuteUbergraph_ShowdownPin // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

