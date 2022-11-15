// WidgetBlueprintGeneratedClass IconTextButtonHold.IconTextButtonHold_C
// Size: 0x15c0 (Inherited: 0x1430)
struct UIconTextButtonHold_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1438(0x08)
	struct UBorder* ContentBorder; // 0x1440(0x08)
	struct UHorizontalBox* HorizontalBox_ButtonContent; // 0x1448(0x08)
	struct UImage* LeftSideImage; // 0x1450(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x1458(0x08)
	struct FText ButtonText; // 0x1460(0x18)
	char pad_1478[0x8]; // 0x1478(0x08)
	struct FSlateBrush IconBrush; // 0x1480(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1540(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1548(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1550(0x01)
	bool bMouseKeyboardStyleSet; // 0x1551(0x01)
	char pad_1552[0x6]; // 0x1552(0x06)
	struct FText OverrideButtonText; // 0x1558(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x1570(0x01)
	bool bDisplayAllCaps; // 0x1571(0x01)
	char pad_1572[0x6]; // 0x1572(0x06)
	double PressProgress; // 0x1578(0x08)
	bool bIgnoreInputActionWidgetText; // 0x1580(0x01)
	char pad_1581[0x7]; // 0x1581(0x07)
	struct FMulticastInlineDelegate HoldActionStarted; // 0x1588(0x10)
	bool bHolding; // 0x1598(0x01)
	char pad_1599[0x7]; // 0x1599(0x07)
	struct FMulticastInlineDelegate HoldActionEnded; // 0x15a0(0x10)
	struct FMulticastInlineDelegate HoldActionCompleted; // 0x15b0(0x10)

	void GetPressProgress(double& Progress); // Function IconTextButtonHold.IconTextButtonHold_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function IconTextButtonHold.IconTextButtonHold_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowIcon(bool bShouldShow); // Function IconTextButtonHold.IconTextButtonHold_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTextInternal(struct FText InButtonText); // Function IconTextButtonHold.IconTextButtonHold_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetInitialMouseKeyboardStyle(); // Function IconTextButtonHold.IconTextButtonHold_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextStyle(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function IconTextButtonHold.IconTextButtonHold_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateContentAlignment(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButtonHold.IconTextButtonHold_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateStyle(bool UsingGamepad); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateText(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButtonHold.IconTextButtonHold_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeButton(); // Function IconTextButtonHold.IconTextButtonHold_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTextButtonHold.IconTextButtonHold_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Text(struct FText ButtonText); // Function IconTextButtonHold.IconTextButtonHold_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentTextStyleChanged(); // Function IconTextButtonHold.IconTextButtonHold_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function IconTextButtonHold.IconTextButtonHold_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function IconTextButtonHold.IconTextButtonHold_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function IconTextButtonHold.IconTextButtonHold_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnActionProgress(float HeldPercent); // Function IconTextButtonHold.IconTextButtonHold_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActionComplete(); // Function IconTextButtonHold.IconTextButtonHold_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function IconTextButtonHold.IconTextButtonHold_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function IconTextButtonHold.IconTextButtonHold_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_IconTextButtonHold(int32_t EntryPoint); // Function IconTextButtonHold.IconTextButtonHold_C.ExecuteUbergraph_IconTextButtonHold // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void HoldActionCompleted__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HoldActionEnded__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HoldActionStarted__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

