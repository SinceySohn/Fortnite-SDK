// BlueprintGeneratedClass B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C
// Size: 0xca0 (Inherited: 0xaf1)
struct AB_Prj_ValetMod_OffRoadTire_C : AB_Prj_Athena_BGASpawner_C {
	char pad_AF1[0x7]; // 0xaf1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf8(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xb00(0x08)
	struct UStaticMeshComponent* Tire; // 0xb08(0x08)
	struct FGameplayTag ModTagToApply; // 0xb10(0x04)
	char pad_B14[0x4]; // 0xb14(0x04)
	double SpeedToStop; // 0xb18(0x08)
	double PlayerLaunchMultiplier; // 0xb20(0x08)
	double PlayerLaunchZMultiplier; // 0xb28(0x08)
	struct TArray<struct FName> TireFXSocketArray; // 0xb30(0x10)
	struct FScalableFloat ShouldTirePilesBeStackable; // 0xb40(0x28)
	struct FScalableFloat ShouldLaunchHitPlayer; // 0xb68(0x28)
	struct FScalableFloat HitPlayerLaunchMag; // 0xb90(0x28)
	struct FScalableFloat HitPlayerLaunchZMulti; // 0xbb8(0x28)
	bool EnteredWater; // 0xbe0(0x01)
	bool Hit; // 0xbe1(0x01)
	char pad_BE2[0x6]; // 0xbe2(0x06)
	struct UFortWorldItemDefinition* TireModWID; // 0xbe8(0x08)
	struct UFXSystemAsset* WaterSplashFX; // 0xbf0(0x08)
	struct AFortAthenaVehicle* HitVehicle; // 0xbf8(0x08)
	struct FScalableFloat HotfixSpawnPickUpIfStuckOnVehicle; // 0xc00(0x28)
	struct FScalableFloat ShouldApplyForay; // 0xc28(0x28)
	struct FScalableFloat PhysicsObjectImpulseStrength; // 0xc50(0x28)
	struct FScalableFloat PhysicsObjectImpulseStrengthZMod; // 0xc78(0x28)

	bool ShouldApplyMod(struct AFortAthenaVehicle* Vehicle); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ShouldApplyMod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector CalculateLaunchVelocity(struct AFortPawn* PlayerPawn); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.CalculateLaunchVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ParentHit(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ParentHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HasEnteredWater(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.HasEnteredWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ResetHitVehicle(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ResetHitVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnPickupMod(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.SpawnPickupMod // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_ValetMod_OffRoadTire(int32_t EntryPoint); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ExecuteUbergraph_B_Prj_ValetMod_OffRoadTire // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

