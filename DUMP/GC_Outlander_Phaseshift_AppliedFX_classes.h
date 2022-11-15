// BlueprintGeneratedClass GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C
// Size: 0x999 (Inherited: 0x960)
struct AGC_Outlander_Phaseshift_AppliedFX_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UPostProcessComponent* Teleport_PostProcess; // 0x968(0x08)
	float Teleport_PP_TL_PP_6347A40E47BF409410B4188DE9502B23; // 0x970(0x04)
	enum class ETimelineDirection Teleport_PP_TL__Direction_6347A40E47BF409410B4188DE9502B23; // 0x974(0x01)
	char pad_975[0x3]; // 0x975(0x03)
	struct UTimelineComponent* Teleport PP TL; // 0x978(0x08)
	struct TArray<struct FName> Dust Emitters; // 0x980(0x10)
	struct ABP_SplineVolumeTrail_v1b_C* TeleportSpline; // 0x990(0x08)
	bool UseSpawnSplineActor; // 0x998(0x01)

	void Teleport PP TL__FinishedFunc(); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Teleport PP TL__UpdateFunc(); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Activate PP(); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Activate PP // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Remove PP(); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Remove PP // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Spawn Spline Actor(struct AFortPlayerPawn* Player Pawn); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Spawn Spline Actor // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Stop Splines if Valid(); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Stop Splines if Valid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX(int32_t EntryPoint); // Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

