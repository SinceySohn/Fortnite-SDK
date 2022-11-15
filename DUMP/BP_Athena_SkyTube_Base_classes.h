// BlueprintGeneratedClass BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C
// Size: 0x9fc (Inherited: 0x828)
struct ABP_Athena_SkyTube_Base_C : AFortSkyTube {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x828(0x08)
	struct UAbilitySystemComponent* AbilitySystem; // 0x830(0x08)
	struct UFortSplineAudioComponent* FortSplineAudio; // 0x838(0x08)
	struct UStaticMesh* SplineStaticMesh; // 0x840(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x848(0x01)
	enum class ESplineMeshAxis MeshForwardAxis; // 0x849(0x01)
	char pad_84A[0x2]; // 0x84a(0x02)
	struct FName CollisionProfileName; // 0x84c(0x04)
	bool AutoSmoothTangent; // 0x850(0x01)
	char pad_851[0x7]; // 0x851(0x07)
	double Tension; // 0x858(0x08)
	double FinalBoostMultiplier; // 0x860(0x08)
	double FinalBoostFlatForce; // 0x868(0x08)
	struct UMaterialInterface* SplineMeshMaterialOverride; // 0x870(0x08)
	struct TArray<struct FTransform> SplinePointTransforms; // 0x878(0x10)
	bool ExcludefromMediumHLOD; // 0x888(0x01)
	char pad_889[0x7]; // 0x889(0x07)
	struct FScalableFloat DataSkytubeLaunchClamp; // 0x890(0x28)
	struct FScalableFloat DataMinBoostMultiplier; // 0x8b8(0x28)
	struct FScalableFloat DataMaxBoostMultiplier; // 0x8e0(0x28)
	struct FScalableFloat DataMinFlatZBoost; // 0x908(0x28)
	struct FScalableFloat DataMaxFlatZBoost; // 0x930(0x28)
	struct FScalableFloat DataVerticalVelocityMultiplier; // 0x958(0x28)
	struct FScalableFloat DataHorizontalAccelerationMultiplier; // 0x980(0x28)
	struct AActor* Ground_ParticleSystem; // 0x9a8(0x08)
	int32_t SplinePointSubtractor; // 0x9b0(0x04)
	char pad_9B4[0x4]; // 0x9b4(0x04)
	struct FTimerHandle SkyTubeDestructionGEApplication_Timer; // 0x9b8(0x08)
	bool DEPRECATED_UseOldConstructionScript; // 0x9c0(0x01)
	char pad_9C1[0x7]; // 0x9c1(0x07)
	struct USoundBase* Player Enter Tube Sound; // 0x9c8(0x08)
	struct USoundBase* Player Exit Tube Sound; // 0x9d0(0x08)
	struct USoundBase* Veh Enter Tube Sound; // 0x9d8(0x08)
	struct USoundBase* Veh Exit Tube Sound; // 0x9e0(0x08)
	struct FVector2D TubeScale; // 0x9e8(0x10)
	struct FGameplayTag SkytubeBlockedTag; // 0x9f8(0x04)

	void CheckForBlocked(struct AActor* InActor, bool& OutBlocked); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.CheckForBlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Actor Exit Skytube(struct AActor* OtherActor); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.Actor Exit Skytube // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchVehicle(struct AFortAthenaVehicle* Vehicle); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.LaunchVehicle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckZDirection(struct AFortPlayerPawn* Pawn, struct FVector Velocity); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.CheckZDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateLaunchForce(struct AFortPlayerPawn* Pawn, struct FVector Velocity, struct FVector& Out Launch); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.CalculateLaunchForce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SmoothTangents(struct FVector Location A, struct FVector Tangent A, struct FVector Location B, struct FVector Tangent B, struct FVector& Tangent 0, struct FVector& Tangent 1); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.SmoothTangents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddSplineMesh(struct USplineMeshComponent*& NewSplineMesh); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.AddSplineMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnEnabledChanged(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.OnEnabledChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartShuttingDown(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.OnStartShuttingDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void UpdateSkyTubeDestructionGE(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.UpdateSkyTubeDestructionGE // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleForcedExit(struct AActor* ExitingPawn); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.HandleForcedExit // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PlaySkytubeEnterSound(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.PlaySkytubeEnterSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySkytubeExitSound(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.PlaySkytubeExitSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySkytubeVehEnterSound(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.PlaySkytubeVehEnterSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySkytubeVehExitSound(); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.PlaySkytubeVehExitSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Athena_SkyTube_Base(int32_t EntryPoint); // Function BP_Athena_SkyTube_Base.BP_Athena_SkyTube_Base_C.ExecuteUbergraph_BP_Athena_SkyTube_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

