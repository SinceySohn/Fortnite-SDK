// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
// Size: 0x738 (Inherited: 0x710)
struct UConfirmationWindow_C : UFortConfirmationWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x08)
	struct USizeBox* ; // 0x718(0x08)
	struct UCommonBorder* TapToCloseZone; // 0x720(0x08)
	struct FLinearColor ButtonIconColor; // 0x728(0x10)

	void HandleConfigureDeclineButton(struct UCommonButtonLegacy* New Button); // Function ConfirmationWindow.ConfirmationWindow_C.HandleConfigureDeclineButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ConfigureConfirmationButton(struct UCommonButtonLegacy* Button, struct FConfirmationDialogAction& Action, bool bSimpleConfirm); // Function ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayShowSound(); // Function ConfirmationWindow.ConfirmationWindow_C.PlayShowSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply TapToClose(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ConfirmationWindow.ConfirmationWindow_C.TapToClose // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupNonInteractiveContent(); // Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FDataTableRowHandle GetInputAction(struct FName RowName, bool UseInputAction); // Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Initialize(); // Function ConfirmationWindow.ConfirmationWindow_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBeginOutro(); // Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ConfigureDeclineButton(struct UCommonButtonLegacy* Button); // Function ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ConfirmationWindow(int32_t EntryPoint); // Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

