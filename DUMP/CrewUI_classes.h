// Class CrewUI.BattlePassCrewContentInterface
// Size: 0x28 (Inherited: 0x28)
struct UBattlePassCrewContentInterface : UInterface {
};

// Class CrewUI.FortProgressiveContentInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortProgressiveContentInterface : UInterface {
};

// Class CrewUI.BattlePassCrewPurchaseButton
// Size: 0x14a0 (Inherited: 0x1480)
struct UBattlePassCrewPurchaseButton : UFortHoldableButton {
	enum class EBattlePassPurchaseButtonCurrencyType CurrencyType; // 0x1478(0x01)
	struct UCommonTextBlock* Text_Label; // 0x1480(0x08)
	struct UCommonTextBlock* Text_SecondaryLabel; // 0x1488(0x08)
	struct UCommonTextBlock* Text_FinalCost; // 0x1490(0x08)
	struct UWidget* Container_SecondaryLabel; // 0x1498(0x08)

	void OnCurrencyUpdated(); // Function CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.BattlePassCrewPurchaseContainer
// Size: 0x428 (Inherited: 0x3a8)
struct UBattlePassCrewPurchaseContainer : UCommonActivatableWidget {
	char pad_3A8[0x20]; // 0x3a8(0x20)
	float CrewUpsellTransitionDelayTime; // 0x3c8(0x04)
	char pad_3CC[0xc]; // 0x3cc(0x0c)
	struct UCommonActivatableWidgetSwitcher* Switcher_ContentContainer; // 0x3d8(0x08)
	struct UBattlePassPurchaseScreen* BattlePassPurchaseScreen; // 0x3e0(0x08)
	struct UWidgetAnimation* Intro; // 0x3e8(0x08)
	struct UWidgetAnimation* QuickIntro; // 0x3f0(0x08)
	struct UWidgetAnimation* CrewBenefitsIntro; // 0x3f8(0x08)
	struct UCrewSubscriptionErrorModal* CrewSubscriptionErrorModalClass; // 0x400(0x08)
	char pad_408[0x20]; // 0x408(0x20)

	void OnTriggerIntroAnimation(bool bCanClaimRewards); // Function CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnContentStateUpdated(enum class EBattlePassCrewContentState InState, bool bInScreenOpened); // Function CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.BattlePassSeasonHeading
// Size: 0x298 (Inherited: 0x290)
struct UBattlePassSeasonHeading : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Season; // 0x290(0x08)
};

// Class CrewUI.BattlePassPurchaseScreen
// Size: 0x500 (Inherited: 0x3e8)
struct UBattlePassPurchaseScreen : UCMSBackgroundWidget {
	char pad_3E8[0xa0]; // 0x3e8(0xa0)
	struct UCommonActivatableWidget* PurchaseCompleteModal; // 0x488(0x08)
	struct UCommonButtonBase* Button_ToCrew; // 0x490(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Purchase; // 0x498(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x4a0(0x08)
	struct UCommonButtonBase* Button_GiftBattlePass; // 0x4a8(0x08)
	struct UBattlePassCrewPurchaseButton* Button_ConfirmBase; // 0x4b0(0x08)
	struct UBattlePassCrewPurchaseButton* Button_ConfirmBundle; // 0x4b8(0x08)
	struct UBattlePassSeasonHeading* Heading_Primary; // 0x4c0(0x08)
	struct UBattlePassSeasonHeading* Heading_Secondary; // 0x4c8(0x08)
	struct UCommonRichTextBlock* RichText_Disclaimer; // 0x4d0(0x08)
	struct UCommonTextBlock* Text_Description; // 0x4d8(0x08)
	struct UCommonAnimatedSwitcher* Switcher_PurchaseState; // 0x4e0(0x08)
	char pad_4E8[0x18]; // 0x4e8(0x18)

