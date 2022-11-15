// WidgetBlueprintGeneratedClass SoloButton.SoloButton_C
// Size: 0x149a (Inherited: 0x1430)
struct USoloButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Pressed; // 0x1438(0x08)
	struct UWidgetAnimation* Hover; // 0x1440(0x08)
	struct UBorder* Border_Container; // 0x1448(0x08)
	struct UImage* ButtonBacking; // 0x1450(0x08)
	struct USizeBox* SizeBox_Control; // 0x1458(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x1460(0x08)
	struct FText Button Description; // 0x1468(0x18)
	bool FontSizeOveride; // 0x1480(0x01)
	char pad_1481[0x3]; // 0x1481(0x03)
	int32_t FontSize; // 0x1484(0x04)
	struct Fmargin Padding Overide; // 0x1488(0x10)
	bool PaddingOveride; // 0x1498(0x01)
	bool IsDisabled; // 0x1499(0x01)

	void SetText(struct FText Text); // Function SoloButton.SoloButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSize(); // Function SoloButton.SoloButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SoloButton.SoloButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SoloButton.SoloButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SoloButton.SoloButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SoloButton.SoloButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function SoloButton.SoloButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function SoloButton.SoloButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEnabled(); // Function SoloButton.SoloButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SoloButton(int32_t EntryPoint); // Function SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

