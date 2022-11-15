// Class BattlePassBase.BattlePassSubPageInterface
// Size: 0x28 (Inherited: 0x28)
struct UBattlePassSubPageInterface : UInterface {

	void OnEnterSubPage(); // Function BattlePassBase.BattlePassSubPageInterface.OnEnterSubPage // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassBase.BattlePassLandingPageBase
// Size: 0x4d0 (Inherited: 0x3a8)
struct UBattlePassLandingPageBase : UCommonActivatableWidget {
	char pad_3A8[0x100]; // 0x3a8(0x100)
	struct UBattlePassLandingPageButton* LastHoveredPageButton; // 0x4a8(0x08)
	char pad_4B0[0x20]; // 0x4b0(0x20)
};

// Class BattlePassBase.BattlePassLandingPageButton
// Size: 0x15e0 (Inherited: 0x13e0)
struct UBattlePassLandingPageButton : UCommonButtonBase {
	enum class EBattlePassView SubPageType; // 0x13e0(0x01)
	enum class EBattlePassFeatures FeatureType; // 0x13e1(0x01)
	char pad_13E2[0x6]; // 0x13e2(0x06)
	struct FBattlePassLandingPageEntryPreviewInfo PreviewInfo; // 0x13e8(0x38)
	bool bNeedsBattlePass; // 0x1420(0x01)
	char pad_1421[0x7]; // 0x1421(0x07)
	struct UFortChallengeBundleScheduleDefinition* DelayQuestSchedule; // 0x1428(0x08)
	int32_t DelayDaysSinceSeasonStart; // 0x1430(0x04)
	char pad_1434[0x4]; // 0x1434(0x04)
	struct UFortItemDefinition* RequiredItem; // 0x1438(0x08)
	struct UFortBangWrapper_NUI* BangWrapper; // 0x1440(0x08)
	bool bUsesTelemetry; // 0x1448(0x01)
	char pad_1449[0x3]; // 0x1449(0x03)
	struct FIntPoint Telemetry_Size; // 0x144c(0x08)
	struct FIntPoint Telemetry_Position; // 0x1454(0x08)
	char pad_145C[0x4]; // 0x145c(0x04)
	struct FBattlePassLandingPageButtonTexts DefaultTexts; // 0x1460(0x48)
	struct FBattlePassLandingPageButtonTexts DelayedTexts; // 0x14a8(0x48)
	struct FBattlePassLandingPageButtonTexts SubscribedTexts; // 0x14f0(0x48)
	char pad_1538[0xa8]; // 0x1538(0xa8)

	void OnSubscriptionTextureLoaded(struct UTexture2D* Texture); // Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption); // Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails); // Function BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	struct FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails(); // Function BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a4bd58
};

// Class BattlePassBase.BattlePassRewardPageBase
// Size: 0x4a0 (Inherited: 0x3a8)
struct UBattlePassRewardPageBase : UCommonActivatableWidget {
	char pad_3A8[0xf8]; // 0x3a8(0xf8)
};

// Class BattlePassBase.BattlePassUIGameFeatureAction
// Size: 0xa0 (Inherited: 0x28)
struct UBattlePassUIGameFeatureAction : UFortUIGameFeatureAction {
	struct TSoftClassPtr<UObject> BattlePassScreenClass; // 0x28(0x28)
	struct TSoftClassPtr<UObject> BattlePassResourceWidgetClass; // 0x50(0x28)
	struct TSoftClassPtr<UObject> BattlePassInfoModalClass; // 0x78(0x28)
};

// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
// Size: 0x320 (Inherited: 0x268)
struct UFortBattlePassCustomSkinCategoryTile : UUserWidget {
	char pad_268[0x20]; // 0x268(0x20)
	struct UProgressBar* ProgressBar; // 0x288(0x08)
	struct UFortDynamicEntryBox* FortDynamicEntryBox_Items; // 0x290(0x08)
	struct URichTextBlock* Text_CategoryTitle; // 0x298(0x08)
	struct UFortBattlePassTile* PreviewedTile; // 0x2a0(0x08)
	int32_t OwnedRewards; // 0x2a8(0x04)
	char pad_2AC[0x74]; // 0x2ac(0x74)

