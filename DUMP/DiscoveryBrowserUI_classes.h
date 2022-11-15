// Class DiscoveryBrowserUI.FortActivityBrowserTabButton
// Size: 0x1410 (Inherited: 0x1410)
struct UFortActivityBrowserTabButton : UFortTabButton {

	void OnFavoriteChanged(bool bIsFavorite); // Function DiscoveryBrowserUI.FortActivityBrowserTabButton.OnFavoriteChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class DiscoveryBrowserUI.FortActivityBrowserView
// Size: 0x488 (Inherited: 0x3f8)
struct UFortActivityBrowserView : UFortActivityView {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	bool bShowCustomMatchmakingModalButton; // 0x400(0x01)
	bool bShowSpectateMatchModalButton; // 0x401(0x01)
	bool bShowMobileGameDetailsButton; // 0x402(0x01)
	bool bShowMobileAcceptButton; // 0x403(0x01)
	bool bShowBackToTopButton; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	struct FName DiscoverySurfaceName; // 0x408(0x04)
	char pad_40C[0x7c]; // 0x40c(0x7c)

	void OnSurfaceDataDirty(); // Function DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	enum class EFortInvalidActivityReason GetInvalidActivityReason(); // Function DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903824
};

// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
// Size: 0x5b0 (Inherited: 0x488)
struct UFortActivityPlayerBrowserView : UFortActivityBrowserView {
	char pad_488[0x8]; // 0x488(0x08)
	struct UFortGameActivityProvider* ActivityProvider; // 0x490(0x08)
	struct UFortActivityTileView* TileView_PlayerActivities; // 0x498(0x08)
	struct FName TabNameID; // 0x4a0(0x04)
	char pad_4A4[0xc]; // 0x4a4(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4b0(0xe0)
	enum class EFortCreativeDiscoveryPlayHistoryType PlayHistoryProviderType; // 0x590(0x01)
	char pad_591[0x1f]; // 0x591(0x1f)

	void PlayViewIntro(); // Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro // (Final|Native|Public|BlueprintCallable) // @ game+0x6903f1c
	void OnPlayViewIntro(); // Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnTileViewUpdated(); // Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class DiscoveryBrowserUI.FortActivityCategoryPageView
// Size: 0x5c0 (Inherited: 0x5b0)
struct UFortActivityCategoryPageView : UFortActivityPlayerBrowserView {
	struct UCommonRichTextBlock* Text_CategoryTitle; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class DiscoveryBrowserUI.FortActivityCreatorPageView
// Size: 0x660 (Inherited: 0x5c0)
struct UFortActivityCreatorPageView : UFortActivityCategoryPageView {
	char pad_5C0[0x18]; // 0x5c0(0x18)
	int32_t AmountOfCreatorLinkEntriesQueried; // 0x5d8(0x04)
	int32_t ProcessedCreatorLinkEntries; // 0x5dc(0x04)
	struct UCommonButtonBase* Button_MobileClose; // 0x5e0(0x08)
	struct UCommonButtonBase* Button_MobileAccept; // 0x5e8(0x08)
	struct UCommonButtonBase* Button_Back; // 0x5f0(0x08)
	struct UCommonButtonBase* Button_JoinAsSpectator; // 0x5f8(0x08)
	struct UCommonButtonBase* Button_MobileShowGameDetails; // 0x600(0x08)
	int32_t AmountOfEntriesQueried; // 0x608(0x04)
	char pad_60C[0x54]; // 0x60c(0x54)

