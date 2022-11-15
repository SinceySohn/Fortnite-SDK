// BlueprintGeneratedClass GCN_SpicySake_Attack.GCN_SpicySake_Attack_C
// Size: 0x218 (Inherited: 0x210)
struct UGCN_SpicySake_Attack_C : UFortGameplayCueNotify_Burst {
	double SoundVizAudibleDistance; // 0x210(0x08)

	void SetWaterFXData(struct FVector WaterSurfacePosition, struct FVector WaterPlaneNormal, double WaterDepth, struct UNiagaraComponent* WaterFXComponent, int32_t BodyIndex); // Function GCN_SpicySake_Attack.GCN_SpicySake_Attack_C.SetWaterFXData // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnBurst(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_SpicySake_Attack.GCN_SpicySake_Attack_C.OnBurst // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

