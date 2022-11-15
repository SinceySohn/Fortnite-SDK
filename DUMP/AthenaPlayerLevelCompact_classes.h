// WidgetBlueprintGeneratedClass AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C
// Size: 0x2c8 (Inherited: 0x290)
struct UAthenaPlayerLevelCompact_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* ; // 0x298(0x08)
	struct UImage* Image_ProgressBar; // 0x2a0(0x08)
	struct UAthenaSeasonItemRewardIcon_C* RewardIcon; // 0x2a8(0x08)
	struct UCommonTextBlock* Text_Level; // 0x2b0(0x08)
	struct FMulticastInlineDelegate LevelChanged; // 0x2b8(0x10)

	void (struct UFortItem* RewardItem, struct TSoftObjectPtr<UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32_t RewardLevel, bool bRequiresBattlePass); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (double Progress, bool bIsMaxLevel); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaPlayerLevelCompact(int32_t EntryPoint); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.ExecuteUbergraph_AthenaPlayerLevelCompact // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void LevelChanged__DelegateSignature(int32_t Level); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.LevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

