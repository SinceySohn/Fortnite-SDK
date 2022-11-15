// Class FortniteConversationUI.FortConversationOptionBrief
// Size: 0x290 (Inherited: 0x290)
struct UFortConversationOptionBrief : UCommonUserWidget {

	void ConfigureBP(struct FConversationContext& ClientContext, struct FClientConversationOptionEntry& OptionEntry, int32_t SelectedIndex); // Function FortniteConversationUI.FortConversationOptionBrief.ConfigureBP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortItemTransactionBrief
// Size: 0x2a8 (Inherited: 0x290)
struct UFortItemTransactionBrief : UFortConversationOptionBrief {
	char pad_290[0x8]; // 0x290(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x298(0x08)
	struct UFortItem* DisplayItem; // 0x2a0(0x08)

	void OnTransactionInfoReceived(struct UFortItem* Item); // Function FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortApplyAbilityBrief
// Size: 0x2c8 (Inherited: 0x2a8)
struct UFortApplyAbilityBrief : UFortItemTransactionBrief {
	struct FText PurchaseServiceText; // 0x2a8(0x18)
	struct UCommonRichTextBlock* Text_Display; // 0x2c0(0x08)

	void OnUnableToPurchase(enum class EPreventAbilityUseReason Reason); // Function FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortBasicBrief
// Size: 0x290 (Inherited: 0x290)
struct UFortBasicBrief : UFortConversationOptionBrief {

	void OnChoiceTextReceived(struct FText& Text); // Function FortniteConversationUI.FortBasicBrief.OnChoiceTextReceived // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortBasicItemBrief
// Size: 0x300 (Inherited: 0x290)
struct UFortBasicItemBrief : UFortConversationOptionBrief {
	char pad_290[0x8]; // 0x290(0x08)
	struct UCommonTextBlock* Text_TitleBar; // 0x298(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x2a0(0x08)
	struct UFortItem* DisplayItem; // 0x2a8(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x2b0(0x50)

	void OnUpdateDescriptionText(struct FText& DescriptionText); // Function FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnUnableToUse(struct FText& Reason); // Function FortniteConversationUI.FortBasicItemBrief.OnUnableToUse // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnItemInfoReceived(struct UFortItem* Item, int32_t StackSize); // Function FortniteConversationUI.FortBasicItemBrief.OnItemInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAbleToUse(bool bShowWarningMessage); // Function FortniteConversationUI.FortBasicItemBrief.OnAbleToUse // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortBuyBrief
// Size: 0x2a8 (Inherited: 0x2a8)
struct UFortBuyBrief : UFortItemTransactionBrief {

	void OnPurchaseDataReceived(int32_t StackSize, int32_t RemainingForSale); // Function FortniteConversationUI.FortBuyBrief.OnPurchaseDataReceived // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDisplayUnavailability(enum class ECannotBuyReason CannotBuyReason); // Function FortniteConversationUI.FortBuyBrief.OnDisplayUnavailability // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortConversationMarker
// Size: 0x440 (Inherited: 0x370)
struct UFortConversationMarker : UFortActorIndicatorWidget {
	char pad_370[0x38]; // 0x370(0x38)
	struct FVector InitialOffset; // 0x3a8(0x18)
	struct FVector ManualOffset; // 0x3c0(0x18)
	float MessageBubbleDuration; // 0x3d8(0x04)
	float LastTextBubbleDuration; // 0x3dc(0x04)
	struct UCommonVisibilitySwitcher* Switcher_States; // 0x3e0(0x08)
	struct UWidget* Overlay_PreviewState; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)
	struct UFortConversationMessageWidget* ConversationMessage_Main; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)
	struct UCommonTextBlock* Text_ParticipantName; // 0x408(0x08)
	char pad_410[0x8]; // 0x410(0x08)
	struct UFortKeybindWidget* Keybind_Nameplate; // 0x418(0x08)
	struct UImage* NPCIcon; // 0x420(0x08)
	struct UTexture2D* CustomDialogMarkerIndicatorIcon; // 0x428(0x08)
	struct UTexture2D* DefaultDialogMarkerIndicatorIcon; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)

	void OnSetIndicatedActor(struct AActor* NewIndicatorActor); // Function FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMessageShownOverActor(struct AActor* OverActor); // Function FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInteractionRangeChanged(enum class EInteractionRange TargetInteractionRange); // Function FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnConversationActorProximityChanged(enum class EInteractionRange TargetInteractionRange, struct UFortNonPlayerConversationParticipantComponent* ConversationComponent); // Function FortniteConversationUI.FortConversationMarker.OnConversationActorProximityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCanInteract(bool bCanInteract); // Function FortniteConversationUI.FortConversationMarker.OnCanInteract // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortConversationMessageWidget
// Size: 0x268 (Inherited: 0x268)
struct UFortConversationMessageWidget : UUserWidget {

