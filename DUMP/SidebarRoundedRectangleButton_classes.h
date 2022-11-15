// WidgetBlueprintGeneratedClass SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C
// Size: 0x1588 (Inherited: 0x1560)
struct USidebarRoundedRectangleButton_C : UFortMainMenuButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1560(0x08)
	struct UWidgetAnimation* Hovered; // 0x1568(0x08)
	struct UBorder* ButtonBackground; // 0x1570(0x08)
	struct UNamedSlot* SubSlot; // 0x1578(0x08)
	struct UMaterialInterface* ButtonMaterial; // 0x1580(0x08)

	void BP_OnUnhovered(); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarRoundedRectangleButton(int32_t EntryPoint); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.ExecuteUbergraph_SidebarRoundedRectangleButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

