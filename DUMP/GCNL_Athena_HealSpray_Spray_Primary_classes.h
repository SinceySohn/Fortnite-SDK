// BlueprintGeneratedClass GCNL_Athena_HealSpray_Spray_Primary.GCNL_Athena_HealSpray_Spray_Primary_C
// Size: 0x9b0 (Inherited: 0x960)
struct AGCNL_Athena_HealSpray_Spray_Primary_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	double Fade Out Duration; // 0x968(0x08)
	struct UNiagaraComponent* FX Componenet Spray Loop; // 0x970(0x08)
	struct USoundCue* SpraySound1p; // 0x978(0x08)
	struct UAudioComponent* AudioComponent_SprayLoop_Heal; // 0x980(0x08)
	struct USoundCue* SprayStopSound1p; // 0x988(0x08)
	struct USoundCue* SpraySound3p; // 0x990(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x998(0x08)
	struct USoundBase* SprayStopSound3p; // 0x9a0(0x08)
	struct USoundCue* SprayRemoval; // 0x9a8(0x08)

	void StopSprayAudio(); // Function GCNL_Athena_HealSpray_Spray_Primary.GCNL_Athena_HealSpray_Spray_Primary_C.StopSprayAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartSprayAudio(); // Function GCNL_Athena_HealSpray_Spray_Primary.GCNL_Athena_HealSpray_Spray_Primary_C.StartSprayAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_HealSpray_Spray_Primary.GCNL_Athena_HealSpray_Spray_Primary_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Local_Ammo(int32_t LocalCount, int32_t LocalRemaining); // Function GCNL_Athena_HealSpray_Spray_Primary.GCNL_Athena_HealSpray_Spray_Primary_C.Local_Ammo // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_HealSpray_Spray_Primary.GCNL_Athena_HealSpray_Spray_Primary_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_HealSpray_Spray_Primary(int32_t EntryPoint); // Function GCNL_Athena_HealSpray_Spray_Primary.GCNL_Athena_HealSpray_Spray_Primary_C.ExecuteUbergraph_GCNL_Athena_HealSpray_Spray_Primary // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

