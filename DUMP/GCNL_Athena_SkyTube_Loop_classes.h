// BlueprintGeneratedClass GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C
// Size: 0xa89 (Inherited: 0x960)
struct AGCNL_Athena_SkyTube_Loop_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	float OpacityFade_NewTrack_0_7C7F4FC94E989FA5C7938EB445D13090; // 0x968(0x04)
	enum class ETimelineDirection OpacityFade__Direction_7C7F4FC94E989FA5C7938EB445D13090; // 0x96c(0x01)
	char pad_96D[0x3]; // 0x96d(0x03)
	struct UTimelineComponent* OpacityFade; // 0x970(0x08)
	struct AActor* MyTarget; // 0x978(0x08)
	struct UAudioComponent* LoopingAudio; // 0x980(0x08)
	struct USoundBase* SoundPlayerEnter; // 0x988(0x08)
	struct USoundBase* SoundPlayerExit; // 0x990(0x08)
	struct USoundBase* SoundPlayerLoop; // 0x998(0x08)
	struct USoundBase* SoundVehicleEnter; // 0x9a0(0x08)
	struct USoundBase* SoundVehicleExit; // 0x9a8(0x08)
	bool IsTargetPlayer; // 0x9b0(0x01)
	char pad_9B1[0x7]; // 0x9b1(0x07)
	struct USoundBase* SoundVehicleLoop; // 0x9b8(0x08)
	bool IsTargetLocal; // 0x9c0(0x01)
	bool IsTargetPlayerInVehicle; // 0x9c1(0x01)
	char pad_9C2[0x6]; // 0x9c2(0x06)
	double AudioCurrentSpeedParam; // 0x9c8(0x08)
	double OpacityBoost; // 0x9d0(0x08)
	bool IsAudioEnabled; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)
	double velocityMult; // 0x9e0(0x08)
	double CameraShakeMagnitude; // 0x9e8(0x08)
	struct ULegacyCameraShake* CameraShake; // 0x9f0(0x08)
	double ShakeMax; // 0x9f8(0x08)
	double ShakeMin; // 0xa00(0x08)
	struct AFortPlayerPawn* MyTargetPlayer; // 0xa08(0x08)
	struct FVector SplineDirection; // 0xa10(0x18)
	struct FScalableFloat DataPassiveModeLateralSpeed; // 0xa28(0x28)
	struct FScalableFloat DataActiveModeLateralSpeed; // 0xa50(0x28)
	bool IsVehicleEmpty; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)
	struct AFortPlayerController* AppliedShakeToController; // 0xa80(0x08)
	bool bShouldEnableAudio ; // 0xa88(0x01)

	void StopCameraShake(struct AFortPlayerPawn* Target); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.StopCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartCameraShake(); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.StartCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetIsPlayerInVehicle(bool& IsPlayerInVehicle); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.GetIsPlayerInVehicle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UpdateIsLocalAndIsPlayer(struct AActor* Target); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.UpdateIsLocalAndIsPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Init(struct AActor* MyTarget); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OpacityFade__FinishedFunc(); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.OpacityFade__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void OpacityFade__UpdateFunc(); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.OpacityFade__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Update Audio(); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.Update Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start or Stop Audio(bool Start); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.Start or Stop Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void StopShake(); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.StopShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_SkyTube_Loop(int32_t EntryPoint); // Function GCNL_Athena_SkyTube_Loop.GCNL_Athena_SkyTube_Loop_C.ExecuteUbergraph_GCNL_Athena_SkyTube_Loop // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

