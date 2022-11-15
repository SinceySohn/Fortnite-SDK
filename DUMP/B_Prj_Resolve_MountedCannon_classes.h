// BlueprintGeneratedClass B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C
// Size: 0xc40 (Inherited: 0xa20)
struct AB_Prj_Resolve_MountedCannon_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UAudioComponent* InAirLoop_SFX; // 0xa28(0x08)
	struct UNiagaraComponent* P_Cannon_Prj_Niagara_VFX; // 0xa30(0x08)
	struct UParticleSystemComponent* P_Cannon_Projectile_VFX; // 0xa38(0x08)
	float AdjustProjectileOffset_ProjectileOffset_FC0E263849DC1EFB37BE53893A771A47; // 0xa40(0x04)
	enum class ETimelineDirection AdjustProjectileOffset__Direction_FC0E263849DC1EFB37BE53893A771A47; // 0xa44(0x01)
	char pad_A45[0x3]; // 0xa45(0x03)
	struct UTimelineComponent* AdjustProjectileOffset; // 0xa48(0x08)
	struct USoundBase* Cannonball_SurfaceImpactSound; // 0xa50(0x08)
	struct USoundBase* Cannonball_PlayerImpactSound; // 0xa58(0x08)
	struct USoundBase* Cannonball_ExplosionSound; // 0xa60(0x08)
	struct FVector StartingVelocity; // 0xa68(0x18)
	struct ABuildingActor* LastHitBuilding; // 0xa80(0x08)
	struct FScalableFloat EnemyLaunchVelocity; // 0xa88(0x28)
	struct FScalableFloat VelocityLossMultiplier; // 0xab0(0x28)
	struct FScalableFloat MinimumVelocity; // 0xad8(0x28)
	struct FScalableFloat CannonballInitialSpeed; // 0xb00(0x28)
	struct FScalableFloat CannonballGravityScale; // 0xb28(0x28)
	struct FHitResult LastHitResult; // 0xb50(0xe0)
	struct UMaterialInterface* ExplosionDecal; // 0xc30(0x08)
	struct UNiagaraSystem* WaterImpactFX; // 0xc38(0x08)

	void PlayExplodeVFXAndSound(struct FHitResult HitResult); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.PlayExplodeVFXAndSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldResimulateAfterBuildingHit(struct ABuildingActor* HitBuilding); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.ShouldResimulateAfterBuildingHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector CalculateNewVelocity(struct FVector TraceStart, struct FVector TraceEnd, bool& ReturnValue2); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.CalculateNewVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void LaunchPawn(struct AFortPlayerPawnAthena* LaunchedPawn); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.LaunchPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleProjectileStop(); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.HandleProjectileStop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Resume_Movement(); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.Resume_Movement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AdjustProjectileOffset__FinishedFunc(); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.AdjustProjectileOffset__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void AdjustProjectileOffset__UpdateFunc(); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.AdjustProjectileOffset__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__B_Prj_Resolve_MountedCannon_WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.BndEvt__B_Prj_Resolve_MountedCannon_WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Resolve_MountedCannon(int32_t EntryPoint); // Function B_Prj_Resolve_MountedCannon.B_Prj_Resolve_MountedCannon_C.ExecuteUbergraph_B_Prj_Resolve_MountedCannon // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

