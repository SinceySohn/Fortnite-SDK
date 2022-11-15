// WidgetBlueprintGeneratedClass SidebarExitPopup.SidebarExitPopup_C
// Size: 0x540 (Inherited: 0x480)
struct USidebarExitPopup_C : UFortSidebarExitPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UBorder* Border_SpacingMobile; // 0x488(0x08)
	struct UOverlay* Overlay_Favorite; // 0x490(0x08)
	struct UOverlay* Overlay_SAC; // 0x498(0x08)
	struct UCommonTextBlock* Text_AreYouSure; // 0x4a0(0x08)
	struct FText LogoutAllowedNoButtonsText; // 0x4a8(0x18)
	struct FText LogoutAndQuitNotAllowedNoButtonsText; // 0x4c0(0x18)
	struct FText QuitAllowedNoButtonsText; // 0x4d8(0x18)
	bool Is A; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct FText LeaveExperienceConfirmationMessageText; // 0x4f8(0x18)
	struct FText LogoutConfirmationMessageText; // 0x510(0x18)
	struct FText ExitConfirmationMessageText; // 0x528(0x18)

	void RefreshButtonsVisual(bool IsTouch); // Function SidebarExitPopup.SidebarExitPopup_C.RefreshButtonsVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInputMethodChanged(enum class ECommonInputType NewInputType); // Function SidebarExitPopup.SidebarExitPopup_C.OnInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SidebarExitPopup_Button_AthenaMainMenuLeave_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_AthenaMainMenuLeave_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void UpdateNoEnabledButtonsText(bool bAllowLogout, bool bAllowQuit); // Function SidebarExitPopup.SidebarExitPopup_C.UpdateNoEnabledButtonsText // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarExitPopup.SidebarExitPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarExitPopup(int32_t EntryPoint); // Function SidebarExitPopup.SidebarExitPopup_C.ExecuteUbergraph_SidebarExitPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

