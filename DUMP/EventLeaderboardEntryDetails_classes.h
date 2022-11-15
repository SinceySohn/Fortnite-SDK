// WidgetBlueprintGeneratedClass EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C
// Size: 0x638 (Inherited: 0x298)
struct UEventLeaderboardEntryDetails_C : UFortLeaderboardEntryDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* MatchHistoryHover; // 0x2a0(0x08)
	struct UWidgetAnimation* ProfileHover; // 0x2a8(0x08)
	struct UWidgetAnimation* Intro; // 0x2b0(0x08)
	struct UIconTextButton_C* Button_MatchHistory; // 0x2b8(0x08)
	struct UIconTextButton_C* Button_Profiles; // 0x2c0(0x08)
	struct UCommonBorder* CommonBorder_ElimPointer; // 0x2c8(0x08)
	struct UCommonBorder* CommonBorder_PlacementPointer; // 0x2d0(0x08)
	struct UCommonBorder* CommonBorderMainContent; // 0x2d8(0x08)
	struct UCommonTextBlock* ; // 0x2e0(0x08)
	struct UCommonTextBlock* CommonTextBlock_MatchHistoryTextMatchHistory; // 0x2e8(0x08)
	struct UCommonTextBlock* CommonTextBlock_Placement; // 0x2f0(0x08)
	struct UCommonTextBlock* CommonTextBlock_PlayerNames; // 0x2f8(0x08)
	struct UCommonTextBlock* CommonTextBlock_PlayerNamesTitle; // 0x300(0x08)
	struct UCommonTextBlock* CommonTextBlock_ProfileText; // 0x308(0x08)
	struct UCommonTextBlock* CommonTextBlock_Score; // 0x310(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x318(0x08)
	struct UImage* ; // 0x320(0x08)
	struct UImage* ; // 0x328(0x08)
	struct UImage* ; // 0x330(0x08)
	struct UImage* ; // 0x338(0x08)
	struct UImage* ; // 0x340(0x08)
	struct UImage* ; // 0x348(0x08)
	struct UImage* Image_DetailsBG; // 0x350(0x08)
	struct UImage* Image_ElimIcon; // 0x358(0x08)
	struct UImage* Image_LiveMatch; // 0x360(0x08)
	struct UImage* Image_Pie; // 0x368(0x08)
	struct UImage* Image_PieShadow; // 0x370(0x08)
	struct UImage* Image_PlacementIcon; // 0x378(0x08)
	struct UImage* Image_PlayernameBG; // 0x380(0x08)
	struct UImage* Image_PlayernameBG_Shadow; // 0x388(0x08)
	struct UOverlay* Overlay_Placement; // 0x390(0x08)
	struct UOverlay* Overlay_PointBreakdown; // 0x398(0x08)
	struct UOverlay* Overlay_TeamMembers; // 0x3a0(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_AveragePlacement; // 0x3a8(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_AveragePointsPerMatch; // 0x3b0(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_EliminationsOrAltStat; // 0x3b8(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_MatchesPlayed; // 0x3c0(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_VictoryRoyales; // 0x3c8(0x08)
	struct UCommonTextBlock* Text_EliminationPointInfo; // 0x3d0(0x08)
	struct UCommonTextBlock* Text_PlacementPointInfo; // 0x3d8(0x08)
	struct UVerticalBox* VerticalBox_Placement; // 0x3e0(0x08)
	struct UVerticalBox* VerticalBox_StatContainer; // 0x3e8(0x08)
	struct UFortEventLeaderboardEntryData* LeaderboardEntryData; // 0x3f0(0x08)
	struct FMulticastInlineDelegate ProfileSelectedFromSelector; // 0x3f8(0x10)
	struct UEventPlayerStatProfileSelector_C* ProfileSelectorInstance; // 0x408(0x08)
	struct FString TournamentId; // 0x410(0x10)
	struct FString EventWindowId; // 0x420(0x10)
	struct FFortTournamentDisplayInfo CurrentDisplayInfo; // 0x430(0x1d0)
	struct FString LeaderboardInstanceId; // 0x600(0x10)
	struct FString LeaderboardGroupingKey; // 0x610(0x10)
	struct FString AltLeaderboardTrackedStatName; // 0x620(0x10)
	bool bHasAltLeaderboardTrackedStat; // 0x630(0x01)
	char pad_631[0x3]; // 0x631(0x03)
	int32_t ScoredPointsForPie; // 0x634(0x04)

	void Update Alt Leaderboard Tracked Stat(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Update Alt Leaderboard Tracked Stat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Stats Rows(enum class ETournamentDisplayType EventType); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Set Stats Rows // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Points Breakdown(enum class ETournamentDisplayType EventType); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Set Points Breakdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Leaderboard Key(struct FString LeaderboardInstanceId, struct FString LeaderboardGroupingId); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Set Leaderboard Key // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTournamentValues(struct FString InTournamentId, struct FString InEventWindowId); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.SetTournamentValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Show Details(struct UFortEventLeaderboardEntryData* EntryData, enum class ETournamentDisplayType EventType); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Show Details // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventIntro(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void LeaderboardEntryDoubleClicked(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.LeaderboardEntryDoubleClicked // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventLeaderboardEntryDetails(int32_t EntryPoint); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void ProfileSelectedFromSelector__DelegateSignature(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ProfileSelectedFromSelector__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

