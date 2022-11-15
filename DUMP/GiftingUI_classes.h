// Class GiftingUI.AthenaGiftConfirmedPanel
// Size: 0x3d0 (Inherited: 0x3a8)
struct UAthenaGiftConfirmedPanel : UCommonActivatableWidget {
	char pad_3A8[0x18]; // 0x3a8(0x18)
	struct URichTextBlock* Text_RecipientInfo; // 0x3c0(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x3c8(0x08)
};

// Class GiftingUI.AthenaGiftingConfirmationScreen
// Size: 0x500 (Inherited: 0x3a8)
struct UAthenaGiftingConfirmationScreen : UCommonActivatableWidget {
	char pad_3A8[0x30]; // 0x3a8(0x30)
	struct UFortStoreFrontOfferInfo* PresentedGiftableOfferInfo; // 0x3d8(0x08)
	struct UFortStoreFrontOfferInfo* PresentedOptionalTokenOfferInfo; // 0x3e0(0x08)
	char pad_3E8[0xbc]; // 0x3e8(0xbc)
	float MinGiftSubmissionDelay; // 0x4a4(0x04)
	float MaxGiftSubmissionDelay; // 0x4a8(0x04)
	char pad_4AC[0x14]; // 0x4ac(0x14)
	struct UCommonButtonLegacy* Button_WrapOptions; // 0x4c0(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x4c8(0x08)
	struct UCommonButtonLegacy* Button_MobileClose; // 0x4d0(0x08)
	struct UCommonButtonLegacy* Button_MtxWallet; // 0x4d8(0x08)
	struct UAthenaGiftingPurchasePanel* Panel_GiftingPurchase; // 0x4e0(0x08)
	struct UAthenaGiftingWrapOptionsPanel* Panel_WrapOptions; // 0x4e8(0x08)
	struct UAthenaGiftConfirmedPanel* Panel_GiftConfirmed; // 0x4f0(0x08)
	struct UAthenaGiftingErrorsPanel* Panel_GiftingErrors; // 0x4f8(0x08)

	void OnPresentationModeChanged(enum class EGiftingPresentationMode NewMode); // Function GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleTokenOfferPurchaseComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // Function GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete // (Final|Native|Private|HasOutParms) // @ game+0x693323c
	void HandleGiftSent(bool bSuccess, struct TArray<struct FString>& IneligibleAccounts, struct TArray<struct FString>& ErrorCodes); // Function GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent // (Final|Native|Private|HasOutParms) // @ game+0x6932ee4
	void Dismiss(bool bGiftConfirmed); // Function GiftingUI.AthenaGiftingConfirmationScreen.Dismiss // (Final|Native|Private|BlueprintCallable) // @ game+0x6932e48
};

// Class GiftingUI.AthenaGiftingErrorsPanel
// Size: 0x408 (Inherited: 0x3a8)
struct UAthenaGiftingErrorsPanel : UCommonActivatableWidget {
	char pad_3A8[0x30]; // 0x3a8(0x30)
	struct URichTextBlock* Text_RecipientInfo; // 0x3d8(0x08)
	struct URichTextBlock* Text_Title; // 0x3e0(0x08)
	struct UCommonButtonLegacy* Button_MobileClose; // 0x3e8(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x3f0(0x08)
	struct UCommonButtonLegacy* Button_Continue; // 0x3f8(0x08)
	struct UTileView* TileView_Items; // 0x400(0x08)

	void UpdateGiftEligibility(bool bStillGiftable); // Function GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class GiftingUI.AthenaGiftingPriceWidget
// Size: 0x2b0 (Inherited: 0x290)
struct UAthenaGiftingPriceWidget : UCommonUserWidget {
	struct UCommonTextBlock* Text_RealMoneyPrice; // 0x290(0x08)
	struct UCommonTextBlock* Text_FinalPrice; // 0x298(0x08)
	struct UCommonTextBlock* Text_RegularPrice; // 0x2a0(0x08)
	struct UWidget* Overlay_SalePrice; // 0x2a8(0x08)

