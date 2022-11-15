// Class EventScreenBase.FortEventMoreInfoModal
// Size: 0x3b8 (Inherited: 0x3a8)
struct UFortEventMoreInfoModal : UCommonActivatableWidget {
	struct UCommonButtonBase* Button_Back; // 0x3a8(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x3b0(0x08)

	void SetModalText(struct FText& Header, struct FText& SubHeader, struct FText& Body, struct FText& Legal); // Function EventScreenBase.FortEventMoreInfoModal.SetModalText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnModalBackout(); // Function EventScreenBase.FortEventMoreInfoModal.OnModalBackout // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExitModal(); // Function EventScreenBase.FortEventMoreInfoModal.ExitModal // (Native|Protected|BlueprintCallable) // @ game+0x171a570
};

// Class EventScreenBase.FortEventPurchaseModal
// Size: 0x418 (Inherited: 0x3a8)
struct UFortEventPurchaseModal : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UCommonButtonBase* Button_Addition; // 0x3b0(0x08)
	struct UCommonButtonBase* Button_Subtraction; // 0x3b8(0x08)
	struct UFortHoldableButton* Button_Purchase; // 0x3c0(0x08)
	struct UCommonButtonBase* Button_GetVBucks; // 0x3c8(0x08)
	struct UCommonButtonBase* Button_Back; // 0x3d0(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x3d8(0x08)
	struct UEventScreenListView* ListView_RewardPreview; // 0x3e0(0x08)
	int32_t CurrentResourceValue; // 0x3e8(0x04)
	int32_t MaxResourceValue; // 0x3ec(0x04)
	int32_t CurrentVBucks; // 0x3f0(0x04)
	int32_t OfferResourceQuantity; // 0x3f4(0x04)
	struct UFortItemDefinition* LevelPreviewItem; // 0x3f8(0x08)
	char pad_400[0x18]; // 0x400(0x18)

	void OnTotalPriceChanged(int32_t NewPrice); // Function EventScreenBase.FortEventPurchaseModal.OnTotalPriceChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPurchaseAmountChanged(int32_t PurchaseQuantity, int32_t ResourceQuantity); // Function EventScreenBase.FortEventPurchaseModal.OnPurchaseAmountChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCMSTextApplied(struct FText& LegalText); // Function EventScreenBase.FortEventPurchaseModal.OnCMSTextApplied // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnAmountChangeButtonClicked(); // Function EventScreenBase.FortEventPurchaseModal.OnAmountChangeButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandlePurchaseComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString InOfferId); // Function EventScreenBase.FortEventPurchaseModal.HandlePurchaseComplete // (Final|Native|Private|HasOutParms) // @ game+0x691d8d4
};

// Class EventScreenBase.FortEventWidgetBase
// Size: 0x270 (Inherited: 0x268)
struct UFortEventWidgetBase : UUserWidget {
	char pad_268[0x8]; // 0x268(0x08)
};

// Class EventScreenBase.FortEventRewardWidget
// Size: 0x310 (Inherited: 0x270)
struct UFortEventRewardWidget : UFortEventWidgetBase {
	struct FText RequiredResourceFormat; // 0x270(0x18)
	struct FText RemainingResourceFormat; // 0x288(0x18)
	struct UCommonButtonBase* Button_RewardPreview; // 0x2a0(0x08)
	struct UFortCosmeticItemCard* UserWidget_ItemCard; // 0x2a8(0x08)
	bool bPreviewMode; // 0x2b0(0x01)
	char pad_2B1[0x5f]; // 0x2b1(0x5f)

