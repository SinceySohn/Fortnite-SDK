// WidgetBlueprintGeneratedClass SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C
// Size: 0x320 (Inherited: 0x2e0)
struct USidebarProfileSubPanelRebootRallyEligible_C : UFortSocialProfileRebootRallyText {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCommonRichTextBlock* RebootRallyEligibleText; // 0x2e8(0x08)
	struct FText SocialUserText; // 0x2f0(0x18)
	struct FText LocalUserText; // 0x308(0x18)

	void OnStartProfileLoading(); // Function SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C.OnStartProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DisplayText(bool bCanRally); // Function SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C.DisplayText // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFinishedProfileLoading(); // Function SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C.OnFinishedProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible(int32_t EntryPoint); // Function SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C.ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

