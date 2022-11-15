// Class CommonUI.CommonStyleSheetTypeBase
// Size: 0x30 (Inherited: 0x28)
struct UCommonStyleSheetTypeBase : UObject {
	bool bIsEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class CommonUI.CommonStyleSheetTypeColor
// Size: 0x40 (Inherited: 0x30)
struct UCommonStyleSheetTypeColor : UCommonStyleSheetTypeBase {
	struct FLinearColor Color; // 0x30(0x10)
};

// Class CommonUI.CommonStyleSheetTypeOpacity
// Size: 0x38 (Inherited: 0x30)
struct UCommonStyleSheetTypeOpacity : UCommonStyleSheetTypeBase {
	float Opacity; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CommonUI.CommonStyleSheetTypeLineHeightPercentage
// Size: 0x38 (Inherited: 0x30)
struct UCommonStyleSheetTypeLineHeightPercentage : UCommonStyleSheetTypeBase {
	float LineHeightPercentage; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CommonUI.CommonStyleSheetTypeFontTypeface
// Size: 0x88 (Inherited: 0x30)
struct UCommonStyleSheetTypeFontTypeface : UCommonStyleSheetTypeBase {
	struct FSlateFontInfo Typeface; // 0x30(0x58)
};

// Class CommonUI.CommonStyleSheetTypeFontSize
// Size: 0x38 (Inherited: 0x30)
struct UCommonStyleSheetTypeFontSize : UCommonStyleSheetTypeBase {
	int32_t Size; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CommonUI.CommonStyleSheetTypeFontLetterSpacing
// Size: 0x38 (Inherited: 0x30)
struct UCommonStyleSheetTypeFontLetterSpacing : UCommonStyleSheetTypeBase {
	int32_t LetterSpacing; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CommonUI.CommonStyleSheetTypeMarginLeft
// Size: 0x38 (Inherited: 0x30)
struct UCommonStyleSheetTypeMarginLeft : UCommonStyleSheetTypeBase {
	float Left; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CommonUI.CommonStyleSheetTypeMarginRight
// Size: 0x38 (Inherited: 0x30)
struct UCommonStyleSheetTypeMarginRight : UCommonStyleSheetTypeBase {
	float Right; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CommonUI.CommonStyleSheetTypeMarginTop
// Size: 0x38 (Inherited: 0x30)
struct UCommonStyleSheetTypeMarginTop : UCommonStyleSheetTypeBase {
	float Top; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CommonUI.CommonStyleSheetTypeMarginBottom
// Size: 0x38 (Inherited: 0x30)
struct UCommonStyleSheetTypeMarginBottom : UCommonStyleSheetTypeBase {
	float Bottom; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CommonUI.AnalogSlider
// Size: 0x6b0 (Inherited: 0x690)
struct UAnalogSlider : USlider {
	struct FMulticastInlineDelegate OnAnalogCapture; // 0x690(0x10)
	char pad_6A0[0x10]; // 0x6a0(0x10)
};

// Class CommonUI.CommonActionHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonActionHandlerInterface : UInterface {
};

// Class CommonUI.CommonActionWidget
// Size: 0x420 (Inherited: 0x148)
struct UCommonActionWidget : UWidget {
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x148(0x10)
	char pad_158[0x8]; // 0x158(0x08)
	struct FSlateBrush ProgressMaterialBrush; // 0x160(0xc0)
	struct FName ProgressMaterialParam; // 0x220(0x04)
	char pad_224[0xc]; // 0x224(0x0c)
	struct FSlateBrush IconRimBrush; // 0x230(0xc0)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x2f0(0x10)
	char pad_300[0x8]; // 0x300(0x08)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x308(0x08)
	char pad_310[0x110]; // 0x310(0x110)

	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions); // Function CommonUI.CommonActionWidget.SetInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4f80
	void SetInputAction(struct FDataTableRowHandle InputActionRow); // Function CommonUI.CommonActionWidget.SetInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x2766e40
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush); // Function CommonUI.CommonActionWidget.SetIconRimBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x27e9a8c
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	bool IsHeldAction(); // Function CommonUI.CommonActionWidget.IsHeldAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3c48
	struct FSlateBrush GetIcon(); // Function CommonUI.CommonActionWidget.GetIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2ad8
	struct FText GetDisplayText(); // Function CommonUI.CommonActionWidget.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2053c40
};

// Class CommonUI.CommonUserWidget
// Size: 0x290 (Inherited: 0x268)
struct UCommonUserWidget : UUserWidget {
	bool bDisplayInActionBar; // 0x268(0x01)
	bool bConsumePointerInput; // 0x269(0x01)
	char pad_26A[0x26]; // 0x26a(0x26)

	void SetConsumePointerInput(bool bInConsumePointerInput); // Function CommonUI.CommonUserWidget.SetConsumePointerInput // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc49f8
};

// Class CommonUI.CommonActivatableWidget
// Size: 0x3a8 (Inherited: 0x290)
struct UCommonActivatableWidget : UCommonUserWidget {
	bool bIsBackHandler; // 0x290(0x01)
	bool bIsBackActionDisplayedInActionBar; // 0x291(0x01)
	bool bAutoActivate; // 0x292(0x01)
	bool bSupportsActivationFocus; // 0x293(0x01)
	bool bIsModal; // 0x294(0x01)
	bool bAutoRestoreFocus; // 0x295(0x01)
	bool bOverrideActionDomain; // 0x296(0x01)
	char pad_297[0x1]; // 0x297(0x01)
	struct TSoftObjectPtr<UCommonInputActionDomain> ActionDomainOverride; // 0x298(0x28)
	struct FMulticastInlineDelegate BP_OnWidgetActivated; // 0x2c0(0x10)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x2d0(0x10)
	bool bIsActive; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TArray<struct TWeakObjectPtr<struct UCommonActivatableWidget>> VisibilityBoundWidgets; // 0x2e8(0x10)
	char pad_2F8[0xa8]; // 0x2f8(0xa8)
	bool bSetVisibilityOnActivated; // 0x3a0(0x01)
	enum class ESlateVisibility ActivatedVisibility; // 0x3a1(0x01)
	bool bSetVisibilityOnDeactivated; // 0x3a2(0x01)
	enum class ESlateVisibility DeactivatedVisibility; // 0x3a3(0x01)
	char pad_3A4[0x4]; // 0x3a4(0x04)

