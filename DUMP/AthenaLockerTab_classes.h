// WidgetBlueprintGeneratedClass AthenaLockerTab.AthenaLockerTab_C
// Size: 0xfb8 (Inherited: 0xde8)
struct UAthenaLockerTab_C : UAthenaCustomizationScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xde8(0x08)
	struct UWidgetAnimation* ; // 0xdf0(0x08)
	struct UWidgetAnimation* LoopingRandomEnabled; // 0xdf8(0x08)
	struct UWidgetAnimation* ; // 0xe00(0x08)
	struct UWidgetAnimation* ; // 0xe08(0x08)
	struct UWidgetAnimation* PresetAppliedToast; // 0xe10(0x08)
	struct UWidgetAnimation* RandomDisabledDisclaimer; // 0xe18(0x08)
	struct UWidgetAnimation* RandomEnabledDisclaimer; // 0xe20(0x08)
	struct UWidgetAnimation* ItemInfoIntroOutro; // 0xe28(0x08)
	struct UAthenaCustomizationSlotButton_C* BackpackButton; // 0xe30(0x08)
	struct USoloButton_C* Button_ChangeName; // 0xe38(0x08)
	struct UAthenaCustomizationSlotButton_C* CharacterButton; // 0xe40(0x08)
	struct ULoadoutSaveConfirmation_C* Confirmation_Save; // 0xe48(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton1; // 0xe50(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton2; // 0xe58(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton3; // 0xe60(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton4; // 0xe68(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton5; // 0xe70(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton6; // 0xe78(0x08)
	struct UImage* Image; // 0xe80(0x08)
	struct UImage* ; // 0xe88(0x08)
	struct UImage* ; // 0xe90(0x08)
	struct UImage* ; // 0xe98(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton1; // 0xea0(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton2; // 0xea8(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton3; // 0xeb0(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton4; // 0xeb8(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton5; // 0xec0(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton6; // 0xec8(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton7; // 0xed0(0x08)
	struct ULockerBuiltInEmoteWidget_C* LockerBuiltInEmoteWidget; // 0xed8(0x08)
	struct ULockerBuiltInEmoteWidget_C* ; // 0xee0(0x08)
	struct UAthenaCustomizationSlotButton_C* MusicPackButton; // 0xee8(0x08)
	struct UCommonTextBlock* NextRandom; // 0xef0(0x08)
	struct USizeBox* Random_Disclaimer; // 0xef8(0x08)
	struct UCommonRichTextBlock* RandomDisclaimerText_Enabled; // 0xf00(0x08)
	struct USafeZone* ; // 0xf08(0x08)
	struct USafeZone* SafeZone_iteminfo; // 0xf10(0x08)
	struct USizeBox* SizeBox_nextrando; // 0xf18(0x08)
	struct USizeBox* SmallBang; // 0xf20(0x08)
	struct UCommonTextBlock* Text_HoldForRandom; // 0xf28(0x08)
	struct UCommonTextBlock* ; // 0xf30(0x08)
	struct UVerticalBox* VerticalBox_buttons; // 0xf38(0x08)
	struct USoloButton_C* xButton_Loadouts; // 0xf40(0x08)
	struct USoloButton_C* xButton_RandomPresets; // 0xf48(0x08)
	struct USoloButton_C* xButton_SavePreset; // 0xf50(0x08)
	struct TArray<struct UAthenaCustomizationSlotButtonWrapper_C*> AllSlots; // 0xf58(0x10)
	enum class EAthenaCustomizationCategory CurrentCustomizationType; // 0xf68(0x01)
	char pad_F69[0x3]; // 0xf69(0x03)
	int32_t CurrentSubslotIndex; // 0xf6c(0x04)
	struct UAthenaItemCustomizationSelector_C* ItemCustomizationSelector; // 0xf70(0x08)
	struct UAthenaCustomizationSlotButton_C* CustomizationSlotButtonToPlayConfirmationOn; // 0xf78(0x08)
	struct FTimerHandle AutoHideDetailsForDances; // 0xf80(0x08)
	struct UAthenaCustomizationSlotButtonWrapper_C* FirstSlotInMenu; // 0xf88(0x08)
	struct UWidget* ; // 0xf90(0x08)
	struct TArray<struct UAthenaCustomizationSlotButtonWrapper_C*> AnimBoundSlotArray; // 0xf98(0x10)
	struct FMulticastInlineDelegate OnBackToGameClicked; // 0xfa8(0x10)

	void AnimShowRandomDisclaimerEnabled(bool Show); // Function AthenaLockerTab.AthenaLockerTab_C.AnimShowRandomDisclaimerEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdatePresetButtonStyles(enum class ECommonInputType InputPin); // Function AthenaLockerTab.AthenaLockerTab_C.UpdatePresetButtonStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySlotAnimationAndCenterSlot(); // Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotAnimationAndCenterSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayEquippedLockerMusic_STW(); // Function AthenaLockerTab.AthenaLockerTab_C.PlayEquippedLockerMusic_STW // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySlotClickedAnimation(struct UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn); // Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotClickedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BeginPickingCustomization(struct UCommonButtonLegacy* WidgetToReturnFocusTo, struct FAthenaCustomizationParams CustomizationParams); // Function AthenaLockerTab.AthenaLockerTab_C.BeginPickingCustomization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBeginPickingCustomizationSlot(struct UAthenaCustomizationSlotSelectorButton* SlotButton); // Function AthenaLockerTab.AthenaLockerTab_C.OnBeginPickingCustomizationSlot // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBeginSavingLoadouts(); // Function AthenaLockerTab.AthenaLockerTab_C.OnBeginSavingLoadouts // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBeginPickingLoadouts(); // Function AthenaLockerTab.AthenaLockerTab_C.OnBeginPickingLoadouts // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaLockerTab.AthenaLockerTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRefreshForNewLoadout(struct FString LoadoutName, bool bIsShuffleTile); // Function AthenaLockerTab.AthenaLockerTab_C.OnRefreshForNewLoadout // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function AthenaLockerTab.AthenaLockerTab_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void TriggerRandomLoopingAnim(); // Function AthenaLockerTab.AthenaLockerTab_C.TriggerRandomLoopingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewActionButtonUpdated(struct FText& RowDisplayName); // Function AthenaLockerTab.AthenaLockerTab_C.OnPreviewActionButtonUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function AthenaLockerTab.AthenaLockerTab_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaLockerTab.AthenaLockerTab_C.BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaLockerTab(int32_t EntryPoint); // Function AthenaLockerTab.AthenaLockerTab_C.ExecuteUbergraph_AthenaLockerTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnBackToGameClicked__DelegateSignature(); // Function AthenaLockerTab.AthenaLockerTab_C.OnBackToGameClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

