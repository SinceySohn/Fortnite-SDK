// WidgetBlueprintGeneratedClass ProgressiveItemScreen.ProgressiveItemScreen_C
// Size: 0x858 (Inherited: 0x7e8)
struct UProgressiveItemScreen_C : UFortProgressiveItemScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e8(0x08)
	struct UWidgetAnimation* Intro; // 0x7f0(0x08)
	struct UWidgetAnimation* ProgDetailsItemChange; // 0x7f8(0x08)
	struct UImage* BottomScreenGradient; // 0x800(0x08)
	struct UMTXButton_C* Button_MTX; // 0x808(0x08)
	struct UErrorInfoFlag_C* ErrorInfoFlag; // 0x810(0x08)
	struct UVerticalBox* RightSideVertBox; // 0x818(0x08)
	struct USizeBox* SizeBox_ProgressiveStageList; // 0x820(0x08)
	struct FLinearColor BaseColor; // 0x828(0x10)
	struct FLinearColor HoverColor; // 0x838(0x10)
	struct FLinearColor SelectColor; // 0x848(0x10)

	struct UWidget* Navifate To Item List(enum class EUINavigation Navigation); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.Navifate To Item List // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateSubscribedVisuals(bool Subscribed); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.UpdateSubscribedVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateLayoutForTabs(bool bTabsVisible, double Spacing Adjustment For Tabs); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.UpdateLayoutForTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnItemSelected(); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnItemSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnErrorStateTextUpdated(struct FText& ErrorStateText); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnErrorStateTextUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetIsSoloScreen(bool bInIsSoloScreen); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnSetIsSoloScreen // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateSubscriptionState(bool bSubscribed); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnUpdateSubscriptionState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.BP_OnContainerTabVisibilityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewActionButtonUpdated(struct FText& RowDisplayName); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnPreviewActionButtonUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveItemScreen(int32_t EntryPoint); // Function ProgressiveItemScreen.ProgressiveItemScreen_C.ExecuteUbergraph_ProgressiveItemScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

