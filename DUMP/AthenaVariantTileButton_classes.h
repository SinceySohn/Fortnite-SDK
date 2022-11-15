// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
// Size: 0x14c8 (Inherited: 0x14b0)
struct UAthenaVariantTileButton_C : UFortVariantTileButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x14b8(0x08)
	struct UImage* Image_Conflict; // 0x14c0(0x08)

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaVariantTileButton(int32_t EntryPoint); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.ExecuteUbergraph_AthenaVariantTileButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

