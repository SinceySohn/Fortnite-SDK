// WidgetBlueprintGeneratedClass SidebarJoinablePartyActionMenu.SidebarJoinablePartyActionMenu_C
// Size: 0x4d0 (Inherited: 0x4b0)
struct USidebarJoinablePartyActionMenu_C : UFortJoinablePartyActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x4b8(0x08)
	struct UWidgetAnimation* Opened; // 0x4c0(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock_PartyMembers; // 0x4c8(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function SidebarJoinablePartyActionMenu.SidebarJoinablePartyActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOpened(); // Function SidebarJoinablePartyActionMenu.SidebarJoinablePartyActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarJoinablePartyActionMenu(int32_t EntryPoint); // Function SidebarJoinablePartyActionMenu.SidebarJoinablePartyActionMenu_C.ExecuteUbergraph_SidebarJoinablePartyActionMenu // (Final|UbergraphFunction) // @ game+0xdef49c
};

