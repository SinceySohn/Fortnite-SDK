// Class PhaseableBuildGameplayRuntime.AbilityTask_ApplyRootMotionChromeForce
// Size: 0x128 (Inherited: 0x120)
struct UAbilityTask_ApplyRootMotionChromeForce : UAbilityTask_ApplyRootMotionMoveToForce {
	struct UCurveFloat* PercentMovedToDestination; // 0x120(0x08)

	struct UAbilityTask_ApplyRootMotionChromeForce* ApplyRootMotionChromeForce(struct UGameplayAbility* InOwningAbility, struct FName InTaskInstanceName, struct FVector InTargetLocation, float InDuration, bool bInSetNewMovementMode, enum class EMovementMode InMovementMode, bool bInRestrictSpeedToExpected, struct UCurveVector* InPathOffsetCurve, struct UCurveFloat* InPercentMovedToDestination, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, struct FVector InSetVelocityOnFinish, float InClampVelocityOnFinish); // Function PhaseableBuildGameplayRuntime.AbilityTask_ApplyRootMotionChromeForce.ApplyRootMotionChromeForce // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x67aadc0
};

// Class PhaseableBuildGameplayRuntime.FortAthenaAIBotEvaluator_PhaseableBuildingTraversal
// Size: 0x158 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_PhaseableBuildingTraversal : UFortAthenaAIBotEvaluator {
	struct FName TargetActorName; // 0x88(0x04)
	struct FName TraversalBlockMeleeAttackName; // 0x8c(0x04)
	char pad_90[0x4]; // 0x90(0x04)
	struct FGameplayTag PhaseableAppliedTag; // 0x94(0x04)
	struct FName PhaseableAppliedActorTag; // 0x98(0x04)
	struct FGameplayTag PhaseableTag; // 0x9c(0x04)
	struct FName PhaseableActorTag; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FScalableFloat PhaseableFailsafeTimeout; // 0xa8(0x28)
	struct FScalableFloat PhaseableBlockMeleeDistance; // 0xd0(0x28)
	char pad_F8[0x60]; // 0xf8(0x60)
};

// Class PhaseableBuildGameplayRuntime.FortPawnComponent_Phasing
// Size: 0x1e0 (Inherited: 0xa0)
struct UFortPawnComponent_Phasing : UFortPawnComponent {
	struct UPhaseableBuildComponent* TargetedPhaseableComponent; // 0xa0(0x08)
	struct ABuildingActor* TargetedBuilding; // 0xa8(0x08)
	struct FHitResult TargetedBuildingHitResult; // 0xb0(0xe0)
	struct ABuildingSMActor* PhasingBuilding; // 0x190(0x08)
	struct ABuildingSMActor* PreviousMoveIgnoredBuilding; // 0x198(0x08)
	struct FScalableFloat PrephaseDecalMaxDistance; // 0x1a0(0x28)
	char pad_1C8[0x10]; // 0x1c8(0x10)
	bool bIsTargetingBuilding; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)

	void UpdateTargetingBuild(); // Function PhaseableBuildGameplayRuntime.FortPawnComponent_Phasing.UpdateTargetingBuild // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetCurrentPhasingBuilding(struct ABuildingSMActor* CurrentPhasingBuilding); // Function PhaseableBuildGameplayRuntime.FortPawnComponent_Phasing.SetCurrentPhasingBuilding // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x67ab56c
	void ServerTargetedBuildingSet(struct ABuildingActor* InTargetedBuilding); // Function PhaseableBuildGameplayRuntime.FortPawnComponent_Phasing.ServerTargetedBuildingSet // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x67ab4e8
	void ServerTargetedBuildingHitResultSet(struct FHitResult InTargetedBuildingHitResult); // Function PhaseableBuildGameplayRuntime.FortPawnComponent_Phasing.ServerTargetedBuildingHitResultSet // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x67ab458
	void OnRep_TargetedBuilding(); // Function PhaseableBuildGameplayRuntime.FortPawnComponent_Phasing.OnRep_TargetedBuilding // (Final|Native|Protected) // @ game+0x67ab444
	void OnRep_PhasingBuildingInfo(); // Function PhaseableBuildGameplayRuntime.FortPawnComponent_Phasing.OnRep_PhasingBuildingInfo // (Final|Native|Protected) // @ game+0x67ab3cc
	void OnIsTargetingBuild(bool bIsTargetingBuild); // Function PhaseableBuildGameplayRuntime.FortPawnComponent_Phasing.OnIsTargetingBuild // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class PhaseableBuildGameplayRuntime.PhaseableBuildComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UPhaseableBuildComponent : UActorComponent {
	bool bRegisteredForOnHealthIsMax; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UFortChromeSubsystem* ChromeSubsystemClass; // 0xa8(0x08)

	bool TestNoASCCreation(); // Function PhaseableBuildGameplayRuntime.PhaseableBuildComponent.TestNoASCCreation // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a3c374
	void OnHitByPawn(struct AFortPlayerPawn* Pawn, struct FHitResult& HitResult); // Function PhaseableBuildGameplayRuntime.PhaseableBuildComponent.OnHitByPawn // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnFullHealthReached(); // Function PhaseableBuildGameplayRuntime.PhaseableBuildComponent.OnFullHealthReached // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleOnDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector Momentum); // Function PhaseableBuildGameplayRuntime.PhaseableBuildComponent.HandleOnDamaged // (Final|Native|Protected|HasDefaults) // @ game+0x67ab150
};