	void SetPresentationMode(enum class EGiftingPricePresentationMode Mode); // Function GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class GiftingUI.AthenaGiftingPurchaseButton
// Size: 0x1490 (Inherited: 0x1480)
struct UAthenaGiftingPurchaseButton : UFortHoldableButton {
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0x1478(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1480(0x08)
};

// Class GiftingUI.AthenaGiftingPurchasePanel
// Size: 0x3f0 (Inherited: 0x3a8)
struct UAthenaGiftingPurchasePanel : UCommonActivatableWidget {
	char pad_3A8[0x18]; // 0x3a8(0x18)
	struct UAthenaGiftingPurchaseButton* Button_PurchaseGift; // 0x3c0(0x08)
	struct UFortSocialAvatarIcon* Avatar_MemberIcon; // 0x3c8(0x08)
	struct UCommonTextBlock* Text_SocialNameInfo; // 0x3d0(0x08)
	struct UCommonTextBlock* Text_ItemsCount; // 0x3d8(0x08)
	struct UCommonTextBlock* Text_OfferName; // 0x3e0(0x08)
	struct UTileView* TileView_Items; // 0x3e8(0x08)

	void PlayIntroAnimation(); // Function GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class GiftingUI.AthenaGiftingScreen
// Size: 0x848 (Inherited: 0x668)
struct UAthenaGiftingScreen : UFortItemPreviewScreen {
	char pad_668[0x8]; // 0x668(0x08)
	struct UFortGiftingUserSearchWidget* SearchWidget_SocialSearchWidget; // 0x670(0x08)
	struct UFortGiftingSocialUserListView* ListView_Recipients; // 0x678(0x08)
	struct UTileView* TileView_Items; // 0x680(0x08)
	struct UCommonButtonBase* Button_Back; // 0x688(0x08)
	struct UCommonButtonBase* Button_MobileClose; // 0x690(0x08)
	struct UCommonButtonBase* Button_GiftingPolicy; // 0x698(0x08)
	struct UCommonButtonBase* Button_CameraControl; // 0x6a0(0x08)
	struct UCommonTextBlock* Text_OfferName; // 0x6a8(0x08)
	struct UCommonTextBlock* Text_VBucksOffCount; // 0x6b0(0x08)
	struct UCommonTextBlock* Text_ShownItemIndex; // 0x6b8(0x08)
	struct UCommonRichTextBlock* Text_NoContent; // 0x6c0(0x08)
	struct UCommonRichTextBlock* RichText_OfferItemOwnedCount; // 0x6c8(0x08)
	struct UOverlay* Container_VBucksOffViolator; // 0x6d0(0x08)
	struct UCommonRichTextBlock* RichText_GiftCount; // 0x6d8(0x08)
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0x6e0(0x08)
	struct UAthenaLockerItemInfo* Widget_ItemInfo; // 0x6e8(0x08)
	struct UDynamicEntryBox* EntryBox_FilterTabs; // 0x6f0(0x08)
	struct UCommonActionWidget* ActionWidget_FilterTabsPrevious; // 0x6f8(0x08)
	struct UCommonActionWidget* ActionWidget_FilterTabsNext; // 0x700(0x08)
	struct UAthenaGiftingConfirmationScreen* ActivatableWidget_GiftingConfirmation; // 0x708(0x08)
	float ItemCyclingInterval; // 0x710(0x04)
	char pad_714[0x4]; // 0x714(0x04)
	struct FDataTableRowHandle FilterTabsPreviousAction; // 0x718(0x10)
	struct FDataTableRowHandle FilterTabsNextAction; // 0x728(0x10)
	struct FText RegularGiftingPolicy; // 0x738(0x18)
	struct FText BattlePassGiftingPolicy; // 0x750(0x18)
	char pad_768[0x60]; // 0x768(0x60)
	struct TMap<struct UCommonButtonLegacy*, enum class EFilterType> FilterMap; // 0x7c8(0x50)
	struct UCommonButtonGroupLegacy* FilterGroup; // 0x818(0x08)
	struct TArray<struct UFortItemDefinition*> ItemDefinitions; // 0x820(0x10)
	struct UFortItemDefinition* PresentedItemDefinition; // 0x830(0x08)
	struct UFortStoreFrontOfferInfo* GiftableOfferInfo; // 0x838(0x08)
	struct UFortStoreFrontOfferInfo* OptionalTokenOfferInfo; // 0x840(0x08)