	void SetPreviewMessage(struct FText& MessageToSet); // Function FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x656e948
	void OnPreviewMessageSet(struct FText& PreviewText); // Function FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMessageShown(); // Function FortniteConversationUI.FortConversationMessageWidget.OnMessageShown // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMessageHidden(); // Function FortniteConversationUI.FortConversationMessageWidget.OnMessageHidden // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMainMessageSet(struct FText& NPCName, struct FText& MessageBody); // Function FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortConversationOption
// Size: 0x1550 (Inherited: 0x1490)
struct UFortConversationOption : UFortRadialPickerEntry {
	struct USoundBase* OnOptionConfirmedSound; // 0x1490(0x08)
	struct USoundBase* OnOptionHoveredSound; // 0x1498(0x08)
	struct UCommonVisibilitySwitcher* Switcher_DisplayAsset; // 0x14a0(0x08)
	struct TSoftObjectPtr<UObject> DefaultSoftTaskIcon; // 0x14a8(0x28)
	struct TSoftObjectPtr<USoundBase> DefaultConfirmChoiceSound; // 0x14d0(0x28)
	struct TSoftObjectPtr<USoundBase> DefaultHoverChoiceSound; // 0x14f8(0x28)
	char pad_1520[0x30]; // 0x1520(0x30)

	void OnSetupPivotFromRadialInformation(int32_t NumElements, int32_t ItemIndex); // Function FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetupFromItemDef(struct UFortItem* Item); // Function FortniteConversationUI.FortConversationOption.OnSetupFromItemDef // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetupFromDisplayAsset(struct UObject* DisplayAsset); // Function FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOptionConfirmed(); // Function FortniteConversationUI.FortConversationOption.OnOptionConfirmed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	bool IsAvailable(); // Function FortniteConversationUI.FortConversationOption.IsAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x656e910
};

// Class FortniteConversationUI.FortConversationOptionsPanel
// Size: 0x178 (Inherited: 0x160)
struct UFortConversationOptionsPanel : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)
	int32_t MaxRows; // 0x170(0x04)
	int32_t MiddleColumnWidth; // 0x174(0x04)

	struct UPanelSlot* AddChildToDynamicPanel(struct UWidget* Content); // Function FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x656e4fc
};

// Class FortniteConversationUI.FortConversationScreen
// Size: 0x578 (Inherited: 0x3a8)
struct UFortConversationScreen : UCommonActivatableWidget {
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct UCommonVisibilitySwitcher* Switcher_Details; // 0x3b8(0x08)
	char pad_3C0[0x38]; // 0x3c0(0x38)
	struct UInputComponent* ConversationInputComp; // 0x3f8(0x08)
	int32_t CurrentlySelectedIndex; // 0x400(0x04)
	bool bBlockOptionIntroAnimation; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	struct FName RadialSelectionMaterialParameterName; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct TArray<struct FGameplayTag> TagPriorities; // 0x410(0x10)
	struct FName InteractActionNameKBM; // 0x420(0x04)
	struct FName ADSInputAction; // 0x424(0x04)
	struct FName InteractActionNameGamepad; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct FDataTableRowHandle ConfirmBinding; // 0x430(0x10)
	struct FDataTableRowHandle MakeSelectionBinding; // 0x440(0x10)
	struct FDataTableRowHandle ADSMouseBinding; // 0x450(0x10)
	struct FDataTableRowHandle CancelActionBinding; // 0x460(0x10)
	struct FDataTableRowHandle RightTriggerBinding; // 0x470(0x10)
	struct TMap<struct FString, struct TSoftClassPtr<UObject>> DetailsNodeTypeToBrief; // 0x480(0x50)
	struct TSoftClassPtr<UObject> ChatBrief; // 0x4d0(0x28)
	struct FString DataDrivenBriefPrefix; // 0x4f8(0x10)
	struct TSoftClassPtr<UObject> DataDrivenBrief; // 0x508(0x28)
	struct UFortSlottedRadialMenu* RadialMenu_DialogOptions; // 0x530(0x08)
	struct UImage* Image_RadialHighlight; // 0x538(0x08)
	struct UFortKeybindWidget* Keybind_Confirm; // 0x540(0x08)
	struct UFortBasicBrief* BasicBrief_Main; // 0x548(0x08)
	struct USizeBox* SizeBox_RadialMenu; // 0x550(0x08)
	struct UWidget* Overlay_Details; // 0x558(0x08)
	struct UWidget* Overlay_WheelContainer; // 0x560(0x08)
	struct UImage* Image_Background; // 0x568(0x08)
	struct UImage* Image_LoadingSpinner; // 0x570(0x08)

