// WidgetBlueprintGeneratedClass AffiliateKeyModal.AffiliateKeyModal_C
// Size: 0x609 (Inherited: 0x540)
struct UAffiliateKeyModal_C : UFortAffilateModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* SuccessAnim; // 0x548(0x08)
	struct UWidgetAnimation* Shake; // 0x550(0x08)
	struct UImage* Check; // 0x558(0x08)
	struct UIconTextButton_C* CloseButton; // 0x560(0x08)
	struct UCloseButton_C* CloseButton_Mobile; // 0x568(0x08)
	struct UCommonTextBlock* ; // 0x570(0x08)
	struct UCommonTextBlock* ; // 0x578(0x08)
	struct UCommonTextBlock* ConnectionError; // 0x580(0x08)
	struct UCommonTextBlock* Description; // 0x588(0x08)
	struct UCommonActionWidget* EditTextActionWidget; // 0x590(0x08)
	struct UCommonTextBlock* EntryError; // 0x598(0x08)
	struct UCommonTextBlock* ErrorPart2; // 0x5a0(0x08)
	struct UIconTextButton_C* LaunchWebsite; // 0x5a8(0x08)
	struct ULightbox_C* Lightbox; // 0x5b0(0x08)
	struct UImage* McpWaitingSpinner; // 0x5b8(0x08)
	struct UFortSimpleWidgetAnimationsPanel* SimpleWidgetAnimationsPanel; // 0x5c0(0x08)
	struct UCommonTextBlock* Warning; // 0x5c8(0x08)
	bool Found; // 0x5d0(0x01)
	bool ConnectionTimeout; // 0x5d1(0x01)
	char pad_5D2[0x6]; // 0x5d2(0x06)
	struct FMulticastInlineDelegate OnPopupClosed; // 0x5d8(0x10)
	bool bSkipAutoPopulate; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	struct FMulticastInlineDelegate OnSuccess; // 0x5f0(0x10)
	bool bShakeAnimationIsPlaying; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	struct FName ShakeAnimation; // 0x604(0x04)
	bool bIsAffiliateKeyReadOnly; // 0x608(0x01)

	void SetupAffiliateField(struct FString AffilateName); // Function AffiliateKeyModal.AffiliateKeyModal_C.SetupAffiliateField // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Onset(bool bSuccess); // Function AffiliateKeyModal.AffiliateKeyModal_C.Onset // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, struct FString AffilateNameChecked); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnCheckComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function AffiliateKeyModal.AffiliateKeyModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void (); // Function AffiliateKeyModal.AffiliateKeyModal_C. // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AffiliateKeyModal(int32_t EntryPoint); // Function AffiliateKeyModal.AffiliateKeyModal_C.ExecuteUbergraph_AffiliateKeyModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnSuccess__DelegateSignature(); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPopupClosed__DelegateSignature(); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnPopupClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

