// WidgetBlueprintGeneratedClass StandaloneBacchusItemShop.StandaloneBacchusItemShop_C
// Size: 0x678 (Inherited: 0x638)
struct UStandaloneBacchusItemShop_C : UFortStandaloneItemShop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	struct UHorizontalBox* HBox_Tabs; // 0x640(0x08)
	struct UBorder* LoadingBackground; // 0x648(0x08)
	struct UMTXButton_C* MTXButton; // 0x650(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x658(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x660(0x08)
	struct USafeZone* SafeZone_TabButtons; // 0x668(0x08)
	struct USafeZone* SafeZone_TopRightButtons; // 0x670(0x08)

	void OnCameraLevelLoaded(); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.OnCameraLevelLoaded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLoadingIndicatorShown(bool bShown); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.OnLoadingIndicatorShown // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTabSelected(int32_t TabIndex); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.OnTabSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void InitializeTabs(); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.InitializeTabs // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_StandaloneBacchusItemShop(int32_t EntryPoint); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.ExecuteUbergraph_StandaloneBacchusItemShop // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

