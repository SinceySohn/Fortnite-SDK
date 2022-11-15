// WidgetBlueprintGeneratedClass TournamentModal.TournamentModal_C
// Size: 0x538 (Inherited: 0x520)
struct UTournamentModal_C : UFortTournamentModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWidgetAnimation* Intro; // 0x528(0x08)
	struct UImage* Image_BG; // 0x530(0x08)

	void BP_OnActivated(); // Function TournamentModal.TournamentModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTournamentSet(struct FLinearColor LeftColor, struct FLinearColor RightColor); // Function TournamentModal.TournamentModal_C.OnTournamentSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TournamentModal(int32_t EntryPoint); // Function TournamentModal.TournamentModal_C.ExecuteUbergraph_TournamentModal // (Final|UbergraphFunction) // @ game+0xdef49c
};

