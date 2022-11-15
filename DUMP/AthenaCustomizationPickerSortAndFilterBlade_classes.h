// WidgetBlueprintGeneratedClass AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C
// Size: 0x380 (Inherited: 0x360)
struct UAthenaCustomizationPickerSortAndFilterBlade_C : UAthenaCustomizationPickerSortAndFilterBlade {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UWidgetAnimation* Anim_Open; // 0x368(0x08)
	struct UCommonTextBlock* FilterByLabel; // 0x370(0x08)
	struct UCommonTextBlock* SortByLabel; // 0x378(0x08)

	struct UWidget* NavigateDownFromSortButtons(enum class EUINavigation Navigation); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.NavigateDownFromSortButtons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UWidget* NavigateUpFromFilterButtons(enum class EUINavigation Navigation); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.NavigateUpFromFilterButtons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Finished_B61EB04E44460529171509A5523A917A(); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.Finished_B61EB04E44460529171509A5523A917A // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnBladeOpen(); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_OnBladeOpen // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnBladeClose(); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_OnBladeClose // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSortOrFilterButtonCreated(struct UCommonButtonBase* NewButton); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_OnSortOrFilterButtonCreated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_SetSortOrFilterButtonDisplayName(struct UCommonButtonBase* SortOrFilterButton, struct FText& DisplayName); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_SetSortOrFilterButtonDisplayName // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_HighlightSortOrFilterButton(struct UCommonButtonBase* SortOrFilterButton, bool bHighlight); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_HighlightSortOrFilterButton // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnArchiveFilteringSet(bool bEnabled); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_OnArchiveFilteringSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateSortAndFilterButtons(bool bBladeOpen); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.UpdateSortAndFilterButtons // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaCustomizationPickerSortAndFilterBlade(int32_t EntryPoint); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.ExecuteUbergraph_AthenaCustomizationPickerSortAndFilterBlade // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

