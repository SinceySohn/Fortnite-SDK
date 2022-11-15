// WidgetBlueprintGeneratedClass PlusMinusButton.PlusMinusButton_C
// Size: 0x1427 (Inherited: 0x13e0)
struct UPlusMinusButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x13e8(0x08)
	struct UImage* BackgroundColor; // 0x13f0(0x08)
	struct UCommonTextBlock* ButtonText; // 0x13f8(0x08)
	struct UOverlay* Overlay_ButtonPrompt; // 0x1400(0x08)
	struct FText In Text; // 0x1408(0x18)
	int32_t Font Size; // 0x1420(0x04)
	bool isLeft; // 0x1424(0x01)
	bool IsBottom; // 0x1425(0x01)
	bool AllowDisabledAnimation; // 0x1426(0x01)

	void PreConstruct(bool IsDesignTime); // Function PlusMinusButton.PlusMinusButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function PlusMinusButton.PlusMinusButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function PlusMinusButton.PlusMinusButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function PlusMinusButton.PlusMinusButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlusMinusButton(int32_t EntryPoint); // Function PlusMinusButton.PlusMinusButton_C.ExecuteUbergraph_PlusMinusButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

