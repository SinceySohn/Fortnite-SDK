// WidgetBlueprintGeneratedClass SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C
// Size: 0x1570 (Inherited: 0x14f0)
struct USidebarJoinablePartyEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* Selected; // 0x14f8(0x08)
	struct UWidgetAnimation* Hovered; // 0x1500(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1508(0x08)
	struct UBorder* EntryBorder; // 0x1510(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_DisplayNames; // 0x1518(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_PartyPresence; // 0x1520(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_PartyPresence_Hover; // 0x1528(0x08)
	struct UCommonRichTextBlock* Text_PartyPresence_Hover_Marquee; // 0x1530(0x08)
	struct UCommonRichTextBlock* Text_PartyPresence_Marquee; // 0x1538(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1540(0x08)
	struct FSlateColor InviteFontColor; // 0x1548(0x14)
	struct FSlateColor DefaultFontColor; // 0x155c(0x14)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPartyPresenceTextUpdated(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.OnPartyPresenceTextUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarJoinablePartyEntry(int32_t EntryPoint); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.ExecuteUbergraph_SidebarJoinablePartyEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

