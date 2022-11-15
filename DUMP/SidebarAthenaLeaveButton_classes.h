// WidgetBlueprintGeneratedClass SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C
// Size: 0x15b0 (Inherited: 0x1590)
struct USidebarAthenaLeaveButton_C : UFortMainMenuLeaveButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1590(0x08)
	struct UWidgetAnimation* Hovered; // 0x1598(0x08)
	struct UBorder* ButtonBackground; // 0x15a0(0x08)
	struct UMaterialInterface* ButtonMaterial; // 0x15a8(0x08)

	void BP_OnUnhovered(); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarAthenaLeaveButton(int32_t EntryPoint); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.ExecuteUbergraph_SidebarAthenaLeaveButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

