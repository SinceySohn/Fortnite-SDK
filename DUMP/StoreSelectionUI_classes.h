// Class StoreSelectionUI.FortStoreSelectionData
// Size: 0x578 (Inherited: 0x520)
struct UFortStoreSelectionData : UFortGameFeatureData {
	struct TSoftClassPtr<UObject> StoreSelectionScreenClass; // 0x520(0x28)
	struct FText RegularStoreSelectedText; // 0x548(0x18)
	struct FText NonRegularStoreSelectedText; // 0x560(0x18)
};

// Class StoreSelectionUI.FortStoreSelectionOptionEntry
// Size: 0x1450 (Inherited: 0x1430)
struct UFortStoreSelectionOptionEntry : UCommonButtonLegacy {
	struct UFortLazyImage* Image_Icon; // 0x1430(0x08)
	struct UCommonTextBlock* Text_Description; // 0x1438(0x08)
	struct UCommonTextBlock* Text_Price; // 0x1440(0x08)
	struct UCommonRichTextBlock* RichText_Label; // 0x1448(0x08)
};

// Class StoreSelectionUI.FortStoreSelectionScreen
// Size: 0x900 (Inherited: 0x4e0)
struct UFortStoreSelectionScreen : UCommonActivatablePanelLegacy {
	char pad_4E0[0x8]; // 0x4e0(0x08)
	struct UCommonButtonGroupLegacy* EntryBoxButtonGroup; // 0x4e8(0x08)
	struct UFortRealMoneyOffer* StoreOffer; // 0x4f0(0x08)
	struct UCommonLoadGuard* StoreOfferLoadGuard; // 0x4f8(0x08)
	struct UCommonTextBlock* Text_Header; // 0x500(0x08)
	struct UDynamicEntryBox* DynamicEntryBox_Options; // 0x508(0x08)
	struct UCommonButtonLegacy* Button_Continue; // 0x510(0x08)
	struct UCommonButtonLegacy* Button_Cancel; // 0x518(0x08)
	struct UCommonRichTextBlock* RichText_InitiallySelectedHint; // 0x520(0x08)
	struct TScriptInterface<IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner; // 0x528(0x10)
	struct TArray<struct FItemData> StoreOptions; // 0x538(0x10)
	struct TSoftObjectPtr<UFortMtxOfferData> SoftDisplayAsset; // 0x548(0x28)
	struct FItemData ItemData[0xc]; // 0x570(0x360)
	struct FText OptionalLabels[0x2]; // 0x8d0(0x30)
};

