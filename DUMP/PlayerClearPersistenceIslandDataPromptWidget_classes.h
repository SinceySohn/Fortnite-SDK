// WidgetBlueprintGeneratedClass PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C
// Size: 0x550 (Inherited: 0x518)
struct UPlayerClearPersistenceIslandDataPromptWidget_C : UFortActivatablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UIconTextButton_C* ApplyButton; // 0x520(0x08)
	struct UIconTextButton_C* CancelButton; // 0x528(0x08)
	struct UCloseButton_C* CloseButton; // 0x530(0x08)
	struct ULightbox_C* Lightbox; // 0x538(0x08)
	struct UCommonTextBlock* Text_CurrentDescription; // 0x540(0x08)
	struct UCommonTextBlock* Title; // 0x548(0x08)

	void SetDescription(struct FText InDescription); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.SetDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget(int32_t EntryPoint); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

