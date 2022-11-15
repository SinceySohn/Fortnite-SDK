// WidgetBlueprintGeneratedClass TeamMemberListEntry.TeamMemberListEntry_C
// Size: 0x1540 (Inherited: 0x14f0)
struct UTeamMemberListEntry_C : UFortTeamMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* Selected; // 0x14f8(0x08)
	struct UWidgetAnimation* Hovered; // 0x1500(0x08)
	struct UImage* Arrow; // 0x1508(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1510(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1518(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1520(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1530(0x10)

	void BP_OnUnhovered(); // Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function TeamMemberListEntry.TeamMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TeamMemberListEntry(int32_t EntryPoint); // Function TeamMemberListEntry.TeamMemberListEntry_C.ExecuteUbergraph_TeamMemberListEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

