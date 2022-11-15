// WidgetBlueprintGeneratedClass SocialButton.SocialButton_C
// Size: 0x14c0 (Inherited: 0x1450)
struct USocialButton_C : UFortSocialButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* Indentifier_Outro; // 0x1458(0x08)
	struct UWidgetAnimation* Indentifier_Intro; // 0x1460(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x1468(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x1470(0x08)
	struct UWidgetAnimation* Hover; // 0x1478(0x08)
	struct UFortPlayerBanner* Banner_MemberBanner; // 0x1480(0x08)
	struct UImage* ButtonBacking; // 0x1488(0x08)
	struct UBorder* IconColor; // 0x1490(0x08)
	struct UFortMobileImage* Image_FriendIcon; // 0x1498(0x08)
	struct UImage* Image_LeaderIcon; // 0x14a0(0x08)
	struct UBorder* NumFriendsColor; // 0x14a8(0x08)
	struct UImage* PlayerIdentifier_Bkg; // 0x14b0(0x08)
	struct USizeBox* VariableSize; // 0x14b8(0x08)

	void Construct(); // Function SocialButton.SocialButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SocialButton.SocialButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SocialButton.SocialButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialButton(int32_t EntryPoint); // Function SocialButton.SocialButton_C.ExecuteUbergraph_SocialButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

