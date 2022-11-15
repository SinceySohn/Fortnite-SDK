// WidgetBlueprintGeneratedClass AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C
// Size: 0x1528 (Inherited: 0x1480)
struct UAthenaMOTDTileMainPage_C : UFortAthenaMOTDTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* OnHover; // 0x1488(0x08)
	struct UWidgetAnimation* OnSelected; // 0x1490(0x08)
	struct UWidgetAnimation* Intro; // 0x1498(0x08)
	struct UBorder* Border_Details; // 0x14a0(0x08)
	struct UBorder* Border_PipDisplay; // 0x14a8(0x08)
	struct UCommonLoadGuard* ; // 0x14b0(0x08)
	struct UImage* Fill; // 0x14b8(0x08)
	struct UImage* Image_SelectedPointer; // 0x14c0(0x08)
	struct UImage* Image_SelectedPointer_Shadow; // 0x14c8(0x08)
	struct UImage* LoadingImage; // 0x14d0(0x08)
	struct UOverlay* LoadingImageOvr; // 0x14d8(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0x14e0(0x08)
	struct UScaleBox* NewsItemScale; // 0x14e8(0x08)
	struct USizeBox* SizeBox_Tile; // 0x14f0(0x08)
	bool bShowImageOnly; // 0x14f8(0x01)
	char pad_14F9[0x3]; // 0x14f9(0x03)
	int32_t PreviewPipCount; // 0x14fc(0x04)
	struct FMulticastInlineDelegate OnHoveredChanged; // 0x1500(0x10)
	struct FLinearColor DefaultColor; // 0x1510(0x10)
	struct UMaterialInstanceDynamic* MID_Font; // 0x1520(0x08)

	void UpdateDisplay(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowImageOnly(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.ShowImageOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateNews(struct FAthenaMOTDBase& NewsEntry); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnPopulateNews // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaMOTDTileMainPage(int32_t EntryPoint); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.ExecuteUbergraph_AthenaMOTDTileMainPage // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnHoveredChanged__DelegateSignature(bool NewIsHovered); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnHoveredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

