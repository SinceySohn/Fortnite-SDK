// BlueprintGeneratedClass GCL_BallercoasterMagField.GCL_BallercoasterMagField_C
// Size: 0x9f0 (Inherited: 0x960)
struct AGCL_BallercoasterMagField_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UFortLayeredAudioComponent* LayeredAudioComponent; // 0x968(0x08)
	struct USoundBase* StartSound; // 0x970(0x08)
	struct UAudioComponent* StartAudio; // 0x978(0x08)
	struct AOctopusVehicle_V2_C* Vehicle; // 0x980(0x08)
	struct UAudioComponent* StopAudio; // 0x988(0x08)
	struct USoundBase* StopSound; // 0x990(0x08)
	struct USoundBase* BumpSound; // 0x998(0x08)
	struct FTimerHandle HandleStartLoop; // 0x9a0(0x08)
	int32_t CurrentZSign; // 0x9a8(0x04)
	int32_t PreviousZSign; // 0x9ac(0x04)
	struct FVector PreviousVelocityXY; // 0x9b0(0x18)
	struct FTimerHandle SkyTube Lookout Timer; // 0x9c8(0x08)
	struct FTimerHandle SkippedOverlap Check Timer Handle; // 0x9d0(0x08)
	bool Debug; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)
	struct UAudioComponent* PartyMusicComponent; // 0x9e0(0x08)
	struct UAudioComponent* TuningAudioComponent; // 0x9e8(0x08)

	void Update Tuning Audio(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.Update Tuning Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayBumpSound(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.PlayBumpSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DriverExitSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.DriverExitSeat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	double GetTurnAngle(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.GetTurnAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void IslocalParam(struct TScriptInterface<IAudioParameterControllerInterface> Target); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.IslocalParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetVectorLength(double& NormalizedValue); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.GetVectorLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void PlayStartAudio(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.PlayStartAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayStopAudio(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.PlayStopAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateAudioParameter(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.UpdateAudioParameter // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Check for SkyTube(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.Check for SkyTube // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SkippedEndOverlap Check(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.SkippedEndOverlap Check // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Force Cleanup(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.Force Cleanup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Pawn Enter(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.On Pawn Enter // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Pawn Exit(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.On Pawn Exit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Party Music(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.Start Party Music // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Stop Party Music(); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.Stop Party Music // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCL_BallercoasterMagField(int32_t EntryPoint); // Function GCL_BallercoasterMagField.GCL_BallercoasterMagField_C.ExecuteUbergraph_GCL_BallercoasterMagField // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

