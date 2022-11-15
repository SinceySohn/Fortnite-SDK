// WidgetBlueprintGeneratedClass ItemPresentationScreen.ItemPresentationScreen_C
// Size: 0x949 (Inherited: 0x880)
struct UItemPresentationScreen_C : UFortItemPresentationScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UWidgetAnimation* PaidItemFadeInAll; // 0x888(0x08)
	struct UWidgetAnimation* PaidItemFadeIn; // 0x890(0x08)
	struct UWidgetAnimation* ButtonScrollIn; // 0x898(0x08)
	struct UWidgetAnimation* Fade; // 0x8a0(0x08)
	struct UWidgetAnimation* Equipped; // 0x8a8(0x08)
	struct UWidgetAnimation* InitialStateSet; // 0x8b0(0x08)
	struct UWidgetAnimation* UnOwnedMessage; // 0x8b8(0x08)
	struct UWidgetAnimation* Collected; // 0x8c0(0x08)
	struct UWidgetAnimation* Intro; // 0x8c8(0x08)
	struct UCommonTextBlock* ClaimMoreRewards; // 0x8d0(0x08)
	struct UOverlay* DefaultContent; // 0x8d8(0x08)
	struct USpacer* EntryBoxDummy_PaidItems; // 0x8e0(0x08)
	struct UWidgetSwitcher* LeftsideContentSwitcher; // 0x8e8(0x08)
	struct UOverlay* Overlay_CustomContent; // 0x8f0(0x08)
	struct UImage* PaidItemBacking; // 0x8f8(0x08)
	struct UHorizontalBox* RegularButtons; // 0x900(0x08)
	struct USafeZone* ; // 0x908(0x08)
	struct USizeBox* SizeBox_Contents; // 0x910(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Buttons; // 0x918(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_FreeVsPaidItemsEntryBox; // 0x920(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_FreeVsPaidItemsListView; // 0x928(0x08)
	struct UWidgetSwitcher* Switcher_ItemContextAction; // 0x930(0x08)
	bool bDelayIntro; // 0x938(0x01)
	char pad_939[0x7]; // 0x939(0x07)
	double TimeFloat; // 0x940(0x08)
	bool bSwitchingPhases; // 0x948(0x01)

	void HandleFadeAnimFinished(); // Function ItemPresentationScreen.ItemPresentationScreen_C.HandleFadeAnimFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandlePaidItemIntro(); // Function ItemPresentationScreen.ItemPresentationScreen_C.HandlePaidItemIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartFade(bool bCloseScreen); // Function ItemPresentationScreen.ItemPresentationScreen_C.StartFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayIntro(); // Function ItemPresentationScreen.ItemPresentationScreen_C.PlayIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleAnimationInitialState(); // Function ItemPresentationScreen.ItemPresentationScreen_C.HandleAnimationInitialState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function ItemPresentationScreen.ItemPresentationScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateHeaderInformation(struct FFortItemHeaderInformation& HeaderInformation); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateHeaderInformation // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateItemInformation(struct UFortItem* FortItem); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemInformation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateOwnedItemText(bool bShowText); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateOwnedItemText // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateItemEquipped(); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemEquipped // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialIconAnimation(bool bUsingListView); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnInitialIconAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDisplayEquipButton(bool bCanEquip); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayEquipButton // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCloseScreen(); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnCloseScreen // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateNextButtonText(bool bShowNext); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateNextButtonText // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFinishDisplayingHotItems(bool bShowOtherRewards); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnFinishDisplayingHotItems // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDisplayItemsCollectedText(bool bCloseScreen); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayItemsCollectedText // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SwitchToPaidItems(); // Function ItemPresentationScreen.ItemPresentationScreen_C.SwitchToPaidItems // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCloseScreenWithoutAnimations(); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnCloseScreenWithoutAnimations // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSwitchLeftsideContent(bool bInDefaultContent); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnSwitchLeftsideContent // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateItemContextAction(enum class EItemContextAction ItemContextAction); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemContextAction // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLeftsideContentUpdated(struct UWidget* LeftSideWidget, struct FCurrencyDataWithGiftBox& OutDataWithGiftBox); // Function ItemPresentationScreen.ItemPresentationScreen_C.OnLeftsideContentUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ItemPresentationScreen(int32_t EntryPoint); // Function ItemPresentationScreen.ItemPresentationScreen_C.ExecuteUbergraph_ItemPresentationScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

