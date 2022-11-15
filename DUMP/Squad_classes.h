// WidgetBlueprintGeneratedClass Squad.Squad_C
// Size: 0x318 (Inherited: 0x2f0)
struct USquad_C : UFortTeamSquadDetailedEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UBorder* DarkenBorder; // 0x2f8(0x08)
	struct UWidgetSwitcher* EntryLockSwitcher; // 0x300(0x08)
	struct UImage* SquadLogo; // 0x308(0x08)
	struct UImage* SquadRibbon; // 0x310(0x08)

	void OnLoaded_68F5F01141304474DB5D18BD77CD085C(struct UObject* Loaded); // Function Squad.Squad_C.OnLoaded_68F5F01141304474DB5D18BD77CD085C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E(struct UObject* Loaded); // Function Squad.Squad_C.OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSquadAssigned(struct FAthenaTeamDisplayInfo& SquadStyle); // Function Squad.Squad_C.OnSquadAssigned // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated); // Function Squad.Squad_C.OnSquadIsEmptyChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Squad(int32_t EntryPoint); // Function Squad.Squad_C.ExecuteUbergraph_Squad // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

