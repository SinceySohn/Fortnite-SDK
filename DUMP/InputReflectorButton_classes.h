// WidgetBlueprintGeneratedClass InputReflectorButton.InputReflectorButton_C
// Size: 0x1579 (Inherited: 0x1440)
struct UInputReflectorButton_C : UCommonPopupButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1448(0x08)
	struct UBorder* ContentBorder; // 0x1450(0x08)
	struct UImage* LeftSideImage; // 0x1458(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x1460(0x08)
	struct FText ButtonText; // 0x1468(0x18)
	struct FSlateBrush IconBrush; // 0x1480(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1540(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1548(0x08)
	struct UCommonButtonStyle* MobileInputStyle; // 0x1550(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1558(0x01)
	bool bMouseKeyboardStyleSet; // 0x1559(0x01)
	char pad_155A[0x6]; // 0x155a(0x06)
	struct FText OverrideButtonText; // 0x1560(0x18)
	bool bDisplayAllCaps; // 0x1578(0x01)

	void SetMobileStyle(struct UCommonButtonStyle* MobileInputStyle); // Function InputReflectorButton.InputReflectorButton_C.SetMobileStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowIcon(bool bShouldShow); // Function InputReflectorButton.InputReflectorButton_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTextInternal(struct FText InButtonText); // Function InputReflectorButton.InputReflectorButton_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetInitialMouseKeyboardStyle(); // Function InputReflectorButton.InputReflectorButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextStyle(); // Function InputReflectorButton.InputReflectorButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function InputReflectorButton.InputReflectorButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateContentAlignment(); // Function InputReflectorButton.InputReflectorButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function InputReflectorButton.InputReflectorButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateStyle(enum class ECommonInputType UsingGamepad); // Function InputReflectorButton.InputReflectorButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateText(); // Function InputReflectorButton.InputReflectorButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function InputReflectorButton.InputReflectorButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextAndStyle(enum class ECommonInputType CommonInputType); // Function InputReflectorButton.InputReflectorButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeButton(); // Function InputReflectorButton.InputReflectorButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Icon(struct FSlateBrush IconBrush); // Function InputReflectorButton.InputReflectorButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Text(struct FText ButtonText); // Function InputReflectorButton.InputReflectorButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentTextStyleChanged(); // Function InputReflectorButton.InputReflectorButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function InputReflectorButton.InputReflectorButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function InputReflectorButton.InputReflectorButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function InputReflectorButton.InputReflectorButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnActionProgress(float HeldPercent); // Function InputReflectorButton.InputReflectorButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActionComplete(); // Function InputReflectorButton.InputReflectorButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function InputReflectorButton.InputReflectorButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function InputReflectorButton.InputReflectorButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_InputReflectorButton(int32_t EntryPoint); // Function InputReflectorButton.InputReflectorButton_C.ExecuteUbergraph_InputReflectorButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

