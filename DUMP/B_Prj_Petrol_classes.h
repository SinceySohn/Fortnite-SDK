// BlueprintGeneratedClass B_Prj_Petrol.B_Prj_Petrol_C
// Size: 0xb08 (Inherited: 0xa68)
struct AB_Prj_Petrol_C : AFortProjectilePetrol {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa68(0x08)
	struct UParticleSystemComponent* P_Petrol_Prj_Trail; // 0xa70(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xa78(0x08)
	struct ABGA_Petrol_Pickup_C* ClosestPetrolPickupBGA; // 0xa80(0x08)
	struct ABGA_Petrol_Pickup_C* NullBGA; // 0xa88(0x08)
	double ShortestDistance; // 0xa90(0x08)
	int32_t ClosestPetrolPickupBGAIndex; // 0xa98(0x04)
	char pad_A9C[0x4]; // 0xa9c(0x04)
	struct TArray<struct AActor*> HitActors; // 0xaa0(0x10)
	struct FScalableFloat OverrideFuelToAddToPetrolPickup; // 0xab0(0x28)
	int32_t FuelToAddToPetrolPickup; // 0xad8(0x04)
	char pad_ADC[0x4]; // 0xadc(0x04)
	struct FScalableFloat Hotfix_RefillVehicleAmount; // 0xae0(0x28)

	void Check If NoFuel Tag Present(struct AFortAthenaVehicle* Vehicle Actor); // Function B_Prj_Petrol.B_Prj_Petrol_C.Check If NoFuel Tag Present // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Petrol.B_Prj_Petrol_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Petrol.B_Prj_Petrol_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Petrol.B_Prj_Petrol_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Petrol.B_Prj_Petrol_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_Prj_Petrol.B_Prj_Petrol_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Petrol.B_Prj_Petrol_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Petrol(int32_t EntryPoint); // Function B_Prj_Petrol.B_Prj_Petrol_C.ExecuteUbergraph_B_Prj_Petrol // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

