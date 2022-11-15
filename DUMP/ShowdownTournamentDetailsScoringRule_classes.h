// WidgetBlueprintGeneratedClass ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C
// Size: 0x2b8 (Inherited: 0x290)
struct UShowdownTournamentDetailsScoringRule_C : UCommonUserWidget {
	struct UCommonBorder* CommonBorder_BG; // 0x290(0x08)
	struct UCommonBorder* CommonBorder_TextContainer; // 0x298(0x08)
	struct UCommonLazyImage* RuleIcon; // 0x2a0(0x08)
	struct UCommonTextBlock* RuleNameText; // 0x2a8(0x08)
	struct UCommonTextBlock* RuleValueText; // 0x2b0(0x08)

	void SetData(struct FFortShowdownScoringRuleInfo ScoreRule, struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

