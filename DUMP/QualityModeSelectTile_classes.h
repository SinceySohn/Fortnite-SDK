// WidgetBlueprintGeneratedClass QualityModeSelectTile.QualityModeSelectTile_C
// Size: 0x14e1 (Inherited: 0x1450)
struct UQualityModeSelectTile_C : UFortQualityModeTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* InAnOutro; // 0x1458(0x08)
	struct UWidgetAnimation* ConfirmSeleccion; // 0x1460(0x08)
	struct UWidgetAnimation* GameModeSelection; // 0x1468(0x08)
	struct UCommonBorder* Border_Recommended; // 0x1470(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x1478(0x08)
	struct UImage* ConfirmSelectionShine; // 0x1480(0x08)
	struct UImage* DisabledGray; // 0x1488(0x08)
	struct UImage* ; // 0x1490(0x08)
	struct UImage* SelectedIcon; // 0x1498(0x08)
	struct UCommonTextBlock* T_Recommended; // 0x14a0(0x08)
	struct UBorder* Tag_Selected; // 0x14a8(0x08)
	struct UCommonTextBlock* TextBlock_AdditionalDownloadSize; // 0x14b0(0x08)
	struct UCommonTextBlock* TextBlock_QualityDescription; // 0x14b8(0x08)
	struct UCommonTextBlock* TextBlock_QualityLevelName; // 0x14c0(0x08)
	struct UCommonTextBlock* TextBlock_TotalBuildSize; // 0x14c8(0x08)
	struct UImage* TileArt; // 0x14d0(0x08)
	struct UImage* UnhoveredVignette; // 0x14d8(0x08)
	bool bIsRecommendedLevel; // 0x14e0(0x01)

	void Setup(); // Function QualityModeSelectTile.QualityModeSelectTile_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function QualityModeSelectTile.QualityModeSelectTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSelectedStateChanged(bool bIsSelected); // Function QualityModeSelectTile.QualityModeSelectTile_C.OnSelectedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSizeInfoReceived(); // Function QualityModeSelectTile.QualityModeSelectTile_C.OnSizeInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function QualityModeSelectTile.QualityModeSelectTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_QualityModeSelectTile(int32_t EntryPoint); // Function QualityModeSelectTile.QualityModeSelectTile_C.ExecuteUbergraph_QualityModeSelectTile // (Final|UbergraphFunction) // @ game+0xdef49c
};