	void OnPlayerQueueTypeChanged(enum class EPlayerQueueType PlayerQueueType); // Function DiscoveryBrowserUI.FortActivityCreatorPageView.OnPlayerQueueTypeChanged // (Event|Protected|BlueprintEvent|Const) // @ game+0xdef49c
	void OnCreatorActivitiesQueryFinished(); // Function DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class DiscoveryBrowserUI.FortActivityListItemWrapper
// Size: 0x38 (Inherited: 0x28)
struct UFortActivityListItemWrapper : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class DiscoveryBrowserUI.FortActivityBrowser
// Size: 0x638 (Inherited: 0x3a8)
struct UFortActivityBrowser : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_MainContent; // 0x3b0(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_TabActivityBrowserViews; // 0x3b8(0x08)
	struct UFortActivityCategoryPageView* View_CategoryPage; // 0x3c0(0x08)
	struct UCommonButtonBase* Button_Back; // 0x3c8(0x08)
	struct UCommonButtonBase* Button_ShowCustomMatchmakingModal; // 0x3d0(0x08)
	struct UCommonButtonBase* Button_BackToTop; // 0x3d8(0x08)
	struct UCommonButtonBase* Button_MobileShowGameDetails; // 0x3e0(0x08)
	struct UCommonButtonBase* Button_MobileAccept; // 0x3e8(0x08)
	struct UCommonButtonBase* Button_MobileClose; // 0x3f0(0x08)
	struct UCommonButtonBase* Button_JoinAsSpectator; // 0x3f8(0x08)
	struct UCommonButtonBase* Button_ShowSpectateMatchModal; // 0x400(0x08)
	struct UFortTabListWidgetBase* TabList_BrowserTabs; // 0x408(0x08)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x410(0x03)
	char pad_413[0x5]; // 0x413(0x05)
	struct UFortTabButton* TabButtonClass; // 0x418(0x08)
	struct UFortActivityDetailsModal* ActivityDetailsModalClass; // 0x420(0x08)
	struct UFortActivityModeSetSelectionModal* ActivityModeSetSelectionModalClass; // 0x428(0x08)
	struct UCommonActivatableWidget* ActivityModeSetFirstTimeNotificationModalClass; // 0x430(0x08)
	struct UFortActivityCreatorPageView* CreatorPageViewClass; // 0x438(0x08)
	struct TSoftClassPtr<UObject> SoftCustomMatchmakingModalClass; // 0x440(0x28)
	struct TSoftClassPtr<UObject> SoftSpectateMatchModalClass; // 0x468(0x28)
	struct UFortCampaignPurchaseScreen* CampaignPurchaseScreenClass; // 0x490(0x08)
	struct TMap<struct FName, struct UFortActivityBrowserColorSchemeAsset*> ColorSchemes; // 0x498(0x50)
	struct UFortCreativeDiscoverySurfaceManager* Manager; // 0x4e8(0x08)
	struct TArray<struct FCachedSurfaceData> CachedSurfacesData; // 0x4f0(0x10)
	char pad_500[0x100]; // 0x500(0x100)
	struct UFortGameActivityProvider* CachedWinterfestActivityProvider; // 0x600(0x08)
	char pad_608[0x10]; // 0x608(0x10)
	struct UFortActivityBrowserColorSchemeAsset* CurrentColorScheme; // 0x618(0x08)
	char pad_620[0x8]; // 0x620(0x08)
	struct UFortActivityCreatorPageView* CachedCreatorPageView; // 0x628(0x08)
	char pad_630[0x8]; // 0x630(0x08)

	void OnUpdateCategoryPage(bool bShowCategoryPage); // Function DiscoveryBrowserUI.FortActivityBrowser.OnUpdateCategoryPage // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme); // Function DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPlayerQueueTypeChanged(enum class EPlayerQueueType PlayerQueueType); // Function DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnableColorScheme(bool bIsColorSchemeActive); // Function DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActivitySelected(); // Function DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleTabChanged(struct FName TabId); // Function DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged // (Final|Native|Private) // @ game+0x6903ab4
};

// Class DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
// Size: 0x80 (Inherited: 0x30)
struct UFortActivityBrowserColorSchemeAsset : UDataAsset {
	struct TMap<struct UMaterialParameterCollection*, struct FColorSchemeParamaterValues> MaterialCollectionOverrides; // 0x30(0x50)
};

// Class DiscoveryBrowserUI.FortActivityBrowserListView
// Size: 0x460 (Inherited: 0x260)
struct UFortActivityBrowserListView : UListViewBase {
	char pad_260[0xd8]; // 0x260(0xd8)
	float DirectionalNavigationTimeThreshold; // 0x338(0x04)
	bool bLockPositionForController; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	int32_t LockedPositionAt; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UFortActivityBrowserRow* PromotedActivityClass; // 0x348(0x08)
	struct TMap<struct FName, struct UFortActivityBrowserRow*> RowTypes; // 0x350(0x50)
	char pad_3A0[0xc0]; // 0x3a0(0xc0)
};

// Class DiscoveryBrowserUI.FortActivityBrowserRow
// Size: 0x330 (Inherited: 0x290)
struct UFortActivityBrowserRow : UCommonUserWidget {
	char pad_290[0x98]; // 0x290(0x98)
	struct UCommonTextBlock* Text_CategoryName; // 0x328(0x08)

