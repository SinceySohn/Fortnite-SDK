// WidgetBlueprintGeneratedClass AthenaStatsTab.AthenaStatsTab_C
// Size: 0x7a0 (Inherited: 0x6c8)
struct UAthenaStatsTab_C : UAthenaStatsScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c8(0x08)
	struct UWidgetAnimation* Entrance; // 0x6d0(0x08)
	struct UWidgetAnimation* Tabs_Paginate; // 0x6d8(0x08)
	struct UCommonTextBlock* AccountLevelLabel; // 0x6e0(0x08)
	struct UCloseButton_C* CloseButton; // 0x6e8(0x08)
	struct UImage* CloseIcon; // 0x6f0(0x08)
	struct UCommonWidgetSwitcherLegacy* ; // 0x6f8(0x08)
	struct UImage* Divider; // 0x700(0x08)
	struct UImage* Divider1; // 0x708(0x08)
	struct UImage* Divider2; // 0x710(0x08)
	struct UCommonTextBlock* FriendMatchXpBoostPointsLabel; // 0x718(0x08)
	struct UHorizontalBox* HBoxNoStats; // 0x720(0x08)
	struct UCommonWidgetSwitcherLegacy* HiddenSwitcher; // 0x728(0x08)
	struct UHorizontalBox* LastUpdatedTimeBox; // 0x730(0x08)
	struct UCommonWidgetSwitcherLegacy* MainStatWidgetSwitcher; // 0x738(0x08)
	struct UCommonTextBlock* MatchXpBoostPointsLabel; // 0x740(0x08)
	struct UPanelButton_C* MobileCloseButton_Disabled; // 0x748(0x08)
	struct UCommonTextBlock* NoStatsText; // 0x750(0x08)
	struct UOverlay* OverlayCloseButton_Disabled; // 0x758(0x08)
	struct UPlayerRankEmblem_C* PlayerRankEmblem; // 0x760(0x08)
	struct UImage* ProgressSpinner; // 0x768(0x08)
	struct UCommonTextBlock* SeasonLabel; // 0x770(0x08)
	struct UHorizontalBox* UpdatingBox; // 0x778(0x08)
	struct UVerticalBox* VBoxbannerstats; // 0x780(0x08)
	struct UVerticalBox* VBoxStats; // 0x788(0x08)
	struct FDataTableRowHandle Back Action; // 0x790(0x10)

	void GetFriendMatchXpBoostText(struct FText& Result); // Function AthenaStatsTab.AthenaStatsTab_C.GetFriendMatchXpBoostText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FText GetAccountLevelText(); // Function AthenaStatsTab.AthenaStatsTab_C.GetAccountLevelText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Init Back Action(); // Function AthenaStatsTab.AthenaStatsTab_C.Init Back Action // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBack(bool& PassThrough); // Function AthenaStatsTab.AthenaStatsTab_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaStatsTab.AthenaStatsTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function AthenaStatsTab.AthenaStatsTab_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnQueryFinished(bool bWasSuccessful, bool bHasStatsToDisplay); // Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(struct FName TabId); // Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnQueryStarted(); // Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void (enum class ECommonInputType bNewInputType); // Function AthenaStatsTab.AthenaStatsTab_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void SetPlatformButtonText(struct FText& PlatformButtonText); // Function AthenaStatsTab.AthenaStatsTab_C.SetPlatformButtonText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaStatsTab(int32_t EntryPoint); // Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

