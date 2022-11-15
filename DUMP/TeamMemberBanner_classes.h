// WidgetBlueprintGeneratedClass TeamMemberBanner.TeamMemberBanner_C
// Size: 0x14b0 (Inherited: 0x1470)
struct UTeamMemberBanner_C : UFortCampaignTeamMemberBanner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1470(0x08)
	struct UIconTextButton_C* ButtonPartyFinder; // 0x1478(0x08)
	struct UOverlay* Connected; // 0x1480(0x08)
	struct USizeBox* Connecting; // 0x1488(0x08)
	struct UImage* ; // 0x1490(0x08)
	struct UOverlay* Open; // 0x1498(0x08)
	struct UImage* OpenImage; // 0x14a0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_MemberState; // 0x14a8(0x08)

	void OpenPartyFinder(); // Function TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleMouseHoverVisualState(bool Hover); // Function TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnTeamMemberConnectionStateChanged(enum class EFortMemberConnectionState NewConnectionState); // Function TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TeamMemberBanner(int32_t EntryPoint); // Function TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner // (Final|UbergraphFunction) // @ game+0xdef49c
};

