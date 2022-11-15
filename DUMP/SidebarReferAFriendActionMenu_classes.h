// WidgetBlueprintGeneratedClass SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C
// Size: 0x430 (Inherited: 0x3f0)
struct USidebarReferAFriendActionMenu_C : UFortReferFriendActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x3f8(0x08)
	struct UWidgetAnimation* Opened; // 0x400(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock; // 0x408(0x08)
	struct UCommonRichTextBlock* ; // 0x410(0x08)
	struct UImage* Image_AddFriendsQR; // 0x418(0x08)
	struct UImage* Image_PartyUpQR; // 0x420(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_QR; // 0x428(0x08)

	void Set QRt Image(enum class EReferFriendOrigin Origin); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.Set QRt Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOpened(); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRequestOriginChanged(enum class EReferFriendOrigin RequestOrigin); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.OnRequestOriginChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarReferAFriendActionMenu(int32_t EntryPoint); // Function SidebarReferAFriendActionMenu.SidebarReferAFriendActionMenu_C.ExecuteUbergraph_SidebarReferAFriendActionMenu // (Final|UbergraphFunction) // @ game+0xdef49c
};

