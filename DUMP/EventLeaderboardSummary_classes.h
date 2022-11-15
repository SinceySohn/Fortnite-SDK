// WidgetBlueprintGeneratedClass EventLeaderboardSummary.EventLeaderboardSummary_C
// Size: 0x7c0 (Inherited: 0x718)
struct UEventLeaderboardSummary_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UWidgetAnimation* ViewAllHover; // 0x720(0x08)
	struct UIconTextButton_C* Button_ViewAll; // 0x728(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x730(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x738(0x08)
	struct UCommonBorder* CommonBorder_ViewAllBG; // 0x740(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x748(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry; // 0x750(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x758(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x760(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x768(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x770(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x778(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x780(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x788(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x790(0x08)
	struct UEventLeaderboardEntry_C* ; // 0x798(0x08)
	struct UOverlay* Overlay_SummaryContent; // 0x7a0(0x08)
	struct UCommonTextBlock* Text_ViewFullLeaderboard; // 0x7a8(0x08)
	struct FMulticastInlineDelegate EventViewFullLeaderboard; // 0x7b0(0x10)

	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void RefreshDataBP(); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventLeaderboardSummary(int32_t EntryPoint); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.ExecuteUbergraph_EventLeaderboardSummary // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void EventViewFullLeaderboard__DelegateSignature(struct FString TournamentId, struct FString EventId); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventViewFullLeaderboard__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

