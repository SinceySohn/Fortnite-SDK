// BlueprintGeneratedClass GCN_Daisy_EnvItem_Impact.GCN_Daisy_EnvItem_Impact_C
// Size: 0x220 (Inherited: 0x210)
struct UGCN_Daisy_EnvItem_Impact_C : UFortGameplayCueNotify_Burst {
	struct USoundBase* 1P Sound; // 0x210(0x08)
	struct USoundBase* 3P Sound; // 0x218(0x08)

	void HandleAudio(struct FGameplayCueParameters& Parameters, struct AActor* TargetActor); // Function GCN_Daisy_EnvItem_Impact.GCN_Daisy_EnvItem_Impact_C.HandleAudio // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnBurstNiagara(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UNiagaraComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Daisy_EnvItem_Impact.GCN_Daisy_EnvItem_Impact_C.OnBurstNiagara // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

