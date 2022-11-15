// BlueprintGeneratedClass B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C
// Size: 0xec0 (Inherited: 0xa40)
struct AB_Prj_Athena_LaunchPadThrowable_Parent_C : AFortSuperTowerGrenadeProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct UNiagaraComponent* N_Trail; // 0xa48(0x08)
	struct UStaticMeshComponent* Mesh; // 0xa50(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xa58(0x08)
	struct FVector BaseDestination; // 0xa60(0x18)
	struct UNiagaraSystem* P_BuildBuilding; // 0xa78(0x08)
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
	double TireBuildDelay; // 0xb70(0x08)
	struct TArray<struct FVector> ClearedCells_Normal; // 0xb78(0x10)
	struct FVector LastBounceLocation; // 0xb88(0x18)
	double MinBounceDistance; // 0xba0(0x08)
	double LastBounceTime; // 0xba8(0x08)
	double MinTimeBetweenBounces; // 0xbb0(0x08)
	struct USoundBase* BounceSound; // 0xbb8(0x08)
	struct TArray<struct FVector> ClearedCells_Underground; // 0xbc0(0x10)
	struct TArray<struct AActor*> BGAClasses_Tires; // 0xbd0(0x10)
	struct TArray<struct FVector> BGALocations_Tires; // 0xbe0(0x10)
	struct TArray<struct FRotator> BGARotations_Tires; // 0xbf0(0x10)
	struct TMap<enum class ECardinalDirection, struct FVector> OrientationDoortraceOffsets; // 0xc00(0x50)
	struct FVector LaunchpadTraceOffsetHigh; // 0xc50(0x18)
	struct FVector LaunchpadTraceOffsetLow; // 0xc68(0x18)
	bool b_HitTerrain; // 0xc80(0x01)
	char pad_C81[0x7]; // 0xc81(0x07)
	struct USoundBase* InAirLoopSound; // 0xc88(0x08)
	struct UAudioComponent* InAirLoopComponent; // 0xc90(0x08)
	double BounceTimeout; // 0xc98(0x08)
	struct AActor* BuilderClass; // 0xca0(0x08)
	struct AActor* BuilderClassBasement; // 0xca8(0x08)
	struct AActor* BuilderClassFloorless; // 0xcb0(0x08)
	struct FVector CenterDestination; // 0xcb8(0x18)
	struct FName BlockedComponentTag; // 0xcd0(0x04)
	char pad_CD4[0x4]; // 0xcd4(0x04)
	struct FGameplayTagContainer Floor Gameplay Tag; // 0xcd8(0x20)
	struct UNiagaraComponent* Build Particle; // 0xcf8(0x08)
	struct TMap<int32_t, struct FVector> Ramp Rule Build Offsets; // 0xd00(0x50)
	struct FGameplayTagContainer Ramp Gameplay Tags; // 0xd50(0x20)
	float BlockingAreaCheckRadius; // 0xd70(0x04)
	char pad_D74[0x4]; // 0xd74(0x04)
	struct FHitResult Stopped Hit; // 0xd78(0xe0)
	enum class Enum_LaunchpadSpawnVariants Floor Variant; // 0xe58(0x01)
	bool Bounced; // 0xe59(0x01)
	char pad_E5A[0x6]; // 0xe5a(0x06)
	struct TArray<struct AActor*> Empty Array; // 0xe60(0x10)
	struct TArray<struct FHitResult> Stored Out Hits; // 0xe70(0x10)
	bool b_SecondTerrainCheck; // 0xe80(0x01)
	char pad_E81[0x7]; // 0xe81(0x07)
	struct FVector Bottom Center Cell Offset; // 0xe88(0x18)
	struct FGameplayTagContainer Blacklisted Tags; // 0xea0(0x20)

	void Check for Blacklisted Tags(struct AActor* Hit Actor, bool& Tag Found); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Check for Blacklisted Tags // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Should Bounce Off Actor(struct AActor* Hit Actor, struct UPrimitiveComponent* Hit Component, bool& bShouldBounce); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Should Bounce Off Actor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Ramp Underside Check(struct FHitResult Hit Result, bool& Is Underside); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Ramp Underside Check // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Second Terrain Trace(bool& Failed Terrain Check); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Second Terrain Trace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Instigator Standing On Ramp(struct AActor* Ramp Actor, bool& Standing On Ramp); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Instigator Standing On Ramp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Round To Nearest Rotation(int32_t Angle, int32_t& Rounded Angle); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Round To Nearest Rotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Check for Ramp(struct FVector Base Destination, bool& Ramp Rules Apply, struct AActor*& Ramp Actor); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Check for Ramp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Handle Ramps(struct AActor* Ramp Actor); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Handle Ramps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reject Building(bool Use Actor Location); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Reject Building // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Check if Hostile(struct AActor* Actor, bool& Hostile Owner); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Check if Hostile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Floor Trace(bool& Hit Floor, struct AActor*& Floor Actor); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Floor Trace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool Can Destroy Object(struct AActor* Object); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Can Destroy Object // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearOnly(struct TArray<struct FVector>& ClearedGridCells, bool DestroyFloorsQuickly); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.ClearOnly // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CallDynamicBuilder(struct AActor* Class, struct FVector Location); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.CallDynamicBuilder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateCardinalDirection(); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.CalculateCardinalDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleProps(struct TArray<struct AActor*>& Hit Results); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.HandleProps // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearAndBuild(struct TArray<struct FVector>& ClearedGridCells, struct TArray<struct AActor*>& BGAClassArray, struct TArray<struct FVector>& BGALocationArray, struct TArray<struct FRotator>& BGARotationArray, bool DestroyFloorsQuickly); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.ClearAndBuild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateBaseSection(struct FVector ReferenceLocation, struct TArray<struct AActor*>& BGAClassArray, struct TArray<struct FVector>& BGALocationArray, struct TArray<struct FRotator>& BGARotationArray); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.CreateBaseSection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBaseDestination(struct FHitResult& Hit); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.SetBaseDestination // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Handle Bounce(struct FVector Hit Location); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Handle Bounce // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Delete another actor(); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Delete another actor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Spawn Building(); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Spawn Building // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Begin Destroying Actors(); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Begin Destroying Actors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Explode FX(struct FVector Center Destination); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Play Explode FX // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Repeat Trace In New Location(); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.Repeat Trace In New Location // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_LaunchPadThrowable_Parent(int32_t EntryPoint); // Function B_Prj_Athena_LaunchPadThrowable_Parent.B_Prj_Athena_LaunchPadThrowable_Parent_C.ExecuteUbergraph_B_Prj_Athena_LaunchPadThrowable_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

