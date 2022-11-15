// WidgetBlueprintGeneratedClass AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C
// Size: 0x350 (Inherited: 0x2d8)
struct UAthenaMOTDTeaserWidget_C : UFortAthenaMOTDTeaserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* OnHovered; // 0x2e0(0x08)
	struct UBorder* Border_Details; // 0x2e8(0x08)
	struct UBorder* Border_PipDisplay; // 0x2f0(0x08)
	struct UCommonActionWidget* InputActionWidget; // 0x2f8(0x08)
	struct UOverlay* ; // 0x300(0x08)
	struct UCommonRichTextBlock* RichTextBlock_NewsTitle; // 0x308(0x08)
	struct USimpleCommonButton_C* SimpleCommonButton; // 0x310(0x08)
	double PerItemDisplayTime; // 0x318(0x08)
	int32_t NumItems; // 0x320(0x04)
	int32_t CurDisplayedItemIndex; // 0x324(0x04)
	struct FTimerHandle ScrollToNextItemTimerHandle; // 0x328(0x08)
	bool DesignTime; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UMaterialInstanceDynamic* MIDFont; // 0x338(0x08)
	struct FLinearColor DefaultColor; // 0x340(0x10)

	void SetDynamicColors(struct FLinearColor DarkColor, struct FLinearColor LightColor); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.SetDynamicColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCurDisplayedNewsVisual(); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.UpdateCurDisplayedNewsVisual // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ScrollNextItem(); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.ScrollNextItem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void HandleEntryWidgetHoveredChanged(bool NewIsHovered); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.HandleEntryWidgetHoveredChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnNewsPopulated(); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.OnNewsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnClicked(struct UCommonButtonLegacy* Button); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaMOTDTeaserWidget(int32_t EntryPoint); // Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.ExecuteUbergraph_AthenaMOTDTeaserWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

