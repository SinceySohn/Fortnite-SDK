// WidgetBlueprintGeneratedClass SidebarTeamMemberListEntry.SidebarTeamMemberListEntry_C
// Size: 0x1548 (Inherited: 0x14f0)
struct USidebarTeamMemberListEntry_C : UFortTeamMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x14f8(0x08)
	struct UWidgetAnimation* Selected; // 0x1500(0x08)
	struct UWidgetAnimation* Hovered; // 0x1508(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1510(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1518(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1520(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1528(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1538(0x10)

	void BP_OnUnhovered(); // Function SidebarTeamMemberListEntry.SidebarTeamMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarTeamMemberListEntry.SidebarTeamMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarTeamMemberListEntry.SidebarTeamMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarTeamMemberListEntry(int32_t EntryPoint); // Function SidebarTeamMemberListEntry.SidebarTeamMemberListEntry_C.ExecuteUbergraph_SidebarTeamMemberListEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

