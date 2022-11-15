// WidgetBlueprintGeneratedClass Sidebar.Sidebar_C
// Size: 0x658 (Inherited: 0x5d8)
struct USidebar_C : UFortSocialPanelView_Sidebar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct USidebarProfile_C* Panel_Profile; // 0x5e0(0x08)
	struct USafeZone* Safezone_OnboardingTooltip; // 0x5e8(0x08)
	struct USafeZone* SafeZone_SideBar; // 0x5f0(0x08)
	struct FText Text_PartyUp; // 0x5f8(0x18)
	struct FText Text_FindFriends; // 0x610(0x18)
	struct FText Text_VoiceChat; // 0x628(0x18)
	struct FText Text_UserSettings; // 0x640(0x18)

	void BP_OnActivated(); // Function Sidebar.Sidebar_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Sidebar(int32_t EntryPoint); // Function Sidebar.Sidebar_C.ExecuteUbergraph_Sidebar // (Final|UbergraphFunction) // @ game+0xdef49c
};