	void SetBindVisibilities(enum class ESlateVisibility OnActivatedVisibility, enum class ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // Function CommonUI.CommonActivatableWidget.SetBindVisibilities // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc46c0
	bool IsActivated(); // Function CommonUI.CommonActivatableWidget.IsActivated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2674fa0
	struct UWidget* GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc28bc
	void DeactivateWidget(); // Function CommonUI.CommonActivatableWidget.DeactivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc2084
	bool BP_OnHandleBackAction(); // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function CommonUI.CommonActivatableWidget.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function CommonUI.CommonActivatableWidget.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct UWidget* BP_GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget // (Event|Protected|BlueprintEvent|Const) // @ game+0xdef49c
	void BindVisibilityToActivation(struct UCommonActivatableWidget* ActivatableWidget); // Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc1e90
	void ActivateWidget(); // Function CommonUI.CommonActivatableWidget.ActivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x2b5c864
};

// Class CommonUI.CommonAnimatedSwitcher
// Size: 0x1e8 (Inherited: 0x178)
struct UCommonAnimatedSwitcher : UWidgetSwitcher {
	char pad_178[0x30]; // 0x178(0x30)
	enum class ECommonSwitcherTransition TransitionType; // 0x1a8(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x1a9(0x01)
	char pad_1AA[0x2]; // 0x1aa(0x02)
	float TransitionDuration; // 0x1ac(0x04)
	char pad_1B0[0x38]; // 0x1b0(0x38)

	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x27e96f0
	bool IsTransitionPlaying(); // Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3dc8
	bool IsCurrentlySwitching(); // Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3c30
	bool HasWidgets(); // Function CommonUI.CommonAnimatedSwitcher.HasWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3a54
	void ActivatePreviousWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc1ac0
	void ActivateNextWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc1a40
};

// Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x1f8 (Inherited: 0x1e8)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher {
	char pad_1E8[0x10]; // 0x1e8(0x10)
};

// Class CommonUI.CommonBorderStyle
// Size: 0xf0 (Inherited: 0x28)
struct UCommonBorderStyle : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FSlateBrush Background; // 0x30(0xc0)

	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonBorderStyle.GetBackgroundBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2434
};

// Class CommonUI.CommonBorder
// Size: 0x2f0 (Inherited: 0x2d0)
struct UCommonBorder : UBorder {
	struct UCommonBorderStyle* style; // 0x2d0(0x08)
	bool bReducePaddingBySafezone; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct Fmargin MinimumPadding; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void SetStyle(struct UCommonBorderStyle* InStyle); // Function CommonUI.CommonBorder.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x2b78fc4
};

// Class CommonUI.CommonButtonStyle
// Size: 0x730 (Inherited: 0x28)
struct UCommonButtonStyle : UObject {
	bool bSingleMaterial; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSlateBrush SingleMaterialBrush; // 0x30(0xc0)
	struct FSlateBrush NormalBase; // 0xf0(0xc0)
	struct FSlateBrush NormalHovered; // 0x1b0(0xc0)
	struct FSlateBrush NormalPressed; // 0x270(0xc0)
	struct FSlateBrush SelectedBase; // 0x330(0xc0)
	struct FSlateBrush SelectedHovered; // 0x3f0(0xc0)
	struct FSlateBrush SelectedPressed; // 0x4b0(0xc0)
	struct FSlateBrush Disabled; // 0x570(0xc0)
	struct Fmargin ButtonPadding; // 0x630(0x10)
	struct Fmargin CustomPadding; // 0x640(0x10)
	int32_t MinWidth; // 0x650(0x04)
	int32_t MinHeight; // 0x654(0x04)
	struct UCommonTextStyle* NormalTextStyle; // 0x658(0x08)
	struct UCommonTextStyle* NormalHoveredTextStyle; // 0x660(0x08)
	struct UCommonTextStyle* SelectedTextStyle; // 0x668(0x08)
	struct UCommonTextStyle* SelectedHoveredTextStyle; // 0x670(0x08)
	struct UCommonTextStyle* DisabledTextStyle; // 0x678(0x08)
	struct FSlateSound PressedSlateSound; // 0x680(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x698(0x20)
	struct FCommonButtonStyleOptionalSlateSound LockedPressedSlateSound; // 0x6b8(0x20)
	struct FSlateSound HoveredSlateSound; // 0x6d8(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x6f0(0x20)
	struct FCommonButtonStyleOptionalSlateSound LockedHoveredSlateSound; // 0x710(0x20)

