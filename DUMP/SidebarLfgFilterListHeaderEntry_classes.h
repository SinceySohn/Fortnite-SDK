// WidgetBlueprintGeneratedClass SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C
// Size: 0x1498 (Inherited: 0x1470)
struct USidebarLfgFilterListHeaderEntry_C : UFortSidebarLfgFilterHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1470(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x1478(0x08)
	struct UWidgetAnimation* OnHover; // 0x1480(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x1488(0x08)
	struct USizeBox* SB_EntryContent; // 0x1490(0x08)

	void BP_OnUnhovered(); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void (struct UObject* ListItemObject); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarLfgFilterListHeaderEntry(int32_t EntryPoint); // Function SidebarLfgFilterListHeaderEntry.SidebarLfgFilterListHeaderEntry_C.ExecuteUbergraph_SidebarLfgFilterListHeaderEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

