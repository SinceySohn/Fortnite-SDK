// Class BattlePassS22UI.BattlePassLandingPageS22
// Size: 0x520 (Inherited: 0x4d0)
struct UBattlePassLandingPageS22 : UBattlePassLandingPageBase {
	struct UBattlePassLandingPageButton* Button_Rewards; // 0x4d0(0x08)
	struct UBattlePassLandingPageButton* Button_CharacterCustomizer; // 0x4d8(0x08)
	struct UBattlePassLandingPageButton* Button_BonusRewards; // 0x4e0(0x08)
	struct UBattlePassLandingPageButton* Button_Quests; // 0x4e8(0x08)
	struct UBattlePassLandingPageButton* Button_BuyBattlePass; // 0x4f0(0x08)
	struct UBattlePassLandingPageButton* Button_JoinSubscription; // 0x4f8(0x08)
	struct UBattlePassLandingPageButton* Button_BuyResources; // 0x500(0x08)
	struct UBattlePassLandingPageButton* Button_GiftBattlePass; // 0x508(0x08)
	char pad_510[0x8]; // 0x510(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x518(0x08)

	void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed); // Function BattlePassS22UI.BattlePassLandingPageS22.OnBattlePassSubscriptionAllowed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBattlePassOwned(); // Function BattlePassS22UI.BattlePassLandingPageS22.OnBattlePassOwned // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBattlePassGiftingAllowed(bool bGiftingAllowed); // Function BattlePassS22UI.BattlePassLandingPageS22.OnBattlePassGiftingAllowed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassS22UI.BattlePassRewardPageS22
// Size: 0x540 (Inherited: 0x4a0)
struct UBattlePassRewardPageS22 : UBattlePassRewardPageBase {
	struct UFortBattlePassRewardGrid* RewardsGridClass; // 0x4a0(0x08)
	struct UFortPageNavigator* PageNavigator; // 0x4a8(0x08)
	struct UFortBattlePassTile* FocusedReward; // 0x4b0(0x08)
	struct TArray<struct UFortBattlePassRewardGrid*> GridPages; // 0x4b8(0x10)
	char pad_4C8[0x4]; // 0x4c8(0x04)
	enum class ERewardPageType RewardPageType; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	int32_t HoldTileTooltip_ClaimedRewardsToHide; // 0x4d0(0x04)
	int32_t HoldTileTooltip_RequiredBattleStarsToShow; // 0x4d4(0x04)
	struct FString ClaimToonAFishTooltip_ClaimCheckTemplateId; // 0x4d8(0x10)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_SecondPageUnlock; // 0x4e8(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_ClaimAllRewards; // 0x4f0(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_HoldTile; // 0x4f8(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_Fishtoon_ClaimToonAFish; // 0x500(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_Fishtoon_ExploreToCollectInk; // 0x508(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_Fishtoon_MustUnlockInkColor; // 0x510(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_Fishtoon_MustCompleteObjective; // 0x518(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x520(0x08)
	struct UBattlePassBulkBuyInputData* BulkBuyInputData; // 0x528(0x08)
	char pad_530[0x10]; // 0x530(0x10)

