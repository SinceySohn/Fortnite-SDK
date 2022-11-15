// WidgetBlueprintGeneratedClass EventScoreBigStat.EventScoreBigStat_C
// Size: 0x288 (Inherited: 0x268)
struct UEventScoreBigStat_C : UUserWidget {
	struct UCommonBorder* CommonBorder_GoalScore; // 0x268(0x08)
	struct URichTextBlock* RichTextBlock_GoalScore; // 0x270(0x08)
	struct UCommonTextBlock* StatLabelText; // 0x278(0x08)
	struct UCommonTextBlock* StatValueText; // 0x280(0x08)

	void SetData(struct FText Label, int32_t Value, int32_t ValueContext, struct FText FormatterText, struct FFortTournamentDisplayInfo Tournament Display Info); // Function EventScoreBigStat.EventScoreBigStat_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