	void SetPreviewedTile(int32_t Index); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile // (Final|Native|Public|BlueprintCallable) // @ game+0x6548664
	void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLockedStateChanged(bool bCategoryLocked); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FocusTile(int32_t Index); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile // (Final|Native|Public|BlueprintCallable) // @ game+0x6547e8c
};

// Class BattlePassBase.FortBattlePassCustomSkinPageBase
// Size: 0x548 (Inherited: 0x3a8)
struct UFortBattlePassCustomSkinPageBase : UCommonActivatableWidget {
	char pad_3A8[0x178]; // 0x3a8(0x178)
	struct UScrollBox* ScrollBox_Categories; // 0x520(0x08)
	struct UFortDynamicEntryBox* FortDynamicEntryBox_Categories; // 0x528(0x08)
	char pad_530[0x8]; // 0x530(0x08)
	struct UBattlePassEnabledInputData* EquipEnabledData; // 0x538(0x08)
	char pad_540[0x8]; // 0x540(0x08)
};

// Class BattlePassBase.FortBattlePassBulkBuyPageBase
// Size: 0x520 (Inherited: 0x3a8)
struct UFortBattlePassBulkBuyPageBase : UCommonActivatableWidget {
	char pad_3A8[0xf8]; // 0x3a8(0xf8)
	struct UCommonButtonBase* Button_Addition; // 0x4a0(0x08)
	struct UCommonButtonBase* Button_Subtraction; // 0x4a8(0x08)
	struct UDynamicEntryBox* DynamicEntryBox_TilesEntries; // 0x4b0(0x08)
	struct UCommonVisibilitySwitcher* Switcher_BottomButtons; // 0x4b8(0x08)
	struct UFortHoldableButton* Button_BuyLevels; // 0x4c0(0x08)
	struct UFortHoldableButton* Button_ClaimReward; // 0x4c8(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x4d0(0x08)
	struct UAthenaSeasonItemDefinition* SeasonItemDefinition; // 0x4d8(0x08)
	struct UFortBattlePassTile* FocusedReward; // 0x4e0(0x08)
	char pad_4E8[0x30]; // 0x4e8(0x30)
	struct UScrollBox* ScrollBox_Pages; // 0x518(0x08)

	void OnRewardCountChanged(int32_t Count); // Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPageRangeChanged(int32_t FromPage, int32_t ToPage); // Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCostChanged(int32_t Cost); // Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleUserScrolled(float ScrollAmount); // Function BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled // (Final|Native|Protected) // @ game+0x6548538
};

// Class BattlePassBase.FortBattlePassCheckBoxButton
// Size: 0x13f0 (Inherited: 0x13e0)
struct UFortBattlePassCheckBoxButton : UCommonButtonBase {
	char pad_13E0[0x10]; // 0x13e0(0x10)

	void OnStateChanged(bool bNewIsChecked); // Function BattlePassBase.FortBattlePassCheckBoxButton.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassBase.FortBattlePassContext
// Size: 0xa8 (Inherited: 0x30)
struct UFortBattlePassContext : UBlueprintContextBase {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UFortPersistentResourceItemDefinition*> CustomizationPageSeasonalResources; // 0x38(0x10)
	struct TArray<struct UFortPersistentResourceItemDefinition*> AllSeasonalResources; // 0x48(0x10)
	struct TMap<enum class ERewardPageType, struct FSeasonalResourceList> RewardPageSeasonalResources; // 0x58(0x50)

