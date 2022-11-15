// BlueprintGeneratedClass B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C
// Size: 0xd00 (Inherited: 0xa40)
struct AB_Prj_Athena_SuperTowerGrenade_C : AFortSuperTowerGrenadeProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0xa48(0x08)
	struct UStaticMeshComponent* Mesh; // 0xa50(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xa58(0x08)
	struct FVector BaseDestination; // 0xa60(0x18)
	struct UParticleSystem* P_BuildBuilding; // 0xa78(0x08)
	struct USoundBase* Cue_CloseSound; // 0xa80(0x08)
	struct USoundBase* Cue_DistantSound; // 0xa88(0x08)
	struct FVector GridExplosionOffset; // 0xa90(0x18)
	double GridSizeXY; // 0xaa8(0x08)
	double GridSizeZ; // 0xab0(0x08)
	double GridYOffset; // 0xab8(0x08)
	double GridZOffset; // 0xac0(0x08)
	enum class ECardinalDirection CardinalDirection; // 0xac8(0x01)
	char pad_AC9[0x7]; // 0xac9(0x07)
	struct TMap<enum class ECardinalDirection, double> OrientationYawOffsets; // 0xad0(0x50)
	struct TMap<enum class ECardinalDirection, struct FVector> OrientationLocationOffsets; // 0xb20(0x50)
	bool IsDebug; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	double TireBuildDelay; // 0xb78(0x08)
	struct TArray<struct FVector> ClearedCells_Normal; // 0xb80(0x10)
	struct FVector LastBounceLocation; // 0xb90(0x18)
	double MinBounceDistance; // 0xba8(0x08)
	double LastBounceTime; // 0xbb0(0x08)
	double MinTimeBetweenBounces; // 0xbb8(0x08)
	struct USoundBase* BounceSound; // 0xbc0(0x08)
	struct TArray<struct FVector> ClearedCells_Underground; // 0xbc8(0x10)
	struct TArray<struct AActor*> BGAClasses_Tires; // 0xbd8(0x10)
	struct TArray<struct FVector> BGALocations_Tires; // 0xbe8(0x10)
	struct TArray<struct FRotator> BGARotations_Tires; // 0xbf8(0x10)
	struct TMap<enum class ECardinalDirection, struct FVector> OrientationDoortraceOffsets; // 0xc08(0x50)
	struct FVector DoorTraceOffsetHigh; // 0xc58(0x18)
	struct FVector DoorTraceOffsetLow; // 0xc70(0x18)
	bool b_HitTerrain; // 0xc88(0x01)
	char pad_C89[0x7]; // 0xc89(0x07)
	struct USoundBase* InAirLoopSound; // 0xc90(0x08)
	struct UAudioComponent* InAirLoopComponent; // 0xc98(0x08)
	double BounceTimeout; // 0xca0(0x08)
	struct AActor* BuilderClass; // 0xca8(0x08)
	struct AActor* BuilderClassBasement; // 0xcb0(0x08)
	bool b_SpawnTires; // 0xcb8(0x01)
	char pad_CB9[0x7]; // 0xcb9(0x07)
	struct FVector DoorCheckSize; // 0xcc0(0x18)
	struct FVector SnapToGridLocation; // 0xcd8(0x18)
	struct FName BounceTag; // 0xcf0(0x04)
	float BlockingAreaCheckRadius; // 0xcf4(0x04)
	struct UFortWorldItemDefinition* RevertToPickupWID; // 0xcf8(0x08)

	void ShouldBounceOffActor(struct AActor* HitActor, struct UPrimitiveComponent* HitComponent, bool& bShouldBounce); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ShouldBounceOffActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RevertToPickup(struct UFortWorldItemDefinition* ItemDefinition); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.RevertToPickup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForBlockedAreas(); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CheckForBlockedAreas // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Spawn Build FX(struct FVector Location); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Spawn Build FX // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool Can Destroy Object(struct AActor* Object); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Can Destroy Object // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearOnly(struct TArray<struct FVector>& ClearedGridCells, bool DestroyFloorsQuickly); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearOnly // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CallDynamicBuilder(struct AActor* Class, struct FVector Location); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CallDynamicBuilder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateCardinalDirection(); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CalculateCardinalDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleProps(struct TArray<struct AActor*>& Array); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.HandleProps // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnTires(struct FVector ReferenceLocation); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SpawnTires // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearAndBuild(struct TArray<struct FVector>& ClearedGridCells, struct TArray<struct AActor*>& BGAClassArray, struct TArray<struct FVector>& BGALocationArray, struct TArray<struct FRotator>& BGARotationArray, bool DestroyFloorsQuickly); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearAndBuild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateBaseSection(struct FVector ReferenceLocation, struct TArray<struct AActor*>& BGAClassArray, struct TArray<struct FVector>& BGALocationArray, struct TArray<struct FRotator>& BGARotationArray); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CreateBaseSection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBaseDestination(struct FHitResult& Hit); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SetBaseDestination // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Handle Bounce(struct FVector Hit Location); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Handle Bounce // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Delete another actor(); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Delete another actor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade(int32_t EntryPoint); // Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

