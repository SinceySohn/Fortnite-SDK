// WidgetBlueprintGeneratedClass SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C
// Size: 0x14b0 (Inherited: 0x1460)
struct USidebarLFGToggleListEntry_C : USidebarLFGToggleListEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1460(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1468(0x08)
	struct UWidgetAnimation* Hovered; // 0x1470(0x08)
	struct UBorder* Border_Background; // 0x1478(0x08)
	struct UTextToggle_C* SidebarSocialTagsLFPToggle; // 0x1480(0x08)
	struct USizeBox* ; // 0x1488(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1490(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x14a0(0x10)

	void OnLfgSettingChanged(bool bIsLfgEnabled); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.OnLfgSettingChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarLFGToggleListEntry(int32_t EntryPoint); // Function SidebarLFGToggleListEntry.SidebarLFGToggleListEntry_C.ExecuteUbergraph_SidebarLFGToggleListEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

