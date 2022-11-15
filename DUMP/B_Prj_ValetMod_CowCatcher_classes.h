// BlueprintGeneratedClass B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C
// Size: 0xb98 (Inherited: 0xaf1)
struct AB_Prj_ValetMod_CowCatcher_C : AB_Prj_Athena_BGASpawner_C {
	char pad_AF1[0x7]; // 0xaf1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf8(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0xb00(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xb08(0x08)
	struct UStaticMeshComponent* SM_CowCatcher; // 0xb10(0x08)
	struct FScalableFloat HitPlayerLaunchMag; // 0xb18(0x28)
	struct FScalableFloat HitPlayerLaunchZMulti; // 0xb40(0x28)
	bool EnteredWater; // 0xb68(0x01)
	bool Hit; // 0xb69(0x01)
	char pad_B6A[0x6]; // 0xb6a(0x06)
	struct UFortWorldItemDefinition* CowCatcherWID; // 0xb70(0x08)
	struct UFXSystemAsset* WaterSplashFX; // 0xb78(0x08)
	struct ABuildingGameplayActor* BarricadeClass; // 0xb80(0x08)
	bool FiredFromSecond?; // 0xb88(0x01)
	char pad_B89[0x3]; // 0xb89(0x03)
	struct FGameplayTag Mod Tag; // 0xb8c(0x04)
	double BumpPositionZ; // 0xb90(0x08)

	bool IsValidHit?(struct AActor* HitActor); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.IsValidHit? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool ShouldApplyMod(struct AFortAthenaVehicle* Vehicle); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.ShouldApplyMod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector CalculateLaunchVelocity(struct AFortPawn* PlayerPawn); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.CalculateLaunchVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ParentHit(); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.ParentHit // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HasEnteredWater(); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.HasEnteredWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SpawnPickupMod(); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.SpawnPickupMod // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnBarricadeBGA(); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.SpawnBarricadeBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisposeProjectile(); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.DisposeProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyMod(); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.ApplyMod // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyImpact(); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.ApplyImpact // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_ValetMod_CowCatcher(int32_t EntryPoint); // Function B_Prj_ValetMod_CowCatcher.B_Prj_ValetMod_CowCatcher_C.ExecuteUbergraph_B_Prj_ValetMod_CowCatcher // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

