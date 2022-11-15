// BlueprintGeneratedClass GCNL_Athena_HealSpray_Spray_Secondary.GCNL_Athena_HealSpray_Spray_Secondary_C
// Size: 0x9b0 (Inherited: 0x960)
struct AGCNL_Athena_HealSpray_Spray_Secondary_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	double Fade Out Duration; // 0x968(0x08)
	struct UAudioComponent* AudioComponent_SprayLoop_Heal; // 0x970(0x08)
	struct USoundCue* Sound_SprayLoop_Heal; // 0x978(0x08)
	struct USoundCue* Sound_SprayLoop_Heal_Stop; // 0x980(0x08)
	struct UNiagaraComponent* SprayFX; // 0x988(0x08)
	struct AFortPlayerPawn* Player Pawn; // 0x990(0x08)
	struct USoundCue* SpraySound3p; // 0x998(0x08)
	struct USoundCue* SpraySound1p; // 0x9a0(0x08)
	struct USoundCue* SprayRemoval; // 0x9a8(0x08)

	void StartSprayAudio(); // Function GCNL_Athena_HealSpray_Spray_Secondary.GCNL_Athena_HealSpray_Spray_Secondary_C.StartSprayAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopSprayAudio(); // Function GCNL_Athena_HealSpray_Spray_Secondary.GCNL_Athena_HealSpray_Spray_Secondary_C.StopSprayAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_HealSpray_Spray_Secondary.GCNL_Athena_HealSpray_Spray_Secondary_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_HealSpray_Spray_Secondary.GCNL_Athena_HealSpray_Spray_Secondary_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Athena_HealSpray_Spray_Secondary.GCNL_Athena_HealSpray_Spray_Secondary_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Local_Ammo(int32_t LocalCount, int32_t LocalRemaining); // Function GCNL_Athena_HealSpray_Spray_Secondary.GCNL_Athena_HealSpray_Spray_Secondary_C.Local_Ammo // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_HealSpray_Spray_Secondary(int32_t EntryPoint); // Function GCNL_Athena_HealSpray_Spray_Secondary.GCNL_Athena_HealSpray_Spray_Secondary_C.ExecuteUbergraph_GCNL_Athena_HealSpray_Spray_Secondary // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

