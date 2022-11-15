// BlueprintGeneratedClass GCNL_Athena_SCMachine_Active.GCNL_Athena_SCMachine_Active_C
// Size: 0x968 (Inherited: 0x960)
struct AGCNL_Athena_SCMachine_Active_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)

	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_SCMachine_Active.GCNL_Athena_SCMachine_Active_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_SCMachine_Active.GCNL_Athena_SCMachine_Active_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_SCMachine_Active(int32_t EntryPoint); // Function GCNL_Athena_SCMachine_Active.GCNL_Athena_SCMachine_Active_C.ExecuteUbergraph_GCNL_Athena_SCMachine_Active // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

