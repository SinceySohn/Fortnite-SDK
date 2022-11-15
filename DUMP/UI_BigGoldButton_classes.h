// WidgetBlueprintGeneratedClass UI_BigGoldButton.UI_BigGoldButton_C
// Size: 0x15a0 (Inherited: 0x14a0)
struct UUI_BigGoldButton_C : UBattlePassCrewPurchaseButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x14a8(0x08)
	struct UWidgetAnimation* Hover; // 0x14b0(0x08)
	struct UHorizontalBox* HBox_Empty; // 0x14b8(0x08)
	struct UImage* Image; // 0x14c0(0x08)
	struct UImage* ; // 0x14c8(0x08)
	struct UImage* ; // 0x14d0(0x08)
	struct UImage* Image_Button; // 0x14d8(0x08)
	struct UImage* Image_Button_Inner; // 0x14e0(0x08)
	struct UImage* Image_CurrencyVBuck; // 0x14e8(0x08)
	struct UImage* Image_Shadow; // 0x14f0(0x08)
	struct UOverlay* Overlay_Hover; // 0x14f8(0x08)
	struct UOverlay* Overlay_Input_Keybind; // 0x1500(0x08)
	struct UImage* PlayStationStoreLogo; // 0x1508(0x08)
	struct UFortMobileImage* PressOrClickIcon; // 0x1510(0x08)
	struct UImage* ProgressCircle; // 0x1518(0x08)
	struct USpacer* Spacer_Even; // 0x1520(0x08)
	struct USpacer* Spacer_InputAction; // 0x1528(0x08)
	struct UWidgetSwitcher* Switcher_Currency; // 0x1530(0x08)
	struct UCommonTextBlock* TextBlock_HoldPrompt; // 0x1538(0x08)
	struct UCommonVisibilityWidgetLegacy* Visibility_PlatformImage; // 0x1540(0x08)
	struct UCommonVisualAttachment* Visuals_Glows; // 0x1548(0x08)
	struct FText ButtonText; // 0x1550(0x18)
	bool Unskew; // 0x1568(0x01)
	bool GlowsOff; // 0x1569(0x01)
	bool HoverLightning; // 0x156a(0x01)
	char pad_156B[0x5]; // 0x156b(0x05)
	struct USoundBase* PurchaseButtonHover; // 0x1570(0x08)
	struct USoundBase* PurchaseButtonUnHover; // 0x1578(0x08)
	struct USoundBase* PurchaseButtonHoldSound; // 0x1580(0x08)
	struct USoundBase* PurchaseButtonReleaseSound; // 0x1588(0x08)
	struct USoundBase* PurchaseButtonHoldComplete; // 0x1590(0x08)
	struct UAudioComponent* PurchaseHoldComponent; // 0x1598(0x08)

	void PlayHoldProgressAnimation(double HoldPercent); // Function UI_BigGoldButton.UI_BigGoldButton_C.PlayHoldProgressAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateAnimationBindings(); // Function UI_BigGoldButton.UI_BigGoldButton_C.UpdateAnimationBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventHover(bool In); // Function UI_BigGoldButton.UI_BigGoldButton_C.EventHover // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCurrencyUpdated(); // Function UI_BigGoldButton.UI_BigGoldButton_C.OnCurrencyUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function UI_BigGoldButton.UI_BigGoldButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function UI_BigGoldButton.UI_BigGoldButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldCompleted(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldReset(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnHoldRequiredChanged(bool bHoldRequired); // Function UI_BigGoldButton.UI_BigGoldButton_C.OnHoldRequiredChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void InputChanged(enum class ECommonInputType bNewInputType); // Function UI_BigGoldButton.UI_BigGoldButton_C.InputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function UI_BigGoldButton.UI_BigGoldButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BindInputChanged(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BindInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnProgressAnimationStarted(); // Function UI_BigGoldButton.UI_BigGoldButton_C.OnProgressAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnProgressAnimationFinished(); // Function UI_BigGoldButton.UI_BigGoldButton_C.OnProgressAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActionProgressIncreased(float HoldPercentage); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnActionProgressIncreased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActionProgressDecreased(float HoldPercentage); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnActionProgressDecreased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_UI_BigGoldButton(int32_t EntryPoint); // Function UI_BigGoldButton.UI_BigGoldButton_C.ExecuteUbergraph_UI_BigGoldButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

