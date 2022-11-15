// BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C
// Size: 0x44d8 (Inherited: 0x4410)
struct ABP_ReplayPC_Athena_C : AFortReplaySpectatorAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4410(0x08)
	struct UPostProcessComponent* PostProcess; // 0x4418(0x08)
	struct UUnderwaterAudioComponent_C* UnderwaterAudioComponent; // 0x4420(0x08)
	struct TMap<double, struct USoundMix*> PlaybackRateMap; // 0x4428(0x50)
	double CurrentPlayRate; // 0x4478(0x08)
	bool bIsFast; // 0x4480(0x01)
	char pad_4481[0x7]; // 0x4481(0x07)
	struct UAudioComponent* SpeedupLoop; // 0x4488(0x08)
	struct UAudioComponent* SlowdownLoop; // 0x4490(0x08)
	bool bIsHudVisible; // 0x4498(0x01)
	char pad_4499[0x7]; // 0x4499(0x07)
	struct UAudioComponent* ZoomOutLoop; // 0x44a0(0x08)
	struct UAudioComponent* ZoomInLoop; // 0x44a8(0x08)
	bool bIsSkydivingAudioEnabled; // 0x44b0(0x01)
	bool bIsTargetParachuting; // 0x44b1(0x01)
	bool bIsTargetSkydiving; // 0x44b2(0x01)
	char pad_44B3[0x5]; // 0x44b3(0x05)
	struct UAudioComponent* SkydivingAudioLoop; // 0x44b8(0x08)
	bool bIsPaused; // 0x44c0(0x01)
	char pad_44C1[0x7]; // 0x44c1(0x07)
	struct USoundBase* CurrentSkydivingSound; // 0x44c8(0x08)
	struct USoundMix* PauseMIx; // 0x44d0(0x08)

	void IsGameplayCamera(bool& IsGameplayCamera); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.IsGameplayCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSkydivingAudioEnabled(bool Enabled); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.SetSkydivingAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct USoundBase* GetSkydivingSound(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.GetSkydivingSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyNewPlaybackMultiplier(float NewMultiplier); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnNotifyNewPlaybackMultiplier // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void  Speedup Loops(double Playback Multiplier); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C. Speedup Loops // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReplayHudVisibilityChanged(enum class EHudVisibilityState IsVisible); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnReplayHudVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnZoomOutEnd(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutEnd // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnZoomOutBegin(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutBegin // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnZoomInEnd(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInEnd // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnZoomInBegin(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInBegin // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void On Pause State Changed(bool bPaused); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.On Pause State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Handle Parachute Audio State(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Handle Parachute Audio State // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Looping Audio Update(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Looping Audio Update // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Sound Mix(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Update Sound Mix // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_ReplayPC_Athena(int32_t EntryPoint); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ExecuteUbergraph_BP_ReplayPC_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

