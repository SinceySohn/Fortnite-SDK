// WidgetBlueprintGeneratedClass QualityLevelSelectScreen.QualityLevelSelectScreen_C
// Size: 0x580 (Inherited: 0x538)
struct UQualityLevelSelectScreen_C : UFortQualityLevelSelectScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* Intro; // 0x540(0x08)
	struct UQualityModeSelectTile_C* ; // 0x548(0x08)
	struct USafeZone* Footersafezone; // 0x550(0x08)
	struct UImage* ; // 0x558(0x08)
	struct UCommonAnimatedSwitcher* OptionMessage; // 0x560(0x08)
	struct UCommonTextBlock* Text_QualityLevelCalculated; // 0x568(0x08)
	struct UCommonTextBlock* Text_QualityTitle; // 0x570(0x08)
	struct UHorizontalBox* TilesRow; // 0x578(0x08)

	void Construct(); // Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_QualityLevelSelectScreen(int32_t EntryPoint); // Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.ExecuteUbergraph_QualityLevelSelectScreen // (Final|UbergraphFunction) // @ game+0xdef49c
};

