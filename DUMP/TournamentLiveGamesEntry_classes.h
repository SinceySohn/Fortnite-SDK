// WidgetBlueprintGeneratedClass TournamentLiveGamesEntry.TournamentLiveGamesEntry_C
// Size: 0x1478 (Inherited: 0x1450)
struct UTournamentLiveGamesEntry_C : UFortTournamentLiveGameSessionEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* Selected; // 0x1458(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0x1460(0x08)
	struct UCommonBorder* CommonBorder_Selected; // 0x1468(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0x1470(0x08)

	void OnEntrySet(int32_t EntryIndex); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.OnEntrySet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TournamentLiveGamesEntry(int32_t EntryPoint); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.ExecuteUbergraph_TournamentLiveGamesEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

