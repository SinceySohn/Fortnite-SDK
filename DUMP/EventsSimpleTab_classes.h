// WidgetBlueprintGeneratedClass EventsSimpleTab.EventsSimpleTab_C
// Size: 0x1511 (Inherited: 0x1430)
struct UEventsSimpleTab_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Selected; // 0x1438(0x08)
	struct UWidgetAnimation* Hovered; // 0x1440(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1448(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget_White; // 0x1450(0x08)
	struct UCommonBorder* CommonBorder_VariablePadding; // 0x1458(0x08)
	struct UImage* Image_ButtonTop; // 0x1460(0x08)
	struct UOverlay* Overlay_ButtonBG; // 0x1468(0x08)
	bool ToUpper; // 0x1470(0x01)
	bool XL; // 0x1471(0x01)
	char pad_1472[0x6]; // 0x1472(0x06)
	struct FText ButtonNameText; // 0x1478(0x18)
	struct TMap<struct FString, struct FLinearColor> Color; // 0x1490(0x50)
	struct FLinearColor GamepadButtonTextColor; // 0x14e0(0x10)
	struct FLinearColor DefaultTextColor; // 0x14f0(0x10)
	struct FVector2D ButtonPadding; // 0x1500(0x10)
	bool VisualSelectionState; // 0x1510(0x01)

	void BP_OnHovered(); // Function EventsSimpleTab.EventsSimpleTab_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function EventsSimpleTab.EventsSimpleTab_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function EventsSimpleTab.EventsSimpleTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void UpdateColor(struct FString ParameterName, struct FLinearColor New Color); // Function EventsSimpleTab.EventsSimpleTab_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSelectedChangedEvent(struct UCommonButtonLegacy* Button, bool Selected); // Function EventsSimpleTab.EventsSimpleTab_C.OnSelectedChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function EventsSimpleTab.EventsSimpleTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function EventsSimpleTab.EventsSimpleTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventsSimpleTab(int32_t EntryPoint); // Function EventsSimpleTab.EventsSimpleTab_C.ExecuteUbergraph_EventsSimpleTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