	void OnShowNavButtonNotification(bool bShowNotification); // Function CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetScreenInteractable(bool bInteractable); // Function CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetNavButtonNotificationText(struct FText& NotificationText); // Function CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPurchaseStateChanged(enum class EBattlePassPurchaseState InCurrentState); // Function CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPurchaseConfirmed(); // Function CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.CrewMultiSubscriptionAlertModal
// Size: 0x480 (Inherited: 0x3a8)
struct UCrewMultiSubscriptionAlertModal : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UDynamicEntryBox* EntryBox_BulletPoints; // 0x3b0(0x08)
	struct UCommonButtonBase* Button_OpenHowToURL; // 0x3b8(0x08)
	struct UCommonButtonBase* Button_TextURL; // 0x3c0(0x08)
	struct UCommonButtonBase* Button_DoNotRemind; // 0x3c8(0x08)
	struct UCommonButtonBase* Button_Close; // 0x3d0(0x08)
	struct TArray<struct FText> BulletPoints; // 0x3d8(0x10)
	struct TMap<enum class EAppStore, struct FText> AppStorePlatformMapping; // 0x3e8(0x50)
	struct FString HowToCancelURL; // 0x438(0x10)
	char pad_448[0x20]; // 0x448(0x20)
	struct FText PlatformTextStyle; // 0x468(0x18)

	void OnSetHowToCancelURL(struct FString MoreInfoUrl); // Function CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.CrewPriceChangeAcknowledgeModal
// Size: 0x548 (Inherited: 0x3a8)
struct UCrewPriceChangeAcknowledgeModal : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UCommonButtonBase* Button_Accept; // 0x3b0(0x08)
	struct UCommonButtonBase* Button_CancelSubscription; // 0x3b8(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x3c0(0x08)
	struct UCommonButtonBase* Button_TextURL; // 0x3c8(0x08)
	struct TSoftClassPtr<UObject> CancellationInfoModalClass; // 0x3d0(0x28)
	char pad_3F8[0x150]; // 0x3f8(0x150)

