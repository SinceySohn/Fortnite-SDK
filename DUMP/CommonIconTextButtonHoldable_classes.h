// WidgetBlueprintGeneratedClass CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C
// Size: 0x18e8 (Inherited: 0x1480)
struct UCommonIconTextButtonHoldable_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x1488(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1490(0x08)
	struct UBorder* ContentBorder; // 0x1498(0x08)
	struct UHorizontalBox* HorizontalBox_ButtonContent; // 0x14a0(0x08)
	struct UImage* LeftSideImage; // 0x14a8(0x08)
	struct UOverlay* Overlay_Input_Keybind; // 0x14b0(0x08)
	struct UFortMobileImage* PressOrClickIcon; // 0x14b8(0x08)
	struct UImage* ProgressCircle; // 0x14c0(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x14c8(0x08)
	struct USpacer* Spacer_EvenSize; // 0x14d0(0x08)
	struct USpacer* Spacer_InputAction; // 0x14d8(0x08)
	struct UCommonTextBlock* TextBlock_HoldPrompt; // 0x14e0(0x08)
	struct UVerticalBox* VerticalBox_Text; // 0x14e8(0x08)
	struct FText ButtonText; // 0x14f0(0x18)
	char pad_1508[0x8]; // 0x1508(0x08)
	struct FSlateBrush IconBrush; // 0x1510(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x15d0(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x15d8(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x15e0(0x01)
	bool bMouseKeyboardStyleSet; // 0x15e1(0x01)
	char pad_15E2[0x6]; // 0x15e2(0x06)
	struct FText OverrideButtonText; // 0x15e8(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x1600(0x01)
	bool bDisplayAllCaps; // 0x1601(0x01)
	char pad_1602[0x6]; // 0x1602(0x06)
	double PressProgress; // 0x1608(0x08)
	bool bIgnoreInputActionWidgetText; // 0x1610(0x01)
	char pad_1611[0x7]; // 0x1611(0x07)
	struct FMulticastInlineDelegate FocusChangedEvent; // 0x1618(0x10)
	char pad_1628[0x8]; // 0x1628(0x08)
	struct FProgressBarStyle ProgressBarStyle; // 0x1630(0x260)
	struct FMulticastInlineDelegate Hold Completed; // 0x1890(0x10)
	double HoldPromptPadding; // 0x18a0(0x08)
	bool NewInputActionLayout; // 0x18a8(0x01)
	char pad_18A9[0x7]; // 0x18a9(0x07)
	struct UMaterialInterface* EmptyProgressMat; // 0x18b0(0x08)
	bool NewInputActionLayoutForMouse; // 0x18b8(0x01)
	bool ForceDefaultInputActionGamepadAnim; // 0x18b9(0x01)
	char pad_18BA[0x6]; // 0x18ba(0x06)
	struct USoundBase* HoldCompleteSound; // 0x18c0(0x08)
	struct USoundBase* HoldReleasedSound; // 0x18c8(0x08)
	struct USoundBase* HoldSound; // 0x18d0(0x08)
	struct UAudioComponent* HoldSoundRef; // 0x18d8(0x08)
	struct UCommonTextStyle* SubTextHoverStyle; // 0x18e0(0x08)

	void Update Input Hint Visibility(bool ForceVisible); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Update Input Hint Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Input Type(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Update Input Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetUseNewInputActionLayout(bool& UseNewLayout); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.GetUseNewInputActionLayout // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetPressProgress(double& Progress); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowIcon(bool bShouldShow); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTextInternal(struct FText InButtonText); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetInitialMouseKeyboardStyle(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextStyle(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateContentAlignment(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateStyle(bool UsingGamepad); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateText(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeButton(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Icon(struct FSlateBrush IconBrush); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Text(struct FText ButtonText); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnActionProgress(float HeldPercent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActionComplete(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentTextStyleChanged(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnTriggeringInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldReset(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldCompleted(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnHoldRequiredChanged(bool bHoldRequired); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnHoldRequiredChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Event On Input Type Updated(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Event On Input Type Updated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnProgressAnimationFinished(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnProgressAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnProgressAnimationStarted(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnProgressAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEnabled(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CommonIconTextButtonHoldable(int32_t EntryPoint); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.ExecuteUbergraph_CommonIconTextButtonHoldable // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void Hold Completed__DelegateSignature(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Hold Completed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FocusChangedEvent__DelegateSignature(bool HasFocus); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.FocusChangedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

