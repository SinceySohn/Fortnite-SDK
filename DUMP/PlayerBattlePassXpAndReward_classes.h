// WidgetBlueprintGeneratedClass PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C
// Size: 0x2f2 (Inherited: 0x2c8)
struct UPlayerBattlePassXpAndReward_C : UFortAccountWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UAthenaPlayerLevelCompact_C* AthenaPlayerLevel; // 0x2d0(0x08)
	struct US17_PlayerBattlePassXpAndReward_C* S17_PlayerBattlePassXpAndReward; // 0x2d8(0x08)
	struct UCommonTextBlock* SeasonNameLabel; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_SeasonNumber; // 0x2e8(0x08)
	bool ShowSeasonText; // 0x2f0(0x01)
	bool bShowSeasonNumberText; // 0x2f1(0x01)

	void SetupReward(struct UWidget* Container, struct UTextBlock* RewardText, struct UDailyQuestRewardInfo_Legacy_C* RewardInfoWidget, bool HasReward, struct FFortItemQuantityPair RewardItem, int32_t LevelRewarded); // Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.SetupReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Refresh(struct FFortPublicAccountInfo& FortPublicAccountInfo); // Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.Refresh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result); // Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.OnAccountInfoChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerBattlePassXpAndReward(int32_t EntryPoint); // Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.ExecuteUbergraph_PlayerBattlePassXpAndReward // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

