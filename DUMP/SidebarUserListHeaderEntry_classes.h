// WidgetBlueprintGeneratedClass SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C
// Size: 0x1490 (Inherited: 0x1460)
struct USidebarUserListHeaderEntry_C : USocialUserListHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1460(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x1468(0x08)
	struct UWidgetAnimation* OnHover; // 0x1470(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x1478(0x08)
	struct UImage* Image_Meeple; // 0x1480(0x08)
	struct USizeBox* SB_EntryContent; // 0x1488(0x08)

	void BP_OnUnhovered(); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void (struct UObject* ListItemObject); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarUserListHeaderEntry(int32_t EntryPoint); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.ExecuteUbergraph_SidebarUserListHeaderEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

