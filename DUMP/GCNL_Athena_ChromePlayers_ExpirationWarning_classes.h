// BlueprintGeneratedClass GCNL_Athena_ChromePlayers_ExpirationWarning.GCNL_Athena_ChromePlayers_ExpirationWarning_C
// Size: 0x9d8 (Inherited: 0x960)
struct AGCNL_Athena_ChromePlayers_ExpirationWarning_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x968(0x08)
	struct FTimerHandle Handle_Timer_PulseExpirationWarning; // 0x970(0x08)
	struct USoundBase* Sound_ExpirationWarningTick; // 0x978(0x08)
	struct USoundBase* Sound_ExpirationWarningStart; // 0x980(0x08)
	struct UAudioComponent* AudioComponent_ExpirationWarningStart; // 0x988(0x08)
	float ExpirationWarningPulseTickInterval; // 0x990(0x04)
	char pad_994[0x4]; // 0x994(0x04)
	struct AFortPlayerPawn* Player Pawn; // 0x998(0x08)
	float TimeElapsed; // 0x9a0(0x04)
	char pad_9A4[0x4]; // 0x9a4(0x04)
	struct FScalableFloat Row_ExpirationWarningDuration; // 0x9a8(0x28)
	struct UAudioComponent* AudioComponent_ExpirationWarningPulse; // 0x9d0(0x08)

	void IsLocalValidPawn(struct AFortPlayerPawn* PlayerPawn, bool& Valid); // Function GCNL_Athena_ChromePlayers_ExpirationWarning.GCNL_Athena_ChromePlayers_ExpirationWarning_C.IsLocalValidPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void PulseExpirationWarning(); // Function GCNL_Athena_ChromePlayers_ExpirationWarning.GCNL_Athena_ChromePlayers_ExpirationWarning_C.PulseExpirationWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_ChromePlayers_ExpirationWarning.GCNL_Athena_ChromePlayers_ExpirationWarning_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_ChromePlayers_ExpirationWarning.GCNL_Athena_ChromePlayers_ExpirationWarning_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_ChromePlayers_ExpirationWarning(int32_t EntryPoint); // Function GCNL_Athena_ChromePlayers_ExpirationWarning.GCNL_Athena_ChromePlayers_ExpirationWarning_C.ExecuteUbergraph_GCNL_Athena_ChromePlayers_ExpirationWarning // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

