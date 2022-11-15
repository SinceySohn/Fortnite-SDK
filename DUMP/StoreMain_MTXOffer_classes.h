// WidgetBlueprintGeneratedClass StoreMain_MTXOffer.StoreMain_MTXOffer_C
// Size: 0x15f0 (Inherited: 0x14c0)
struct UStoreMain_MTXOffer_C : UFortRealMoneyOffer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* Hover_Linear; // 0x14c8(0x08)
	struct UWidgetAnimation* UnhoverNew; // 0x14d0(0x08)
	struct UWidgetAnimation* HoverNew; // 0x14d8(0x08)
	struct UWidgetAnimation* Intro; // 0x14e0(0x08)
	struct UWidgetAnimation* OnHover; // 0x14e8(0x08)
	struct UMTXOffer_SpecialBanner_C* AthenaDirectAcquisitionOffer_SpecialBanner; // 0x14f0(0x08)
	struct UImage* BaseColor; // 0x14f8(0x08)
	struct UBorder* BonusTag; // 0x1500(0x08)
	struct UCommonTextBlock* BonusText; // 0x1508(0x08)
	struct UBorder* Border_Footer; // 0x1510(0x08)
	struct UBorder* BorderAll; // 0x1518(0x08)
	struct UCommonTextBlock* BundleTotalQuantity; // 0x1520(0x08)
	struct UCommonTextBlock* BundleVBucksText; // 0x1528(0x08)
	struct UCommonTextBlock* CurrencyTotalQuantity; // 0x1530(0x08)
	struct UHorizontalBox* HBox_Price; // 0x1538(0x08)
	struct UImage* HoverBorder; // 0x1540(0x08)
	struct UImage* KeyArt; // 0x1548(0x08)
	struct UImage* OverlayGradient; // 0x1550(0x08)
	struct UOverlay* OverlaySalePrice; // 0x1558(0x08)
	struct UImage* PlayStationStoreLogo; // 0x1560(0x08)
	struct UCommonTextBlock* Plus; // 0x1568(0x08)
	struct UVerticalBox* RMTBundle; // 0x1570(0x08)
	struct UVerticalBox* RMTCurrency; // 0x1578(0x08)
	struct UWidgetSwitcher* RMTTypeSwitcher; // 0x1580(0x08)
	struct UHorizontalBox* RMTVBucksHB; // 0x1588(0x08)
	struct UScaleBox* ScaleBoxKeyArt; // 0x1590(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Price; // 0x1598(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice; // 0x15a0(0x08)
	struct UCommonTextBlock* TextOfferName; // 0x15a8(0x08)
	struct UCommonTextBlock* TextOfferPurchaseUnvailable; // 0x15b0(0x08)
	struct UCommonTextBlock* TextOriginalPrice; // 0x15b8(0x08)
	struct USizeBox* TileSize; // 0x15c0(0x08)
	struct UCommonTextBlock* VBucksText; // 0x15c8(0x08)
	struct FMulticastInlineDelegate AboutToShowDetails; // 0x15d0(0x10)
	bool bCanSetPrice; // 0x15e0(0x01)
	char pad_15E1[0x7]; // 0x15e1(0x07)
	struct UCatalogMessaging* CatalogMessaging; // 0x15e8(0x08)

	void GetBonusText(struct UFortStoreFrontOfferInfo* OfferInfo, struct FText& BonusText); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetTextOutlineColor(struct UTextBlock* Text, struct FFortMtxGradient Gradient); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTileSize(enum class EFortMtxOfferDisplaySize DisplaySize); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerReset(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitialReset(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerIntro(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitOffer(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnOfferSet(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateStorePrice(struct FText& InStorePrice); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnStoreSelectionOfferSet(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOfferTileBrushLoaded(struct FSlateBrush& OfferBrush); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_StoreMain_MTXOffer(int32_t EntryPoint); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void AboutToShowDetails__DelegateSignature(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

