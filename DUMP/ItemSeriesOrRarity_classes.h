// WidgetBlueprintGeneratedClass ItemSeriesOrRarity.ItemSeriesOrRarity_C
// Size: 0x289 (Inherited: 0x268)
struct UItemSeriesOrRarity_C : UUserWidget {
	struct UWidgetSwitcher* RarityOrSeriesSwitcher; // 0x268(0x08)
	struct UCommonTextBlock* RarityTextBlock; // 0x270(0x08)
	struct UBorder* SeriesBorder; // 0x278(0x08)
	struct UCommonTextBlock* SeriesTextBlock; // 0x280(0x08)
	bool OnlyShowSeries; // 0x288(0x01)

	void UpdateItemDefinition(struct UFortItemDefinition* ItemDefinition); // Function ItemSeriesOrRarity.ItemSeriesOrRarity_C.UpdateItemDefinition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

