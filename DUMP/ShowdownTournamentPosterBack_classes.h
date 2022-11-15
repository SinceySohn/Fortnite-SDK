// WidgetBlueprintGeneratedClass ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C
// Size: 0x7f0 (Inherited: 0x718)
struct UShowdownTournamentPosterBack_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UCommonTextBlock* CommonTextBlock_EventDates; // 0x720(0x08)
	struct UCommonTextBlock* CommonTextBlock_MetaDate; // 0x728(0x08)
	struct UCommonTextBlock* CommonTextBlock_MetaTitle; // 0x730(0x08)
	struct UCommonTextBlock* DateText; // 0x738(0x08)
	struct UCommonTextBlock* FlavorText; // 0x740(0x08)
	struct UImage* Image_FooterWatermark; // 0x748(0x08)
	struct UScaleBox* ScaleBoxTournamentTitle; // 0x750(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x758(0x08)
	struct USizeBox* SizeBox_Pin; // 0x760(0x08)
	struct UCommonTextBlock* TitleLine1; // 0x768(0x08)
	struct UCommonTextBlock* TitleLine2; // 0x770(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry; // 0x778(0x08)
	struct UTournamentDateEntry_C* ; // 0x780(0x08)
	struct UTournamentDateEntry_C* ; // 0x788(0x08)
	struct UTournamentDateEntry_C* ; // 0x790(0x08)
	struct UTournamentDateEntry_C* ; // 0x798(0x08)
	struct UTournamentDateEntry_C* ; // 0x7a0(0x08)
	struct UTournamentDateEntry_C* ; // 0x7a8(0x08)
	struct UTournamentDateEntry_C* ; // 0x7b0(0x08)
	struct UTournamentDateEntry_C* ; // 0x7b8(0x08)
	struct UTournamentDateEntry_C* ; // 0x7c0(0x08)
	struct UTournamentDateEntry_C* ; // 0x7c8(0x08)
	struct UTournamentDateEntry_C* ; // 0x7d0(0x08)
	struct UTournamentDateEntry_C* ; // 0x7d8(0x08)
	struct UTournamentDateEntry_C* ; // 0x7e0(0x08)
	struct UUniformGridPanel* UniformGridPanel_DateGrid; // 0x7e8(0x08)

	void GetTournamentDateText(struct FText& TournamentDate); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.GetTournamentDateText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshDataBP(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventColorize(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventPopulateEventWindowData(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventPopulateEventWindowData // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownTournamentPosterBack(int32_t EntryPoint); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.ExecuteUbergraph_ShowdownTournamentPosterBack // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

