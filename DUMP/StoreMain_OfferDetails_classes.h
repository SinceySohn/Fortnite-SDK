// WidgetBlueprintGeneratedClass StoreMain_OfferDetails.StoreMain_OfferDetails_C
// Size: 0x9a1 (Inherited: 0x880)
struct UStoreMain_OfferDetails_C : UFortRealMoneyOfferDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UImage* BaseColor; // 0x888(0x08)
	struct UImage* BaseColorDetails; // 0x890(0x08)
	struct UHorizontalBox* BonusMTXArea; // 0x898(0x08)
	struct UCommonBorder* BorderDisclaimer; // 0x8a0(0x08)
	struct UCommonTextBlock* CommonText_BaseQuantity; // 0x8a8(0x08)
	struct UCommonTextBlock* CommonText_BonusQuantity; // 0x8b0(0x08)
	struct UImage* Highlight; // 0x8b8(0x08)
	struct UFortLazyImage* Image_CurrencyIcon; // 0x8c0(0x08)
	struct UCommonLazyImage* KeyArt; // 0x8c8(0x08)
	struct USizeBox* MTXArea; // 0x8d0(0x08)
	struct USizeBox* MTXButtonBox; // 0x8d8(0x08)
	struct UOverlay* Overlay_VBucks; // 0x8e0(0x08)
	struct UImage* OverlayGradient; // 0x8e8(0x08)
	struct UImage* OverlayGradientDetails; // 0x8f0(0x08)
	struct UOverlay* OverlaySalePrice; // 0x8f8(0x08)
	struct USafeZone* SafeZoneCloseButton; // 0x900(0x08)
	struct USafeZone* SafeZoneMTX; // 0x908(0x08)
	struct UStoreMain_OfferDetailsAttribute_C* StoreMain_OfferDetailsAttribute1; // 0x910(0x08)
	struct UStoreMain_OfferDetailsAttribute_C* StoreMain_OfferDetailsAttribute2; // 0x918(0x08)
	struct UCommonTextBlock* TextDescription; // 0x920(0x08)
	struct UCommonTextBlock* TextName; // 0x928(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice; // 0x930(0x08)
	struct UCommonTextBlock* TextOriginalPrice; // 0x938(0x08)
	struct UVerticalBox* VBoxOfferInfo; // 0x940(0x08)
	struct UImage* VBuckHighlight; // 0x948(0x08)
	struct TMap<int32_t, struct UFortMtxOfferData*> ABAssetCollection; // 0x950(0x50)
	bool isContentBlocked; // 0x9a0(0x01)

	void SetupCurrencyImage(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetupCurrencyImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdatePurchaseButton(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitDetailAttributes(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitDetailAttributes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPurchaseButtonText(struct FText ButtonText); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetPurchaseButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsGiftingStorefrontOffer(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.IsGiftingStorefrontOffer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetCurrencyABAssetFromQuantity(int32_t Quantity, struct UFortMtxOfferData*& DataAsset); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.GetCurrencyABAssetFromQuantity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitCurrency(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitStoreTypeVisuals(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnregisterInput(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RegisterInput(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PopDetails(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Init(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBack(bool& PassThrough); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetPurchaseButtonText(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ResetPurchaseButtonText // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPurchasingStarted(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnPurchasingStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnOfferSet(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnOfferSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputModeChanged(bool bUsingGamepad); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_StoreMain_OfferDetails(int32_t EntryPoint); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails // (Final|UbergraphFunction) // @ game+0xdef49c
};

