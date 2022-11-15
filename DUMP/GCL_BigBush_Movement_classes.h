// BlueprintGeneratedClass GCL_BigBush_Movement.GCL_BigBush_Movement_C
// Size: 0x9c0 (Inherited: 0x960)
struct AGCL_BigBush_Movement_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerPawn* TargetPawn; // 0x968(0x08)
	struct FVector PlayerHeightOffset; // 0x970(0x18)
	double TargetVelocity; // 0x988(0x08)
	double PlayerVelocityMultiplier; // 0x990(0x08)
	double RadiusOfCornToWiggle; // 0x998(0x08)
	double WiggleCooldown; // 0x9a0(0x08)
	struct UParticleSystemComponent* LoopingEmitter; // 0x9a8(0x08)
	struct USoundBase* Footsteps3p; // 0x9b0(0x08)
	struct USoundBase* Footsteps1p; // 0x9b8(0x08)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_BigBush_Movement.GCL_BigBush_Movement_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_BigBush_Movement.GCL_BigBush_Movement_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_BigBush_Movement.GCL_BigBush_Movement_C.OnActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Player Step(); // Function GCL_BigBush_Movement.GCL_BigBush_Movement_C.On Player Step // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCL_BigBush_Movement.GCL_BigBush_Movement_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCL_BigBush_Movement.GCL_BigBush_Movement_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCL_BigBush_Movement(int32_t EntryPoint); // Function GCL_BigBush_Movement.GCL_BigBush_Movement_C.ExecuteUbergraph_GCL_BigBush_Movement // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

