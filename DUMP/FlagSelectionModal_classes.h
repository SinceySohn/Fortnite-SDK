// WidgetBlueprintGeneratedClass FlagSelectionModal.FlagSelectionModal_C
// Size: 0x5f8 (Inherited: 0x5d0)
struct UFlagSelectionModal_C : UFortFlagSelectionModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UVerticalBox* FlagConfirmation; // 0x5d8(0x08)
	struct UVerticalBox* FlagSelection; // 0x5e0(0x08)
	struct USafeZone* ; // 0x5e8(0x08)
	struct UWidgetSwitcher* Switcher_Confirmation; // 0x5f0(0x08)

	void Handle Back(bool& PassThrough); // Function FlagSelectionModal.FlagSelectionModal_C.Handle Back // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FlagSelectionModal.FlagSelectionModal_C.BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FlagSelectionModal.FlagSelectionModal_C.BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function FlagSelectionModal.FlagSelectionModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FlagSelectionModal(int32_t EntryPoint); // Function FlagSelectionModal.FlagSelectionModal_C.ExecuteUbergraph_FlagSelectionModal // (Final|UbergraphFunction) // @ game+0xdef49c
};

