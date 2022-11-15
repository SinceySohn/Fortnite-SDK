// WidgetBlueprintGeneratedClass ReferAFriendActionMenu.ReferAFriendActionMenu_C
// Size: 0x450 (Inherited: 0x3f0)
struct UReferAFriendActionMenu_C : UFortReferFriendActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x3f8(0x08)
	struct UWidgetAnimation* Opened; // 0x400(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x408(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock; // 0x410(0x08)
	struct UCommonRichTextBlock* ; // 0x418(0x08)
	struct UBorder* EntryBorder; // 0x420(0x08)
	struct UImage* Image_AddFriendsQR; // 0x428(0x08)
	struct UImage* Image_PartyUpQR; // 0x430(0x08)
	struct UImage* Image_Platform; // 0x438(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x440(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_QR; // 0x448(0x08)

	void Set QRt Image(enum class EReferFriendOrigin Origin); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.Set QRt Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOpened(); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRequestOriginChanged(enum class EReferFriendOrigin RequestOrigin); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnRequestOriginChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ReferAFriendActionMenu(int32_t EntryPoint); // Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.ExecuteUbergraph_ReferAFriendActionMenu // (Final|UbergraphFunction) // @ game+0xdef49c
};

