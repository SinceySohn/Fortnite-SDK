// WidgetBlueprintGeneratedClass InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C
// Size: 0x1530 (Inherited: 0x14c0)
struct UInviteListEntry_FriendInvite_XS_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* Selected; // 0x14c8(0x08)
	struct UWidgetAnimation* Hovered; // 0x14d0(0x08)
	struct UImage* Arrow; // 0x14d8(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x14e0(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x14e8(0x08)
	struct UBorder* EntryBorder; // 0x14f0(0x08)
	struct UCommonRichTextBlock* Text_SentRequest; // 0x14f8(0x08)
	struct FLinearColor Online; // 0x1500(0x10)
	struct FLinearColor Offline; // 0x1510(0x10)
	struct FLinearColor Away; // 0x1520(0x10)

	void HandleOnlineIndicatorView(char OnlineStatus); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int32_t EntryPoint); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS // (Final|UbergraphFunction) // @ game+0xdef49c
};