	struct TArray<struct FSeasonCurrencyMcpData> GetSeasonalCurrencies(); // Function BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6548090
	struct FText GetLevelPurchaseDisclaimerText(); // Function BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6548024
	struct FText GetDefaultDisclaimerText(); // Function BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27b01f0
	struct FText GetCurrentSeasonNumberAsText(bool bFullText); // Function BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117df14
	struct FText GetCurrentChapterAsText(bool bFullText); // Function BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6547f44
	bool CanPurchaseBattlePassLevel(); // Function BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117f094
};

// Class BattlePassBase.FortBattlePassResourcesWidgetBase
// Size: 0x2a0 (Inherited: 0x290)
struct UFortBattlePassResourcesWidgetBase : UFortGlobalSeasonResourceWidget {
	struct UFortBattlePassResourceCounter* ResourceCounterClass; // 0x290(0x08)
	struct UDynamicEntryBox* EntryBox_ResourceCounters; // 0x298(0x08)

	void ShowResourcesInfoModal(); // Function BattlePassBase.FortBattlePassResourcesWidgetBase.ShowResourcesInfoModal // (Final|Native|Protected|BlueprintCallable) // @ game+0x6548a00
	void OnShowMoreInfo(bool bShouldShowMoreInfo); // Function BattlePassBase.FortBattlePassResourcesWidgetBase.OnShowMoreInfo // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassBase.FortBattlePassCurrencyPanel
// Size: 0x2e0 (Inherited: 0x2a0)
struct UFortBattlePassCurrencyPanel : UFortBattlePassResourcesWidgetBase {
	struct UHorizontalBox* HBox_BattleStarContainer; // 0x2a0(0x08)
	struct UCommonTextBlock* Text_BattleStar; // 0x2a8(0x08)
	struct UHorizontalBox* HBox_CustomSkinContainer; // 0x2b0(0x08)
	struct UCommonTextBlock* Text_CustomSkin; // 0x2b8(0x08)
	char pad_2C0[0x20]; // 0x2c0(0x20)
};

// Class BattlePassBase.FortBattlePassPrerequisiteHeader
// Size: 0x270 (Inherited: 0x268)
struct UFortBattlePassPrerequisiteHeader : UUserWidget {
	struct UTextBlock* Text_Prerequisite; // 0x268(0x08)
};

// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
// Size: 0x468 (Inherited: 0x3a8)
struct UFortBattlePassPurchaseResourcesWidget : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UCommonButtonBase* Button_Addition; // 0x3b0(0x08)
	struct UCommonButtonBase* Button_BatchAddition; // 0x3b8(0x08)
	struct UCommonButtonBase* Button_Subtraction; // 0x3c0(0x08)
	struct UCommonButtonBase* Button_BatchSubtraction; // 0x3c8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_PurchaseButtons; // 0x3d0(0x08)
	struct UFortHoldableButton* Button_Purchase; // 0x3d8(0x08)
	struct UCommonButtonBase* Button_GetVBucks; // 0x3e0(0x08)
	struct UCommonButtonBase* Button_ReloadMtx; // 0x3e8(0x08)
	struct UCommonButtonBase* Button_Back; // 0x3f0(0x08)
	struct UFortBattlePassCheckBoxButton* CheckBox_Bundle; // 0x3f8(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x400(0x08)
	int32_t CurrentLevel; // 0x408(0x04)
	bool bIsOfferActive; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	int32_t CurrentVBucks; // 0x410(0x04)
	int32_t CurrentBattleStars; // 0x414(0x04)
	int32_t BatchNum; // 0x418(0x04)
	int32_t CurrentPage; // 0x41c(0x04)
	bool bOfferUnavailable; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	int32_t MaxBundleLevel; // 0x424(0x04)
	int32_t MaxLevel; // 0x428(0x04)
	int32_t MaxLevelPurchases; // 0x42c(0x04)
	int32_t BundleAmount; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UFortItemDefinition* LevelPreviewItem; // 0x438(0x08)
	char pad_440[0x28]; // 0x440(0x28)

	void OnTotalPriceChanged(int32_t NewPrice); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOfferUnavailable(); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAmountChangeButtonClicked(); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool IsReloadMtxEnabled(); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled // (Final|Native|Protected|BlueprintCallable) // @ game+0x6548640
	void HandlePurchaseMultiComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct TArray<struct FString>& OfferIdList); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete // (Final|Native|Private|HasOutParms) // @ game+0x65483e4
	void HandlePurchaseComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString OfferId); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete // (Final|Native|Private|HasOutParms) // @ game+0x6548130
};

