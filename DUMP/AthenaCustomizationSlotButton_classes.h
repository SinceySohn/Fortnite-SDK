// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// Size: 0x1690 (Inherited: 0x1500)
struct UAthenaCustomizationSlotButton_C : UAthenaCustomizationSlotSelectorButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1500(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x1508(0x08)
	struct UWidgetAnimation* OnBackedOutFromSelection; // 0x1510(0x08)
	struct UWidgetAnimation* OnConfirmedSelection; // 0x1518(0x08)
	struct UWidgetAnimation* OnSelected; // 0x1520(0x08)
	struct UWidgetAnimation* OnHover; // 0x1528(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x1530(0x08)
	struct UImage* ConfirmSelectionShine; // 0x1538(0x08)
	struct UImage* ExclusiveFill; // 0x1540(0x08)
	struct UOverlay* ExclusiveWarningOvr; // 0x1548(0x08)
	struct UFortLazyImage* Image_Archived; // 0x1550(0x08)
	struct UFortLazyImage* Image_empty; // 0x1558(0x08)
	struct UImage* InactiveFilledSlot; // 0x1560(0x08)
	struct UCommonTextBlock* Text_Plus; // 0x1568(0x08)
	struct FText TooltipBody; // 0x1570(0x18)
	struct FText TooltipHeader; // 0x1588(0x18)
	bool ShowSubTypeIcon; // 0x15a0(0x01)
	char pad_15A1[0xf]; // 0x15a1(0x0f)
	struct FSlateBrush SubTypeIcon; // 0x15b0(0xc0)
	bool bSuppressTooltip; // 0x1670(0x01)
	char pad_1671[0x7]; // 0x1671(0x07)
	double TypeIconVerticalOffset; // 0x1678(0x08)
	struct UMaterialInstanceDynamic* ImageEmptyMID; // 0x1680(0x08)
	double WidthThreshold; // 0x1688(0x08)

	void HandleWidthChanged(double Width); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleWidthChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FString GetSlotDebugName(); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.GetSlotDebugName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void HandleActiveStateChanged(bool CosmeticAvailable, bool Active); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleActiveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCustomizationSlotActiveStateChanged(bool bInAttachableCosmeticAvailable, bool bInActive); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCustomizationSlotActiveStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCardImageAndWidthChanged(struct TSoftObjectPtr<UTexture2D>& Image, float Width); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCardImageAndWidthChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateExclusiveWarning(bool bShouldWarn); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnUpdateExclusiveWarning // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnArchivedStatusUpdated(bool bArchived); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnArchivedStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32_t EntryPoint); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

