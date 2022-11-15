// WidgetBlueprintGeneratedClass TournamentDateEntry.TournamentDateEntry_C
// Size: 0x770 (Inherited: 0x718)
struct UTournamentDateEntry_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UCommonBorder* CommonBorder_DateContent; // 0x720(0x08)
	struct UCommonTextBlock* CommonTextBlock_Date; // 0x728(0x08)
	struct UCommonTextBlock* CommonTextBlock_Time; // 0x730(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x738(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EntryType; // 0x740(0x08)
	struct UImage* Image_Strkethrough; // 0x748(0x08)
	bool isTitle; // 0x750(0x01)
	char pad_751[0x7]; // 0x751(0x07)
	struct FText Title; // 0x758(0x18)

	void PreConstruct(bool IsDesignTime); // Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventColor(struct FFortTournamentDisplayInfo& showdownData); // Function TournamentDateEntry.TournamentDateEntry_C.EventColor // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshDataBP(); // Function TournamentDateEntry.TournamentDateEntry_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TournamentDateEntry(int32_t EntryPoint); // Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

