// WidgetBlueprintGeneratedClass FIlteredTextEntryWidget.FilteredTextEntryWidget_C
// Size: 0xf78 (Inherited: 0x3a0)
struct UFilteredTextEntryWidget_C : UFortEditableFilteredCountedTextBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* Error; // 0x3a8(0x08)
	struct UCommonTextBlock* CommonTextBlock_Prompt; // 0x3b0(0x08)
	struct UCommonTextBlock* ErrorText; // 0x3b8(0x08)
	struct UHorizontalBox* HorizontalBox_Info; // 0x3c0(0x08)
	struct UImage* ; // 0x3c8(0x08)
	struct UImage* Image_Selected; // 0x3d0(0x08)
	struct UCommonActionWidget* InputActionWidget; // 0x3d8(0x08)
	struct UOverlay* Overlay_InputAction; // 0x3e0(0x08)
	struct UOverlay* WarningImage; // 0x3e8(0x08)
	bool bUseOverrideStyle; // 0x3f0(0x01)
	char pad_3F1[0xf]; // 0x3f1(0x0f)
	struct FEditableTextBoxStyle OverrideStyle; // 0x400(0xad0)
	bool bHideValidationInfo; // 0xed0(0x01)
	enum class ETextJustify Justification; // 0xed1(0x01)
	bool ShowTextPrompt; // 0xed2(0x01)
	char pad_ED3[0x5]; // 0xed3(0x05)
	struct UCommonTextStyle* PromptTextStyle; // 0xed8(0x08)
	struct FText PromptText; // 0xee0(0x18)
	struct FMulticastInlineDelegate OnTextChanged; // 0xef8(0x10)
	bool bUseHintText; // 0xf08(0x01)
	char pad_F09[0x7]; // 0xf09(0x07)
	struct FText HintText; // 0xf10(0x18)
	struct FMulticastInlineDelegate OnSanitizedTextReady; // 0xf28(0x10)
	struct FMulticastInlineDelegate OnTextCommitByEnter; // 0xf38(0x10)
	bool SanitizedTextReady; // 0xf48(0x01)
	char pad_F49[0x7]; // 0xf49(0x07)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xf50(0x10)
	struct FText PersistentIDValidationErrorText; // 0xf60(0x18)

	void GetErrorText(bool Additional Validator Failed, struct FText& Appropriate Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetErrorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetCurrentText(struct FText& Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetCurrentText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleShowPrompt(struct FText& CurrentText); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.HandleShowPrompt // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTextFocus(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.SetTextFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, enum class ETextJustify TextJustification, bool bShouldShowTextPrompt, struct FText PromptDisplayText, struct UCommonTextStyle* TextStyle); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.UpdateConfiguration // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ValidatePersistentID(struct FText& Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ValidatePersistentID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FilteredTextEntryWidget(int32_t EntryPoint); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnTextCommitted__DelegateSignature(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextCommitted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTextCommitByEnter__DelegateSignature(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextCommitByEnter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSanitizedTextReady__DelegateSignature(struct FText Text, bool BadText); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnSanitizedTextReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTextChanged__DelegateSignature(struct FText Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

