// BlueprintGeneratedClass BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C
// Size: 0xaf9 (Inherited: 0x828)
struct ABP_Athena_SkyTube_Coaster_Base_C : AFortSkyTube {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x828(0x08)
	struct UArrowComponent* Direction Guide Arrow; // 0x830(0x08)
	struct UStaticMeshComponent* SM_Rail; // 0x838(0x08)
	struct UAbilitySystemComponent* AbilitySystem; // 0x840(0x08)
	struct UFortSplineAudioComponent* FortSplineAudio; // 0x848(0x08)
	struct UStaticMesh* SplineStaticMesh; // 0x850(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x858(0x01)
	enum class ESplineMeshAxis MeshForwardAxis; // 0x859(0x01)
	char pad_85A[0x2]; // 0x85a(0x02)
	struct FName CollisionProfileName; // 0x85c(0x04)
	bool AutoSmoothTangent; // 0x860(0x01)
	char pad_861[0x7]; // 0x861(0x07)
	double Tension; // 0x868(0x08)
	double FinalBoostMultiplier; // 0x870(0x08)
	double FinalBoostFlatForce; // 0x878(0x08)
	struct UMaterialInterface* SplineMeshMaterialOverride; // 0x880(0x08)
	struct TArray<struct FTransform> SplinePointTransforms; // 0x888(0x10)
	bool ExcludefromMediumHLOD; // 0x898(0x01)
	char pad_899[0x7]; // 0x899(0x07)
	struct FScalableFloat DataSkytubeLaunchClamp; // 0x8a0(0x28)
	struct FScalableFloat DataMinBoostMultiplier; // 0x8c8(0x28)
	struct FScalableFloat DataMaxBoostMultiplier; // 0x8f0(0x28)
	struct FScalableFloat DataMinFlatZBoost; // 0x918(0x28)
	struct FScalableFloat DataMaxFlatZBoost; // 0x940(0x28)
	struct FScalableFloat DataVerticalVelocityMultiplier; // 0x968(0x28)
	struct FScalableFloat DataHorizontalAccelerationMultiplier; // 0x990(0x28)
	struct AActor* Ground_ParticleSystem; // 0x9b8(0x08)
	int32_t SplinePointSubtractor; // 0x9c0(0x04)
	char pad_9C4[0x4]; // 0x9c4(0x04)
	struct FTimerHandle SkyTubeDestructionGEApplication_Timer; // 0x9c8(0x08)
	bool DEPRECATED_UseOldConstructionScript; // 0x9d0(0x01)
	char pad_9D1[0x7]; // 0x9d1(0x07)
	struct USoundBase* Player Enter Tube Sound; // 0x9d8(0x08)
	struct USoundBase* Player Exit Tube Sound; // 0x9e0(0x08)
	struct USoundBase* Veh Enter Tube Sound; // 0x9e8(0x08)
	struct USoundBase* Veh Exit Tube Sound; // 0x9f0(0x08)
	struct FVector2D TubeScale; // 0x9f8(0x10)
	double Min Entry Z; // 0xa08(0x08)
	struct TMap<struct AActor*, struct FVector> Baller Map; // 0xa10(0x50)
	struct FTimerHandle Baller Update Timer; // 0xa60(0x08)
	struct AActor* Exiting Actor; // 0xa68(0x08)
	struct UNiagaraSystem* Ballercoaster Sparks FX Asset; // 0xa70(0x08)
	struct FGameplayTag Mag Field Gameplay Cue Tag; // 0xa78(0x04)
	struct FGameplayTag Sparks Gameplay Cue Tag; // 0xa7c(0x04)
	struct AActor* Entering Actor; // 0xa80(0x08)
	struct FScalableFloat CoasterDisabled; // 0xa88(0x28)
	struct FGameplayTagContainer Entry Denial Tags; // 0xab0(0x20)
	struct FScalableFloat Octopus Ejection Disable HF; // 0xad0(0x28)
	bool IncludeSplineMeshInHLOD; // 0xaf8(0x01)

	void Check For Driver(struct AActor* Exiting Actor, bool& Has Driver); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Check For Driver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CoasterEnabled(bool& Coaster Enabled); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.CoasterEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Update LED VFX(struct TArray<struct FVector>& Location Values, bool& Track Empty); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Update LED VFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Coaster Map Keys(struct AActor* Actor Key); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Update Coaster Map Keys // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Is Still Riding Coaster(struct AActor* Actor, bool& Still Riding); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Is Still Riding Coaster // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Set Arrow Guide(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Set Arrow Guide // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Should Actor Enter Sky Tube(struct AActor* Actor, bool& Should Enter); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Should Actor Enter Sky Tube // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Actor Exit Skytube(struct AActor* OtherActor); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Actor Exit Skytube // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchVehicle(struct AFortAthenaVehicle* Vehicle); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.LaunchVehicle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckZDirection(struct AFortPlayerPawn* Pawn, struct FVector Velocity); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.CheckZDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateLaunchForce(struct AFortPlayerPawn* Pawn, struct FVector Velocity, struct FVector& Out Launch); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.CalculateLaunchForce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SmoothTangents(struct FVector Location A, struct FVector Tangent A, struct FVector Location B, struct FVector Tangent B, struct FVector& Tangent 0, struct FVector& Tangent 1); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.SmoothTangents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddSplineMesh(struct USplineMeshComponent*& NewSplineMesh); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.AddSplineMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_C965BB264D8242A81CE17FBC12BA18E4(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Removed_C965BB264D8242A81CE17FBC12BA18E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnEnabledChanged(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.OnEnabledChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartShuttingDown(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.OnStartShuttingDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleForcedExit(struct AActor* ExitingPawn); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.HandleForcedExit // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PlaySkytubeEnterSound(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.PlaySkytubeEnterSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySkytubeExitSound(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.PlaySkytubeExitSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySkytubeVehEnterSound(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.PlaySkytubeVehEnterSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySkytubeVehExitSound(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.PlaySkytubeVehExitSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Baller Array Upate(); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Baller Array Upate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Exit via Boost(struct AActor* Actor); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Exit via Boost // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Return to Skytube(struct AActor* Returning Actor); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.Return to Skytube // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Athena_SkyTube_Coaster_Base(int32_t EntryPoint); // Function BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C.ExecuteUbergraph_BP_Athena_SkyTube_Coaster_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

