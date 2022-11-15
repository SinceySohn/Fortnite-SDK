// BlueprintGeneratedClass GC_Athena_RealityFlower_SeedPod_Damaged.GC_Athena_RealityFlower_SeedPod_Damaged_C
// Size: 0x240 (Inherited: 0x210)
struct UGC_Athena_RealityFlower_SeedPod_Damaged_C : UFortGameplayCueNotify_Burst {
	struct USoundBase* Melee Impact Sound; // 0x210(0x08)
	struct USoundBase* Bullet Impact Sound; // 0x218(0x08)
	struct USoundBase* Fire Impact Sound; // 0x220(0x08)
	struct FVector Impact Location; // 0x228(0x18)

	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GC_Athena_RealityFlower_SeedPod_Damaged.GC_Athena_RealityFlower_SeedPod_Damaged_C.OnBurstGeneric // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

