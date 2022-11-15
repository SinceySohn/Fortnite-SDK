// WidgetBlueprintGeneratedClass SidebarPanelYourProfile.SidebarPanelYourProfile_C
// Size: 0x4a8 (Inherited: 0x488)
struct USidebarPanelYourProfile_C : UFortSidebarPanelYourProfile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* OnContentLoaded; // 0x490(0x08)
	struct UCommonBorder* Border_PresenceRegion; // 0x498(0x08)
	struct USidebarProfileLoading_C* SidebarProfileLoading; // 0x4a0(0x08)

	void OnStartProfileLoading(); // Function SidebarPanelYourProfile.SidebarPanelYourProfile_C.OnStartProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFinishedProfileLoading(); // Function SidebarPanelYourProfile.SidebarPanelYourProfile_C.OnFinishedProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarPanelYourProfile(int32_t EntryPoint); // Function SidebarPanelYourProfile.SidebarPanelYourProfile_C.ExecuteUbergraph_SidebarPanelYourProfile // (Final|UbergraphFunction) // @ game+0xdef49c
};

