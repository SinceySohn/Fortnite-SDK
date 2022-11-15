// BlueprintGeneratedClass GCNL_Athena_Chrome_Valet.GCNL_Athena_Chrome_Valet_C
// Size: 0x970 (Inherited: 0x960)
struct AGCNL_Athena_Chrome_Valet_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UNiagaraComponent* Native Comp Road And Exhaust; // 0x968(0x08)

	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_Chrome_Valet.GCNL_Athena_Chrome_Valet_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Chrome_Valet.GCNL_Athena_Chrome_Valet_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_Chrome_Valet(int32_t EntryPoint); // Function GCNL_Athena_Chrome_Valet.GCNL_Athena_Chrome_Valet_C.ExecuteUbergraph_GCNL_Athena_Chrome_Valet // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

