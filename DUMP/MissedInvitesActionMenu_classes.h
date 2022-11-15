// WidgetBlueprintGeneratedClass MissedInvitesActionMenu.MissedInvitesActionMenu_C
// Size: 0x440 (Inherited: 0x3f0)
struct UMissedInvitesActionMenu_C : UFortMissedInvitesActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x3f8(0x08)
	struct UWidgetAnimation* Opened; // 0x400(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x408(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock; // 0x410(0x08)
	struct UCommonRichTextBlock* ; // 0x418(0x08)
	struct UBorder* EntryBorder; // 0x420(0x08)
	struct UImage* ; // 0x428(0x08)
	struct UImage* Image_Platform; // 0x430(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x438(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOpened(); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MissedInvitesActionMenu(int32_t EntryPoint); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu // (Final|UbergraphFunction) // @ game+0xdef49c
};