	void OnShowSearchWarningText(bool bShow); // Function GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnShownItemChanged(); // Function GiftingUI.AthenaGiftingScreen.OnShownItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetupFilterTabButton(struct UCommonButtonLegacy* Button, enum class EFilterType FilterType); // Function GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPresentationModeChanged(enum class EGiftingScreenPresentationMode Mode); // Function GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPartyListUpdated(bool bEmpty); // Function GiftingUI.AthenaGiftingScreen.OnPartyListUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFriendSelectionChanged(); // Function GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFilterChanged(enum class EFilterType FilterType); // Function GiftingUI.AthenaGiftingScreen.OnFilterChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class GiftingUI.AthenaGiftingWrapOptionsPanel
// Size: 0x410 (Inherited: 0x3a8)
struct UAthenaGiftingWrapOptionsPanel : UCommonActivatableWidget {
	char pad_3A8[0x28]; // 0x3a8(0x28)
	struct TArray<struct TSoftObjectPtr<UFortGiftBoxItemDefinition>> GiftBoxes; // 0x3d0(0x10)
	struct TArray<struct UFortGiftBoxItemDefinition*> GiftBoxItemDefs; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct UCommonButtonLegacy* Button_ConfirmWrap; // 0x400(0x08)
	struct UTileView* TileView_WrapOptions; // 0x408(0x08)
};

// Class GiftingUI.FortGiftingSocialUserListEntry
// Size: 0x1530 (Inherited: 0x1450)
struct UFortGiftingSocialUserListEntry : USocialListEntryBase {
	char pad_1450[0xb8]; // 0x1450(0xb8)
	struct UFortSocialAvatarIcon* Avatar_MemberIcon; // 0x1508(0x08)
	struct USocialNameTextBlock* Text_SocialName; // 0x1510(0x08)
	struct UCommonRichTextBlock* RichText_EligibilityStatus; // 0x1518(0x08)
	struct UCommonRichTextBlock* RichText_OwnedItems; // 0x1520(0x08)
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0x1528(0x08)

	void SetPresentationMode(enum class ERecipientPresentationMode Mode); // Function GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUserItemSet(); // Function GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRecipientStatusUpdated(); // Function GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnTouchSelectionConfirmed(); // Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation); // Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class GiftingUI.FortGiftingSocialUserListView
// Size: 0x458 (Inherited: 0x360)
struct UFortGiftingSocialUserListView : USocialUserListViewBase {
	float RefreshRecipientStatusDelay; // 0x360(0x04)
	char pad_364[0xf4]; // 0x364(0xf4)
};

// Class GiftingUI.FortGiftingUserSearchWidget
// Size: 0x2d8 (Inherited: 0x290)
struct UFortGiftingUserSearchWidget : UCommonUserWidget {
	struct UEditableText* EditableText_SearchFriends; // 0x290(0x08)
	struct UCommonButtonBase* Button_ClearQuery; // 0x298(0x08)
	struct UCommonButtonBase* Button_SubmitQuery; // 0x2a0(0x08)
	char pad_2A8[0x30]; // 0x2a8(0x30)

	void OnSearchCommit(bool bSearchStringShort); // Function GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleSearchFriendsTextEntered(struct FText& Text, enum class ETextCommit CommitMethod); // Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered // (Final|Native|Private|HasOutParms) // @ game+0x69330e4
	void HandleSearchFriendsTextChanged(struct FText& Text); // Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged // (Final|Native|Private|HasOutParms) // @ game+0x6933030
	void FocusEditableText(); // Function GiftingUI.FortGiftingUserSearchWidget.FocusEditableText // (Final|Native|Protected|BlueprintCallable) // @ game+0x6932ec8
};

// Class GiftingUI.FortGiftingWrapOptionListEntry
// Size: 0x1450 (Inherited: 0x1430)
struct UFortGiftingWrapOptionListEntry : UCommonButtonLegacy {
	char pad_1430[0x8]; // 0x1430(0x08)
	struct UFortGiftBoxItemDefinition* GiftBoxDefinition; // 0x1438(0x08)
	struct UCommonLazyImage* Image_Gift; // 0x1440(0x08)
	char pad_1448[0x8]; // 0x1448(0x08)
};

// Class GiftingUI.FortGiftingData
// Size: 0x548 (Inherited: 0x520)
struct UFortGiftingData : UFortGameFeatureData {
	struct TSoftClassPtr<UObject> GiftingScreenClass; // 0x520(0x28)
};

