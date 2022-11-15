// WidgetBlueprintGeneratedClass AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C
// Size: 0x370 (Inherited: 0x358)
struct UAthenaItemTextureVariantPicker_C : UFortVariantItemTexturePicker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UCommonRichTextBlock* TextBlock_AllItemsArchived; // 0x360(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_AvailableItems; // 0x368(0x08)

	void OnToggleAllItemsArchivedMessage(bool bDisplay); // Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.OnToggleAllItemsArchivedMessage // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaItemTextureVariantPicker(int32_t EntryPoint); // Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.ExecuteUbergraph_AthenaItemTextureVariantPicker // (Final|UbergraphFunction) // @ game+0xdef49c
};

