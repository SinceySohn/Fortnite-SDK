// WidgetBlueprintGeneratedClass TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C
// Size: 0x2c8 (Inherited: 0x2a0)
struct UTournamentPayoutThresholdEntry_C : UFortTournamentPayoutThresholdEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* Selected; // 0x2a8(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0x2b0(0x08)
	struct UCommonBorder* CommonBorder_Selected; // 0x2b8(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0x2c0(0x08)

	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPayoutDataSet(int32_t EntryIndex); // Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnPayoutDataSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TournamentPayoutThresholdEntry(int32_t EntryPoint); // Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.ExecuteUbergraph_TournamentPayoutThresholdEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