// Class BattlePassBase.FortBattlePassResourceCounter
// Size: 0x2b0 (Inherited: 0x290)
struct UFortBattlePassResourceCounter : UCommonUserWidget {
	struct UCommonTextBlock* Text_ResourceName; // 0x290(0x08)
	struct UFortLazyImage* LazyImage_ResourceIcon; // 0x298(0x08)
	struct UCommonTextBlock* Text_ResourceCount; // 0x2a0(0x08)
	struct UFortPersistentResourceItemDefinition* CurrentResource; // 0x2a8(0x08)
};

// Class BattlePassBase.FortBattlePassRewardGrid
// Size: 0x478 (Inherited: 0x3a8)
struct UFortBattlePassRewardGrid : UCommonActivatableWidget {
	char pad_3A8[0x68]; // 0x3a8(0x68)
	struct UFortBattlePassTileBase* GridTileClass; // 0x410(0x08)
	struct UFortBattlePassTileBase* GridEmptyTileClass; // 0x418(0x08)
	struct FVector2D GridCellPadding; // 0x420(0x10)
	struct UFortBattlePassRewardGridHeader* PageHeader; // 0x430(0x08)
	struct UGridPanel* GridPanel_Rewards; // 0x438(0x08)
	struct UFortBattlePassTileBase* DefaultFocusTile; // 0x440(0x08)
	struct TWeakObjectPtr<struct UCommonButtonBase> LastFocusedTile; // 0x448(0x08)
	char pad_450[0x28]; // 0x450(0x28)

	void OnPageUnselected(); // Function BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPageSelected(); // Function BattlePassBase.FortBattlePassRewardGrid.OnPageSelected // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassBase.FortBattlePassRewardGridHeader
// Size: 0x270 (Inherited: 0x268)
struct UFortBattlePassRewardGridHeader : UUserWidget {
	char pad_268[0x8]; // 0x268(0x08)

	void OnSetPageType(enum class ERewardPageType PageType); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetPageCustomName(struct FText& CustomName); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageCustomName // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPageUnlocked(int32_t PurchasedRewards, int32_t TotalRewards); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageUnlocked // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPageNumberSet(int32_t InPageNumber); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageNumberSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPageLocked(int32_t RequiredLevel, int32_t RequiredRewards, bool IsTimeLocked, struct FTimespan TimeRemaining); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageLocked // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0xdef49c
	void OnBattlePassLevelSet(int32_t BattlePassLevel); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnBattlePassLevelSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	int32_t GetPageNumber(); // Function BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6548078
};

// Class BattlePassBase.FortBattlePassRewardTrack
// Size: 0x438 (Inherited: 0x3a8)
struct UFortBattlePassRewardTrack : UCommonActivatableWidget {
	char pad_3A8[0x40]; // 0x3a8(0x40)
	struct UFortBattlePassTileBase* RewardTileClass; // 0x3e8(0x08)
	struct UFortBattlePassTileBase* RewardEmptyTileClass; // 0x3f0(0x08)
	struct UFortBattlePassPrerequisiteHeader* PrerequisiteHeaderClass; // 0x3f8(0x08)
	struct FVector2D GridCellPadding; // 0x400(0x10)
	struct UGridPanel* GridPanel_Rewards; // 0x410(0x08)
	struct UFortBattlePassTileBase* DefaultFocusTile; // 0x418(0x08)
	struct TWeakObjectPtr<struct UCommonButtonBase> LastFocusedTile; // 0x420(0x08)
	char pad_428[0x10]; // 0x428(0x10)

