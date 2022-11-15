// WidgetBlueprintGeneratedClass BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C
// Size: 0x36d (Inherited: 0x320)
struct UBPS22_CustomizationCategoryRow_C : UFortBattlePassCustomSkinCategoryTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Image_Lock; // 0x328(0x08)
	struct UImage* Image_Progress; // 0x330(0x08)
	struct UImage* Image_Progress_Locked; // 0x338(0x08)
	struct UProgressBar* ; // 0x340(0x08)
	struct UCommonVisibilitySwitcher* Switcher_State; // 0x348(0x08)
	struct UCommonRichTextBlock* Text_Progress; // 0x350(0x08)
	struct UCommonRichTextBlock* Text_Progress_Locked; // 0x358(0x08)
	struct UCommonRichTextBlock* Text_UnlockCondition; // 0x360(0x08)
	int32_t Number to unlock; // 0x368(0x04)
	bool Is locked; // 0x36c(0x01)

	void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress); // Function BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C.OnOwnedTilesUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // Function BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLockedStateChanged(bool bCategoryLocked); // Function BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C.OnLockedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_CustomizationCategoryRow(int32_t EntryPoint); // Function BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C.ExecuteUbergraph_BPS22_CustomizationCategoryRow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

