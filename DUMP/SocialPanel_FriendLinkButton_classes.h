// WidgetBlueprintGeneratedClass SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C
// Size: 0x1488 (Inherited: 0x1440)
struct USocialPanel_FriendLinkButton_C : UFortSocialPanelView_FriendLinkButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* OnCopied; // 0x1448(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1450(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1458(0x08)
	struct UFortMobileImage* SharingIcon; // 0x1460(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_CopyState; // 0x1468(0x08)
	struct UCommonTextBlock* Text_CopyConfirmed; // 0x1470(0x08)
	struct UCommonTextBlock* Text_FriendLinkInstructions; // 0x1478(0x08)
	struct UCommonTextBlock* Text_LinkPrompt; // 0x1480(0x08)

	void BP_OnUnhovered(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCopiedToClipboard(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnShareButtonTypeSet(enum class EFriendLinkShareButtonType Type); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialPanel_FriendLinkButton(int32_t EntryPoint); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

