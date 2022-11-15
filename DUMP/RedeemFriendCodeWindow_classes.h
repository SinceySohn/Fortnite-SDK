// WidgetBlueprintGeneratedClass RedeemFriendCodeWindow.RedeemFriendCodeWindow_C
// Size: 0x588 (Inherited: 0x520)
struct URedeemFriendCodeWindow_C : UFortRedeemCodeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UCloseButton_C* Button_Cancel; // 0x528(0x08)
	struct UIconTextButton_C* CancelButton; // 0x530(0x08)
	struct UWidgetSwitcher* EntryProgressSwitcher; // 0x538(0x08)
	struct UVerticalBox* EntryVBox; // 0x540(0x08)
	struct UCommonTextBlock* ErrorText; // 0x548(0x08)
	struct UImage* ; // 0x550(0x08)
	struct ULightbox_C* Lightbox; // 0x558(0x08)
	struct USizeBox* ProgressSizeBox; // 0x560(0x08)
	struct UCommonTextBlock* ProgressText; // 0x568(0x08)
	struct UVerticalBox* ProgressVBox; // 0x570(0x08)
	struct UIconTextButton_C* RedeemButton; // 0x578(0x08)
	struct UCommonTextBlock* Title; // 0x580(0x08)

	void HandleRedeemCodeComplete(bool Success, enum class ERedeemCodeFailureReason FailureReason); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Close(); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnRedeemFriendCodeComplete(bool bSuccess, enum class ERedeemCodeFailureReason FailureReason); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RedeemFriendCodeWindow(int32_t EntryPoint); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

