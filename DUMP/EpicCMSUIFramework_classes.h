// Class EpicCMSUIFramework.EpicCMSImage
// Size: 0x470 (Inherited: 0x380)
struct UEpicCMSImage : UCommonLazyImage {
	struct FMulticastInlineDelegate OnImageLoadingComplete; // 0x380(0x10)
	bool bMatchImageSize; // 0x390(0x01)
	char pad_391[0xf]; // 0x391(0x0f)
	struct FSlateBrush LoadingFailFallback; // 0x3a0(0xc0)
	struct UTexture2D* ExternalMedia; // 0x460(0x08)
	bool bDownloadingExternalMedia; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)

	void SetMediaURL(struct FString MediaUrl); // Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL // (Final|Native|Public|BlueprintCallable) // @ game+0x68aecbc
};

// Class EpicCMSUIFramework.EpicCMSLayoutBase
// Size: 0x2d0 (Inherited: 0x268)
struct UEpicCMSLayoutBase : UUserWidget {
	struct TArray<struct FSlotDescription> CarouselSlotDescriptions; // 0x268(0x10)
	struct UEpicCMSTileCarousel* CarouselClass; // 0x278(0x08)
	char pad_280[0x50]; // 0x280(0x50)
};

// Class EpicCMSUIFramework.EpicCMSManager
// Size: 0xb0 (Inherited: 0x28)
struct UEpicCMSManager : UObject {
	char pad_28[0x88]; // 0x28(0x88)
};

// Class EpicCMSUIFramework.EpicCMSScreenBase
// Size: 0x570 (Inherited: 0x4e0)
struct UEpicCMSScreenBase : UCommonActivatablePanelLegacy {
	struct FString TileSetFieldName; // 0x4e0(0x10)
	struct TSoftObjectPtr<UDataTable> TileTypeToTileClassDataTable; // 0x4f0(0x28)
	struct TSoftClassPtr<UObject> LayoutErrorClass; // 0x518(0x28)
	struct TSoftObjectPtr<UDataTable> LayoutTypeToLayoutClassDataTable; // 0x540(0x28)
	char pad_568[0x8]; // 0x568(0x08)
};

// Class EpicCMSUIFramework.EpicCMSSimpleMessage
// Size: 0x2a8 (Inherited: 0x290)
struct UEpicCMSSimpleMessage : UCommonUserWidget {
	struct UCommonTextBlock* TitleText; // 0x290(0x08)
	struct UCommonTextBlock* BodyText; // 0x298(0x08)
	struct UEpicCMSImage* PrimaryImage; // 0x2a0(0x08)
};

// Class EpicCMSUIFramework.EpicCMSTileBase
// Size: 0x1540 (Inherited: 0x1430)
struct UEpicCMSTileBase : UCommonButtonLegacy {
	char pad_1430[0x8]; // 0x1430(0x08)
	struct UCommonTextStyle* DefaultTitleTextStyle; // 0x1438(0x08)
	struct UCommonTextStyle* FeaturedTitleTextStyle; // 0x1440(0x08)
	struct FText Title; // 0x1448(0x18)
	struct FString Link; // 0x1460(0x10)
	bool bDownloadingExternalMedia; // 0x1470(0x01)
	bool bRefreshingMcpCatalog; // 0x1471(0x01)
	char pad_1472[0x6]; // 0x1472(0x06)
	struct UTexture2D* ExternalMedia; // 0x1478(0x08)
	char pad_1480[0x18]; // 0x1480(0x18)
	struct UCommonLazyImage* LazyImage_Icon; // 0x1498(0x08)
	struct UCommonTextBlock* TitleTextBlock; // 0x14a0(0x08)
	struct UCommonTextBlock* SubtitleTextBlock; // 0x14a8(0x08)
	struct UCommonTextBlock* EyebrowTextBlock; // 0x14b0(0x08)
	char pad_14B8[0x88]; // 0x14b8(0x88)

	void Launch(); // Function EpicCMSUIFramework.EpicCMSTileBase.Launch // (Final|Native|Protected|BlueprintCallable) // @ game+0x68aebfc
};

// Class EpicCMSUIFramework.EpicCMSTileCarousel
// Size: 0x2b8 (Inherited: 0x268)
struct UEpicCMSTileCarousel : UUserWidget {
	struct FSlateSound PreviousButtonSound; // 0x268(0x18)
	struct FSlateSound NextButtonSound; // 0x280(0x18)
	struct UCommonWidgetCarousel* Carousel; // 0x298(0x08)
	struct UWidget* NextPageButton; // 0x2a0(0x08)
	struct UWidget* PreviousPageButton; // 0x2a8(0x08)
	bool bShouldShowNavigationOnlyOnHover; // 0x2b0(0x01)
	bool bInputActionsForPaging; // 0x2b1(0x01)
	bool bIsShowingNavigation; // 0x2b2(0x01)
	char pad_2B3[0x5]; // 0x2b3(0x05)

	void SetCurrentPageByIndex(int32_t PageIndex); // Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex // (Final|Native|Protected|BlueprintCallable) // @ game+0x68aec38
	void PreviousPage(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage // (Final|Native|Protected|BlueprintCallable) // @ game+0x68aec24
	void NextPage(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage // (Final|Native|Protected|BlueprintCallable) // @ game+0x68aec10
	void NavigationVisibilityChanged(bool bShowNavigation); // Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleTilePageAdded(struct UWidget* TileWidget); // Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded // (Native|Event|Protected|BlueprintEvent) // @ game+0x67ab4e8
	int32_t GetCurrentPageIndex(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68aebd4
	void BeginAutoScrolling(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x68aeba0
	void AddTilePage(struct UWidget* TilePageWidget); // Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage // (Final|Native|Public|BlueprintCallable) // @ game+0x68aea58
};