	void OnPageUnselected(); // Function BattlePassBase.FortBattlePassRewardTrack.OnPageUnselected // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPageSelected(); // Function BattlePassBase.FortBattlePassRewardTrack.OnPageSelected // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassBase.FortBattlePassTileBase
// Size: 0x1520 (Inherited: 0x1480)
struct UFortBattlePassTileBase : UFortHoldableButton {
	struct USizeBox* SizeBox_Content; // 0x1480(0x08)
	struct TMap<struct FName, struct FLinearColor> TileColors; // 0x1488(0x50)
	float UnitHeight; // 0x14d8(0x04)
	float UnitWidth; // 0x14dc(0x04)
	char pad_14E0[0x40]; // 0x14e0(0x40)

	void SetState(enum class BattlePassTileAvailabilityStates NewState); // Function BattlePassBase.FortBattlePassTileBase.SetState // (Final|Native|Protected|BlueprintCallable) // @ game+0x65487e0
	void SetSize(enum class EPageItemTileSize TileSize, struct FVector2D& CellSpacing); // Function BattlePassBase.FortBattlePassTileBase.SetSize // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6548710
	void OnStateChanged(enum class BattlePassTileAvailabilityStates NewState); // Function BattlePassBase.FortBattlePassTileBase.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSizeChanged(struct FVector2D& NewSize); // Function BattlePassBase.FortBattlePassTileBase.OnSizeChanged // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xdef49c
	void OnSetTileColors(); // Function BattlePassBase.FortBattlePassTileBase.OnSetTileColors // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetRequiresBattlePass(bool bRequiresBP); // Function BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRevealed(); // Function BattlePassBase.FortBattlePassTileBase.OnRevealed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPeeked(); // Function BattlePassBase.FortBattlePassTileBase.OnPeeked // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	bool IsOwned(); // Function BattlePassBase.FortBattlePassTileBase.IsOwned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6548624
	bool IsLocked(); // Function BattlePassBase.FortBattlePassTileBase.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6548608
	bool IsAvailable(); // Function BattlePassBase.FortBattlePassTileBase.IsAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65485ec
	enum class BattlePassTileAvailabilityStates GetState(); // Function BattlePassBase.FortBattlePassTileBase.GetState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x25e19ec
};

// Class BattlePassBase.FortBattlePassTile
// Size: 0x1590 (Inherited: 0x1520)
struct UFortBattlePassTile : UFortBattlePassTileBase {
	char pad_1520[0x10]; // 0x1520(0x10)
	struct UFortLazyImage* Image_RewardItem; // 0x1530(0x08)
	struct UImage* Image_Currency; // 0x1538(0x08)
	char pad_1540[0x50]; // 0x1540(0x50)

	void OnUnpreviewed(); // Function BattlePassBase.FortBattlePassTile.OnUnpreviewed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUnhighlighted(); // Function BattlePassBase.FortBattlePassTile.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTilePreviewCycled(); // Function BattlePassBase.FortBattlePassTile.OnTilePreviewCycled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass); // Function BattlePassBase.FortBattlePassTile.OnSetTrack // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetCurrencyAndPrice(enum class EBattlePassCurrencyType Currency, int32_t Price); // Function BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewed(); // Function BattlePassBase.FortBattlePassTile.OnPreviewed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed); // Function BattlePassBase.FortBattlePassTile.OnLockedStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards); // Function BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnHighlighted(); // Function BattlePassBase.FortBattlePassTile.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAffordabilityChanged(bool bHasEnougCurrency); // Function BattlePassBase.FortBattlePassTile.OnAffordabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool IsAffordable(); // Function BattlePassBase.FortBattlePassTile.IsAffordable // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d244dc
	bool HasPrerequisites(); // Function BattlePassBase.FortBattlePassTile.HasPrerequisites // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65485c8
};

// Class BattlePassBase.FortBattlePassTutorialTooltip
// Size: 0x2a0 (Inherited: 0x290)
struct UFortBattlePassTutorialTooltip : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Tooltip; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	void ShowTooltip(); // Function BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetTooltipEnabled(bool bEnable); // Function BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x6548980
	void SetText(struct FText Text); // Function BattlePassBase.FortBattlePassTutorialTooltip.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x6548864
	void HideTooltip(); // Function BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

