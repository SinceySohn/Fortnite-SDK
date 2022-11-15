// BlueprintGeneratedClass B_Prj_Athena_SilverBlazer_V2_.B_Prj_Athena_SilverBlazer_V2__C
// Size: 0xb44 (Inherited: 0xb18)
struct AB_Prj_Athena_SilverBlazer_V2__C : AB_Prj_Athena_BGASpawner_Attach_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb18(0x08)
	struct UParticleSystemComponent* P_ShieldBubble_SilverBlazer_PrjTrail_; // 0xb20(0x08)
	struct USkeletalMeshComponent* SkeletalMesh1; // 0xb28(0x08)
	struct ABuildingGameplayActor* ShieldBubbleBGA; // 0xb30(0x08)
	struct UFortWorldItemDefinition* ItemDefToSpawnAsPickupOnBlocked; // 0xb38(0x08)
	float BlockingAreaCheckRadius; // 0xb40(0x04)

	struct AActor* SpawnBGA_(struct FVector Normal, struct AActor* HitActor, struct UPrimitiveComponent* HitComp, struct FVector Pos, bool FromWater, struct FHitResult Hit); // Function B_Prj_Athena_SilverBlazer_V2_.B_Prj_Athena_SilverBlazer_V2__C.SpawnBGA_ // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RevertToPickup(); // Function B_Prj_Athena_SilverBlazer_V2_.B_Prj_Athena_SilverBlazer_V2__C.RevertToPickup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_SilverBlazer_V2_.B_Prj_Athena_SilverBlazer_V2__C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_SilverBlazer_V2_(int32_t EntryPoint); // Function B_Prj_Athena_SilverBlazer_V2_.B_Prj_Athena_SilverBlazer_V2__C.ExecuteUbergraph_B_Prj_Athena_SilverBlazer_V2_ // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

