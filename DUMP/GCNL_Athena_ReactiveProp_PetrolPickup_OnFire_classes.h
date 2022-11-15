// BlueprintGeneratedClass GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C
// Size: 0x978 (Inherited: 0x960)
struct AGCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UCurveFloat* SpawnRampCurve; // 0x968(0x08)
	struct FTimerHandle timer handle; // 0x970(0x08)

	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Loop(); // Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.Loop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartLoop(); // Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.StartLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_ReactiveProp_PetrolPickup_OnFire(int32_t EntryPoint); // Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.ExecuteUbergraph_GCNL_Athena_ReactiveProp_PetrolPickup_OnFire // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

