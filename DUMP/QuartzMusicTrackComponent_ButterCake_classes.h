// BlueprintGeneratedClass QuartzMusicTrackComponent_ButterCake.QuartzMusicTrackComponent_ButterCake_C
// Size: 0x288 (Inherited: 0x231)
struct UQuartzMusicTrackComponent_ButterCake_C : UQuartzMusicTrackComponent_DataTracker_C {
	char pad_231[0x7]; // 0x231(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct FGameplayTag AggressiveEvent Tag; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct USoundBase* StartAggroStinger; // 0x248(0x08)
	struct USoundBase* EndAggroStinger; // 0x250(0x08)
	bool bAggroStartPlayed; // 0x258(0x01)
	bool bAggroEndPlayed; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
	double AggroValue; // 0x260(0x08)
	struct UAudioComponent* StartAggroComponent; // 0x268(0x08)
	struct UAudioComponent* EndAggroComponent; // 0x270(0x08)
	struct FGameplayTag UnawareEvent Tag; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	double UnwareValue; // 0x280(0x08)

	void UpdateStingerVolumes(); // Function QuartzMusicTrackComponent_ButterCake.QuartzMusicTrackComponent_ButterCake_C.UpdateStingerVolumes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_AggroValue(); // Function QuartzMusicTrackComponent_ButterCake.QuartzMusicTrackComponent_ButterCake_C.OnRep_AggroValue // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDataTrackerUpdate(); // Function QuartzMusicTrackComponent_ButterCake.QuartzMusicTrackComponent_ButterCake_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAggroStart(); // Function QuartzMusicTrackComponent_ButterCake.QuartzMusicTrackComponent_ButterCake_C.OnAggroStart // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Changed Has Any Event Value(struct UFortGameplayDataTrackerComponent* DataTrackerComponent, bool bHasEventValues); // Function QuartzMusicTrackComponent_ButterCake.QuartzMusicTrackComponent_ButterCake_C.On Changed Has Any Event Value // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAggroEnd(); // Function QuartzMusicTrackComponent_ButterCake.QuartzMusicTrackComponent_ButterCake_C.OnAggroEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_QuartzMusicTrackComponent_ButterCake(int32_t EntryPoint); // Function QuartzMusicTrackComponent_ButterCake.QuartzMusicTrackComponent_ButterCake_C.ExecuteUbergraph_QuartzMusicTrackComponent_ButterCake // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

