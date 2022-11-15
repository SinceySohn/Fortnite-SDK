// BlueprintGeneratedClass Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C
// Size: 0xcf8 (Inherited: 0xb48)
struct APrj_Athena_HappyGhost_C : AFortAttachableProjectileDeprecated {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb48(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0xb50(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xb58(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb60(0x08)
	struct AB_Athena_HappyGhost_Wire_C* Rope; // 0xb68(0x08)
	struct AFortPlayerPawn* FortPawn; // 0xb70(0x08)
	struct AB_HappyGhost_Athena_C* WeaponActor; // 0xb78(0x08)
	double ReelinPlayRate; // 0xb80(0x08)
	struct FGameplayTag Event_ProjSpawned; // 0xb88(0x04)
	char pad_B8C[0x4]; // 0xb8c(0x04)
	struct UParticleSystem* FX_SpawnItems; // 0xb90(0x08)
	struct USoundBase* Sound_SpawnItems; // 0xb98(0x08)
	struct FVector SpawnItemsTraceOffset; // 0xba0(0x18)
	struct FHitResult WaterHit; // 0xbb8(0xe0)
	struct UParticleSystem* WaterImpactFX; // 0xc98(0x08)
	struct UPhysicalMaterial* WaterHitMat; // 0xca0(0x08)
	double HitFishReelInRate; // 0xca8(0x08)
	double ItemSpawnDelay; // 0xcb0(0x08)
	struct USoundBase* Hit Fish Sound; // 0xcb8(0x08)
	double ItemAttachMinDist; // 0xcc0(0x08)
	double ItemAttachDistanceRequirement; // 0xcc8(0x08)
	struct FGameplayTagContainer TC_Vehicle; // 0xcd0(0x20)
	double HitReelInRate; // 0xcf0(0x08)

	void SendQuestEvent(struct AActor* Hit Actor); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.SendQuestEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HandleCost(); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.HandleCost // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpawnItemsFX(); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.SpawnItemsFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void CustomPickupAttach(struct AFortPickup* FortPickup); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.CustomPickupAttach // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prj_Athena_HappyGhost(int32_t EntryPoint); // Function Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.ExecuteUbergraph_Prj_Athena_HappyGhost // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

