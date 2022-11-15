// WidgetBlueprintGeneratedClass SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C
// Size: 0x1530 (Inherited: 0x14c0)
struct USidebarSuggestedFriendListEntry_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x14c8(0x08)
	struct UWidgetAnimation* Selected; // 0x14d0(0x08)
	struct UWidgetAnimation* Hovered; // 0x14d8(0x08)
	struct UBorder* Border_Background; // 0x14e0(0x08)
	struct UBorder* Border_Highlight; // 0x14e8(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x14f0(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_MutualFriends; // 0x14f8(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1500(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1508(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1510(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1520(0x10)

	void SetUnhoverState(bool bPlayAnimation); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.SetUnhoverState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleInputMethodChanged(enum class ECommonInputType NewInputType); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.HandleInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEntryReleased(); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarSuggestedFriendListEntry(int32_t EntryPoint); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.ExecuteUbergraph_SidebarSuggestedFriendListEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

