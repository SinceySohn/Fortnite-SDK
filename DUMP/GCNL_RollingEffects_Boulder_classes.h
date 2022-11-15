// BlueprintGeneratedClass GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C
// Size: 0xaf8 (Inherited: 0xae8)
struct AGCNL_RollingEffects_Boulder_C : AGCNL_RollingEffects_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae8(0x08)
	struct UNiagaraComponent* FX_Reference; // 0xaf0(0x08)

	void ReceiveTick(float DeltaSeconds); // Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartNiagara(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UNiagaraComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.OnLoopingStartNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_RollingEffects_Boulder(int32_t EntryPoint); // Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.ExecuteUbergraph_GCNL_RollingEffects_Boulder // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

