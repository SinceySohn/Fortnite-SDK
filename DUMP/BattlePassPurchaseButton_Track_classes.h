// WidgetBlueprintGeneratedClass BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C
// Size: 0x14f8 (Inherited: 0x1470)
struct UBattlePassPurchaseButton_Track_C : UBattlePassScreenPurchaseButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1470(0x08)
	struct UWidgetAnimation* ResetTrianglesAnim; // 0x1478(0x08)
	struct UWidgetAnimation* HoverTrianglesAnim; // 0x1480(0x08)
	struct UWidgetAnimation* TextBounce; // 0x1488(0x08)
	struct UWidgetAnimation* GlowBurst; // 0x1490(0x08)
	struct UWidgetAnimation* LoopingButtonGlow; // 0x1498(0x08)
	struct UWidgetAnimation* Selected; // 0x14a0(0x08)
	struct UImage* Backing; // 0x14a8(0x08)
	struct UImage* ButtonBacking; // 0x14b0(0x08)
	struct UBorder* DiscountContainer; // 0x14b8(0x08)
	struct UImage* HoverTriangles; // 0x14c0(0x08)
	struct UOverlay* OriginalCostContainer; // 0x14c8(0x08)
	struct UImage* Strikethrough; // 0x14d0(0x08)
	struct UOverlay* SubtitleContainer; // 0x14d8(0x08)
	struct UImage* VBuck; // 0x14e0(0x08)
	int32_t FontSize; // 0x14e8(0x04)
	bool FontSizeOveride; // 0x14ec(0x01)
	char pad_14ED[0x3]; // 0x14ed(0x03)
	double DelayCycle; // 0x14f0(0x08)

	void HandleText(); // Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.HandleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetData(enum class EBattlePassPurchaseButtonLayout LayoutType); // Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.OnSetData // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BattlePassPurchaseButton_Track(int32_t EntryPoint); // Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.ExecuteUbergraph_BattlePassPurchaseButton_Track // (Final|UbergraphFunction) // @ game+0xdef49c
};