	void SetProgressPercent(float Percent); // Function EventScreenBase.FortEventRewardWidget.SetProgressPercent // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetInSelectedState(bool bSelected); // Function EventScreenBase.FortEventRewardWidget.SetInSelectedState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetInPreviewSelectedState(bool bSelected); // Function EventScreenBase.FortEventRewardWidget.SetInPreviewSelectedState // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetAllRewardsCollected(bool bAllCollected); // Function EventScreenBase.FortEventRewardWidget.SetAllRewardsCollected // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // Function EventScreenBase.FortEventRewardWidget.OnSetRewardItem // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputMethodChanged(enum class ECommonInputType NewInputType); // Function EventScreenBase.FortEventRewardWidget.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class EventScreenBase.FortEventSpacerWidget
// Size: 0x270 (Inherited: 0x270)
struct UFortEventSpacerWidget : UFortEventWidgetBase {
};

// Class EventScreenBase.FortEventScreenBase
// Size: 0xa38 (Inherited: 0x668)
struct UFortEventScreenBase : UFortItemPreviewScreen {
	char pad_668[0x8]; // 0x668(0x08)
	struct TArray<struct UNamedSlot*> LayoutTemplateSlots; // 0x670(0x10)
	struct UPanelWidget* Panel_LandingScreen; // 0x680(0x08)
	struct UFortLazyImage* LazyImage_KeyArt; // 0x688(0x08)
	struct UCommonButtonBase* Button_ViewQuests; // 0x690(0x08)
	struct UCommonButtonBase* Button_MoreInfo; // 0x698(0x08)
	struct UCommonButtonBase* Button_PurchaseReward; // 0x6a0(0x08)
	struct UCommonButtonBase* Button_Preview; // 0x6a8(0x08)
	struct UPanelWidget* Panel_RewardPreview; // 0x6b0(0x08)
	struct UCommonButtonBase* Button_Previous; // 0x6b8(0x08)
	struct UCommonButtonBase* Button_Next; // 0x6c0(0x08)
	struct UPanelWidget* Panel_LoadError; // 0x6c8(0x08)
	struct UCommonButtonBase* Button_Close; // 0x6d0(0x08)
	struct UCommonButtonBase* Button_MobileClose; // 0x6d8(0x08)
	struct UCommonTextBlock* Text_ItemDescription; // 0x6e0(0x08)
	struct UCommonTextBlock* Text_ItemName; // 0x6e8(0x08)
	struct UCommonTextBlock* Text_SetDetails; // 0x6f0(0x08)
	struct UAthenaRewardItemTypeRarityTag* ItemRewardTag; // 0x6f8(0x08)
	struct TSoftObjectPtr<UFortChallengeBundleItemDefinition> QuestBundle; // 0x700(0x28)
	struct FString EventCMSId; // 0x728(0x10)
	struct FString AccountResourceName; // 0x738(0x10)
	struct FString LevelOfferId; // 0x748(0x10)
	struct FGameplayTag QuestCategoryTag; // 0x758(0x04)
	char pad_75C[0x4]; // 0x75c(0x04)
	struct FSharedEventTrackerModuleData SharedModuleData; // 0x760(0x08)
	struct FText TimeRemainingFormat; // 0x768(0x18)
	float RewardPreviewZoomLevel; // 0x780(0x04)
	char pad_784[0x4]; // 0x784(0x04)
	struct TSoftObjectPtr<UFortItemDefinition> SpecialRewardItem; // 0x788(0x28)
	struct TSoftClassPtr<UObject> MoreInfoModalClass; // 0x7b0(0x28)
	struct TSoftClassPtr<UObject> PurchaseModalClass; // 0x7d8(0x28)
	struct UFortChallengeBundleItemDefinition* LoadedQuestBundle; // 0x800(0x08)
	struct AFortItemPreviewWorld* CachedVaultWorld; // 0x808(0x08)
	char pad_810[0x18]; // 0x810(0x18)
	struct UFortItem* DefaultItemToPreview; // 0x828(0x08)
	char pad_830[0x208]; // 0x830(0x208)

	void OnPopulateRewardBackground(struct FLinearColor& Color1, struct FLinearColor& Color2, struct FLinearColor& Color3); // Function EventScreenBase.FortEventScreenBase.OnPopulateRewardBackground // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateEventBackground(struct FLinearColor& Color1, struct FLinearColor& Color2); // Function EventScreenBase.FortEventScreenBase.OnPopulateEventBackground // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xdef49c
	void HandleToggleFullscreenMap(bool bVisible); // Function EventScreenBase.FortEventScreenBase.HandleToggleFullscreenMap // (Final|Native|Private) // @ game+0x691db74
	void HandleGiftBoxClosed(); // Function EventScreenBase.FortEventScreenBase.HandleGiftBoxClosed // (Final|Native|Private) // @ game+0x691d8c0
};

// Class EventScreenBase.EventScreenListView
// Size: 0x3e0 (Inherited: 0x260)
struct UEventScreenListView : UListViewBase {
	char pad_260[0xd8]; // 0x260(0xd8)
	struct FMulticastInlineDelegate OnProgressBarAnimationStartedEvent; // 0x338(0x10)
	struct FMulticastInlineDelegate OnProgressBarAnimationCompletedEvent; // 0x348(0x10)
	struct FMulticastInlineDelegate OnProgressBarAnimationInterruptedEvent; // 0x358(0x10)
	char pad_368[0x20]; // 0x368(0x20)
	struct UFortEventRewardWidget* RewardWidgetClass; // 0x388(0x08)
	struct UFortEventSpacerWidget* SpacerWidgetClass; // 0x390(0x08)
	float EntrySpacing; // 0x398(0x04)
	float MaxItemsInView; // 0x39c(0x04)
	bool bPreviewMode; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UCurveFloat* ProgressAnimationCurve; // 0x3a8(0x08)
	char pad_3B0[0x30]; // 0x3b0(0x30)
};

// Class EventScreenBase.FortEventTokenCollectionWidget
// Size: 0x2d8 (Inherited: 0x268)
struct UFortEventTokenCollectionWidget : UUserWidget {
	struct UCommonLazyImage* LazyImage_GhostIcon; // 0x268(0x08)
	struct UCommonLazyImage* LazyImage_CompletedIcon; // 0x270(0x08)
	struct UImage* Image_Glow; // 0x278(0x08)
	struct TSoftObjectPtr<UTexture2D> FallbackBrush; // 0x280(0x28)
	struct TSoftObjectPtr<UFortTokenType> TokenDefinition; // 0x2a8(0x28)
	char pad_2D0[0x8]; // 0x2d0(0x08)

