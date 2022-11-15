// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
// Size: 0x5d0 (Inherited: 0x538)
struct UAthenaCustomizationPicker_C : UAthenaCustomizationPicker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* Contract; // 0x540(0x08)
	struct UWidgetAnimation* Expand; // 0x548(0x08)
	struct UFilteredTextEntryWidget_C* EditableText_Search; // 0x550(0x08)
	struct UHorizontalBox* SearchBar_HB; // 0x558(0x08)
	struct UImage* SearchIcon; // 0x560(0x08)
	struct USizeBox* SizeBox_TextSearch; // 0x568(0x08)
	struct UCommonRichTextBlock* TextBlock_NoItemAvailable; // 0x570(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_DisplayItemAvailability; // 0x578(0x08)
	struct FMulticastInlineDelegate OnAlternateActionHoveredChanged; // 0x580(0x10)
	struct UAthenaCustomizationPickerTileButton_C* TileButton; // 0x590(0x08)
	struct FTimerHandle TextEntryTimer; // 0x598(0x08)
	struct FMulticastInlineDelegate OnTextChanged; // 0x5a0(0x10)
	struct FDataTableRowHandle CachedButtonTextSearchKeybind; // 0x5b0(0x10)
	struct FDataTableRowHandle CachedButtonSortAndFilterKeybind; // 0x5c0(0x10)

	bool HasSelectableTile(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HasSelectableTile // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnInputMethodChanged(enum class ECommonInputType NewInputType); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UWidget* NavigateUpFromPicker(enum class EUINavigation Navigation); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.NavigateUpFromPicker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NavigateDownFromSortAndFilter(enum class EUINavigation Navigation, struct UWidget*& NewParam); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.NavigateDownFromSortAndFilter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NavigateDownFromSearch(enum class EUINavigation Navigation, struct UWidget*& NewParam); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.NavigateDownFromSearch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetTextSearchFilter(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ResetTextSearchFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleTextEntryTimer(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleTextEntryTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSearchTextFilterChanged(struct FText Text); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleSearchTextFilterChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetTextFilterSelectedState(bool& bIsSelected); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.GetTextFilterSelectedState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTextFilterSelectedState(bool bIsSelected); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.SetTextFilterSelectedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTextFilter(struct FText InText, bool Clear); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.SetTextFilter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnNoItemsAvailableInFilter(struct FText& EmptyDisplayText); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnItemsAvailableInFilter(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSearchEnabled(bool bEnabled); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnSearchEnabled // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleTextChanged(struct FText& Text); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleTextChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void On Text Committed(struct FText& Text, enum class ETextCommit CommitMethod); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.On Text Committed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__PickerTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__PickerTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void HandleButtonTextSearchClicked(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleButtonTextSearchClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnShowArchiveFilterTooltip(bool bShowTooltip); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnShowArchiveFilterTooltip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateArchiveFilterTooltipText(struct FText& Text); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnUpdateArchiveFilterTooltipText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AthenaCustomizationPicker_Tooltip_ArchiveFilter_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__AthenaCustomizationPicker_Tooltip_ArchiveFilter_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaCustomizationPicker(int32_t EntryPoint); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnTextChanged__DelegateSignature(struct FText NewText); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAlternateActionHoveredChanged__DelegateSignature(bool bIsHovered); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnAlternateActionHoveredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

