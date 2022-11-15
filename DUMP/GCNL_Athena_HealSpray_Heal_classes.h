// BlueprintGeneratedClass GCNL_Athena_HealSpray_Heal.GCNL_Athena_HealSpray_Heal_C
// Size: 0x998 (Inherited: 0x960)
struct AGCNL_Athena_HealSpray_Heal_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x968(0x08)
	struct USoundCue* HealSound1p; // 0x970(0x08)
	struct USoundCue* HealSound3p; // 0x978(0x08)
	struct UAudioComponent* HealAudioComponent; // 0x980(0x08)
	struct USoundCue* SprayStopSound1p; // 0x988(0x08)
	struct USoundBase* SprayStopSound3p; // 0x990(0x08)

	void StartHealAudio(); // Function GCNL_Athena_HealSpray_Heal.GCNL_Athena_HealSpray_Heal_C.StartHealAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopHealAudio(); // Function GCNL_Athena_HealSpray_Heal.GCNL_Athena_HealSpray_Heal_C.StopHealAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_HealSpray_Heal.GCNL_Athena_HealSpray_Heal_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_HealSpray_Heal.GCNL_Athena_HealSpray_Heal_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_HealSpray_Heal(int32_t EntryPoint); // Function GCNL_Athena_HealSpray_Heal.GCNL_Athena_HealSpray_Heal_C.ExecuteUbergraph_GCNL_Athena_HealSpray_Heal // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