	void OnPageChanged(int32_t PageNumber); // Function BattlePassS22UI.BattlePassRewardPageS22.OnPageChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function BattlePassS22UI.BattlePassRewardPageS22.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitForPageType(enum class ERewardPageType InRewardPageType); // Function BattlePassS22UI.BattlePassRewardPageS22.OnInitForPageType // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassS22UI.BattlePassScreenS22
// Size: 0xbf8 (Inherited: 0x838)
struct UBattlePassScreenS22 : UBattlePassScreenBase {
	struct UFortBattlePassPurchaseResourcesWidget* ResourcePurchaseScreenClass; // 0x838(0x08)
	char pad_840[0x8]; // 0x840(0x08)
	struct UCommonButtonLegacy* Button_Close; // 0x848(0x08)
	struct UCommonButtonLegacy* Button_CloseMobile; // 0x850(0x08)
	struct UCommonButtonBase* Button_BulkBuyRewards; // 0x858(0x08)
	struct UCommonButtonLegacy* Button_ToggleViewDetails; // 0x860(0x08)
	struct UCommonButtonBase* Button_ToggleViewDetails_Mobile; // 0x868(0x08)
	struct UCommonButtonLegacy* Button_ReplayTrailer; // 0x870(0x08)
	struct UCommonButtonBase* Button_ReplayTrailer_Mobile; // 0x878(0x08)
	struct UCommonButtonLegacy* Button_ShowAbout; // 0x880(0x08)
	struct UCommonButtonBase* Button_ShowAbout_Mobile; // 0x888(0x08)
	struct UCommonButtonLegacy* Button_ShowAboutCustomization; // 0x890(0x08)
	struct UCommonButtonBase* Button_ShowAboutCustomization_Mobile; // 0x898(0x08)
	struct UCommonVisibilitySwitcher* MobileVisibilitySwitcher; // 0x8a0(0x08)
	struct UFortBattlePassResourcesWidgetBase* BattlePassCurrencyPanel; // 0x8a8(0x08)
	struct UAthenaExclusiveRewardBanner* AthenaExclusiveRewardBanner; // 0x8b0(0x08)
	struct UCommonTextBlock* Text_Description; // 0x8b8(0x08)
	struct UCommonTextBlock* Text_ItemName; // 0x8c0(0x08)
	struct UAthenaRewardItemTypeRarityTag* ItemRewardTag; // 0x8c8(0x08)
	struct UCommonTextBlock* Text_SetDetails; // 0x8d0(0x08)
	struct UCommonVisibilitySwitcher* Switcher_ContextualButtons; // 0x8d8(0x08)
	struct UFortHoldableButton* Button_BuyLevels; // 0x8e0(0x08)
	struct UFortHoldableButton* Button_BuyBattlePass; // 0x8e8(0x08)
	struct UFortHoldableButton* Button_ClaimReward; // 0x8f0(0x08)
	struct UBorder* Tag_RequiresBP; // 0x8f8(0x08)
	struct UBorder* Tag_PageLocked; // 0x900(0x08)
	struct UBorder* Tag_BaseItem; // 0x908(0x08)
	struct UBorder* Tag_Prerequisite; // 0x910(0x08)
	struct UBorder* Tag_CompletePage; // 0x918(0x08)
	struct UBorder* Tag_NotEnough_Currency; // 0x920(0x08)
	struct UBorder* Tag_Cost; // 0x928(0x08)
	struct UBorder* Tag_Owned; // 0x930(0x08)
	struct UBorder* Tag_Delayed; // 0x938(0x08)
	char pad_940[0x58]; // 0x940(0x58)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x998(0x08)
	struct UAthenaSeasonItemEntryBase* CurrentSelectedEntry; // 0x9a0(0x08)
	struct TArray<enum class EBattlePassView> SwitcherSubPageTypes; // 0x9a8(0x10)
	struct UCommonVisibilitySwitcher* SubPageSwitcher; // 0x9b8(0x08)
	char pad_9C0[0xc0]; // 0x9c0(0xc0)
	struct UFortItemDefinition* SeasonalBaseCustomizationItem; // 0xa80(0x08)
	bool bHasSubscription; // 0xa88(0x01)
	char pad_A89[0x3]; // 0xa89(0x03)
	int32_t BattleStarsTooltipHideLevel; // 0xa8c(0x04)
	char pad_A90[0x8]; // 0xa90(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_BattleStars; // 0xa98(0x08)
	struct UFortBattlePassTutorialTooltipS22* TutorialTooltip_StylePoints; // 0xaa0(0x08)
	char pad_AA8[0x150]; // 0xaa8(0x150)

