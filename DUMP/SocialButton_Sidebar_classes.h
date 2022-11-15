// WidgetBlueprintGeneratedClass SocialButton_Sidebar.SocialButton_Sidebar_C
// Size: 0x14d0 (Inherited: 0x1450)
struct USocialButton_Sidebar_C : UFortSocialButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* Indentifier_Outro; // 0x1458(0x08)
	struct UWidgetAnimation* Indentifier_Intro; // 0x1460(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x1468(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x1470(0x08)
	struct UWidgetAnimation* Hover; // 0x1478(0x08)
	struct UFortPlayerBanner* Banner_MemberBanner; // 0x1480(0x08)
	struct UImage* ButtonBacking; // 0x1488(0x08)
	struct UHorizontalBox* HorizontalBox_InputAction; // 0x1490(0x08)
	struct UHorizontalBox* HorizontalBox_MeepHolder; // 0x1498(0x08)
	struct USizeBox* Icon_Meep; // 0x14a0(0x08)
	struct UFortMobileImage* Image_FriendIcon; // 0x14a8(0x08)
	struct UImage* Image_LeaderIcon; // 0x14b0(0x08)
	struct UFortMobileImage* MenuButtonIcon; // 0x14b8(0x08)
	struct UImage* PlayerIdentifier_Bkg; // 0x14c0(0x08)
	struct USizeBox* VariableSize; // 0x14c8(0x08)

	void BP_OnUnhovered(); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnNumFriendsTextUpdated(int32_t FriendsOnline); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.OnNumFriendsTextUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialButton_Sidebar(int32_t EntryPoint); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.ExecuteUbergraph_SocialButton_Sidebar // (Final|UbergraphFunction) // @ game+0xdef49c
};

