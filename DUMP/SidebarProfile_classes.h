// WidgetBlueprintGeneratedClass SidebarProfile.SidebarProfile_C
// Size: 0x4a8 (Inherited: 0x478)
struct USidebarProfile_C : UFortSocialProfilePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UWidgetAnimation* OnContentLoaded; // 0x480(0x08)
	struct UCommonBorder* Border_PresenceRegion; // 0x488(0x08)
	struct USafeZone* SafeZone_Content; // 0x490(0x08)
	struct UImage* SidebarProfileLoading; // 0x498(0x08)
	struct USidebarProfileSubPanelFriendRequest_C* SubPanelFriendRequest; // 0x4a0(0x08)

	void OnStartProfileLoading(); // Function SidebarProfile.SidebarProfile_C.OnStartProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFinishedProfileLoading(); // Function SidebarProfile.SidebarProfile_C.OnFinishedProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarProfile(int32_t EntryPoint); // Function SidebarProfile.SidebarProfile_C.ExecuteUbergraph_SidebarProfile // (Final|UbergraphFunction) // @ game+0xdef49c
};

