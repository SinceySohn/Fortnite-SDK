// WidgetBlueprintGeneratedClass SidebarLeavePartyListEntry.SidebarLeavePartyListEntry_C
// Size: 0x14a8 (Inherited: 0x1460)
struct USidebarLeavePartyListEntry_C : UFortLeavePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1460(0x08)
	struct UWidgetAnimation* Selected; // 0x1468(0x08)
	struct UWidgetAnimation* Hovered; // 0x1470(0x08)
	struct UBorder* AnimatedInputBorder; // 0x1478(0x08)
	struct UImage* Arrow; // 0x1480(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1488(0x08)
	struct UBorder* EntryBorder; // 0x1490(0x08)
	struct UCommonRichTextBlock* Text_LeavePartyText; // 0x1498(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x14a0(0x08)

	void BP_OnUnhovered(); // Function SidebarLeavePartyListEntry.SidebarLeavePartyListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarLeavePartyListEntry.SidebarLeavePartyListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarLeavePartyListEntry.SidebarLeavePartyListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarLeavePartyListEntry(int32_t EntryPoint); // Function SidebarLeavePartyListEntry.SidebarLeavePartyListEntry_C.ExecuteUbergraph_SidebarLeavePartyListEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

