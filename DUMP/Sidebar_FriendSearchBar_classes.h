// WidgetBlueprintGeneratedClass Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C
// Size: 0x1525 (Inherited: 0x14d0)
struct USidebar_FriendSearchBar_C : UFortFriendSearchButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* OnHovered; // 0x14d8(0x08)
	struct UImage* AddFriendBanIcon; // 0x14e0(0x08)
	struct USizeBox* ClearButtonSB; // 0x14e8(0x08)
	struct UBorder* ClickCapture; // 0x14f0(0x08)
	struct UCommonRichTextBlock* RichText_CannotAddFriends; // 0x14f8(0x08)
	struct UCommonRichTextBlock* RichText_SocialBan; // 0x1500(0x08)
	struct UFortMobileImage* SharingIcon; // 0x1508(0x08)
	struct UFortSimpleWidgetAnimationsPanel* SimpleWidgetAnimationsPanel; // 0x1510(0x08)
	struct USizeBox* SizeBox_FriendSearch; // 0x1518(0x08)
	struct FName ShakeAnimation; // 0x1520(0x04)
	bool bShakeAnimationIsPlaying; // 0x1524(0x01)

	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Sidebar_FriendSearchBar(int32_t EntryPoint); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.ExecuteUbergraph_Sidebar_FriendSearchBar // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