	void OnRowPeekStateChanged(bool bIsInPeekState); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRowMoveUp(bool bMovingOffscreen); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRowMoveDown(bool bMovingOffscreen); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRowIsSelectedChanged(bool bIsSelected); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRowIsActiveChanged(bool bIsActive); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCategoryItemChanged(bool bPlayAnimation); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool GetIsSelected(); // Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69038e8
	bool GetIsInPeekState(); // Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69038c0
	bool GetIsActive(); // Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69038a8
};

// Class DiscoveryBrowserUI.FortActivityBrowserRowHero
// Size: 0x3b0 (Inherited: 0x330)
struct UFortActivityBrowserRowHero : UFortActivityBrowserRow {
	struct UFortActivityListView* ListView_Activities; // 0x330(0x08)
	struct UFortSwipePanel* SwipePanel_Navigation; // 0x338(0x08)
	char pad_340[0x3]; // 0x340(0x03)
	bool bPlayDetailsAnimationOnScreenOpen; // 0x343(0x01)
	float DetailsDisplayUpdateDelay; // 0x344(0x04)
	struct UFortActivityDetailsDisplay* DetailsDisplay_SelectedActivity; // 0x348(0x08)
	struct UFortActivityVideoCycle* ActivityVideoCycleWidget; // 0x350(0x08)
	char pad_358[0x20]; // 0x358(0x20)
	struct UWidgetAnimation* BoundKeyArtOutroAnimation; // 0x378(0x08)
	char pad_380[0x2]; // 0x380(0x02)
	bool bShouldAutoCycle; // 0x382(0x01)
	char pad_383[0x2d]; // 0x383(0x2d)

