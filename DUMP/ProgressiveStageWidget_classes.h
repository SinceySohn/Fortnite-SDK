// WidgetBlueprintGeneratedClass ProgressiveStageWidget.ProgressiveStageWidget_C
// Size: 0x309 (Inherited: 0x2b0)
struct UProgressiveStageWidget_C : UFortProgressiveStageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UWidgetAnimation* Outro; // 0x2b8(0x08)
	struct UWidgetAnimation* Intro; // 0x2c0(0x08)
	struct UOverlay* CenterSeparator; // 0x2c8(0x08)
	struct UImage* DownArrow; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UOverlay* ItemLeftContainer; // 0x2e0(0x08)
	struct UOverlay* ItemRightContainer; // 0x2e8(0x08)
	struct UProgressiveItem_Tooltip_C* ProgressiveItem_Tooltip; // 0x2f0(0x08)
	struct UProgressiveItemWidget_C* ProgressiveItemWidget_Left; // 0x2f8(0x08)
	struct UProgressiveItemWidget_C* ProgressiveItemWidget_Right; // 0x300(0x08)
	bool Show Top Arrow; // 0x308(0x01)

	void Update Subscribed Visuals(bool IsSubscribed); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.Update Subscribed Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearStageItemWidgets(); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.ClearStageItemWidgets // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UFortProgressiveItemWidget* AddStageItemWidget(); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.AddStageItemWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPeekStateChanged(bool bIsInPeekState); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetTooltipText(struct FText& InToolTipText); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.OnSetTooltipText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetTooltipVisible(bool bVisible); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.OnSetTooltipVisible // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveStageWidget(int32_t EntryPoint); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.ExecuteUbergraph_ProgressiveStageWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

