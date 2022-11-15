// WidgetBlueprintGeneratedClass ProgressiveItemWidget.ProgressiveItemWidget_C
// Size: 0x14fa (Inherited: 0x1470)
struct UProgressiveItemWidget_C : UFortProgressiveItemWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1470(0x08)
	struct UWidgetAnimation* Item_Hover; // 0x1478(0x08)
	struct UWidgetAnimation* Hover_Burst; // 0x1480(0x08)
	struct UWidgetAnimation* Select; // 0x1488(0x08)
	struct UWidgetAnimation* NotCurrentRow; // 0x1490(0x08)
	struct UWidgetAnimation* Reveal_Hide; // 0x1498(0x08)
	struct UWidgetAnimation* GrowTile; // 0x14a0(0x08)
	struct UImage* DisableTintOverlay; // 0x14a8(0x08)
	struct UHorizontalBox* HBox_locks; // 0x14b0(0x08)
	struct UImage* Image; // 0x14b8(0x08)
	struct UImage* ; // 0x14c0(0x08)
	struct UImage* Image_RarityStripe; // 0x14c8(0x08)
	struct UFortLazyImage* ItemCardImage; // 0x14d0(0x08)
	struct UImage* OffscreenOverlay; // 0x14d8(0x08)
	struct UOverlay* Overlay_Delayed; // 0x14e0(0x08)
	struct UFortMobileImage* Widget_ClaimedImage; // 0x14e8(0x08)
	struct UFortMobileImage* Widget_LockedImage; // 0x14f0(0x08)
	bool Selected; // 0x14f8(0x01)
	bool Hovered; // 0x14f9(0x01)

	void Update Subscribed Visuals(bool IsSubscribed); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.Update Subscribed Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnStageItemChanged // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHighlighted(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUnhighlighted(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPeekStateChanged(bool bIsInPeekState); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTileMaterialLoaded(bool bSubscribed); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveItemWidget(int32_t EntryPoint); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.ExecuteUbergraph_ProgressiveItemWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