	void OnSetPriceChangeAcknowledgeTitle(struct FText& Title); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeMoreInfoUrl(struct FText& MoreInfoUrl); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeMoreInfoText(struct FText& ConfirmButtonText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeConfirmButtonText(struct FText& ConfirmButtonText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeCheckboxText(struct FText& CheckboxText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(struct FText& CancelSubscriptionButtonText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeBodyText(struct FText& BodyText); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetPriceChangeAcknowledgeBodyTable(struct TArray<struct FCrewTableRow>& PriceChangeByRegionRows); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnModalBackout(); // Function CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExitModal(); // Function CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal // (Final|Native|Protected|BlueprintCallable) // @ game+0x5cc2084
};

// Class CrewUI.CrewPurchaseScreen
// Size: 0x578 (Inherited: 0x3e8)
struct UCrewPurchaseScreen : UCMSBackgroundWidget {
	char pad_3E8[0x68]; // 0x3e8(0x68)
	bool bManagementModeEnabled; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct UWidget* FocusWidget; // 0x458(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_BenefitsTiles; // 0x460(0x08)
	struct TSoftClassPtr<UObject> CancellationInfoModalClass; // 0x468(0x28)
	struct TSoftClassPtr<UObject> LegalInfoModalClass; // 0x490(0x28)
	struct TSoftClassPtr<UObject> ResolveIssueModalClass; // 0x4b8(0x28)
	struct TSoftClassPtr<UObject> RejoinModalClass; // 0x4e0(0x28)
	struct UCommonButtonBase* Button_ToBattlePass; // 0x508(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Purchase; // 0x510(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Rejoin; // 0x518(0x08)
	struct UCommonButtonBase* Button_ResolvePayment; // 0x520(0x08)
	struct UCommonButtonBase* Button_WatchTrailer; // 0x528(0x08)
	struct UCommonButtonBase* Button_Terms; // 0x530(0x08)
	struct UCommonButtonBase* Button_CancellationInfo; // 0x538(0x08)
	struct UDynamicEntryBox* EntryBox_RecurringRewards; // 0x540(0x08)
	struct UDynamicEntryBox* EntryBox_LimitedTimeRewards; // 0x548(0x08)
	struct UCrewTileDetails* Details_CurrentCrewTile; // 0x550(0x08)
	struct UCommonTextBlock* Text_LimitedTime; // 0x558(0x08)
	struct UOverlay* Overlay_UserInformation; // 0x560(0x08)
	struct UCommonTextBlock* Text_UserInformation; // 0x568(0x08)
	struct UCommonTextBlock* Text_CrewDisclaimer; // 0x570(0x08)

	void OnUserInformationTextsUpdated(struct FText& UserInformationText1, struct FText& UserInformationText2, enum class EMcpSubscriptionState SubscriptionState); // Function CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateVBuckRefundVisibility(bool bVisible); // Function CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdatePurchaseButtonState(enum class ECrewPurchaseButtonState ButtonState); // Function CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnShowNavButtonNotification(bool bShowNotification); // Function CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetNavButtonNotificationText(struct FText& NotificationText); // Function CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Function CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EndProgress(); // Function CrewUI.CrewPurchaseScreen.EndProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BeginProgress(struct FText& ProgressLabel); // Function CrewUI.CrewPurchaseScreen.BeginProgress // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.CrewRewardTile
// Size: 0x1440 (Inherited: 0x13e0)
struct UCrewRewardTile : UCommonButtonBase {
	char pad_13E0[0x40]; // 0x13e0(0x40)
	float TileImageStreamoutSeconds; // 0x1420(0x04)
	char pad_1424[0x4]; // 0x1424(0x04)
	struct UImage* Image_TileImage; // 0x1428(0x08)
	struct UCommonTextBlock* Text_TileLabel; // 0x1430(0x08)
	char pad_1438[0x8]; // 0x1438(0x08)

	void OnUpdateOwnedState(bool bOwned); // Function CrewUI.CrewRewardTile.OnUpdateOwnedState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartingDownloadTileImage(); // Function CrewUI.CrewRewardTile.OnStartingDownloadTileImage // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDownloadTileImageComplete(struct UTexture2D* Texture); // Function CrewUI.CrewRewardTile.OnDownloadTileImageComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool IsMonthlyBenefit(); // Function CrewUI.CrewRewardTile.IsMonthlyBenefit // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x26810cc
};

// Class CrewUI.CrewSeasonLaunchScreen
// Size: 0x4d8 (Inherited: 0x3e8)
struct UCrewSeasonLaunchScreen : UCMSBackgroundWidget {
	char pad_3E8[0x38]; // 0x3e8(0x38)
	struct TSoftClassPtr<UObject> ResolveIssueModalClass; // 0x420(0x28)
	struct UBattlePassSeasonHeading* Heading_SeasonInfo; // 0x448(0x08)
	struct UCommonTextBlock* Text_Description; // 0x450(0x08)
	struct UCommonButtonBase* Button_Claim; // 0x458(0x08)
	struct UCommonButtonBase* Button_ResolveIssue; // 0x460(0x08)
	struct UCommonButtonBase* Button_GiftBattlePass; // 0x468(0x08)
	struct UCommonRichTextBlock* RichText_Disclaimer; // 0x470(0x08)
	char pad_478[0x60]; // 0x478(0x60)
};

// Class CrewUI.CrewStandaloneSubscriptionContentContainer
// Size: 0x5e8 (Inherited: 0x5e0)
struct UCrewStandaloneSubscriptionContentContainer : UFortStandaloneFrontend {
	struct UCrewSubscriptionContentContainer* Widget_CrewContentContainer; // 0x5e0(0x08)
};

// Class CrewUI.CrewSubscriptionContentContainer
// Size: 0x448 (Inherited: 0x3a8)
struct UCrewSubscriptionContentContainer : UCommonActivatableWidget {
	char pad_3A8[0x30]; // 0x3a8(0x30)
	struct TArray<struct FCrewSubscriptionContentTabData> TabsData; // 0x3d8(0x10)
	struct FDataTableRowHandle NextTabInputAction; // 0x3e8(0x10)
	struct FDataTableRowHandle PreviousTabInputAction; // 0x3f8(0x10)
	struct UDynamicEntryBox* EntryBox_Tabs; // 0x408(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_Tabs; // 0x410(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_Tabs; // 0x418(0x08)
	struct UWidget* Widget_TabsContainer; // 0x420(0x08)
	float SpacingAdjustmentForTabs; // 0x428(0x04)
	struct FPrimaryContentSetup ContentSetup; // 0x42c(0x03)
	char pad_42F[0x19]; // 0x42f(0x19)

	void OnTabSelected(int32_t TabIndex); // Function CrewUI.CrewSubscriptionContentContainer.OnTabSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.CrewSubscriptionErrorModal
// Size: 0x3b8 (Inherited: 0x3a8)
struct UCrewSubscriptionErrorModal : UCommonActivatableWidget {
	struct UCommonButtonBase* Button_Confirm; // 0x3a8(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x3b0(0x08)
};

// Class CrewUI.CrewTileDetails
// Size: 0x2d8 (Inherited: 0x290)
struct UCrewTileDetails : UCommonUserWidget {
	char pad_290[0x28]; // 0x290(0x28)
	struct UCommonTextBlock* Text_Title; // 0x2b8(0x08)
	struct UCommonRichTextBlock* RichText_Description; // 0x2c0(0x08)
	struct UDynamicEntryBox* EntryBox_Tags; // 0x2c8(0x08)
	struct UCommonButtonBase* Button_MobileMoreInfo; // 0x2d0(0x08)
};

// Class CrewUI.CrewTileDetailsTag
// Size: 0x298 (Inherited: 0x290)
struct UCrewTileDetailsTag : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Label; // 0x290(0x08)

	void OnTagSetup(enum class ECrewDetailsTag RewardTag, bool bIsOwnedTag); // Function CrewUI.CrewTileDetailsTag.OnTagSetup // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.CrewUIGameFeatureAction
// Size: 0x160 (Inherited: 0x28)
struct UCrewUIGameFeatureAction : UFortUIGameFeatureAction {
	struct TSoftClassPtr<UObject> BattlePassCrewContainerClass; // 0x28(0x28)
	struct TSoftClassPtr<UObject> CrewContentContainerClass; // 0x50(0x28)
	struct TSoftClassPtr<UObject> CrewStandaloneContentContainerClass; // 0x78(0x28)
	struct TSoftClassPtr<UObject> CrewPurchaseScreenClass; // 0xa0(0x28)
	struct TSoftClassPtr<UObject> ProgressionScreenClass; // 0xc8(0x28)
	struct TSoftClassPtr<UObject> CrewPriceChangeAcknowledgeModalClass; // 0xf0(0x28)
	struct TSoftClassPtr<UObject> MultiSubAlertModalClass; // 0x118(0x28)
	struct TArray<struct FFortProgressiveSet> ProgressiveCosmeticSets; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)
};

// Class CrewUI.FortProgressiveContentContainer
// Size: 0x3f8 (Inherited: 0x3a8)
struct UFortProgressiveContentContainer : UCommonActivatableWidget {
	char pad_3A8[0x38]; // 0x3a8(0x38)
	struct UCommonActivatableWidgetSwitcher* Switcher_PrimaryContent; // 0x3e0(0x08)
	struct UFortProgressiveTableOfContentsScreen* Widget_ProgressiveTableOfContentsScreen; // 0x3e8(0x08)
	struct UFortProgressiveItemScreen* Widget_ProgressiveItemScreen; // 0x3f0(0x08)
};

// Class CrewUI.FortProgressiveItemDetailsWidget
// Size: 0x290 (Inherited: 0x268)
struct UFortProgressiveItemDetailsWidget : UUserWidget {
	struct UCommonTextBlock* Text_CosmeticStage; // 0x268(0x08)
	struct UCommonRichTextBlock* Text_UnlockCriteria; // 0x270(0x08)
	struct UWidget* Widget_UnlockCriteriaContainer; // 0x278(0x08)
	struct UAthenaRewardItemTypeRarityTag* Widget_ItemTypeRarityTag; // 0x280(0x08)
	struct UWidget* Tag_Owned; // 0x288(0x08)
};

// Class CrewUI.FortProgressiveScreenBase
// Size: 0x6d0 (Inherited: 0x668)
struct UFortProgressiveScreenBase : UFortItemPreviewScreen {
	char pad_668[0x54]; // 0x668(0x54)
	float VariantPreviewTime; // 0x6bc(0x04)
	char pad_6C0[0x10]; // 0x6c0(0x10)

	void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Function CrewUI.FortProgressiveScreenBase.BP_OnContainerTabVisibilityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveItemScreen
// Size: 0x7e8 (Inherited: 0x6d0)
struct UFortProgressiveItemScreen : UFortProgressiveScreenBase {
	struct UCommonButtonBase* Button_Back; // 0x6d0(0x08)
	struct UCommonButtonBase* Button_MobileBack; // 0x6d8(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x6e0(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Subscribe; // 0x6e8(0x08)
	struct UCommonButtonBase* Button_PreviewStyles; // 0x6f0(0x08)
	struct UCommonTextBlock* Text_ExpirationFinePrint; // 0x6f8(0x08)
	struct UCommonTextBlock* Text_NewStagesUnlockFinePrint; // 0x700(0x08)
	struct UDynamicEntryBox* EntryBox_StagesPips; // 0x708(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_StagesPips; // 0x710(0x08)
	struct UFortProgressiveItemDetailsWidget* Widget_ProgressiveItemDetails; // 0x718(0x08)
	struct UFortProgressiveStageList* Widget_ProgressiveStageList; // 0x720(0x08)
	struct UFortProgressiveItemStateTitleWidget* ProgressiveItemStateTitle; // 0x728(0x08)
	struct TSoftClassPtr<UObject> MoreInfoModalClass; // 0x730(0x28)
	struct FName SubscribedMaterialParameterName; // 0x758(0x04)
	char pad_75C[0x8c]; // 0x75c(0x8c)

	void OnUpdateSubscriptionState(bool bSubscribed); // Function CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetIsSoloScreen(bool bInIsSoloScreen); // Function CrewUI.FortProgressiveItemScreen.OnSetIsSoloScreen // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnItemSelected(); // Function CrewUI.FortProgressiveItemScreen.OnItemSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnErrorStateTextUpdated(struct FText& ErrorStateText); // Function CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveItemStateTitleWidget
// Size: 0x268 (Inherited: 0x268)
struct UFortProgressiveItemStateTitleWidget : UUserWidget {

	void BP_OnSetHeaderInfo(struct FText& Subheading, bool bSubscribed, int32_t UnlockedStages, int32_t MaxStages); // Function CrewUI.FortProgressiveItemStateTitleWidget.BP_OnSetHeaderInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveItemWidget
// Size: 0x1470 (Inherited: 0x13e0)
struct UFortProgressiveItemWidget : UCommonButtonBase {
	struct UAthenaItemShopReactiveTileText* TileText_ItemName; // 0x13e0(0x08)
	struct FProgressiveStageItemInfo StageItemInfo; // 0x13e8(0x70)
	char pad_1458[0x18]; // 0x1458(0x18)

	void OnUnhighlighted(); // Function CrewUI.FortProgressiveItemWidget.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTileMaterialLoaded(bool bSubscribed); // Function CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo); // Function CrewUI.FortProgressiveItemWidget.OnStageItemChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPeekStateChanged(bool bIsInPeekState); // Function CrewUI.FortProgressiveItemWidget.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnHighlighted(); // Function CrewUI.FortProgressiveItemWidget.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveSetDetailsWidget
// Size: 0x298 (Inherited: 0x268)
struct UFortProgressiveSetDetailsWidget : UUserWidget {
	struct UCommonButtonBase* Button_MoreInfo; // 0x268(0x08)
	char pad_270[0x28]; // 0x270(0x28)

	void BP_OnUpdateSetDetails(struct FText& SetName, struct FText& ExpiringText, bool bCompleted); // Function CrewUI.FortProgressiveSetDetailsWidget.BP_OnUpdateSetDetails // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveSetList
// Size: 0x428 (Inherited: 0x3a8)
struct UFortProgressiveSetList : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UAthenaScrollBox* ScrollBox_SetList; // 0x3b0(0x08)
	struct UFortSwipePanel* SwipePanel_Navigation; // 0x3b8(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_SetTiles; // 0x3c0(0x08)
	int32_t NumTilesPerPage; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct TArray<struct UFortProgressiveSetTile*> SetTiles; // 0x3d0(0x10)
	char pad_3E0[0x48]; // 0x3e0(0x48)

	void ClearSetTiles(); // Function CrewUI.FortProgressiveSetList.ClearSetTiles // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct UFortProgressiveSetTile* AddSetTile(); // Function CrewUI.FortProgressiveSetList.AddSetTile // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveSetTile
// Size: 0x1490 (Inherited: 0x13e0)
struct UFortProgressiveSetTile : UCommonButtonBase {
	char pad_13E0[0xb0]; // 0x13e0(0xb0)

	void BP_OnTileMaterialLoaded(bool bSubscribed); // Function CrewUI.FortProgressiveSetTile.BP_OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnInitializeSetInfo(struct FProgressiveSetInfo& InSetInfo, struct FText& BottomText, struct FText& BottomSubtext, bool bSubscribed); // Function CrewUI.FortProgressiveSetTile.BP_OnInitializeSetInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveStageList
// Size: 0x3f8 (Inherited: 0x3a8)
struct UFortProgressiveStageList : UCommonActivatableWidget {
	char pad_3A8[0x18]; // 0x3a8(0x18)
	struct UCommonButtonGroupBase* ButtonGroup_StageItems; // 0x3c0(0x08)
	struct UAthenaScrollBox* ScrollBox_StageList; // 0x3c8(0x08)
	struct UFortSwipePanel* SwipePanel_Navigation; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct TArray<struct UFortProgressiveStageWidget*> Stages; // 0x3e0(0x10)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void SelectStageInDirection(int32_t Direction); // Function CrewUI.FortProgressiveStageList.SelectStageInDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x68abf00
	void ClearStageWidgets(); // Function CrewUI.FortProgressiveStageList.ClearStageWidgets // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct UFortProgressiveStageWidget* AddStageWidget(); // Function CrewUI.FortProgressiveStageList.AddStageWidget // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveStageWidget
// Size: 0x2b0 (Inherited: 0x290)
struct UFortProgressiveStageWidget : UCommonUserWidget {
	struct UCommonTextBlock* Text_Month; // 0x290(0x08)
	char pad_298[0x18]; // 0x298(0x18)

	void OnSetTooltipVisible(bool bVisible); // Function CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetTooltipText(struct FText& InToolTipText); // Function CrewUI.FortProgressiveStageWidget.OnSetTooltipText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPeekStateChanged(bool bIsInPeekState); // Function CrewUI.FortProgressiveStageWidget.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ClearStageItemWidgets(); // Function CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct UFortProgressiveItemWidget* AddStageItemWidget(); // Function CrewUI.FortProgressiveStageWidget.AddStageItemWidget // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CrewUI.FortProgressiveTableOfContentsScreen
// Size: 0x758 (Inherited: 0x6d0)
struct UFortProgressiveTableOfContentsScreen : UFortProgressiveScreenBase {
	struct UCommonButtonBase* Button_Back; // 0x6d0(0x08)
	struct UCommonButtonBase* Button_MobileBack; // 0x6d8(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x6e0(0x08)
	struct UBattlePassCrewPurchaseButton* Button_Subscribe; // 0x6e8(0x08)
	struct UFortProgressiveSetList* Widget_SetList; // 0x6f0(0x08)
	struct UFortProgressiveSetDetailsWidget* Widget_SetDetails; // 0x6f8(0x08)
	struct UFortProgressiveItemStateTitleWidget* Widget_ItemStateTitle; // 0x700(0x08)
	struct UDynamicEntryBox* EntryBox_SetPagesPips; // 0x708(0x08)
	struct UCommonButtonGroupBase* ButtonGroup_SetPagesPips; // 0x710(0x08)
	struct TSoftClassPtr<UObject> MoreInfoModalClass; // 0x718(0x28)
	struct FName SubscribedMaterialParameterName; // 0x740(0x04)
	char pad_744[0x14]; // 0x744(0x14)

	void BP_OnUpdateSubscriptionState(bool bSubscribed); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUpdateNumTilesAvailable(int32_t NumTiles); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUpdateErrorStateText(struct FText& ErrorStateText); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUpdateBanner(struct FText& BannerText, bool bAllSetsCompleted, bool bSubscribed); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateBanner // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSetDescriptionText(struct FText& ProductDescription); // Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnSetDescriptionText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

