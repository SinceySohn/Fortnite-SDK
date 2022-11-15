// WidgetBlueprintGeneratedClass PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C
// Size: 0x5e8 (Inherited: 0x548)
struct UPriceChangeAcknowledgeModal_C : UCrewPriceChangeAcknowledgeModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UWidgetAnimation* Dismiss; // 0x550(0x08)
	struct UWidgetAnimation* ShowUp; // 0x558(0x08)
	struct UPriceChangeAcknowledgeTextEntry_C* ; // 0x560(0x08)
	struct UBorder* ; // 0x568(0x08)
	struct UBP_PriceChangeAcknowledgeCheckBox_C* BP_PriceChangeAcknowledgeCheckBox; // 0x570(0x08)
	struct UCommonRichTextBlock* Column1Header; // 0x578(0x08)
	struct UCommonRichTextBlock* Column2Header; // 0x580(0x08)
	struct UCommonRichTextBlock* Column3Header; // 0x588(0x08)
	struct USafeZone* ContentSZ; // 0x590(0x08)
	struct UDynamicEntryBox* EntryBox_PriceChangeTable; // 0x598(0x08)
	struct UAthenaScrollBox* ScrollBox_PriceChangeTable; // 0x5a0(0x08)
	struct USizeBox* ; // 0x5a8(0x08)
	struct USizeBox* SizeBoxHeader; // 0x5b0(0x08)
	struct UCommonRichTextBlock* Text_Check; // 0x5b8(0x08)
	struct UCommonRichTextBlock* Text_MoreInfo; // 0x5c0(0x08)
	struct UCommonTextBlock* Text_Title; // 0x5c8(0x08)
	struct FText Disabled Reason; // 0x5d0(0x18)

	void OnSetPriceChangeAcknowledgeTitle(struct FText& Title); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnSetPriceChangeAcknowledgeTitle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeBodyText(struct FText& BodyText); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnSetPriceChangeAcknowledgeBodyText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeCheckboxText(struct FText& CheckboxText); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnSetPriceChangeAcknowledgeCheckboxText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeConfirmButtonText(struct FText& ConfirmButtonText); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnSetPriceChangeAcknowledgeConfirmButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(struct FText& CancelSubscriptionButtonText); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeMoreInfoUrl(struct FText& MoreInfoUrl); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnSetPriceChangeAcknowledgeMoreInfoUrl // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeMoreInfoText(struct FText& ConfirmButtonText); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnSetPriceChangeAcknowledgeMoreInfoText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeBodyTable(struct TArray<struct FCrewTableRow>& PriceChangeByRegionRows); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnSetPriceChangeAcknowledgeBodyTable // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnModalBackout(); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.OnModalBackout // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void On Exit Modal(); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.On Exit Modal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__PriceChangeAcknowledgeModal_BP_PriceChangeAcknowledgeCheckBox_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(struct UCommonButtonBase* Button, bool Selected); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.BndEvt__PriceChangeAcknowledgeModal_BP_PriceChangeAcknowledgeCheckBox_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PriceChangeAcknowledgeModal(int32_t EntryPoint); // Function PriceChangeAcknowledgeModal.PriceChangeAcknowledgeModal_C.ExecuteUbergraph_PriceChangeAcknowledgeModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

