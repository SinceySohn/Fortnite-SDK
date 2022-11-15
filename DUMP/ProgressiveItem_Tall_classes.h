// WidgetBlueprintGeneratedClass ProgressiveItem_Tall.ProgressiveItem_Tall_C
// Size: 0x15d6 (Inherited: 0x1490)
struct UProgressiveItem_Tall_C : UFortProgressiveSetTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* HoverBurst; // 0x1498(0x08)
	struct UWidgetAnimation* Deselected; // 0x14a0(0x08)
	struct UWidgetAnimation* Selected; // 0x14a8(0x08)
	struct UImage* Image; // 0x14b0(0x08)
	struct UImage* ; // 0x14b8(0x08)
	struct UImage* ; // 0x14c0(0x08)
	struct UImage* Image_CompletedCheck; // 0x14c8(0x08)
	struct UImage* Image_Dimmer; // 0x14d0(0x08)
	struct UImage* Image_Frame; // 0x14d8(0x08)
	struct UImage* Image_Gradient; // 0x14e0(0x08)
	struct UFortLazyImage* Image_Item; // 0x14e8(0x08)
	struct UImage* Image_PriceBg; // 0x14f0(0x08)
	struct UOverlay* Overlay_InspectionText; // 0x14f8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_CheckDelay; // 0x1500(0x08)
	struct UAthenaItemShopReactiveTileText* Text_Stages; // 0x1508(0x08)
	struct UCommonRichTextBlock* Text_Subtitle; // 0x1510(0x08)
	struct UAthenaItemShopReactiveTileText* TileText_ItemName; // 0x1518(0x08)
	enum class ETextJustify TileTextJustification; // 0x1520(0x01)
	char pad_1521[0x7]; // 0x1521(0x07)
	struct UMaterialInterface* Material; // 0x1528(0x08)
	struct FVector2D In Size; // 0x1530(0x10)
	double Extra Space; // 0x1540(0x08)
	struct FText Empty text; // 0x1548(0x18)
	bool IsDisabled; // 0x1560(0x01)
	bool HasExtraLock; // 0x1561(0x01)
	char pad_1562[0x6]; // 0x1562(0x06)
	struct FProgressiveSetInfo SetInfo; // 0x1568(0x68)
	bool Subscribed; // 0x15d0(0x01)
	bool IsCompleted; // 0x15d1(0x01)
	bool Hovered_DesignTime; // 0x15d2(0x01)
	bool Subbed_DesignTime; // 0x15d3(0x01)
	bool Completed_DesignTime; // 0x15d4(0x01)
	bool Hovered; // 0x15d5(0x01)

	void UpdateSubscribedState(bool bInSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateSubscribedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCompletedState(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateCompletedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateVisualState(bool Selected, bool Subbed, bool Completed, bool Hovered); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateVisualState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play intro(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnInitializeSetInfo(struct FProgressiveSetInfo& InSetInfo, struct FText& BottomText, struct FText& BottomSubtext, bool bSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnInitializeSetInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnTileMaterialLoaded(bool bSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveItem_Tall(int32_t EntryPoint); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.ExecuteUbergraph_ProgressiveItem_Tall // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

