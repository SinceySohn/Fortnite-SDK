// BlueprintGeneratedClass BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C
// Size: 0xe14 (Inherited: 0x9d8)
struct ABGA_Athena_RealityFlower_Seed_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UNiagaraComponent* NS_RealitySeed_Trail; // 0x9e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x9e8(0x08)
	struct USphereComponent* Sphere; // 0x9f0(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x9f8(0x08)
	float SpeedSpinTimeline_NewTrack_0_C81136A04C6F48BC3C7A9DAFDD599406; // 0xa00(0x04)
	enum class ETimelineDirection SpeedSpinTimeline__Direction_C81136A04C6F48BC3C7A9DAFDD599406; // 0xa04(0x01)
	char pad_A05[0x3]; // 0xa05(0x03)
	struct UTimelineComponent* SpeedSpinTimeline; // 0xa08(0x08)
	float InitialSpeedDecay_Alpha_8F2336344469DFC331ADC299FA13B3FD; // 0xa10(0x04)
	enum class ETimelineDirection InitialSpeedDecay__Direction_8F2336344469DFC331ADC299FA13B3FD; // 0xa14(0x01)
	char pad_A15[0x3]; // 0xa15(0x03)
	struct UTimelineComponent* InitialSpeedDecay; // 0xa18(0x08)
	struct FText Text_Interact; // 0xa20(0x18)
	struct FScalableFloat Row_MaxLifespan; // 0xa38(0x28)
	struct FScalableFloat Row_SeedCollisionRadius; // 0xa60(0x28)
	struct FScalableFloat Row_InteractTime; // 0xa88(0x28)
	struct UFortWorldItemDefinition* Item_Seed; // 0xab0(0x08)
	struct FGameplayTag GC_Collect; // 0xab8(0x04)
	struct FGameplayTag GC_Destroyed; // 0xabc(0x04)
	struct FVector Location_Start; // 0xac0(0x18)
	struct FScalableFloat Row_Leash_Radius; // 0xad8(0x28)
	struct FVector RandomUnitVector; // 0xb00(0x18)
	struct FScalableFloat Row_Drift_TimeBetweenDirectionChanges_Min; // 0xb18(0x28)
	struct FScalableFloat Row_Drift_TimeBetweenDirectionChanges_Max; // 0xb40(0x28)
	bool Debug; // 0xb68(0x01)
	char pad_B69[0x7]; // 0xb69(0x07)
	struct FScalableFloat Row_Drift_ZComponent_Min; // 0xb70(0x28)
	struct FScalableFloat Row_Drift_ZComponent_Max; // 0xb98(0x28)
	struct FScalableFloat Row_Acceleration; // 0xbc0(0x28)
	struct FScalableFloat Row_Bounciness; // 0xbe8(0x28)
	struct FScalableFloat Row_BounceFriction; // 0xc10(0x28)
	struct FScalableFloat Row_Initial_Speed; // 0xc38(0x28)
	struct FScalableFloat Row_Initial_GravityScale; // 0xc60(0x28)
	struct FScalableFloat Row_Initial_Velocity_Pitch_Min; // 0xc88(0x28)
	struct FScalableFloat Row_Initial_Velocity_Pitch_Max; // 0xcb0(0x28)
	struct FScalableFloat Row_Initial_SpeedDecayDuration; // 0xcd8(0x28)
	struct FScalableFloat Row_Final_Speed; // 0xd00(0x28)
	struct FScalableFloat Row_Final_GravityScale; // 0xd28(0x28)
	struct FScalableFloat Row_Bounce_ZNormalMinThresholdToPop; // 0xd50(0x28)
	struct FScalableFloat Row_Bounce_ZImpactVelocityToPop_Min; // 0xd78(0x28)
	struct FVector InitialVelocityRep; // 0xda0(0x18)
	bool HasSpawnedItem; // 0xdb8(0x01)
	bool BounceFXOnCooldown; // 0xdb9(0x01)
	char pad_DBA[0x6]; // 0xdba(0x06)
	struct FScalableFloat Row_BounceFXCooldown; // 0xdc0(0x28)
	struct FGameplayTag GC_HitWater; // 0xde8(0x04)
	struct FGameplayTag GC_HitWorld; // 0xdec(0x04)
	struct FGameplayTag GC_InAir; // 0xdf0(0x04)
	char pad_DF4[0x4]; // 0xdf4(0x04)
	double RotationRate; // 0xdf8(0x08)
	double SeedSpinPlayRate; // 0xe00(0x08)
	double SeedSpinSpeed; // 0xe08(0x08)
	struct FGameplayTag Event Tag; // 0xe10(0x04)

	void SetMaxSpeedAndGavityByAlpha(double Alpha); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.SetMaxSpeedAndGavityByAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float& OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UserConstructionScript(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitialSpeedDecay__FinishedFunc(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.InitialSpeedDecay__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void InitialSpeedDecay__UpdateFunc(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.InitialSpeedDecay__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void SpeedSpinTimeline__FinishedFunc(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.SpeedSpinTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void SpeedSpinTimeline__UpdateFunc(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.SpeedSpinTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void RandomDrift(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.RandomDrift // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PlayFX_Idle(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.PlayFX_Idle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DoRandomDriftAfterRandomTime(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.DoRandomDriftAfterRandomTime // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitialVelocity(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.InitialVelocity // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DebugServerLocation(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.DebugServerLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RepSetInitialVelocity(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.RepSetInitialVelocity // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpawnItemPickupAndDie(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.SpawnItemPickupAndDie // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BGA_Athena_RealityFlower_Seed_FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.BndEvt__BGA_Athena_RealityFlower_Seed_FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetBounceFXCooldown(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.SetBounceFXCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SpinSeed(); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.SpinSeed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_RealityFlower_Seed(int32_t EntryPoint); // Function BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C.ExecuteUbergraph_BGA_Athena_RealityFlower_Seed // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

