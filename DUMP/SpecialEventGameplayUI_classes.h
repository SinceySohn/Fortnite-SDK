// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
// Size: 0x308 (Inherited: 0x2d0)
struct UFortGameplayCinematicHostWidget : UFortHUDElementWidget {
	struct FName IntroWidgetEntryName; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct FCinematicWidgetData> WidgetEntries; // 0x2d8(0x10)
	struct UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition; // 0x2e8(0x08)
	char pad_2F0[0x18]; // 0x2f0(0x18)
};

// Class SpecialEventGameplayUI.FortGameplayCinematicWidget
// Size: 0x3c8 (Inherited: 0x3a8)
struct UFortGameplayCinematicWidget : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	bool bSkipCinematics; // 0x3b0(0x01)
	char pad_3B1[0x17]; // 0x3b1(0x17)

	void OnStartCinematic(); // Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCinematicFinished(); // Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x6afec00
};

// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
// Size: 0x3c8 (Inherited: 0x3a8)
struct UFortGameplayIntroPanelWidget : UCommonActivatableWidget {
	char pad_3A8[0x20]; // 0x3a8(0x20)

	void OnWaitingForReadyForGameplay(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWaitingForPawn(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWaitingForMinTime(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartIntro(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnIntroFinished(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x6aff098
};

// Class SpecialEventGameplayUI.SpecialEventCursorWidget
// Size: 0x288 (Inherited: 0x268)
struct USpecialEventCursorWidget : UUserWidget {
	char pad_268[0x8]; // 0x268(0x08)
	bool bAutomaticallyChangeVisibility; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct USpecialEventCursorPawnComponent* CursorPawnComponent; // 0x278(0x08)
	char pad_280[0x8]; // 0x280(0x08)

	void OnViewportLocationChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FVector2D& NormalizedLocation, struct FVector2D& ViewportLocation); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x6aff0ac
	void OnDesiredVisibilityChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged // (Final|Native|Private|HasOutParms) // @ game+0x6afee74
	void OnCursorModeChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged // (Final|Native|Private|HasOutParms) // @ game+0x6afec14
	struct FGameplayTagContainer GetCursorModeTags(); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6afea90
	void BP_OnDesiredVisibilityChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnDesiredVisibilityChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnCursorModeChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnCursorModeChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
// Size: 0x2f0 (Inherited: 0x2d0)
struct USpecialEventPlayerInfoWidget : UFortHUDElementWidget {
	char pad_2D0[0x8]; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnRepresentedPlayerStateChanged; // 0x2d8(0x10)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	struct AFortPlayerStateAthena* GetRepresentedPlayerState(); // Function SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6afeae0
};

// Class SpecialEventGameplayUI.SpecialEventUILibrary
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventUILibrary : UBlueprintFunctionLibrary {

	void HideFrontEndStateWidget(struct UObject* WorldContextObject, bool bNewlyHidden); // Function SpecialEventGameplayUI.SpecialEventUILibrary.HideFrontEndStateWidget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6afeb4c
};

