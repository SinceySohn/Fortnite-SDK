// WidgetBlueprintGeneratedClass SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C
// Size: 0x1560 (Inherited: 0x14f0)
struct USidebarUserSearchResultListEntry_XS_C : UFortUserSearchResultListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x14f8(0x08)
	struct UWidgetAnimation* Selected; // 0x1500(0x08)
	struct UWidgetAnimation* Hovered; // 0x1508(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1510(0x08)
	struct UImage* Image_Lock; // 0x1518(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_MutualFriends; // 0x1520(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1528(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x1530(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1538(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1540(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1550(0x10)

	void BP_OnUnhovered(); // Function SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarUserSearchResultListEntry_XS(int32_t EntryPoint); // Function SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C.ExecuteUbergraph_SidebarUserSearchResultListEntry_XS // (Final|UbergraphFunction) // @ game+0xdef49c
};

