// WidgetBlueprintGeneratedClass PurchaseNavButton.PurchaseNavButton_C
// Size: 0x1502 (Inherited: 0x13e0)
struct UPurchaseNavButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UWidgetAnimation* Normal; // 0x13e8(0x08)
	struct UWidgetAnimation* PeriodAlert; // 0x13f0(0x08)
	struct UWidgetAnimation* Hover; // 0x13f8(0x08)
	struct UBorder* BorderSwapDirection; // 0x1400(0x08)
	struct UImage* Image_AlertIcon; // 0x1408(0x08)
	struct UImage* Image_arcs; // 0x1410(0x08)
	struct UImage* Image_Arcs2; // 0x1418(0x08)
	struct UImage* Image_Arcs3; // 0x1420(0x08)
	struct UImage* Image_Arcs4; // 0x1428(0x08)
	struct UImage* Image_Arrow; // 0x1430(0x08)
	struct UImage* Image_BG; // 0x1438(0x08)
	struct UImage* Image_HazardGlow; // 0x1440(0x08)
	struct UImage* Image_IconGlow; // 0x1448(0x08)
	struct UImage* Image_Lightning1; // 0x1450(0x08)
	struct UImage* Image_Sharplines; // 0x1458(0x08)
	struct UImage* Image_Spinner; // 0x1460(0x08)
	struct UOverlay* Overlay_IconEffects; // 0x1468(0x08)
	struct UOverlay* Overlay_Lightning; // 0x1470(0x08)
	struct USafeZone* ; // 0x1478(0x08)
	struct UImage* Shadow; // 0x1480(0x08)
	struct UCommonTextBlock* ; // 0x1488(0x08)
	struct UCommonTextBlock* ; // 0x1490(0x08)
	bool FlipArrow; // 0x1498(0x01)
	char pad_1499[0x7]; // 0x1499(0x07)
	struct FMulticastInlineDelegate DispatchClicked; // 0x14a0(0x10)
	struct FText ButtonText; // 0x14b0(0x18)
	struct FTimerHandle PeriodicAnim; // 0x14c8(0x08)
	struct FDataTableRowHandle BackupInputAction; // 0x14d0(0x10)
	bool toBP; // 0x14e0(0x01)
	char pad_14E1[0x7]; // 0x14e1(0x07)
	struct USoundBase* Unhovered Sound; // 0x14e8(0x08)
	struct USoundBase* Hovered Sound; // 0x14f0(0x08)
	struct USoundBase* Selected Sound; // 0x14f8(0x08)
	bool Pad Left; // 0x1500(0x01)
	bool Pad Right; // 0x1501(0x01)

	void UpdateTextSize(); // Function PurchaseNavButton.PurchaseNavButton_C.UpdateTextSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetHoverAnimation(); // Function PurchaseNavButton.PurchaseNavButton_C.ResetHoverAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayPeriodicAnim(); // Function PurchaseNavButton.PurchaseNavButton_C.PlayPeriodicAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventSetupPeriodicTimer(); // Function PurchaseNavButton.PurchaseNavButton_C.EventSetupPeriodicTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PurchaseNavButton.PurchaseNavButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function PurchaseNavButton.PurchaseNavButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PurchaseNavButton(int32_t EntryPoint); // Function PurchaseNavButton.PurchaseNavButton_C.ExecuteUbergraph_PurchaseNavButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void DispatchClicked__DelegateSignature(); // Function PurchaseNavButton.PurchaseNavButton_C.DispatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

