// WidgetBlueprintGeneratedClass EventLeaderboardScreen.EventLeaderboardScreen_C
// Size: 0x728 (Inherited: 0x4c8)
struct UEventLeaderboardScreen_C : UFortEventLeaderboardScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UEventsSimpleButton_C* Button_Back; // 0x4d0(0x08)
	struct UCloseButton_C* CloseButton; // 0x4d8(0x08)
	struct UEventLeaderboardEntryDetails_C* EntryDetails; // 0x4e0(0x08)
	struct UEventLeaderboardEventDetails_C* EventLeaderboardEventDetails; // 0x4e8(0x08)
	struct UHorizontalBox* HorizontalBox_Tab; // 0x4f0(0x08)
	struct UOverlay* Overlay_EntryDetailsVisibility; // 0x4f8(0x08)
	struct USafeZone* ; // 0x500(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry1; // 0x508(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry2; // 0x510(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry3; // 0x518(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry4; // 0x520(0x08)
	struct TArray<struct UFortEventLeaderboardEntryData*> DebugLeaderboardEntries; // 0x528(0x10)
	struct FMulticastInlineDelegate EventCloseButton; // 0x538(0x10)
	struct FMulticastInlineDelegate EventViewLiveGames; // 0x548(0x10)
	struct FFortTournamentDisplayInfo CurrentDisplayInfo; // 0x558(0x1d0)

	void Init(struct FString EventWindowId, struct FString TournamentSeriesId); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventIntro(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLeaderboardEntrySelected(struct UFortEventLeaderboardEntryData* EntryData); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Event Leaderboard Screen On Activated(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Event Leaderboard Screen On Activated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ShowMyStats(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Item Double-Clicked(struct UObject* Item); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Item Double-Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTabVisibilityChange(bool bIsVisible); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnTabVisibilityChange // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void InitializeTabButton(struct UCommonButtonLegacy* TabButton, struct FText& TabText); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.InitializeTabButton // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDetailsPanelUpdate(bool bShowDetailsPanel); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnDetailsPanelUpdate // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnLeaderboardDisplayTypeChanged(enum class ELeaderboardDisplayType NewDisplayType); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardDisplayTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventLeaderboardScreen(int32_t EntryPoint); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void EventViewLiveGames__DelegateSignature(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventViewLiveGames__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventCloseButton__DelegateSignature(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

