// WidgetBlueprintGeneratedClass PriceChangeRegionListEntry.PriceChangeRegionListEntry_C
// Size: 0x2b0 (Inherited: 0x268)
struct UPriceChangeRegionListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* ; // 0x270(0x08)
	struct UCommonRichTextBlock* Column1Text; // 0x278(0x08)
	struct UCommonRichTextBlock* Column2Text; // 0x280(0x08)
	struct UCommonRichTextBlock* Column3Text; // 0x288(0x08)
	struct USizeBox* ; // 0x290(0x08)
	struct FText Text; // 0x298(0x18)

	void SetItem(struct FCrewTableRow CrewTableRow); // Function PriceChangeRegionListEntry.PriceChangeRegionListEntry_C.SetItem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PriceChangeRegionListEntry(int32_t EntryPoint); // Function PriceChangeRegionListEntry.PriceChangeRegionListEntry_C.ExecuteUbergraph_PriceChangeRegionListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

