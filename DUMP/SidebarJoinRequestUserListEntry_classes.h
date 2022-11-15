// WidgetBlueprintGeneratedClass SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C
// Size: 0x1558 (Inherited: 0x14f0)
struct USidebarJoinRequestUserListEntry_C : UFortSocialUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x14f8(0x08)
	struct UWidgetAnimation* Selected; // 0x1500(0x08)
	struct UWidgetAnimation* Hovered; // 0x1508(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1510(0x08)
	struct UCommonRichTextBlock* JoinRequest; // 0x1518(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1520(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x1528(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1530(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1538(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1548(0x10)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarJoinRequestUserListEntry(int32_t EntryPoint); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.ExecuteUbergraph_SidebarJoinRequestUserListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