	void OverviewShowAnimationFinished(); // Function BattlePassS22UI.BattlePassScreenS22.OverviewShowAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x258f6c0
	void OnTransitionItemDetails(bool bTransitionForward); // Function BattlePassS22UI.BattlePassScreenS22.OnTransitionItemDetails // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetResourcePrice(int32_t Cost, struct UFortPersistentResourceItemDefinition* PersistentResource); // Function BattlePassS22UI.BattlePassScreenS22.OnSetResourcePrice // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetPrerequisiteInfo(struct FText& Description, int32_t OwnedRewards, int32_t NeededRewards, bool bShowPrerequisiteLock); // Function BattlePassS22UI.BattlePassScreenS22.OnSetPrerequisiteInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetItemPrice(int32_t Cost, enum class EBattlePassCurrencyType CurrencyType); // Function BattlePassS22UI.BattlePassScreenS22.OnSetItemPrice // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetDynamicInput(enum class EBattlePassInputs InputType, struct UBattlePassInputData* InputData); // Function BattlePassS22UI.BattlePassScreenS22.OnSetDynamicInput // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetClaimedRewardInfo(int32_t OwnedRewards, int32_t TotalRewards); // Function BattlePassS22UI.BattlePassScreenS22.OnSetClaimedRewardInfo // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLevelChanged(int32_t Level); // Function BattlePassS22UI.BattlePassScreenS22.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnItemDelayed(struct FTimespan Delay); // Function BattlePassS22UI.BattlePassScreenS22.OnItemDelayed // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0xdef49c
	void OnInsufficientResource(struct UFortPersistentResourceItemDefinition* PersistentResource); // Function BattlePassS22UI.BattlePassScreenS22.OnInsufficientResource // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInsufficientFunds(enum class EBattlePassCurrencyType CurrencyType); // Function BattlePassS22UI.BattlePassScreenS22.OnInsufficientFunds // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBattlePassOwned(); // Function BattlePassS22UI.BattlePassScreenS22.OnBattlePassOwned // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool IsSeasonalCustomizationItemOwned(); // Function BattlePassS22UI.BattlePassScreenS22.IsSeasonalCustomizationItemOwned // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6554e20
	void HandleSwitcherVisibilityShown(); // Function BattlePassS22UI.BattlePassScreenS22.HandleSwitcherVisibilityShown // (Final|Native|Public|BlueprintCallable) // @ game+0x6554df8
	void HandleClaimRewardComplete(bool bSuccess, struct TArray<struct FString>& OfferTemplateIdList); // Function BattlePassS22UI.BattlePassScreenS22.HandleClaimRewardComplete // (Final|Native|Private|HasOutParms) // @ game+0x6554d0c
	struct FTimespan GetQuestPageDelay(); // Function BattlePassS22UI.BattlePassScreenS22.GetQuestPageDelay // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6554ce0
};

// Class BattlePassS22UI.FortBattlePassCustomSkinPageS22
// Size: 0x560 (Inherited: 0x548)
struct UFortBattlePassCustomSkinPageS22 : UFortBattlePassCustomSkinPageBase {
	struct FString ClaimBaseItemTooltip_ClaimCheckTemplateId; // 0x548(0x10)
	struct UFortBattlePassTutorialTooltip* TutorialTooltip_ClaimBaseItem; // 0x558(0x08)
};

// Class BattlePassS22UI.FortBattlePassResourcesWidgetS22
// Size: 0x2c0 (Inherited: 0x2a0)
struct UFortBattlePassResourcesWidgetS22 : UFortBattlePassResourcesWidgetBase {
	struct UCommonTextBlock* Text_BattleStarsAmount; // 0x2a0(0x08)
	struct UCommonTextBlock* Text_StylePointsAmount; // 0x2a8(0x08)
	struct UBorder* Border_StylePointsRewardsTag; // 0x2b0(0x08)
	struct UBorder* Border_BattleStarsRewardsTag; // 0x2b8(0x08)

	void OnStylePointsRewardsSet(int32_t Rewards); // Function BattlePassS22UI.FortBattlePassResourcesWidgetS22.OnStylePointsRewardsSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBattleStarRewardsSet(int32_t Rewards); // Function BattlePassS22UI.FortBattlePassResourcesWidgetS22.OnBattleStarRewardsSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassS22UI.FortBattlePassTutorialTooltipS22
// Size: 0x2a0 (Inherited: 0x290)
struct UFortBattlePassTutorialTooltipS22 : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Tooltip; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	void ShowTooltip(); // Function BattlePassS22UI.FortBattlePassTutorialTooltipS22.ShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetText(struct FText Text); // Function BattlePassS22UI.FortBattlePassTutorialTooltipS22.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x6548864
	void HideTooltip(); // Function BattlePassS22UI.FortBattlePassTutorialTooltipS22.HideTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class BattlePassS22UI.RebootRallyQuestPanel
// Size: 0x268 (Inherited: 0x268)
struct URebootRallyQuestPanel : UUserWidget {

	void OnRebootRallyEligibilityUpdated(bool bEligible); // Function BattlePassS22UI.RebootRallyQuestPanel.OnRebootRallyEligibilityUpdated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

