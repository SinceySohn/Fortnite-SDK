// WidgetBlueprintGeneratedClass JoinablePartyEntry.JoinablePartyEntry_C
// Size: 0x1568 (Inherited: 0x14f0)
struct UJoinablePartyEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* Selected; // 0x14f8(0x08)
	struct UWidgetAnimation* Hovered; // 0x1500(0x08)
	struct UBorder* AnimatedInputBorder; // 0x1508(0x08)
	struct UImage* Arrow; // 0x1510(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1518(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1520(0x08)
	struct UBorder* EntryBorder; // 0x1528(0x08)
	struct USizeBox* Exclamation; // 0x1530(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1538(0x08)
	struct FSlateColor InviteFontColor; // 0x1540(0x14)
	struct FSlateColor DefaultFontColor; // 0x1554(0x14)

	void BP_OnUnhovered(); // Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function JoinablePartyEntry.JoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInviteStatusUpdated(bool bIsInvited); // Function JoinablePartyEntry.JoinablePartyEntry_C.OnInviteStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_JoinablePartyEntry(int32_t EntryPoint); // Function JoinablePartyEntry.JoinablePartyEntry_C.ExecuteUbergraph_JoinablePartyEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

