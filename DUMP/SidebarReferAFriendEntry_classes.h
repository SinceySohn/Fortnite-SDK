// WidgetBlueprintGeneratedClass SidebarReferAFriendEntry.SidebarReferAFriendEntry_C
// Size: 0x1498 (Inherited: 0x1460)
struct USidebarReferAFriendEntry_C : UFortReferFriendListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1460(0x08)
	struct UWidgetAnimation* Selected; // 0x1468(0x08)
	struct UWidgetAnimation* Hovered; // 0x1470(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1478(0x08)
	struct UBorder* EntryBorder; // 0x1480(0x08)
	struct UCommonRichTextBlock* Text_MissedInvitesText; // 0x1488(0x08)
	struct UCommonRichTextBlock* Text_MissedInvitesText_Hover; // 0x1490(0x08)

	void BP_OnUnhovered(); // Function SidebarReferAFriendEntry.SidebarReferAFriendEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarReferAFriendEntry.SidebarReferAFriendEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarReferAFriendEntry.SidebarReferAFriendEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarReferAFriendEntry(int32_t EntryPoint); // Function SidebarReferAFriendEntry.SidebarReferAFriendEntry_C.ExecuteUbergraph_SidebarReferAFriendEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