	struct UCommonTextStyle* GetSelectedTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc32b4
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3158
	struct UCommonTextStyle* GetSelectedHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc311c
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3074
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2f8c
	struct UCommonTextStyle* GetNormalTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2f3c
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2e94
	struct UCommonTextStyle* GetNormalHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2e70
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2dc8
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2d20
	void GetMaterialBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetMaterialBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2434
	struct UCommonTextStyle* GetDisabledTextStyle(); // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc298c
	void GetDisabledBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetDisabledBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc28e4
	void GetCustomPadding(struct Fmargin& OutCustomPadding); // Function CommonUI.CommonButtonStyle.GetCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2814
	void GetButtonPadding(struct Fmargin& OutButtonPadding); // Function CommonUI.CommonButtonStyle.GetButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc257c
};

// Class CommonUI.CommonButtonInternalBase
// Size: 0x610 (Inherited: 0x5a0)
struct UCommonButtonInternalBase : UButton {
	char pad_5A0[0x8]; // 0x5a0(0x08)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x5a8(0x10)
	char pad_5B8[0x20]; // 0x5b8(0x20)
	int32_t MinWidth; // 0x5d8(0x04)
	int32_t MinHeight; // 0x5dc(0x04)
	bool bButtonEnabled; // 0x5e0(0x01)
	bool bInteractionEnabled; // 0x5e1(0x01)
	char pad_5E2[0x2e]; // 0x5e2(0x2e)
};

// Class CommonUI.CommonButtonBase
// Size: 0x13e0 (Inherited: 0x290)
struct UCommonButtonBase : UCommonUserWidget {
	int32_t MinWidth; // 0x290(0x04)
	int32_t MinHeight; // 0x294(0x04)
	struct UCommonButtonStyle* style; // 0x298(0x08)
	bool bHideInputAction; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FSlateSound PressedSlateSoundOverride; // 0x2a8(0x18)
	struct FSlateSound HoveredSlateSoundOverride; // 0x2c0(0x18)
	struct FSlateSound SelectedPressedSlateSoundOverride; // 0x2d8(0x18)
	struct FSlateSound SelectedHoveredSlateSoundOverride; // 0x2f0(0x18)
	struct FSlateSound LockedPressedSlateSoundOverride; // 0x308(0x18)
	struct FSlateSound LockedHoveredSlateSoundOverride; // 0x320(0x18)
	char bApplyAlphaOnDisable : 1; // 0x338(0x01)
	char bLocked : 1; // 0x338(0x01)
	char bSelectable : 1; // 0x338(0x01)
	char bShouldSelectUponReceivingFocus : 1; // 0x338(0x01)
	char bInteractableWhenSelected : 1; // 0x338(0x01)
	char bToggleable : 1; // 0x338(0x01)
	char bTriggerClickedAfterSelection : 1; // 0x338(0x01)
	char bDisplayInputActionWhenNotInteractable : 1; // 0x338(0x01)
	char bHideInputActionWithKeyboard : 1; // 0x339(0x01)
	char bShouldUseFallbackDefaultInputAction : 1; // 0x339(0x01)
	char pad_339_2 : 6; // 0x339(0x01)
	enum class EButtonClickMethod ClickMethod; // 0x33a(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x33b(0x01)
	enum class EButtonPressMethod PressMethod; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	int32_t InputPriority; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FDataTableRowHandle TriggeringInputAction; // 0x348(0x10)
	char pad_358[0x10]; // 0x358(0x10)
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x368(0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x378(0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x388(0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x398(0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x3a8(0x10)
	char pad_3B8[0x4]; // 0x3b8(0x04)
	bool bIsPersistentBinding; // 0x3bc(0x01)
	enum class ECommonInputMode InputModeOverride; // 0x3bd(0x01)
	char pad_3BE[0x32]; // 0x3be(0x32)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FButtonStyle NormalStyle; // 0x400(0x3b0)
	struct FButtonStyle SelectedStyle; // 0x7b0(0x3b0)
	struct FButtonStyle DisabledStyle; // 0xb60(0x3b0)
	struct FButtonStyle LockedStyle; // 0xf10(0x3b0)
	char bStopDoubleClickPropagation : 1; // 0x12c0(0x01)
	char pad_12C0_1 : 7; // 0x12c0(0x01)
	char pad_12C1[0x117]; // 0x12c1(0x117)
	struct UCommonActionWidget* InputActionWidget; // 0x13d8(0x08)

	void StopDoubleClickPropagation(); // Function CommonUI.CommonButtonBase.StopDoubleClickPropagation // (Final|Native|Protected|BlueprintCallable) // @ game+0x5cc6494
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeringInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a11518
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeredInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5cc632c
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function CommonUI.CommonButtonBase.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc6218
	void SetStyle(struct UCommonButtonStyle* InStyle); // Function CommonUI.CommonButtonBase.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x202b8fc
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5f78
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5ef8
	void SetSelectedPressedSoundOverride(struct USoundBase* sound); // Function CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5de0
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Function CommonUI.CommonButtonBase.SetSelectedInternal // (Final|Native|Protected|BlueprintCallable) // @ game+0x5cc5cd4
	void SetSelectedHoveredSoundOverride(struct USoundBase* sound); // Function CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5c3c
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function CommonUI.CommonButtonBase.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5ab0
	void SetPressedSoundOverride(struct USoundBase* sound); // Function CommonUI.CommonButtonBase.SetPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5b30
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Function CommonUI.CommonButtonBase.SetMinDimensions // (Final|Native|Public|BlueprintCallable) // @ game+0x2627ff4
	void SetLockedPressedSoundOverride(struct USoundBase* sound); // Function CommonUI.CommonButtonBase.SetLockedPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc57f8
	void SetLockedHoveredSoundOverride(struct USoundBase* sound); // Function CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5760
	void SetIsToggleable(bool bInIsToggleable); // Function CommonUI.CommonButtonBase.SetIsToggleable // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc53dc
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Function CommonUI.CommonButtonBase.SetIsSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5318
	void SetIsSelectable(bool bInIsSelectable); // Function CommonUI.CommonButtonBase.SetIsSelectable // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5298
	void SetIsLocked(bool bInIsLocked); // Function CommonUI.CommonButtonBase.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc51d4
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1c960e0
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc50d4
	void SetIsFocusable(bool bInIsFocusable); // Function CommonUI.CommonButtonBase.SetIsFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5054
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5cc4e6c
	void SetHoveredSoundOverride(struct USoundBase* sound); // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4dec
	void SetHideInputAction(bool bInHideInputAction); // Function CommonUI.CommonButtonBase.SetHideInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4ce4
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function CommonUI.CommonButtonBase.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4978
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeringInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.OnInputMethodChanged // (Native|Protected) // @ game+0x5cc3f38
	void OnCurrentTextStyleChanged(); // Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActionComplete(); // Function CommonUI.CommonButtonBase.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void NativeOnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.NativeOnActionProgress // (Native|Protected) // @ game+0x5cc3e04
	void NativeOnActionComplete(); // Function CommonUI.CommonButtonBase.NativeOnActionComplete // (Native|Protected) // @ game+0x5cc3dec
	bool IsPressed(); // Function CommonUI.CommonButtonBase.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3da4
	bool IsInteractionEnabled(); // Function CommonUI.CommonButtonBase.IsInteractionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3cd4
	void HandleTriggeringActionCommited(bool& bPassThrough); // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited // (Native|Protected|HasOutParms) // @ game+0x5cc39a8
	void HandleFocusReceived(); // Function CommonUI.CommonButtonBase.HandleFocusReceived // (Native|Protected) // @ game+0x26cc880
	void HandleFocusLost(); // Function CommonUI.CommonButtonBase.HandleFocusLost // (Native|Protected) // @ game+0x5cc37cc
	void HandleButtonReleased(); // Function CommonUI.CommonButtonBase.HandleButtonReleased // (Final|Native|Protected) // @ game+0x24b5a98
	void HandleButtonPressed(); // Function CommonUI.CommonButtonBase.HandleButtonPressed // (Final|Native|Protected) // @ game+0x24aa8cc
	void HandleButtonClicked(); // Function CommonUI.CommonButtonBase.HandleButtonClicked // (Final|Native|Protected) // @ game+0x15dfe9c
	struct UCommonButtonStyle* GetStyle(); // Function CommonUI.CommonButtonBase.GetStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc34b4
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x278981c
	bool GetShouldSelectUponReceivingFocus(); // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc33f0
	bool GetSelected(); // Function CommonUI.CommonButtonBase.GetSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x253f17c
	bool GetLocked(); // Function CommonUI.CommonButtonBase.GetLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2c58
	bool GetIsFocusable(); // Function CommonUI.CommonButtonBase.GetIsFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2bb8
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.GetInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2b1c
	struct UCommonTextStyle* GetCurrentTextStyleClass(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12471a4
	struct UCommonTextStyle* GetCurrentTextStyle(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc27f0
	void GetCurrentCustomPadding(struct Fmargin& OutCustomPadding); // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2750
	void GetCurrentButtonPadding(struct Fmargin& OutButtonPadding); // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc26b0
	void DisableButtonWithReason(struct FText& DisabledReason); // Function CommonUI.CommonButtonBase.DisableButtonWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5cc2140
	void ClearSelection(); // Function CommonUI.CommonButtonBase.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc203c
	void BP_OnUnhovered(); // Function CommonUI.CommonButtonBase.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function CommonUI.CommonButtonBase.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnReleased(); // Function CommonUI.CommonButtonBase.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnPressed(); // Function CommonUI.CommonButtonBase.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnLockedChanged(bool bIsLocked); // Function CommonUI.CommonButtonBase.BP_OnLockedChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnLockDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnLockDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnLockClicked(); // Function CommonUI.CommonButtonBase.BP_OnLockClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.BP_OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function CommonUI.CommonButtonBase.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnFocusReceived(); // Function CommonUI.CommonButtonBase.BP_OnFocusReceived // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnFocusLost(); // Function CommonUI.CommonButtonBase.BP_OnFocusLost // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEnabled(); // Function CommonUI.CommonButtonBase.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function CommonUI.CommonButtonBase.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function CommonUI.CommonButtonBase.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function CommonUI.CommonButtonBase.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CommonUI.CommonCustomNavigation
// Size: 0x2e0 (Inherited: 0x2d0)
struct UCommonCustomNavigation : UBorder {
	struct FDelegate OnNavigationEvent; // 0x2d0(0x0c)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class CommonUI.CommonTextBlock
// Size: 0x350 (Inherited: 0x320)
struct UCommonTextBlock : UTextBlock {
	struct UCommonTextStyle* style; // 0x318(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x320(0x08)
	struct UCommonStyleSheet* StyleSheet; // 0x328(0x08)
	bool bIsScrollingEnabled; // 0x330(0x01)
	bool bDisplayAllCaps; // 0x331(0x01)
	bool bAutoCollapseWithEmptyText; // 0x332(0x01)
	float MobileFontSizeMultiplier; // 0x334(0x04)
	char pad_33F[0x11]; // 0x33f(0x11)

	void SetWrapTextWidth(int32_t InWrapTextAt); // Function CommonUI.CommonTextBlock.SetWrapTextWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x27b2790
	void SetTextCase(bool bUseAllCaps); // Function CommonUI.CommonTextBlock.SetTextCase // (Final|Native|Public|BlueprintCallable) // @ game+0x12c310c
	void SetStyle(struct UCommonTextStyle* InStyle); // Function CommonUI.CommonTextBlock.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x203f590
	void SetScrollingEnabled(bool bInIsScrollingEnabled); // Function CommonUI.CommonTextBlock.SetScrollingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2727bcc
	void SetMargin(struct Fmargin& InMargin); // Function CommonUI.CommonTextBlock.SetMargin // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5cc5890
	void SetLineHeightPercentage(float InLineHeightPercentage); // Function CommonUI.CommonTextBlock.SetLineHeightPercentage // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5514
	void ResetScrollState(); // Function CommonUI.CommonTextBlock.ResetScrollState // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4308
	struct Fmargin GetMargin(); // Function CommonUI.CommonTextBlock.GetMargin // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc2c74
};

// Class CommonUI.CommonDateTimeTextBlock
// Size: 0x3a0 (Inherited: 0x350)
struct UCommonDateTimeTextBlock : UCommonTextBlock {
	char pad_350[0x50]; // 0x350(0x50)

	void SetTimespanValue(struct FTimespan InTimespan); // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5cc6198
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5cc4b50
	void SetCountDownCompletionText(struct FText InCompletionText); // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4a78
	struct FDateTime GetDateTime(); // Function CommonUI.CommonDateTimeTextBlock.GetDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc28a4
};

// Class CommonUI.CommonGameViewportClient
// Size: 0x3d0 (Inherited: 0x390)
struct UCommonGameViewportClient : UGameViewportClient {
	char pad_390[0x40]; // 0x390(0x40)
};

// Class CommonUI.CommonHardwareVisibilityBorder
// Size: 0x340 (Inherited: 0x2f0)
struct UCommonHardwareVisibilityBorder : UCommonBorder {
	struct FGameplayTagQuery VisibilityQuery; // 0x2f0(0x48)
	enum class ESlateVisibility VisibleType; // 0x338(0x01)
	enum class ESlateVisibility HiddenType; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
};

// Class CommonUI.CommonHierarchicalScrollBox
// Size: 0xbc0 (Inherited: 0xbc0)
struct UCommonHierarchicalScrollBox : UScrollBox {
};

// Class CommonUI.CommonLazyImage
// Size: 0x380 (Inherited: 0x280)
struct UCommonLazyImage : UImage {
	struct FSlateBrush LoadingBackgroundBrush; // 0x280(0xc0)
	struct FName MaterialTextureParamName; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x348(0x10)
	char pad_358[0x28]; // 0x358(0x28)

	void SetMaterialTextureParamName(struct FName TextureParamName); // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5920
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x180cb2c
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial); // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5cc48c0
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5cc47c4
	bool IsLoading(); // Function CommonUI.CommonLazyImage.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3d14
};

// Class CommonUI.CommonLazyWidget
// Size: 0x290 (Inherited: 0x148)
struct UCommonLazyWidget : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FSlateBrush LoadingBackgroundBrush; // 0x150(0xc0)
	struct UUserWidget* Content; // 0x210(0x08)
	char pad_218[0x28]; // 0x218(0x28)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x240(0x10)
	char pad_250[0x40]; // 0x250(0x40)

	void SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget); // Function CommonUI.CommonLazyWidget.SetLazyContent // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc545c
	bool IsLoading(); // Function CommonUI.CommonLazyWidget.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3d44
	struct UUserWidget* GetContent(); // Function CommonUI.CommonLazyWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2698
};

// Class CommonUI.CommonListView
// Size: 0xb80 (Inherited: 0xb80)
struct UCommonListView : UListView {

	void SetEntrySpacing(float InEntrySpacing); // Function CommonUI.CommonListView.SetEntrySpacing // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4c60
};

// Class CommonUI.LoadGuardSlot
// Size: 0x60 (Inherited: 0x38)
struct ULoadGuardSlot : UPanelSlot {
	struct Fmargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function CommonUI.LoadGuardSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc63ec
	void SetPadding(struct Fmargin InPadding); // Function CommonUI.LoadGuardSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5a24
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4d6c
};

// Class CommonUI.CommonLoadGuard
// Size: 0x2b0 (Inherited: 0x160)
struct UCommonLoadGuard : UContentWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x160(0xc0)
	enum class EHorizontalAlignment ThrobberAlignment; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	struct Fmargin ThrobberPadding; // 0x224(0x10)
	char pad_234[0x4]; // 0x234(0x04)
	struct FText LoadingText; // 0x238(0x18)
	struct UCommonTextStyle* TextStyle; // 0x250(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x258(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x268(0x18)
	char pad_280[0x30]; // 0x280(0x30)

	void SetLoadingText(struct FText& InLoadingText); // Function CommonUI.CommonLoadGuard.SetLoadingText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5cc569c
	void SetIsLoading(bool bInIsLoading); // Function CommonUI.CommonLoadGuard.SetIsLoading // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5154
	void OnAssetLoaded__DelegateSignature(struct UObject* Object); // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature // (Public|Delegate) // @ game+0xdef49c
	bool IsLoading(); // Function CommonUI.CommonLoadGuard.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3d74
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x5cc1ce8
};

// Class CommonUI.CommonNumericTextBlock
// Size: 0x3f0 (Inherited: 0x350)
struct UCommonNumericTextBlock : UCommonTextBlock {
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x348(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x358(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x368(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x378(0x10)
	float CurrentNumericValue; // 0x388(0x04)
	enum class ECommonNumericType NumericType; // 0x38c(0x01)
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x390(0x14)
	float EaseOutInterpolationExponent; // 0x3a4(0x04)
	float InterpolationUpdateInterval; // 0x3a8(0x04)
	float PostInterpolationShrinkDuration; // 0x3ac(0x04)
	bool PerformSizeInterpolation; // 0x3b0(0x01)
	bool IsPercentage; // 0x3b1(0x01)
	char pad_3B7[0x39]; // 0x3b7(0x39)

	void SetNumericType(enum class ECommonNumericType InNumericType); // Function CommonUI.CommonNumericTextBlock.SetNumericType // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc59a0
	void SetCurrentValue(float NewValue); // Function CommonUI.CommonNumericTextBlock.SetCurrentValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1c12740
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	bool IsInterpolatingNumericValue(); // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3cf8
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Function CommonUI.CommonNumericTextBlock.InterpolateToValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc3af0
	float GetTargetValue(); // Function CommonUI.CommonNumericTextBlock.GetTargetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3618
};

// Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonPoolableWidgetInterface : UInterface {

	void OnReleaseToPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool // (Native|Event|Protected|BlueprintEvent) // @ game+0x5cc3fbc
	void OnAcquireFromPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool // (Native|Event|Protected|BlueprintEvent) // @ game+0x5cc3ea0
};

// Class CommonUI.CommonRichTextBlock
// Size: 0x840 (Inherited: 0x800)
struct UCommonRichTextBlock : URichTextBlock {
	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x800(0x01)
	bool bTintInlineIcon; // 0x801(0x01)
	char pad_802[0x6]; // 0x802(0x06)
	struct UCommonTextStyle* DefaultTextStyleOverrideClass; // 0x808(0x08)
	float MobileTextBlockScale; // 0x810(0x04)
	char pad_814[0x4]; // 0x814(0x04)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x818(0x08)
	bool bIsScrollingEnabled; // 0x820(0x01)
	bool bDisplayAllCaps; // 0x821(0x01)
	bool bAutoCollapseWithEmptyText; // 0x822(0x01)
	char pad_823[0x1d]; // 0x823(0x1d)

	void SetScrollingEnabled(bool bInIsScrollingEnabled); // Function CommonUI.CommonRichTextBlock.SetScrollingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5bb0
};

// Class CommonUI.CommonRotator
// Size: 0x1440 (Inherited: 0x13e0)
struct UCommonRotator : UCommonButtonBase {
	char pad_13E0[0x10]; // 0x13e0(0x10)
	struct FMulticastInlineDelegate OnRotated; // 0x13f0(0x10)
	char pad_1400[0x18]; // 0x1400(0x18)
	struct UCommonTextBlock* MyText; // 0x1418(0x08)
	char pad_1420[0x20]; // 0x1420(0x20)

	void ShiftTextRight(); // Function CommonUI.CommonRotator.ShiftTextRight // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc6480
	void ShiftTextLeft(); // Function CommonUI.CommonRotator.ShiftTextLeft // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc646c
	void SetSelectedItem(int32_t InValue); // Function CommonUI.CommonRotator.SetSelectedItem // (Native|Public|BlueprintCallable) // @ game+0x17e9db4
	void PopulateTextLabels(struct TArray<struct FText> Labels); // Function CommonUI.CommonRotator.PopulateTextLabels // (Final|Native|Public|BlueprintCallable) // @ game+0x17e9838
	struct FText GetSelectedText(); // Function CommonUI.CommonRotator.GetSelectedText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc322c
	int32_t GetSelectedIndex(); // Function CommonUI.CommonRotator.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3140
	void BP_OnOptionsPopulated(int32_t Count); // Function CommonUI.CommonRotator.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnOptionSelected(int32_t Index); // Function CommonUI.CommonRotator.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CommonUI.CommonTabListWidgetBase
// Size: 0x370 (Inherited: 0x290)
struct UCommonTabListWidgetBase : UCommonUserWidget {
	struct FMulticastInlineDelegate OnTabSelected; // 0x290(0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnTabListRebuilt; // 0x2c0(0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x2d0(0x10)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x2e0(0x10)
	bool bAutoListenForInput; // 0x2f0(0x01)
	bool bDeferRebuildingTabList; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	struct TWeakObjectPtr<struct UCommonAnimatedSwitcher> LinkedSwitcher; // 0x2f4(0x08)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UCommonButtonGroupBase* TabButtonGroup; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x310(0x50)
	char pad_360[0x10]; // 0x360(0x10)

	void SetTabVisibility(struct FName TabNameID, enum class ESlateVisibility NewVisibility); // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc60d4
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc6010
	void SetTabEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x242a23c
	void SetListeningForInput(bool bShouldListen); // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput // (Native|Public|BlueprintCallable) // @ game+0x5cc5618
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher); // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher // (Native|Public|BlueprintCallable) // @ game+0x23852e0
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback); // Function CommonUI.CommonTabListWidgetBase.SelectTabByID // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc44f4
	bool RemoveTab(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.RemoveTab // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4134
	void RemoveAllTabs(); // Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4120
	bool RegisterTab(struct FName TabNameID, struct UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget, int32_t TabIndex); // Function CommonUI.CommonTabListWidgetBase.RegisterTab // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc3fe4
	void OnTabSelected__DelegateSignature(struct FName TabId); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void OnTabListRebuilt__DelegateSignature(); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval // (Native|Event|Protected|BlueprintEvent) // @ game+0x2671a10
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation // (Native|Event|Protected|BlueprintEvent) // @ game+0x1f741f8
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected // (Final|Native|Protected) // @ game+0x24e885c
	void HandlePreviousTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0x5cc3928
	void HandlePreLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandlePostLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleNextTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0x5cc37e4
	struct FName GetTabIdAtIndex(int32_t Index); // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3594
	int32_t GetTabCount(); // Function CommonUI.CommonTabListWidgetBase.GetTabCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2669480
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc34d8
	struct FName GetSelectedTabId(); // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3200
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher(); // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2bec
	struct FName GetActiveTab(); // Function CommonUI.CommonTabListWidgetBase.GetActiveTab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc23b4
	void DisableTabWithReason(struct FName TabNameID, struct FText& Reason); // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5cc2204
};

// Class CommonUI.CommonTextStyle
// Size: 0x1a0 (Inherited: 0x28)
struct UCommonTextStyle : UObject {
	struct FSlateFontInfo Font; // 0x28(0x58)
	struct FLinearColor Color; // 0x80(0x10)
	bool bUsesDropShadow; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FVector2D ShadowOffset; // 0x98(0x10)
	struct FLinearColor ShadowColor; // 0xa8(0x10)
	struct Fmargin margin; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FSlateBrush StrikeBrush; // 0xd0(0xc0)
	float LineHeightPercentage; // 0x190(0x04)
	char pad_194[0xc]; // 0x194(0x0c)

	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function CommonUI.CommonTextStyle.GetStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc340c
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // Function CommonUI.CommonTextStyle.GetShadowOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3364
	void GetShadowColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetShadowColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc32d8
	void GetMargin(struct Fmargin& OutMargin); // Function CommonUI.CommonTextStyle.GetMargin // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2c90
	float GetLineHeightPercentage(); // Function CommonUI.CommonTextStyle.GetLineHeightPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2bd4
	void GetFont(struct FSlateFontInfo& OutFont); // Function CommonUI.CommonTextStyle.GetFont // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc29b0
	void GetColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc260c
};

// Class CommonUI.CommonTextScrollStyle
// Size: 0x40 (Inherited: 0x28)
struct UCommonTextScrollStyle : UObject {
	float Speed; // 0x28(0x04)
	float StartDelay; // 0x2c(0x04)
	float EndDelay; // 0x30(0x04)
	float FadeInDelay; // 0x34(0x04)
	float FadeOutDelay; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class CommonUI.CommonTileView
// Size: 0xba0 (Inherited: 0xba0)
struct UCommonTileView : UTileView {
};

// Class CommonUI.CommonTreeView
// Size: 0xbe0 (Inherited: 0xbe0)
struct UCommonTreeView : UTreeView {
};

// Class CommonUI.CommonUIEditorSettings
// Size: 0xa8 (Inherited: 0x28)
struct UCommonUIEditorSettings : UObject {
	struct TSoftClassPtr<UObject> TemplateTextStyle; // 0x28(0x28)
	struct TSoftClassPtr<UObject> TemplateButtonStyle; // 0x50(0x28)
	struct TSoftClassPtr<UObject> TemplateBorderStyle; // 0x78(0x28)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class CommonUI.CommonUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UCommonUILibrary : UBlueprintFunctionLibrary {

	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, struct UWidget* Type); // Function CommonUI.CommonUILibrary.FindParentWidgetOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2a79ec0
};

// Class CommonUI.CommonUIRichTextData
// Size: 0x30 (Inherited: 0x28)
struct UCommonUIRichTextData : UObject {
	struct UDataTable* InlineIconSet; // 0x28(0x08)
};

// Class CommonUI.CommonUISettings
// Size: 0x1c0 (Inherited: 0x28)
struct UCommonUISettings : UObject {
	bool bAutoLoadData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x30(0x28)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x58(0x28)
	struct TSoftClassPtr<UObject> DefaultRichTextDataClass; // 0x80(0x28)
	struct TArray<struct FGameplayTag> PlatformTraits; // 0xa8(0x10)
	char pad_B8[0x28]; // 0xb8(0x28)
	struct UObject* DefaultImageResourceObjectInstance; // 0xe0(0x08)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xe8(0x08)
	struct FSlateBrush DefaultThrobberBrush; // 0xf0(0xc0)
	struct UCommonUIRichTextData* RichTextDataInstance; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// Class CommonUI.CommonUISubsystemBase
// Size: 0x40 (Inherited: 0x30)
struct UCommonUISubsystemBase : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, struct FName& GamepadName); // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a14e4
};

// Class CommonUI.CommonUIVisibilitySubsystem
// Size: 0x88 (Inherited: 0x30)
struct UCommonUIVisibilitySubsystem : ULocalPlayerSubsystem {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class CommonUI.CommonVideoPlayer
// Size: 0x290 (Inherited: 0x148)
struct UCommonVideoPlayer : UWidget {
	struct UMediaSource* Video; // 0x148(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x150(0x08)
	struct UMediaTexture* MediaTexture; // 0x158(0x08)
	struct UMaterial* VideoMaterial; // 0x160(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x168(0x08)
	struct FSlateBrush VideoBrush; // 0x170(0xc0)
	char pad_230[0x60]; // 0x230(0x60)
};

// Class CommonUI.CommonVisibilitySwitcher
// Size: 0x198 (Inherited: 0x170)
struct UCommonVisibilitySwitcher : UOverlay {
	enum class ESlateVisibility ShownVisibility; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t ActiveWidgetIndex; // 0x174(0x04)
	bool bAutoActivateSlot; // 0x178(0x01)
	bool bActivateFirstSlotOnAdding; // 0x179(0x01)
	char pad_17A[0x1e]; // 0x17a(0x1e)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x12d884c
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x12d8760
	void IncrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc3a70
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26d15e4
	struct UWidget* GetActiveWidget(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc23f0
	void DecrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc20ac
	void DeactivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc2070
	void ActivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc1b60
};

// Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x68 (Inherited: 0x58)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot {
	char pad_58[0x10]; // 0x58(0x10)
};

// Class CommonUI.UCommonVisibilityWidgetBase
// Size: 0x350 (Inherited: 0x2f0)
struct UUCommonVisibilityWidgetBase : UCommonBorder {
	struct TMap<struct FName, bool> VisibilityControls; // 0x2f0(0x50)
	bool bShowForGamepad; // 0x340(0x01)
	bool bShowForMouseAndKeyboard; // 0x341(0x01)
	bool bShowForTouch; // 0x342(0x01)
	enum class ESlateVisibility VisibleType; // 0x343(0x01)
	enum class ESlateVisibility HiddenType; // 0x344(0x01)
	char pad_345[0xb]; // 0x345(0x0b)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms // (Final|Native|Static|Protected) // @ game+0x5cc2f60
};

// Class CommonUI.CommonVisualAttachment
// Size: 0x1b8 (Inherited: 0x198)
struct UCommonVisualAttachment : USizeBox {
	struct FVector2D ContentAnchor; // 0x198(0x10)
	char pad_1A8[0x10]; // 0x1a8(0x10)
};

// Class CommonUI.CommonWidgetCarousel
// Size: 0x1a8 (Inherited: 0x160)
struct UCommonWidgetCarousel : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x168(0x10)
	char pad_178[0x30]; // 0x178(0x30)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x5cc463c
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonWidgetCarousel.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x5cc45b8
	void PreviousPage(); // Function CommonUI.CommonWidgetCarousel.PreviousPage // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc3fd0
	void NextPage(); // Function CommonUI.CommonWidgetCarousel.NextPage // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc3e8c
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3660
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2414
	void EndAutoScrolling(); // Function CommonUI.CommonWidgetCarousel.EndAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc230c
	void BeginAutoScrolling(float ScrollInterval); // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc1e0c
};

// Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x190 (Inherited: 0x148)
struct UCommonWidgetCarouselNavBar : UWidget {
	struct UCommonButtonBase* ButtonWidgetType; // 0x148(0x08)
	struct Fmargin ButtonPadding; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
	struct UCommonWidgetCarousel* LinkedCarousel; // 0x170(0x08)
	struct UCommonButtonGroupBase* ButtonGroup; // 0x178(0x08)
	struct TArray<struct UCommonButtonBase*> Buttons; // 0x180(0x10)

	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel); // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5598
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged // (Final|Native|Protected) // @ game+0x5cc3864
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked // (Final|Native|Protected) // @ game+0x5cc3708
};

// Class CommonUI.CommonWidgetGroupBase
// Size: 0x28 (Inherited: 0x28)
struct UCommonWidgetGroupBase : UObject {

	void RemoveWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.RemoveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc423c
	void RemoveAll(); // Function CommonUI.CommonWidgetGroupBase.RemoveAll // (Final|Native|Public|BlueprintCallable) // @ game+0x27fe728
	void AddWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.AddWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc1b74
};

// Class CommonUI.CommonButtonGroupBase
// Size: 0x110 (Inherited: 0x28)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)
	bool bSelectionRequired; // 0xf0(0x01)
	char pad_F1[0x1f]; // 0xf1(0x1f)

	void SetSelectionRequired(bool bRequireSelection); // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc5e78
	void SelectPreviousButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4474
	void SelectNextButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectNextButton // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc43f4
	void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound); // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc4330
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected); // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase // (Native|Protected) // @ game+0x1510654
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked // (Native|Protected) // @ game+0x5cc3eb4
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked // (Native|Protected) // @ game+0x2787088
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered // (Native|Protected) // @ game+0x150f15c
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered // (Native|Protected) // @ game+0x150f240
	bool HasAnyButtons(); // Function CommonUI.CommonButtonGroupBase.HasAnyButtons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3a38
	int32_t GetSelectedButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc305c
	struct UCommonButtonBase* GetSelectedButtonBase(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3034
	int32_t GetHoveredButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2ac0
	int32_t GetButtonCount(); // Function CommonUI.CommonButtonGroupBase.GetButtonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2564
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index); // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc24d8
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind); // Function CommonUI.CommonButtonGroupBase.FindButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc2320
	void DeselectAll(); // Function CommonUI.CommonButtonGroupBase.DeselectAll // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc212c
};

// Class CommonUI.CommonBoundActionBar
// Size: 0x238 (Inherited: 0x228)
struct UCommonBoundActionBar : UDynamicEntryBoxBase {
	struct UCommonBoundActionButton* ActionButtonClass; // 0x228(0x08)
	bool bDisplayOwningPlayerActionsOnly; // 0x230(0x01)
	bool bIgnoreDuplicateActions; // 0x231(0x01)
	char pad_232[0x6]; // 0x232(0x06)

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x2872934
};

// Class CommonUI.CommonBoundActionButton
// Size: 0x13f0 (Inherited: 0x13e0)
struct UCommonBoundActionButton : UCommonButtonBase {
	struct UCommonTextBlock* Text_ActionName; // 0x13e0(0x08)
	char pad_13E8[0x8]; // 0x13e8(0x08)

