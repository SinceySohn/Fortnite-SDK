// WidgetBlueprintGeneratedClass AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C
// Size: 0x321 (Inherited: 0x268)
struct UAthenaSeasonItemRewardIcon_C : UAthenaSeasonItemRewardIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* AdjustRewardFillSize; // 0x270(0x08)
	struct UWidgetAnimation* Selected; // 0x278(0x08)
	struct UWidgetAnimation* HoverState; // 0x280(0x08)
	struct UImage* Image_BattlePassIcon; // 0x288(0x08)
	struct UOverlay* Image_RewardContainer; // 0x290(0x08)
	struct USizeBox* RewardContainer_Size; // 0x298(0x08)
	struct UFortLazyImage* RewardTile; // 0x2a0(0x08)
	struct USizeBox* SizeBox_BattlePassIcon; // 0x2a8(0x08)
	struct USizeBox* SizeBox_Styles; // 0x2b0(0x08)
	struct UOverlay* Styles+Count; // 0x2b8(0x08)
	struct UImage* Styles_Backing; // 0x2c0(0x08)
	struct UCommonTextBlock* StylesLabel; // 0x2c8(0x08)
	struct UBorder* StylesWrapper; // 0x2d0(0x08)
	struct UCommonTextBlock* Text_Count; // 0x2d8(0x08)
	double Width; // 0x2e0(0x08)
	double Height; // 0x2e8(0x08)
	bool ShowStyle; // 0x2f0(0x01)
	bool ShowCount; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	double BattlePassIconSize; // 0x2f8(0x08)
	bool BattlePassIconEnabled; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	double BattlePassIconPositionOffsetMultiplier; // 0x308(0x08)
	double FillSize; // 0x310(0x08)
	double DesiredPixelSize; // 0x318(0x08)
	bool bIsEmoji; // 0x320(0x01)

	void SetRarityColors(struct FLinearColor Color1, struct FLinearColor Color2, struct FLinearColor Color3, struct FLinearColor Color4, struct FLinearColor Color5); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SetRarityColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleMultipleRewardSelctedAnim(bool bLeftRewardSelected); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.HandleMultipleRewardSelctedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeselectedAnim(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.DeselectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SelectedAnim(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SelectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupItemCardStyle(struct UFortItem* RewardItem); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SetupItemCardStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Unhover(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.Unhover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Hover(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.Hover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitializeReward(struct UFortItem* RewardItem, struct TSoftObjectPtr<UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32_t RewardLevel, bool bRequiresBattlePass); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.OnInitializeReward // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnInitializeSeriesReward(struct UFortItemSeriesDefinition* SeriesData); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.OnInitializeSeriesReward // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaSeasonItemRewardIcon(int32_t EntryPoint); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.ExecuteUbergraph_AthenaSeasonItemRewardIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

