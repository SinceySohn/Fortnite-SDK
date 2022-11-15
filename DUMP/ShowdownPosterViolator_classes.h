// WidgetBlueprintGeneratedClass ShowdownPosterViolator.ShowdownPosterViolator_C
// Size: 0x308 (Inherited: 0x2d8)
struct UShowdownPosterViolator_C : UFortTournamentPosterViolator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCommonBorder* FutureEventViolator; // 0x2e0(0x08)
	struct UCommonBorder* InformationViolator; // 0x2e8(0x08)
	struct UCommonBorder* LiveEventViolator; // 0x2f0(0x08)
	struct ULiveViolator_C* LiveViolator; // 0x2f8(0x08)
	struct UCommonBorder* NoViolator; // 0x300(0x08)

	void OnViolatorStateRefreshed(enum class ETournmentPosterViolatorState NewTimeState); // Function ShowdownPosterViolator.ShowdownPosterViolator_C.OnViolatorStateRefreshed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownPosterViolator(int32_t EntryPoint); // Function ShowdownPosterViolator.ShowdownPosterViolator_C.ExecuteUbergraph_ShowdownPosterViolator // (Final|UbergraphFunction) // @ game+0xdef49c
};

