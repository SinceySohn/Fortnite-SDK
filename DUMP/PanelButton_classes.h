// WidgetBlueprintGeneratedClass PanelButton.PanelButton_C
// Size: 0x1480 (Inherited: 0x1430)
struct UPanelButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UNamedSlot* ContentSlot; // 0x1438(0x08)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1440(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1448(0x08)
	enum class EHorizontalAlignment InputActionHorizontalAlignment; // 0x1450(0x01)
	enum class EVerticalAlignment InputActionVerticalAlignment; // 0x1451(0x01)
	char pad_1452[0x6]; // 0x1452(0x06)
	struct FVector2D InputActionRenderTranslation; // 0x1458(0x10)
	bool InputActionUseRimBrush; // 0x1468(0x01)
	char pad_1469[0x7]; // 0x1469(0x07)
	struct FVector2D InputActionRimBrushSize; // 0x1470(0x10)

	void UpdateInputActionLayout(); // Function PanelButton.PanelButton_C.UpdateInputActionLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateStyle(bool bUsingGamepad); // Function PanelButton.PanelButton_C.UpdateStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeButton(); // Function PanelButton.PanelButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextAndStyle(); // Function PanelButton.PanelButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function PanelButton.PanelButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnActionProgress(float HeldPercent); // Function PanelButton.PanelButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActionComplete(); // Function PanelButton.PanelButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PanelButton.PanelButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function PanelButton.PanelButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function PanelButton.PanelButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PanelButton(int32_t EntryPoint); // Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

