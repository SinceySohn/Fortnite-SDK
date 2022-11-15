// WidgetBlueprintGeneratedClass PurchaseUnavailable.PurchaseUnavailable_C
// Size: 0x548 (Inherited: 0x528)
struct UPurchaseUnavailable_C : UFortPurchaseUnavailableModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWidgetAnimation* Intro; // 0x530(0x08)
	struct UCommonRichTextBlock* RichText_Details; // 0x538(0x08)
	struct UCommonRichTextBlock* RichText_HeaderText; // 0x540(0x08)

	void OnUpdateTextStyle(struct FText& OfferDisplayName); // Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PurchaseUnavailable(int32_t EntryPoint); // Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