	bool ShouldBlockOptionIntroAnim(); // Function FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a72cf4
	void OnSelectedItemAvailabilityChanged(bool bIsAvailable); // Function FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOptionsPopulated(); // Function FortniteConversationUI.FortConversationScreen.OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnItemSelected(int32_t OriginalIndex); // Function FortniteConversationUI.FortConversationScreen.OnItemSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnConversationStarted(); // Function FortniteConversationUI.FortConversationScreen.OnConversationStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnConversationOptionUnavailable(struct UFortRadialSlot* SelectedEntry); // Function FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EndConversation(); // Function FortniteConversationUI.FortConversationScreen.EndConversation // (Final|Native|Protected) // @ game+0x656e624
};

// Class FortniteConversationUI.FortDataDrivenServiceBrief
// Size: 0x308 (Inherited: 0x290)
struct UFortDataDrivenServiceBrief : UFortConversationOptionBrief {
	char pad_290[0x8]; // 0x290(0x08)
	struct UCommonTextBlock* Text_TitleBar; // 0x298(0x08)
	struct UCommonRichTextBlock* RichText_Description; // 0x2a0(0x08)
	struct UCommonTextBlock* Text_StockRemaining; // 0x2a8(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x2b0(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x2b8(0x50)

	void OnUnableToPurchase(struct FText& Reason); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnTransactionInfoReceived(struct UFortItem* Item); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortDuelBrief
// Size: 0x2d0 (Inherited: 0x2a8)
struct UFortDuelBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2a8(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x2c0(0x08)
	struct UCommonTileView* TileView; // 0x2c8(0x08)

	void DisplayLootItems(struct TArray<struct UFortItem*>& Items); // Function FortniteConversationUI.FortDuelBrief.DisplayLootItems // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortHireBrief
// Size: 0x2c8 (Inherited: 0x2a8)
struct UFortHireBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2a8(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x2c0(0x08)
};

// Class FortniteConversationUI.FortIntelBrief
// Size: 0x2c8 (Inherited: 0x2a8)
struct UFortIntelBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2a8(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x2c0(0x08)
};

// Class FortniteConversationUI.FortItemFundBrief
// Size: 0x3c0 (Inherited: 0x290)
struct UFortItemFundBrief : UCommonUserWidget {
	char pad_290[0x8]; // 0x290(0x08)
	struct FEventMessageTag CurrentFundsChangedTag; // 0x298(0x04)
	char pad_29C[0xa4]; // 0x29c(0xa4)
	struct UCommonTextBlock* Text_TitleBar; // 0x340(0x08)
	struct UCommonTextBlock* Text_ProgressPercent; // 0x348(0x08)
	struct UCommonTextBlock* Text_ProgressCount; // 0x350(0x08)
	struct UFortSimpleMaterialProgressBar* Progress_Funding; // 0x358(0x08)
	struct UFortLazyImage* LazyImage_Icon; // 0x360(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x368(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x370(0x50)

	void OnProgressUpdated(float CurrentFundingFraction); // Function FortniteConversationUI.FortItemFundBrief.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnIntializationComplete(); // Function FortniteConversationUI.FortItemFundBrief.OnIntializationComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void InitializeFromContext(struct FConversationContext& ConversationContext); // Function FortniteConversationUI.FortItemFundBrief.InitializeFromContext // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	struct FText GetDataForKey(struct FString Key, bool bUseIndexAdjustment); // Function FortniteConversationUI.FortItemFundBrief.GetDataForKey // (Final|Native|Private|BlueprintCallable) // @ game+0x656e638
};

// Class FortniteConversationUI.FortSingleItemFundBrief
// Size: 0x2f8 (Inherited: 0x290)
struct UFortSingleItemFundBrief : UFortConversationOptionBrief {
	char pad_290[0x8]; // 0x290(0x08)
	struct UFortItemFundBrief* Item_Entry; // 0x298(0x08)
	struct UFortNPCTextDisplay* NPCTextDisplay; // 0x2a0(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x2a8(0x50)
};

// Class FortniteConversationUI.FortMultiItemFundBrief
// Size: 0x308 (Inherited: 0x2f8)
struct UFortMultiItemFundBrief : UFortSingleItemFundBrief {
	struct UFortItemFundBrief* Item_EntrySecondary; // 0x2f8(0x08)
	struct UFortItemFundBrief* Item_EntryTertiary; // 0x300(0x08)

	void UpdateSelectedVisuals(int32_t SelectedIndex); // Function FortniteConversationUI.FortMultiItemFundBrief.UpdateSelectedVisuals // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortNPCTextDisplay
// Size: 0x278 (Inherited: 0x268)
struct UFortNPCTextDisplay : UUserWidget {
	struct UCommonRichTextBlock* Text_Message; // 0x268(0x08)
	struct UFortLazyImage* LazyImage_NPCImage; // 0x270(0x08)

	void OnTextUpdated(); // Function FortniteConversationUI.FortNPCTextDisplay.OnTextUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnItemNameUpdated(struct FString ItemName); // Function FortniteConversationUI.FortNPCTextDisplay.OnItemNameUpdated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortQuestBrief
// Size: 0x2e0 (Inherited: 0x290)
struct UFortQuestBrief : UFortConversationOptionBrief {
	char pad_290[0x8]; // 0x290(0x08)
	struct FText ThisMatchOnlyQuestText; // 0x298(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x2b0(0x08)
	struct UCommonTextBlock* Text_MoneyReward; // 0x2b8(0x08)
	struct UCommonTextBlock* Text_XpReward; // 0x2c0(0x08)
	struct UCommonTextBlock* Text_ExpirationTime; // 0x2c8(0x08)
	struct UCommonLazyImage* LazyImage_QuestProviderImage; // 0x2d0(0x08)
	struct UOverlay* Overlay_QuestProvider; // 0x2d8(0x08)

	void OnQuestInformationRecieved(struct FText& Objective, struct FFortRarityItemData& RarityData, struct FGameplayTag& CategoryTag, int32_t XPReward, int32_t MoneyReward); // Function FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnQuestExpirationTimeSet(bool bDisplayExpirationTime); // Function FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortShowFutureStormCircleBrief
// Size: 0x2c8 (Inherited: 0x2a8)
struct UFortShowFutureStormCircleBrief : UFortItemTransactionBrief {
	struct FText PurchaseServiceText; // 0x2a8(0x18)
	struct UCommonRichTextBlock* Text_Display; // 0x2c0(0x08)

	void OnUnableToPurchase(enum class EPreventUseStormCircleServiceReason Reason); // Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.FortSingleOrMultiItemFundBrief
// Size: 0x2f0 (Inherited: 0x290)
struct UFortSingleOrMultiItemFundBrief : UFortConversationOptionBrief {
	char pad_290[0x8]; // 0x290(0x08)
	struct TSoftClassPtr<UObject> SingleItemBrief; // 0x298(0x28)
	struct TSoftClassPtr<UObject> MultiItemsBrief; // 0x2c0(0x28)
	struct UOverlay* Overlay_Brief; // 0x2e8(0x08)
};

// Class FortniteConversationUI.FortTransactionStrip
// Size: 0x288 (Inherited: 0x268)
struct UFortTransactionStrip : UUserWidget {
	struct UCommonTextBlock* Text_CostDescription; // 0x268(0x08)
	struct UFortWorldItemDefinition* ResourceCurrency; // 0x270(0x08)
	char pad_278[0x10]; // 0x278(0x10)

	void OnTransactionInfoReceived(struct FFortServiceTransactionInfo& TransactionInfo); // Function FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetTransactionCostVisibility(bool bVisible); // Function FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleOnItemCountChanged(struct TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, struct UFortItemDefinition* Definition, int32_t Delta); // Function FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged // (Final|Native|Private) // @ game+0x656e80c
};

// Class FortniteConversationUI.FortUpgradeBrief
// Size: 0x2a8 (Inherited: 0x2a8)
struct UFortUpgradeBrief : UFortItemTransactionBrief {

	void OnUpgradeInfoReceived(struct UFortItem* CurrentWeapon); // Function FortniteConversationUI.FortUpgradeBrief.OnUpgradeInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUnableToUpgrade(enum class EFortWeaponUpgradeInteractionResult CannotUpgradeCause); // Function FortniteConversationUI.FortUpgradeBrief.OnUnableToUpgrade // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class FortniteConversationUI.MobileConversationScreen
// Size: 0x5a0 (Inherited: 0x578)
struct UMobileConversationScreen : UFortConversationScreen {
	struct UButton* MobileButtonConfirm; // 0x578(0x08)
	struct UButton* MobileButtonTouchInformation; // 0x580(0x08)
	char pad_588[0x8]; // 0x588(0x08)
	struct UCommonButtonBase* MobileCloseButton; // 0x590(0x08)
	struct UCommonVisibilitySwitcher* Switcher_CenteredDetails; // 0x598(0x08)

	void OnHandleConfirmClicked(); // Function FortniteConversationUI.MobileConversationScreen.OnHandleConfirmClicked // (Final|Native|Protected) // @ game+0x656e934
};

