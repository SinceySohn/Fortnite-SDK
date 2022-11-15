// WidgetBlueprintGeneratedClass LeaderboardListViewWrapper.LeaderboardListViewWrapper_C
// Size: 0x5c8 (Inherited: 0x3b8)
struct ULeaderboardListViewWrapper_C : UFortLeaderboardListViewWrapper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UEventsSimpleButton_C* Button_Filter; // 0x3c0(0x08)
	struct UEventsSimpleButton_C* Button_Position; // 0x3c8(0x08)
	struct UCommonBorder* CommonBorder_OptionsBarBG; // 0x3d0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_FliterOptions; // 0x3d8(0x08)
	struct UEventLeaderboardPlayerPerformance_C* EventLeaderboardPlayerPerformance; // 0x3e0(0x08)
	struct UImage* ; // 0x3e8(0x08)
	struct UVerticalBox* VerticalBox; // 0x3f0(0x08)
	struct FFortTournamentDisplayInfo DisplayInfo; // 0x3f8(0x1d0)

	void Set Display Info(struct FFortTournamentDisplayInfo DisplayInfo); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Display Info // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Event(struct FString EventId, struct FString EventWindowId); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLeaderboardDisplayTypeChanged(enum class ELeaderboardDisplayType NewDisplayType); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.OnLeaderboardDisplayTypeChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LeaderboardListViewWrapper(int32_t EntryPoint); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.ExecuteUbergraph_LeaderboardListViewWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