	void OnRefreshIcon(bool IsCollected); // Function EventScreenBase.FortEventTokenCollectionWidget.OnRefreshIcon // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class EventScreenBase.FortEventTrackerModule
// Size: 0x270 (Inherited: 0x268)
struct UFortEventTrackerModule : UUserWidget {
	char pad_268[0x8]; // 0x268(0x08)

	void OnInitialize(struct FSharedEventTrackerModuleData& InSharedData); // Function EventScreenBase.FortEventTrackerModule.OnInitialize // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	struct FSharedEventTrackerModuleData GetSharedData(); // Function EventScreenBase.FortEventTrackerModule.GetSharedData // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x691d8a8
};

// Class EventScreenBase.FortEventTrackerModule_EventDetails
// Size: 0x270 (Inherited: 0x270)
struct UFortEventTrackerModule_EventDetails : UFortEventTrackerModule {

	void UpdateEventTimeRemaining(struct FText& OutEventTimeRemaining); // Function EventScreenBase.FortEventTrackerModule_EventDetails.UpdateEventTimeRemaining // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateTextAccentColor(struct FLinearColor& AccentColor); // Function EventScreenBase.FortEventTrackerModule_EventDetails.OnPopulateTextAccentColor // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateEventDetailsText(struct FText& OutEventName, struct FText& OutEventDescription); // Function EventScreenBase.FortEventTrackerModule_EventDetails.OnPopulateEventDetailsText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class EventScreenBase.FortEventTrackerModule_Header
// Size: 0x270 (Inherited: 0x270)
struct UFortEventTrackerModule_Header : UFortEventTrackerModule {

	void OnPopulateEventResourceStarterHeader(struct FText& Header); // Function EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceStarterHeader // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateEventResourceHeader(struct FText& Header, int32_t ResourceValue); // Function EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceHeader // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateBackgroundMaterialColors(struct FLinearColor& Color1, struct FLinearColor& Color2); // Function EventScreenBase.FortEventTrackerModule_Header.OnPopulateBackgroundMaterialColors // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xdef49c
};

// Class EventScreenBase.FortEventTrackerModule_ProgressiveRewards
// Size: 0x278 (Inherited: 0x270)
struct UFortEventTrackerModule_ProgressiveRewards : UFortEventTrackerModule {
	struct UEventScreenListView* ListView_Rewards; // 0x270(0x08)

	void OnPopulateCompletionMessage(bool bIsComplete, struct FText& CompletionText); // Function EventScreenBase.FortEventTrackerModule_ProgressiveRewards.OnPopulateCompletionMessage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

// Class EventScreenBase.FortEventTrackerModule_Collection
// Size: 0x270 (Inherited: 0x270)
struct UFortEventTrackerModule_Collection : UFortEventTrackerModule {

	void OnGatherTokenCollectionWidgets(struct TArray<struct UFortEventTokenCollectionWidget*>& OutCollectionWidgets); // Function EventScreenBase.FortEventTrackerModule_Collection.OnGatherTokenCollectionWidgets // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0xdef49c
};

// Class EventScreenBase.FortEventTrackerModule_Banner
// Size: 0x278 (Inherited: 0x270)
struct UFortEventTrackerModule_Banner : UFortEventTrackerModule {
	struct UFortLazyImage* LazyImage_BannerArt; // 0x270(0x08)

	void OnPopulateTextAccentColor(struct FLinearColor& AccentColor); // Function EventScreenBase.FortEventTrackerModule_Banner.OnPopulateTextAccentColor // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateBannerText(struct FText& BannerText); // Function EventScreenBase.FortEventTrackerModule_Banner.OnPopulateBannerText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateBannerBackgroundMaterialColors(struct FLinearColor& Color1, struct FLinearColor& Color2, struct FLinearColor& Color3); // Function EventScreenBase.FortEventTrackerModule_Banner.OnPopulateBannerBackgroundMaterialColors // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xdef49c
	void OnCTACompleted(bool bIsComplete); // Function EventScreenBase.FortEventTrackerModule_Banner.OnCTACompleted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

