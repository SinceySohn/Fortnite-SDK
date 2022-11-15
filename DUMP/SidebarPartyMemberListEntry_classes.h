// WidgetBlueprintGeneratedClass SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C
// Size: 0x1550 (Inherited: 0x14f0)
struct USidebarPartyMemberListEntry_C : UFortPartyMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x14f8(0x08)
	struct UWidgetAnimation* Selected; // 0x1500(0x08)
	struct UWidgetAnimation* Hovered; // 0x1508(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1510(0x08)
	struct UHorizontalBox* HBox_SocialName; // 0x1518(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1520(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1528(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1530(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1540(0x10)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarPartyMemberListEntry(int32_t EntryPoint); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.ExecuteUbergraph_SidebarPartyMemberListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

