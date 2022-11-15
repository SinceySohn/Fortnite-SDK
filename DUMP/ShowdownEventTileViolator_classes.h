// WidgetBlueprintGeneratedClass ShowdownEventTileViolator.ShowdownEventTileViolator_C
// Size: 0x751 (Inherited: 0x718)
struct UShowdownEventTileViolator_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UWidgetAnimation* Focus; // 0x720(0x08)
	struct UCommonTextBlock* ; // 0x728(0x08)
	struct UCommonTextBlock* CommonTextBlock_RoundNumber; // 0x730(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EventState; // 0x738(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Proximity; // 0x740(0x08)
	struct ULiveViolator_C* LiveViolator; // 0x748(0x08)
	bool OverrideDoNotShowRound; // 0x750(0x01)

	void Construct(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RefreshDataBP(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void RefreshViolatorData(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshViolatorData // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownEventTileViolator(int32_t EntryPoint); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.ExecuteUbergraph_ShowdownEventTileViolator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

