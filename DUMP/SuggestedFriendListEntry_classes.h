// WidgetBlueprintGeneratedClass SuggestedFriendListEntry.SuggestedFriendListEntry_C
// Size: 0x1520 (Inherited: 0x14c0)
struct USuggestedFriendListEntry_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* Selected; // 0x14c8(0x08)
	struct UWidgetAnimation* Hovered; // 0x14d0(0x08)
	struct UImage* Arrow; // 0x14d8(0x08)
	struct UBorder* Border_Background; // 0x14e0(0x08)
	struct UBorder* Border_Highlight; // 0x14e8(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x14f0(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x14f8(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1500(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1510(0x10)

	void BP_OnUnhovered(); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SuggestedFriendListEntry(int32_t EntryPoint); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.ExecuteUbergraph_SuggestedFriendListEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

