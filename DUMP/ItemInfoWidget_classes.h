// WidgetBlueprintGeneratedClass ItemInfoWidget.ItemInfoWidget_C
// Size: 0x2c0 (Inherited: 0x2b0)
struct UItemInfoWidget_C : UFortItemInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UImage* RarityGlow; // 0x2b8(0x08)

	void SetRarityMaterialValues(struct UFortItemDefinition* ItemDefinition); // Function ItemInfoWidget.ItemInfoWidget_C.SetRarityMaterialValues // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ItemInfoWidget(int32_t EntryPoint); // Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

