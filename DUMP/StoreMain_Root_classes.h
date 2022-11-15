// WidgetBlueprintGeneratedClass StoreMain_Root.StoreMain_Root_C
// Size: 0x661 (Inherited: 0x5a0)
struct UStoreMain_Root_C : UFortMtxStoreRootBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct UWidgetAnimation* Intro; // 0x5a8(0x08)
	struct UCommonBorder* ; // 0x5b0(0x08)
	struct UCommonTextBlock* ; // 0x5b8(0x08)
	struct UCommonBorder* Container_AvailableAmount; // 0x5c0(0x08)
	struct UCommonBorder* CurrencyNotificationBorder; // 0x5c8(0x08)
	struct UCommonTextBlock* CurrencyNotificationText; // 0x5d0(0x08)
	struct UHorizontalBox* ; // 0x5d8(0x08)
	struct UInfoFlag_C* InfoFlag; // 0x5e0(0x08)
	struct UGridPanel* NewLTMGrid; // 0x5e8(0x08)
	struct UVerticalBox* NEWLTMOfferSection; // 0x5f0(0x08)
	struct UCommonBorder* NewNoOffersBox; // 0x5f8(0x08)
	struct UCommonBorder* NewPurchasingDisabledBox; // 0x600(0x08)
	struct UImage* NewSpinner; // 0x608(0x08)
	struct UCommonWidgetSwitcherLegacy* NewSwitcherItemsProgress; // 0x610(0x08)
	struct UGridPanel* NewVBuckGrid; // 0x618(0x08)
	struct UVerticalBox* NewVbuckOffers; // 0x620(0x08)
	struct UVerticalBox* NewVBuckSection; // 0x628(0x08)
	struct UScaleBox* OfferScaleBoxRoot; // 0x630(0x08)
	struct UOverlay* ; // 0x638(0x08)
	struct USimpleMTXDisplay_C* SimpleMTXDisplay; // 0x640(0x08)
	struct UStore_BannerMessage_C* StoreBannerMessage; // 0x648(0x08)
	struct UAudioComponent* Ambient Sound; // 0x650(0x08)
	struct UWidget* InitiallyFocusedOffer; // 0x658(0x08)
	bool bShowingCampaignUpsell; // 0x660(0x01)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function StoreMain_Root.StoreMain_Root_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetVisibilityByChildrenPresence(struct UPanelWidget* Panel, enum class ESlateVisibility& NewParam); // Function StoreMain_Root.StoreMain_Root_C.GetVisibilityByChildrenPresence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void HandleAllOffersGenerated(); // Function StoreMain_Root.StoreMain_Root_C.HandleAllOffersGenerated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGenerateOffer(struct UFortStoreFrontOfferInfo* OfferInfo); // Function StoreMain_Root.StoreMain_Root_C.HandleGenerateOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayEquippedLockerMusic(); // Function StoreMain_Root.StoreMain_Root_C.PlayEquippedLockerMusic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBack(bool& PassThrough); // Function StoreMain_Root.StoreMain_Root_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleRedeem(bool& bPassThrough); // Function StoreMain_Root.StoreMain_Root_C.HandleRedeem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupForCampaignUpsell(); // Function StoreMain_Root.StoreMain_Root_C.SetupForCampaignUpsell // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupFirstFocusableTile(); // Function StoreMain_Root.StoreMain_Root_C.SetupFirstFocusableTile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LayoutVBuckTiles(); // Function StoreMain_Root.StoreMain_Root_C.LayoutVBuckTiles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Ambient Sound(bool Condition); // Function StoreMain_Root.StoreMain_Root_C.Start Ambient Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCurrencyNotification(); // Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Focus(); // Function StoreMain_Root.StoreMain_Root_C.Focus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NoOffersAvailable(); // Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOffersGenerated(); // Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function StoreMain_Root.StoreMain_Root_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ClearOfferWidgets(); // Function StoreMain_Root.StoreMain_Root_C.ClearOfferWidgets // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, struct FText& CurrencyMessageLocText); // Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void GenerateOfferWidget(struct UFortStoreFrontOfferInfo* OfferData); // Function StoreMain_Root.StoreMain_Root_C.GenerateOfferWidget // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPurchasingDisabled(); // Function StoreMain_Root.StoreMain_Root_C.OnPurchasingDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTransitionedBySwitcher(); // Function StoreMain_Root.StoreMain_Root_C.OnTransitionedBySwitcher // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartReadingOffers(); // Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function StoreMain_Root.StoreMain_Root_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMainTabSelected(struct FName TabName); // Function StoreMain_Root.StoreMain_Root_C.OnMainTabSelected // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function StoreMain_Root.StoreMain_Root_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_StoreMain_Root(int32_t EntryPoint); // Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

