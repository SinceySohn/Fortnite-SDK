// WidgetBlueprintGeneratedClass EventsSimpleButton.EventsSimpleButton_C
// Size: 0x1510 (Inherited: 0x1430)
struct UEventsSimpleButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Pressed; // 0x1438(0x08)
	struct UWidgetAnimation* Hover; // 0x1440(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1448(0x08)
	struct UCommonBorder* CommonBorder_VariablePadding; // 0x1450(0x08)
	struct UImage* Image_ButtonTop; // 0x1458(0x08)
	struct UImage* Image_Shadow; // 0x1460(0x08)
	struct UOverlay* Overlay_ButtonBG; // 0x1468(0x08)
	bool ToUpper; // 0x1470(0x01)
	bool XL; // 0x1471(0x01)
	char pad_1472[0x6]; // 0x1472(0x06)
	struct FText ButtonNameText; // 0x1478(0x18)
	struct TMap<struct FString, struct FLinearColor> Color; // 0x1490(0x50)
	struct FLinearColor GamepadButtonTextColor; // 0x14e0(0x10)
	struct FLinearColor DefaultTextColor; // 0x14f0(0x10)
	struct FVector2D ButtonPadding; // 0x1500(0x10)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function EventsSimpleButton.EventsSimpleButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function EventsSimpleButton.EventsSimpleButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function EventsSimpleButton.EventsSimpleButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void InputTypeChanged(bool bUsingGamepad); // Function EventsSimpleButton.EventsSimpleButton_C.InputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateColor(struct FString ParameterName, struct FLinearColor New Color); // Function EventsSimpleButton.EventsSimpleButton_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventsSimpleButton(int32_t EntryPoint); // Function EventsSimpleButton.EventsSimpleButton_C.ExecuteUbergraph_EventsSimpleButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

