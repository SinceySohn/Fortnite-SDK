// WidgetBlueprintGeneratedClass S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C
// Size: 0x2b4 (Inherited: 0x290)
struct US18_PlayerBattlePassXpAndReward_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Image_RaceTrack; // 0x298(0x08)
	struct UCommonRichTextBlock* RichText_CurrentLevel; // 0x2a0(0x08)
	struct UCommonRichTextBlock* RichText_Level; // 0x2a8(0x08)
	int32_t Max BPLevel for Rewards; // 0x2b0(0x04)

	void Update Text(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.Update Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLevelChanged(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnProgressUpdated(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSuperCharged(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnSuperCharged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_S18_PlayerBattlePassXpAndReward(int32_t EntryPoint); // Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.ExecuteUbergraph_S18_PlayerBattlePassXpAndReward // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

