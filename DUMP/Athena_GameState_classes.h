// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
// Size: 0x3078 (Inherited: 0x3060)
struct AAthena_GameState_C : AFortGameStateBR {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3060(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3068(0x08)
	struct USoundBase* Victory_Royale_Sound; // 0x3070(0x08)

	void OnWinnerAnnounced(); // Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_GameState(int32_t EntryPoint); // Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState // (Final|UbergraphFunction) // @ game+0xdef49c
};