	void OnVideoStarted(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnVideoEndReached(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoEndReached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateDetailsDisplay(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnUpdateDetailsDisplay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRowHeroFocusChanged(bool bHasFocus); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnRowHeroFocusChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnQueryStatusChanged(bool bIsActive); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryStatusChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnQueryActivitiesFinished(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryActivitiesFinished // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPreviewImageChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayKeyArtOutro(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtOutro // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayKeyArtIntro(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtIntro // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnListViewFinishedAddingEntries(int32_t ActivityCount); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnListViewFinishedAddingEntries // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnActivityUpdated(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnActivityUpdated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	bool IsShowingSeasonalContent(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsShowingSeasonalContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903e08
	bool IsInOutroState(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsInOutroState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903d78
	bool IsImageLoading(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsImageLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d7fc80
	void HandleActivityVideoCycleStarted(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleStarted // (Final|Native|Private) // @ game+0x6903a10
	void HandleActivityVideoCycleEndReached(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleEndReached // (Final|Native|Private) // @ game+0x69039c8
	struct UWidgetAnimation* GetKeyArtOutroAnimation(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetKeyArtOutroAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6903910
	struct UTexture* GetCurrentTexture(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCurrentTexture // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x69037b0
	void CycleNextActivity(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.CycleNextActivity // (Final|Native|Public|BlueprintCallable) // @ game+0x6903708
	void CheckUpdateDetailsDelay(); // Function DiscoveryBrowserUI.FortActivityBrowserRowHero.CheckUpdateDetailsDelay // (Final|Native|Private) // @ game+0x69036e0
};

// Class DiscoveryBrowserUI.FortActivityBrowserRowList
// Size: 0x350 (Inherited: 0x330)
struct UFortActivityBrowserRowList : UFortActivityBrowserRow {
	struct UFortActivityListView* ListView_Activities; // 0x330(0x08)
	struct UCommonButtonBase* Button_PageLeft; // 0x338(0x08)
	struct UCommonButtonBase* Button_PageRight; // 0x340(0x08)
	char pad_348[0x8]; // 0x348(0x08)

	void OnQueryStatusChanged(bool bIsActive); // Function DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class DiscoveryBrowserUI.FortActivityBrowserRowPromoted
// Size: 0x338 (Inherited: 0x330)
struct UFortActivityBrowserRowPromoted : UFortActivityBrowserRow {
	struct UCommonTextBlock* Text_ActivityName; // 0x330(0x08)

	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class DiscoveryBrowserUI.FortActivityBrowserRowView
// Size: 0x620 (Inherited: 0x488)
struct UFortActivityBrowserRowView : UFortActivityBrowserView {
	char pad_488[0x8]; // 0x488(0x08)
	float MouseWheelScrollTimeThreshold; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct UFortActivityBrowserListView* BrowserList_Activities; // 0x498(0x08)
	char pad_4A0[0x60]; // 0x4a0(0x60)
	struct FName TabNameID; // 0x500(0x04)
	char pad_504[0xc]; // 0x504(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x510(0xe0)
	struct UFortSwipePanel* SwipePanel_Navigation; // 0x5f0(0x08)
	char pad_5F8[0x28]; // 0x5f8(0x28)

	void OnRowChanged(int32_t NewCategoryIndex); // Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnQueryActivitiesFinished(); // Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnActivityUpdated(); // Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class DiscoveryBrowserUI.FortActivityBrowserTileBase
// Size: 0x1440 (Inherited: 0x13e0)
struct UFortActivityBrowserTileBase : UCommonButtonBase {
	char pad_13E0[0x60]; // 0x13e0(0x60)
};

// Class DiscoveryBrowserUI.FortActivityBrowserTile
// Size: 0x1480 (Inherited: 0x1440)
struct UFortActivityBrowserTile : UFortActivityBrowserTileBase {
	struct UFortActivityTileDetailsDisplay* Display_TileDetails; // 0x1440(0x08)
	char pad_1448[0x38]; // 0x1448(0x38)

	void HandleActivitySelected(); // Function DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected // (Final|Native|Private) // @ game+0x69039a0
};

// Class DiscoveryBrowserUI.FortActivityTileViewTileBase
// Size: 0x1470 (Inherited: 0x13e0)
struct UFortActivityTileViewTileBase : UCommonButtonBase {
	char pad_13E0[0x90]; // 0x13e0(0x90)
};

// Class DiscoveryBrowserUI.FortActivityCategoryTile
// Size: 0x1480 (Inherited: 0x1470)
struct UFortActivityCategoryTile : UFortActivityTileViewTileBase {
	struct UCommonTextBlock* Text_CategoryTitle; // 0x1470(0x08)
	char pad_1478[0x8]; // 0x1478(0x08)

	void OnTileActiveSet(bool bIsTileActive); // Function DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class DiscoveryBrowserUI.FortActivityCategoryTilePanel
// Size: 0x300 (Inherited: 0x290)
struct UFortActivityCategoryTilePanel : UCommonUserWidget {
	struct UFortActivityTileView* TileView_Categories; // 0x290(0x08)
	struct UCommonTextBlock* Text_Title; // 0x298(0x08)
	int32_t TileViewQueryThreshold; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct UFortCreativeDiscoveryActivityProvider* CachedActivityProvider; // 0x2a8(0x08)
	char pad_2B0[0x50]; // 0x2b0(0x50)
};

// Class DiscoveryBrowserUI.FortActivityCategoryView
// Size: 0x5a0 (Inherited: 0x488)
struct UFortActivityCategoryView : UFortActivityBrowserView {
	char pad_488[0x8]; // 0x488(0x08)
	struct FName TabNameID; // 0x490(0x04)
	char pad_494[0xc]; // 0x494(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0(0xe0)
	struct UFortActivityCategoryTilePanel* TilePanel_Featured; // 0x580(0x08)
	struct UFortActivityCategoryTilePanel* TilePanel_All; // 0x588(0x08)
	struct UFortActivityCategoryTilePanel* CurrentSelectedPanel; // 0x590(0x08)
	char pad_598[0x8]; // 0x598(0x08)

	void OnSurfaceDataReady(); // Function DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCategoryTilePanelSelected(struct UFortActivityCategoryTilePanel* SelectedPanel); // Function DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct UFortActivityCategoryTilePanel* NavigateFromPanel(enum class EUINavigation Direction, struct UFortActivityCategoryTilePanel* NavigatingPanel); // Function DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel // (Final|Native|Protected|BlueprintCallable) // @ game+0x6903e58
	struct UFortActivityCategoryTilePanel* GetTopMostVisiblePanel(); // Function DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x6903978
	struct UFortActivityCategoryTilePanel* GetCurrentSelectedPanel(); // Function DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903798
};

// Class DiscoveryBrowserUI.FortActivityCreateView
// Size: 0x5a0 (Inherited: 0x488)
struct UFortActivityCreateView : UFortActivityBrowserView {
	char pad_488[0x8]; // 0x488(0x08)
	struct FName TabNameID; // 0x490(0x04)
	char pad_494[0xc]; // 0x494(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0(0xe0)
	struct UCommonButtonBase* Button_Create; // 0x580(0x08)
	char pad_588[0x18]; // 0x588(0x18)

	void OnCreativeActivityUpdated(); // Function DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	enum class EFortInvalidActivityReason GetInvalidCreativeActivityReason(); // Function DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903884
};

// Class DiscoveryBrowserUI.FortActivityDiscoverView
// Size: 0x6e0 (Inherited: 0x620)
struct UFortActivityDiscoverView : UFortActivityBrowserRowView {
	struct TArray<enum class ECommonPlatformType> PlatformMovieBlacklist; // 0x620(0x10)
	struct TArray<struct FString> ActivityMovieBlacklist; // 0x630(0x10)
	bool bPlayDetailsAnimationOnScreenOpen; // 0x640(0x01)
	char pad_641[0x3]; // 0x641(0x03)
	float DetailsDisplayUpdateDelay; // 0x644(0x04)
	struct UFortActivatableMovieWidget* MovieWidgetClass; // 0x648(0x08)
	struct UFortActivityDetailsDisplay* DetailsDisplay_SelectedActivity; // 0x650(0x08)
	struct UFortActivityDetailsDisplay* DetailsDisplay_PromotedActivity; // 0x658(0x08)
	struct UPanelWidget* Panel_VideoSlot; // 0x660(0x08)
	struct UPanelWidget* Panel_PromotedVideoSlot; // 0x668(0x08)
	struct UFortActivatableMovieWidget* ActivityMovieWidget; // 0x670(0x08)
	struct UFortActivatableMovieWidget* PromotedActivityMovieWidget; // 0x678(0x08)
	char pad_680[0x48]; // 0x680(0x48)
	struct UWidgetAnimation* BoundKeyArtOutroAnimation; // 0x6c8(0x08)
	char pad_6D0[0x10]; // 0x6d0(0x10)

	void OnUpdateDetailsDisplay(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayKeyArtOutro(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayKeyArtIntro(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMoviePreEndEvent(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMoviePlayingChanged(bool bIsPlaying); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	bool IsShowingSeasonalContent(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903e2c
	bool IsShowingPromotedContent(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903ddc
	bool IsInOutroState(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903d90
	bool IsImageLoading(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903d60
	void HandleMovieWidgetMediaStarted(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted // (Final|Native|Private) // @ game+0x6903aa0
	void HandleMovieWidgetMediaPreEndEvent(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent // (Final|Native|Private) // @ game+0x6903a58
	struct UFortActivatableMovieWidget* GetPromotedMovieWidget(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903960
	struct UFortActivatableMovieWidget* GetMovieWidget(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x234c4a0
	struct UWidgetAnimation* GetKeyArtOutroAnimation(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6903938
	struct UTexture* GetCurrentTexture(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x69037d8
	void CheckUpdateDetailsDelay(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay // (Final|Native|Private) // @ game+0x69036f4
};

// Class DiscoveryBrowserUI.FortActivityDiscoverViewV2
// Size: 0x650 (Inherited: 0x620)
struct UFortActivityDiscoverViewV2 : UFortActivityBrowserRowView {
	char pad_620[0x30]; // 0x620(0x30)

	bool IsShowingSeasonalContent(); // Function DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903e2c
	bool IsShowingPromotedContent(); // Function DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903ddc
};

// Class DiscoveryBrowserUI.FortActivityFavoriteBrowserView
// Size: 0x5b0 (Inherited: 0x5b0)
struct UFortActivityFavoriteBrowserView : UFortActivityPlayerBrowserView {
};

// Class DiscoveryBrowserUI.FortActivityListView
// Size: 0x3d8 (Inherited: 0x260)
struct UFortActivityListView : UListViewBase {
	char pad_260[0xd8]; // 0x260(0xd8)
	float DirectionalNavigationTimeThreshold; // 0x338(0x04)
	enum class EOrientation Orientation; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	float EntrySpacing; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TMap<enum class EActivityBrowserTileStyle, struct UFortActivityBrowserTileBase*> TileTypes; // 0x348(0x50)
	char pad_398[0x40]; // 0x398(0x40)

	int32_t GetInViewCount(); // Function DiscoveryBrowserUI.FortActivityListView.GetInViewCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903800
};

// Class DiscoveryBrowserUI.FortActivityLobbyTile
// Size: 0x14a0 (Inherited: 0x1430)
struct UFortActivityLobbyTile : UCommonButtonLegacy {
	struct UCommonTextBlock* Text_ActivityName; // 0x1430(0x08)
	struct UFortActivityBrowserTag* ActivityBrowserTag_EpicOriginal; // 0x1438(0x08)
	struct UFortActivityModeSetSelectionModal* ActivityModeSetSelectionModalClass; // 0x1440(0x08)
	struct UFortGameActivityProvider* ActivityProvider; // 0x1448(0x08)
	struct TArray<struct UFortGameActivity*> CachedQueriedActivities; // 0x1450(0x10)
	char pad_1460[0x40]; // 0x1460(0x40)

	void TrySendFirstTimeNotification(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification // (Final|Native|Public|BlueprintCallable) // @ game+0x6904048
	void ShowModeSetSelectionModal(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal // (Final|Native|Public|BlueprintCallable) // @ game+0x6904034
	void OnShowChildActivityFirstTimeNotification(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnShowChildActivityChangedNotification(struct FText& DisplayName); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnHideChildActivityFirstTimeNotification(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDetailsUpdated(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool IsModeSetActivity(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.IsModeSetActivity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1727fd8
	bool IsActivityEpicCreated(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903ce4
	struct FText GetChildActivityDisplayName(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1727ff8
};

// Class DiscoveryBrowserUI.FortActivityModeSetSelectionModal
// Size: 0x418 (Inherited: 0x3a8)
struct UFortActivityModeSetSelectionModal : UCommonActivatableWidget {
	struct UCommonTextBlock* Text_ActivityName; // 0x3a8(0x08)
	char pad_3B0[0x40]; // 0x3b0(0x40)
	struct UCommonButtonBase* Button_Back; // 0x3f0(0x08)
	struct UCommonButtonBase* Button_BackBoard; // 0x3f8(0x08)
	struct UFortActivityModeSetSelection* List_SubModeList; // 0x400(0x08)
	struct UFortActivitySquadFillButton* Button_ActivitySquadFill; // 0x408(0x08)
	struct UFortActivityPrivacyButton* Button_ActivityPrivacy; // 0x410(0x08)

	void SaveSelectionAndClose(); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose // (Final|Native|Protected|BlueprintCallable) // @ game+0x6903f64
	void OnSubModeSelectionChanged(); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSubModeSelected(); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActivityChanged(struct UFortGameActivity* GameActivity, struct FString StartingSelectedMnemonic); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class DiscoveryBrowserUI.FortActivityPlayerBrowserTile
// Size: 0x14c0 (Inherited: 0x1470)
struct UFortActivityPlayerBrowserTile : UFortActivityTileViewTileBase {
	struct UFortActivityTileDetailsDisplay* Display_TileDetails; // 0x1470(0x08)
	struct UCommonTextBlock* Text_LastPlayedDate; // 0x1478(0x08)
	char pad_1480[0x40]; // 0x1480(0x40)

	void HandleActivitySelected(); // Function DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected // (Final|Native|Private) // @ game+0x69039b4
};

// Class DiscoveryBrowserUI.FortActivityPlayerView
// Size: 0x5c0 (Inherited: 0x488)
struct UFortActivityPlayerView : UFortActivityBrowserView {
	char pad_488[0x8]; // 0x488(0x08)
	struct FName TabNameID; // 0x490(0x04)
	char pad_494[0xc]; // 0x494(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0(0xe0)
	struct UCommonButtonBase* TabButtonClass; // 0x580(0x08)
	struct UFortTabListWidgetBase* TabList_PlayerViewTabs; // 0x588(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_PlayerBrowserViews; // 0x590(0x08)
	struct UFortActivityPlayerBrowserView* BrowserView_Favorites; // 0x598(0x08)
	struct UFortActivityPlayerBrowserView* BrowserView_History; // 0x5a0(0x08)
	char pad_5A8[0x18]; // 0x5a8(0x18)
};

// Class DiscoveryBrowserUI.FortActivityPlayerViewTabButton
// Size: 0x1410 (Inherited: 0x1410)
struct UFortActivityPlayerViewTabButton : UFortTabButton {
	struct UCommonTextBlock* Text_Count; // 0x1408(0x08)
};

// Class DiscoveryBrowserUI.FortActivitySearchView
// Size: 0x5e0 (Inherited: 0x488)
struct UFortActivitySearchView : UFortActivityBrowserView {
	char pad_488[0x8]; // 0x488(0x08)
	struct FName TabNameID; // 0x490(0x04)
	char pad_494[0xc]; // 0x494(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0(0xe0)
	struct UEditableText* EditableText_IslandLink; // 0x580(0x08)
	char pad_588[0x58]; // 0x588(0x58)

	void OnActivityValidated(enum class EFortActivityValidationResult ValidateResult); // Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActivityClear(); // Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleTextCommitted(struct FText& InText, enum class ETextCommit CommitInfo); // Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted // (Final|Native|Private|HasOutParms) // @ game+0x6903bf8
	void HandleTextChanged(struct FText& Text); // Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged // (Final|Native|Private|HasOutParms) // @ game+0x6903b34
};

// Class DiscoveryBrowserUI.FortActivitySeasonalBrowserView
// Size: 0x5b0 (Inherited: 0x5b0)
struct UFortActivitySeasonalBrowserView : UFortActivityPlayerBrowserView {
};

// Class DiscoveryBrowserUI.FortActivityTileDetailsDisplay
// Size: 0x14f0 (Inherited: 0x13e0)
struct UFortActivityTileDetailsDisplay : UCommonButtonBase {
	struct FMulticastInlineDelegate OnActivitySelectedDelegate; // 0x13e0(0x10)
	struct FMulticastInlineDelegate OnActivityUnSelectedDelegate; // 0x13f0(0x10)
	bool bShowDetailsButton; // 0x1400(0x01)
	char pad_1401[0x7]; // 0x1401(0x07)
	struct UCommonTextBlock* Text_ActivityName; // 0x1408(0x08)
	struct UCommonTextBlock* Text_PlayerCount; // 0x1410(0x08)
	struct UCommonButtonBase* Button_Favorite; // 0x1418(0x08)
	struct UCommonButtonBase* Button_Details; // 0x1420(0x08)
	struct UFortActivityBrowserTag* ActivityBrowserTag_EpicOriginal; // 0x1428(0x08)
	struct UTextBlock* Text_DebugId; // 0x1430(0x08)
	struct TMap<uint32_t, enum class ECreativeLinkPreviewSize> MinColumnSizeToImageSize; // 0x1438(0x50)
	char pad_1488[0x68]; // 0x1488(0x68)

	void OnUpdateColumnSize(int32_t NewColumnSize); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnUpdateColumnSize // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTileActiveSet(bool bIsTileActive); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSocialUsersPlayingChanged(int32_t NumPlaying); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnSocialUsersPlayingChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRequiresPurchaseChanged(bool bRequiresPurchase); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPartySizeChanged(int32_t PartySize); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLocalPlayerPromotedToLeader(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLocalPlayerDemoted(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnIsFavoriteChanged(bool bIsFavorite); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDetailsUpdated(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActivityUnSelected__DelegateSignature(); // DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void OnActivitySelected__DelegateSignature(); // DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	bool IsModeSetActivity(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903da8
	bool IsActivityFavorited(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903d40
	bool IsActivityEpicCreated(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityEpicCreated // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903d1c
	enum class EFortInvalidActivityReason GetInvalidActivityReason(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903858
	bool DoesActivityRequirePurchase(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6903720
};

// Class DiscoveryBrowserUI.FortActivityTileView
// Size: 0xba0 (Inherited: 0xba0)
struct UFortActivityTileView : UCommonTileView {

	void SetListenForMouseWheelInput(bool bListenForInput); // Function DiscoveryBrowserUI.FortActivityTileView.SetListenForMouseWheelInput // (Final|Native|Public|BlueprintCallable) // @ game+0x6903fb4
};

// Class DiscoveryBrowserUI.ActivityLibraryComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UActivityLibraryComponent : UActorComponent {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class DiscoveryBrowserUI.FortActivityBrowserContext
// Size: 0x48 (Inherited: 0x30)
struct UFortActivityBrowserContext : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class DiscoveryBrowserUI.OverrideMatchmakingUIComponent
// Size: 0x120 (Inherited: 0xa0)
struct UOverrideMatchmakingUIComponent : UActorComponent {
	struct FMatchmakingUIOverride MatchmakingUIOverride; // 0xa0(0x78)
	bool bDynamicTileSizingPostLoginFlow; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

