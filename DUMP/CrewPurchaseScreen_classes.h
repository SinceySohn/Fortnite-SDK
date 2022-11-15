// WidgetBlueprintGeneratedClass CrewPurchaseScreen.CrewPurchaseScreen_C
// Size: 0x738 (Inherited: 0x578)
struct UCrewPurchaseScreen_C : UCrewPurchaseScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UWidgetAnimation* NewTile; // 0x580(0x08)
	struct UWidgetAnimation* TransitionOut; // 0x588(0x08)
	struct UWidgetAnimation* TransitionIn; // 0x590(0x08)
	struct UCommonBorder* Border_Disclaimer; // 0x598(0x08)
	struct UCommonBorder* Border_LimitedTimeText; // 0x5a0(0x08)
	struct UCommonBorder* Border_RecurringText; // 0x5a8(0x08)
	struct UCommonBorder* Border_Subtitle; // 0x5b0(0x08)
	struct UCrewCrown_Animated_C* CrewCrown_Animated; // 0x5b8(0x08)
	struct UErrorInfoFlag_C* ErrorInfoFlag1; // 0x5c0(0x08)
	struct UErrorInfoFlag_C* ErrorInfoFlag2; // 0x5c8(0x08)
	struct UImage* Image_BGDarken; // 0x5d0(0x08)
	struct UImage* Image_CMSBG; // 0x5d8(0x08)
	struct UImage* Image_ErrorBG; // 0x5e0(0x08)
	struct UImage* Image_ErrorBG_Accent; // 0x5e8(0x08)
	struct UImage* Image_GradientBacking; // 0x5f0(0x08)
	struct ULightbox_C* LightBox_Progress; // 0x5f8(0x08)
	struct UMTXButton_C* MTXButton; // 0x600(0x08)
	struct UUpsell_TutorialTooltip_C* NavButtonNotification; // 0x608(0x08)
	struct UOverlay* Overlay_Background; // 0x610(0x08)
	struct UOverlay* Overlay_MainContent; // 0x618(0x08)
	struct UOverlay* Overlay_PurchaseButton; // 0x620(0x08)
	struct UImage* ProgressSpinner; // 0x628(0x08)
	struct UVerticalBox* ProgressVBox; // 0x630(0x08)
	struct USafeZone* ; // 0x638(0x08)
	struct USafeZone* SafeZone_BottomRight; // 0x640(0x08)
	struct USafeZone* SafeZone_Content; // 0x648(0x08)
	struct USafeZone* SafeZone_ContentPurchase_Pad; // 0x650(0x08)
	struct USafeZone* SafeZone_TopRight; // 0x658(0x08)
	struct UScaleBox* ; // 0x660(0x08)
	struct USizeBox* SizeBox_Content; // 0x668(0x08)
	struct USizeBox* SizeBox_LeftContent; // 0x670(0x08)
	struct UNamedSlot* Slot_Null; // 0x678(0x08)
	struct USpacer* Spacer_NavPlaceholder; // 0x680(0x08)
	struct UWidgetSwitcher* Switcher_Content; // 0x688(0x08)
	struct UCommonTextBlock* Text_ProgressLabel; // 0x690(0x08)
	struct UUpsell_TutorialTooltip_C* Upsell_TutorialTooltip; // 0x698(0x08)
	struct UVerticalBox* VerticalBox_RightContent_Pad; // 0x6a0(0x08)
	struct UCommonVisibilitySwitcher* VisibilitySwitcher_PurchaseRejoinState; // 0x6a8(0x08)
	struct TArray<struct UBorder*> RowTitles; // 0x6b0(0x10)
	struct FLinearColor AccentColor; // 0x6c0(0x10)
	struct FLinearColor SubHeaderColor; // 0x6d0(0x10)
	struct FLinearColor FadeColor; // 0x6e0(0x10)
	struct UMaterialInstanceDynamic* ImageMID; // 0x6f0(0x08)
	struct FMulticastInlineDelegate Dispatch_TransitionIn; // 0x6f8(0x10)
	struct UTexture2D* OldBackground; // 0x708(0x08)
	struct TSoftObjectPtr<UTexture> DesignTimeAsset; // 0x710(0x28)

	struct UWidget* UpFromLimitedTimeRewards(enum class EUINavigation Navigation); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.UpFromLimitedTimeRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UWidget* DownFromRecurringRewards(enum class EUINavigation Navigation); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.DownFromRecurringRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UWidget* UpToFirstTile(enum class EUINavigation Navigation); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.UpToFirstTile // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Up Error Info Flags(struct FText& UserInformationText 1, struct FText& UserInformationText 2, enum class EMcpSubscriptionState SubscriptionState); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.Set Up Error Info Flags // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateLayoutForTabs(bool bTabsVisible, double SpacingAdjustmentForTabs); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.UpdateLayoutForTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdatePurchaseButtonState(enum class ECrewPurchaseButtonState ButtonState); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnUpdatePurchaseButtonState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BeginProgress(struct FText& ProgressLabel); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.BeginProgress // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventSetColors(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.EventSetColors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnStartingDownloadBackground(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnStartingDownloadBackground // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDownloadBackgroundComplete(struct UTexture2D* NewBackground); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnDownloadBackgroundComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventScreenTransitionIn(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.EventScreenTransitionIn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EndProgress(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.EndProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetDesignTimeImages(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.SetDesignTimeImages // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateVBuckRefundVisibility(bool bVisible); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnUpdateVBuckRefundVisibility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnContainerTabVisibilityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnShowNavButtonNotification(bool bShowNotification); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnShowNavButtonNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetNavButtonNotificationText(struct FText& NotificationText); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnSetNavButtonNotificationText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnUserInformationTextsUpdated(struct FText& UserInformationText1, struct FText& UserInformationText2, enum class EMcpSubscriptionState SubscriptionState); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnUserInformationTextsUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CrewPurchaseScreen(int32_t EntryPoint); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.ExecuteUbergraph_CrewPurchaseScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void Dispatch_TransitionIn__DelegateSignature(); // Function CrewPurchaseScreen.CrewPurchaseScreen_C.Dispatch_TransitionIn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

