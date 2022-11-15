// WidgetBlueprintGeneratedClass OnboardingTextInputActionButton.OnboardingTextInputActionButton_C
// Size: 0x1579 (Inherited: 0x1430)
struct UOnboardingTextInputActionButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1438(0x08)
	struct UBorder* ContentBorder; // 0x1440(0x08)
	struct UImage* LeftSideImage; // 0x1448(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x1450(0x08)
	struct FText ButtonText; // 0x1458(0x18)
	struct FSlateBrush IconBrush; // 0x1470(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1530(0x08)
	struct UCommonButtonStyle* TouchStyle; // 0x1538(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1540(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1548(0x01)
	bool bMouseKeyboardStyleSet; // 0x1549(0x01)
	char pad_154A[0x6]; // 0x154a(0x06)
	struct FText OverrideButtonText; // 0x1550(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x1568(0x01)
	bool bDisplayAllCaps; // 0x1569(0x01)
	char pad_156A[0x6]; // 0x156a(0x06)
	double PressProgress; // 0x1570(0x08)
	bool bIgnoreInputActionWidgetText; // 0x1578(0x01)

	void GetPressProgress(double& Progress); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowIcon(bool bShouldShow); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTextInternal(struct FText InButtonText); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetInitialMouseKeyboardStyle(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextStyle(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateContentAlignment(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateStyle(enum class ECommonInputType CurrentInputType); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateText(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeButton(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Icon(struct FSlateBrush IconBrush); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Text(struct FText ButtonText); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentTextStyleChanged(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnActionProgress(float HeldPercent); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActionComplete(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_OnboardingTextInputActionButton(int32_t EntryPoint); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.ExecuteUbergraph_OnboardingTextInputActionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

