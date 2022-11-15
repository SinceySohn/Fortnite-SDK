// BlueprintGeneratedClass GCN_Burst_TrackingPistolFlash.GCN_Burst_TrackingPistolFlash_C
// Size: 0x250 (Inherited: 0x210)
struct UGCN_Burst_TrackingPistolFlash_C : UFortGameplayCueNotify_Burst {
	struct FVector Offset; // 0x210(0x18)
	struct FVector OffsetDBNO; // 0x228(0x18)
	struct FName ActorParamName; // 0x240(0x04)
	struct FName VectorParamName; // 0x244(0x04)
	struct USoundBase* WarningSound; // 0x248(0x08)

	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Burst_TrackingPistolFlash.GCN_Burst_TrackingPistolFlash_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

