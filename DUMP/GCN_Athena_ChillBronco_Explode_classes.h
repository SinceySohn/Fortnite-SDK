// BlueprintGeneratedClass GCN_Athena_ChillBronco_Explode.GCN_Athena_ChillBronco_Explode_C
// Size: 0x220 (Inherited: 0x210)
struct UGCN_Athena_ChillBronco_Explode_C : UFortGameplayCueNotify_Burst {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x210(0x08)
	struct AActor* LastTarget; // 0x218(0x08)

	void OnBurst(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_ChillBronco_Explode.GCN_Athena_ChillBronco_Explode_C.OnBurst // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xdef49c
	void ExecuteUbergraph_GCN_Athena_ChillBronco_Explode(int32_t EntryPoint); // Function GCN_Athena_ChillBronco_Explode.GCN_Athena_ChillBronco_Explode_C.ExecuteUbergraph_GCN_Athena_ChillBronco_Explode // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

