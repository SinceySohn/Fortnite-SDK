// BlueprintGeneratedClass BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C
// Size: 0x230 (Inherited: 0xa0)
struct UBuildingActorCBGASpawnComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FScalableFloat Row_GlobalEnabled; // 0xa8(0x28)
	struct FScalableFloat Row_SubtypeEnabled; // 0xd0(0x28)
	struct FScalableFloat Row_DropChance; // 0xf8(0x28)
	struct FScalableFloat Row_MaxSpawnQuantityPerTrigger; // 0x120(0x28)
	struct TSoftClassPtr<UObject> CBGA_SoftRef; // 0x148(0x28)
	struct ACBGA_Parent_Physics_C* CBGA_ClassRef; // 0x170(0x08)
	struct TArray<double> ThesholdAmounts; // 0x178(0x10)
	struct FVector RelativeSpawnOffset; // 0x188(0x18)
	double SpawnRotationMin; // 0x1a0(0x08)
	double SpawnRotationMax; // 0x1a8(0x08)
	double SpawnXYForwardOffset; // 0x1b0(0x08)
	bool ShouldImpulse; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	double DelayBeforeImpulse; // 0x1c0(0x08)
	struct FVector ImpulseAmount; // 0x1c8(0x18)
	bool CollisionAfterImpulse; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	double DelayBeforeCollisionAfterImpulse; // 0x1e8(0x08)
	bool CollisionOnSpawn; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct ABuildingActor* OwningBuildingActor; // 0x1f8(0x08)
	bool RollSpawnOnDeath; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	double DelayBetweenSpawnAttempts; // 0x208(0x08)
	bool ShouldUseActorRotation; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct FRotator SpecifiedSpawnRotation; // 0x218(0x18)

	void ThreshHoldCheck(bool& ValidDrop); // Function BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C.ThreshHoldCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_AA2D046F4776EA6FF0EAB28E9459A5EF(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C.OnReady_AA2D046F4776EA6FF0EAB28E9459A5EF // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_A81F30C841A9FB0CB871A296A47EB549(struct UObject* Loaded); // Function BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C.OnLoaded_A81F30C841A9FB0CB871A296A47EB549 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Damaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C.Damaged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DynamicallySpawn(bool UsesThresholdChecks); // Function BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C.DynamicallySpawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Died(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C.Died // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BuildingActorCBGASpawnComponent(int32_t EntryPoint); // Function BuildingActorCBGASpawnComponent.BuildingActorCBGASpawnComponent_C.ExecuteUbergraph_BuildingActorCBGASpawnComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

