// WidgetBlueprintGeneratedClass SidebarEmptyPanelButton.SidebarEmptyPanelButton_C
// Size: 0x1410 (Inherited: 0x13f0)
struct USidebarEmptyPanelButton_C : USidebarListEmptyPanelButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13f0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x13f8(0x08)
	struct UWidgetAnimation* Hovered; // 0x1400(0x08)
	struct UBorder* EntryBorder; // 0x1408(0x08)

	void BP_OnHovered(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarEmptyPanelButton(int32_t EntryPoint); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.ExecuteUbergraph_SidebarEmptyPanelButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

