// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
// Size: 0x1490 (Inherited: 0x1450)
struct UMTXButton_C : UFortMTXButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x1458(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x1460(0x08)
	struct UWidgetAnimation* Hover; // 0x1468(0x08)
	struct UBorder* AmountColor; // 0x1470(0x08)
	struct UImage* ButtonBacking; // 0x1478(0x08)
	struct UImage* Image_Vbucks; // 0x1480(0x08)
	struct USizeBox* VariableSize; // 0x1488(0x08)

	void Construct(); // Function MTXButton.MTXButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function MTXButton.MTXButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function MTXButton.MTXButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MTXButton(int32_t EntryPoint); // Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

