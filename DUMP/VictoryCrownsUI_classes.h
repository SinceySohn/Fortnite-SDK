// Class VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
// Size: 0x130 (Inherited: 0xa0)
struct UFortUIManagerComponent_VictoryCrowns : UFortControllerComponent {
	struct UVictoryCrownsIndicator* VictoryCrownsIndicatorClass; // 0xa0(0x08)
	struct FUserWidgetPool IndicatorPool; // 0xa8(0x88)

	void RebuildBearerIndicators(struct TArray<struct AFortPlayerStateAthena*>& CrownBearerList); // Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.RebuildBearerIndicators // (Final|Native|Protected|HasOutParms) // @ game+0x6757a1c
	void HandleGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.HandleGamePhaseStepChanged // (Final|Native|Protected|HasOutParms) // @ game+0x67577a0
};

// Class VictoryCrownsUI.VictoryCrownsBearerInfoBase
// Size: 0x2a0 (Inherited: 0x290)
struct UVictoryCrownsBearerInfoBase : UCommonUserWidget {
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> WeakPSA; // 0x290(0x08)
	struct UCommonTextBlock* Text_PlayerName; // 0x298(0x08)

	void SetPlayerState(struct AFortPlayerStateAthena* InPlayerState); // Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState // (Final|Native|Public|BlueprintCallable) // @ game+0x6757b68
	void OnSetPlayerState(struct AFortPlayerStateAthena* PSA); // Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class VictoryCrownsUI.VictoryCrownsIndicator
// Size: 0x398 (Inherited: 0x370)
struct UVictoryCrownsIndicator : UFortActorIndicatorWidget {
	char pad_370[0x28]; // 0x370(0x28)

	void OnScreenClampChanged(bool bIsClamped); // Function VictoryCrownsUI.VictoryCrownsIndicator.OnScreenClampChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDistanceChanged(int32_t Distance); // Function VictoryCrownsUI.VictoryCrownsIndicator.OnDistanceChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct AFortPlayerStateAthena* GetIndicatedPlayerStateAthena(); // Function VictoryCrownsUI.VictoryCrownsIndicator.GetIndicatedPlayerStateAthena // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67576e0
};

// Class VictoryCrownsUI.VictoryCrownsPlacementOverlay
// Size: 0x2f0 (Inherited: 0x2f0)
struct UVictoryCrownsPlacementOverlay : UPostGamePlacementOverlay {
};

// Class VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
// Size: 0x2e0 (Inherited: 0x2d0)
struct UVictoryCrownsPlayerInfoWidget : UFortHUDElementWidget {
	char pad_2D0[0x10]; // 0x2d0(0x10)

	void OnPlayerVictoryCrownStatusChanged(bool bHasCrown); // Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.OnPlayerVictoryCrownStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleCrownBearerListChanged(struct TArray<struct AFortPlayerStateAthena*>& CrownBearerList); // Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.HandleCrownBearerListChanged // (Final|Native|Protected|HasOutParms) // @ game+0x6757704
};

// Class VictoryCrownsUI.VictoryCrownsPreGameWidget
// Size: 0x3e0 (Inherited: 0x3a8)
struct UVictoryCrownsPreGameWidget : UCommonActivatableWidget {
	struct UDynamicEntryBox* EntryBox_BearerList; // 0x3a8(0x08)
	struct UCommonActionWidget* TipActionWidget; // 0x3b0(0x08)
	struct FDataTableRowHandle CloseObjectInputAction; // 0x3b8(0x10)
	char pad_3C8[0x18]; // 0x3c8(0x18)

	void UnregisterCloseButtonInput(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.UnregisterCloseButtonInput // (Final|Native|Private) // @ game+0x6757be8
	void StartFadeOut(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.StartFadeOut // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void RegisterCloseButtonInput(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RegisterCloseButtonInput // (Final|Native|Private) // @ game+0x6757b54
	void RebuildBearerList(struct TArray<struct AFortPlayerStateAthena*>& CrownBearerList); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList // (Final|Native|Private|HasOutParms) // @ game+0x6757ab8
	void OnInputMethodChanged(enum class ECommonInputType CurrentInput); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCloseActionsComplete(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnCloseActionsComplete // (Final|Native|Protected|BlueprintCallable) // @ game+0x67579ec
	void OnButtonCloseProgress(float Progress); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnButtonClose(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonClose // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.HandleGamePhaseStepChanged // (Final|Native|Private|HasOutParms) // @ game+0x675790c
	void FadeOutTimerFinished(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.FadeOutTimerFinished // (Final|Native|Private) // @ game+0x67576cc
};