	void OnUpdateInputAction(); // Function CommonUI.CommonBoundActionButton.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CommonUI.CommonGenericInputActionDataTable
// Size: 0xb0 (Inherited: 0xb0)
struct UCommonGenericInputActionDataTable : UDataTable {
};

// Class CommonUI.CommonInputActionDataProcessor
// Size: 0x28 (Inherited: 0x28)
struct UCommonInputActionDataProcessor : UObject {
};

// Class CommonUI.CommonUIActionRouterBase
// Size: 0x158 (Inherited: 0x30)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem {
	char pad_30[0x128]; // 0x30(0x128)
};

// Class CommonUI.CommonUIInputSettings
// Size: 0x78 (Inherited: 0x28)
struct UCommonUIInputSettings : UObject {
	bool bLinkCursorToGamepadFocus; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t UIActionProcessingPriority; // 0x2c(0x04)
	struct TArray<struct FUIInputAction> InputActions; // 0x30(0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x40(0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50(0x24)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class CommonUI.CommonStyleSheet
// Size: 0x58 (Inherited: 0x30)
struct UCommonStyleSheet : UDataAsset {
	struct TArray<struct UCommonStyleSheetTypeBase*> Properties; // 0x30(0x10)
	struct TArray<struct UCommonStyleSheet*> ImportedStyleSheets; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x268 (Inherited: 0x148)
struct UCommonActivatableWidgetContainerBase : UWidget {
	char pad_148[0x18]; // 0x148(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x160(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float TransitionDuration; // 0x164(0x04)
	struct TArray<struct UCommonActivatableWidget*> WidgetList; // 0x168(0x10)
	struct UCommonActivatableWidget* DisplayedWidget; // 0x178(0x08)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x180(0x88)
	char pad_208[0x60]; // 0x208(0x60)

	void SetTransitionDuration(float Duration); // Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc6298
	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove); // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x5cc41c0
	float GetTransitionDuration(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc3648
	struct UCommonActivatableWidget* GetActiveWidget(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc23cc
	void ClearWidgets(); // Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x5cc2058
	struct UCommonActivatableWidget* BP_AddWidget(struct UCommonActivatableWidget* ActivatableWidgetClass); // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x5cc1c40
};

// Class CommonUI.CommonActivatableWidgetStack
// Size: 0x278 (Inherited: 0x268)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase {
	struct UCommonActivatableWidget* RootContentWidgetClass; // 0x268(0x08)
	struct UCommonActivatableWidget* RootContentWidget; // 0x270(0x08)
};

// Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x268 (Inherited: 0x268)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase {
};

