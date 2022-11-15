// Class MatchmakingPortalUI.FortMatchmakingPortalCountdown
// Size: 0x3d8 (Inherited: 0x3a8)
struct UFortMatchmakingPortalCountdown : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UInputComponent* MatchmakingPortalInputComponent; // 0x3b0(0x08)
	struct UFortActivityScalingTextBlock* Text_IslandName; // 0x3b8(0x08)
	float CountdownTime; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FMulticastInlineDelegate OnFinishedCountdown; // 0x3c8(0x10)

	void StartCountdown(); // Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCancelClicked(); // Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked // (Final|Native|Protected|BlueprintCallable) // @ game+0x694f6c0
	void FinishTimer(); // Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

// Class MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
// Size: 0x50 (Inherited: 0x28)
struct UFortUIGameFeatureAction_OverridePortalHUDDetails : UFortUIGameFeatureAction {
	struct TSoftClassPtr<UObject> SoftPortalHUDDetailsClass; // 0x28(0x28)
};

// Class MatchmakingPortalUI.FortMatchmakingPortalModal
// Size: 0x760 (Inherited: 0x3f8)
struct UFortMatchmakingPortalModal : UFortActivityView {
	char pad_3F8[0x300]; // 0x3f8(0x300)
	struct TArray<struct FString> XpTagMnemonicWhitelist; // 0x6f8(0x10)
	struct UCommonRichTextBlock* Text_ActivityOrigin; // 0x708(0x08)
	struct UCommonRichTextBlock* Text_LinkCode; // 0x710(0x08)
	struct UCommonTextBlock* Text_ActivityName; // 0x718(0x08)
	struct UCommonTextBlock* Text_ActivityDescription; // 0x720(0x08)
	struct UScrollBox* ScrollBox_ActivityDescription; // 0x728(0x08)
	struct UDynamicEntryBox* EntryBox_ActivityTags; // 0x730(0x08)
	struct UCommonButtonBase* Button_AcceptPublic; // 0x738(0x08)
	struct UCommonButtonBase* Button_AcceptPrivate; // 0x740(0x08)
	struct UCommonButtonBase* Button_Favorite; // 0x748(0x08)
	struct UCommonButtonBase* Button_Cancel; // 0x750(0x08)
	struct UFortModalBackground* ModalBackground; // 0x758(0x08)

	bool IsDownloadRequired(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.IsDownloadRequired // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x694f96c
	void HandleOnMatchmakingError(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.HandleOnMatchmakingError // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleOnMatchmakingConnecting(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.HandleOnMatchmakingConnecting // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleOnMatchmakingCanceled(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.HandleOnMatchmakingCanceled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	enum class EFortInvalidActivityReason GetInvalidActivityReason(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetInvalidActivityReason // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x694f694
	struct FText GetCreatorTextFormat(struct FText& CreatorName); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCreatorTextFormat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	struct TArray<struct FString> GetContentWarningStrings(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetContentWarningStrings // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x694f610
	struct FText GetCodeTextFormat(struct FText& IslandCode); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCodeTextFormat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class MatchmakingPortalUI.FortMatchmakingPortalPopup
// Size: 0x4b0 (Inherited: 0x3a8)
struct UFortMatchmakingPortalPopup : UFortPortalHUDDetails {
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct UFortGameActivity* CachedGameActivity; // 0x3b8(0x08)
	struct UFortMatchmakingPortalModal* MatchmakingPortalModalWidget; // 0x3c0(0x08)
	struct UCommonActivatableWidget* MatchmakingFeedbackClass; // 0x3c8(0x08)
	struct UFortMatchmakingPortalCountdown* MatchmakingCountdownClass; // 0x3d0(0x08)
	struct FVector WorldPointerLocation; // 0x3d8(0x18)
	struct FText CreatorNameTextFormat; // 0x3f0(0x18)
	struct TWeakObjectPtr<struct UHeaderDescriptionHUDComponent> CachedHUDComponent; // 0x408(0x08)
	struct UFortMatchmakingPortalModal* IslandModal; // 0x410(0x08)
	struct FMatchmakingPortalPopupData CachedIslandData; // 0x418(0x60)
	float MatchmakingFeedbackDelayTime; // 0x478(0x04)
	char bIsWithinPortalRange : 1; // 0x47c(0x01)
	char pad_47C_1 : 7; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct UFortMatchmakingPortalCountdown* MatchmakingCountdownWidget; // 0x480(0x08)
	struct UCommonActivatableWidget* MatchmakingFeedbackContainerWidget; // 0x488(0x08)
	struct UFortAthenaCreativeMatchmakingWidget* MatchmakingFeedbackWidget; // 0x490(0x08)
	struct UCommonRichTextBlock* RichText_CreatorName; // 0x498(0x08)
	struct UCommonTextBlock* Text_IslandName; // 0x4a0(0x08)
	struct UDynamicEntryBox* EntryBox_ActivityTags; // 0x4a8(0x08)

	void UpdateVisuals(struct UHeaderDescriptionHUDComponent* HUDComponent); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnShowPortalPopup(bool bShow, bool bAnimate); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayerCanInteractChanged(bool bPlayerCanInteract); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	bool HasActivityToShow(); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x513a070
	void HandleWidgetUpdate(); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate // (Final|Native|Private) // @ game+0x694f958
	void HandleStartedRespawn(struct AFortPlayerControllerZone* PlayerController); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn // (Final|Native|Private) // @ game+0x694f8d8
	void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleLoadScreenChanged(struct AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, struct FText HUDReason); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged // (Final|Native|Private) // @ game+0x694f7b0
	void HandleHUDShow(bool bShow, bool bShouldAnimate); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow // (Final|Native|Private) // @ game+0x694f6ec
	void HandleFinishedCountdown(); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleFinishedCountdown // (Final|Native|Private) // @ game+0x694f6d4
	struct UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(struct UCommonActivatableWidget* MatchmakingFeedbackContainer); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget // (Event|Protected|BlueprintEvent|Const) // @ game+0xdef49c
	bool GetIslandData(struct FMatchmakingPortalPopupData& OutIslandData, struct UHeaderDescriptionHUDComponent* HUDComponent); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BindOverlapEvents(); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class MatchmakingPortalUI.FortModalBackground
// Size: 0x3e0 (Inherited: 0x3a8)
struct UFortModalBackground : UCommonActivatableWidget {
	char pad_3A8[0x20]; // 0x3a8(0x20)
	struct UCommonButtonBase* Button_Back; // 0x3c8(0x08)
	struct UCommonButtonBase* Button_BackBoard; // 0x3d0(0x08)
	struct UCommonButtonBase* Button_MobileClose; // 0x3d8(0x08)

	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* InTexture); // Function MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

