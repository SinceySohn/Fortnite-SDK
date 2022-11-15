// WidgetBlueprintGeneratedClass SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C
// Size: 0x358 (Inherited: 0x328)
struct USidebarProfileSubPanelIdentity_C : UFortSocialProfileIdentity {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UHorizontalBox* HorizontalBox_SeasonLevel; // 0x330(0x08)
	struct UImage* ; // 0x338(0x08)
	struct UImage* ; // 0x340(0x08)
	struct UImage* Image_Battlepass; // 0x348(0x08)
	struct UCommonTextBlock* Text_SeasonLevel; // 0x350(0x08)

	void SetFortniteCrewVisiblity(bool bIsVisible); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.SetFortniteCrewVisiblity // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetBattlePassVisiblity(bool bIsVisible); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.SetBattlePassVisiblity // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnFinishedProfileLoading(); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.OnFinishedProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartProfileLoading(); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.OnStartProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetSeasonLevel(int32_t Level); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.SetSeasonLevel // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarProfileSubPanelIdentity(int32_t EntryPoint); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.ExecuteUbergraph_SidebarProfileSubPanelIdentity // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

