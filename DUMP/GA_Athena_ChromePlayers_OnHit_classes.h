// BlueprintGeneratedClass GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C
// Size: 0xef8 (Inherited: 0xb20)
struct UGA_Athena_ChromePlayers_OnHit_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* Pawn; // 0xb28(0x08)
	struct TArray<struct UGameplayEffect*> GE_ChromeBuilds; // 0xb30(0x10)
	struct TArray<struct AActor*> Actors to Ignore; // 0xb40(0x10)
	struct FHitResult Hit; // 0xb50(0xe0)
	double WallPullDistance; // 0xc30(0x08)
	double WallPullDuration; // 0xc38(0x08)
	struct FGameplayTag GC_HitWall; // 0xc40(0x04)
	char pad_C44[0x4]; // 0xc44(0x04)
	struct FGameplayTagContainer Tags_PhaseableObjects; // 0xc48(0x20)
	double Negative1; // 0xc68(0x08)
	struct UAbilityTask_ApplyRootMotionMoveToForce* Task_PullIntoPhaseableObjectRootMotion; // 0xc70(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPhaseBegin; // 0xc78(0x08)
	struct FGameplayTag EventTag_BeginPhase; // 0xc80(0x04)
	struct FGameplayTag GC_Dash; // 0xc84(0x04)
	struct FTimerHandle Handle_PredictiveHitTimer; // 0xc88(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xc90(0x10)
	struct FVector Velocity; // 0xca0(0x18)
	bool SuccessfullyDeliveredHit; // 0xcb8(0x01)
	char pad_CB9[0x7]; // 0xcb9(0x07)
	struct UGameplayEffect* GE_ImminentPhaseApproved; // 0xcc0(0x08)
	struct FGameplayTag EventTag_PhaseEventInstigator; // 0xcc8(0x04)
	char pad_CCC[0x4]; // 0xccc(0x04)
	struct FScalableFloat Row_PredictiveHit_Enabled; // 0xcd0(0x28)
	struct FScalableFloat Row_PredictiveHit_Interval; // 0xcf8(0x28)
	struct FScalableFloat Row_PredictiveHit_PhaseEventDelay; // 0xd20(0x28)
	struct FScalableFloat Row_PredictiveHit_AdditionalTimeDistanceToCover; // 0xd48(0x28)
	struct FScalableFloat Row_PredictiveHit_MinDistance; // 0xd70(0x28)
	struct FScalableFloat Row_PredictiveHit_MinVelocity; // 0xd98(0x28)
	struct UGameplayEffect* GE_UpdateOnHitDurationForPhaseEventDelay; // 0xdc0(0x08)
	struct FHitResult HitResult; // 0xdc8(0xe0)
	struct FScalableFloat Row_OnHitEnabled; // 0xea8(0x28)
	struct FScalableFloat ShouldCreateVisualComp; // 0xed0(0x28)

	void OnTimedOutAndDestinationReached_4AC1B4994B395B0DD75C9A9C56FB8020(); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.OnTimedOutAndDestinationReached_4AC1B4994B395B0DD75C9A9C56FB8020 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOut_4AC1B4994B395B0DD75C9A9C56FB8020(); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.OnTimedOut_4AC1B4994B395B0DD75C9A9C56FB8020 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PullIntoPhaseableTarget(struct FHitResult HitResult); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.PullIntoPhaseableTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WallPullCompleted(); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.WallPullCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.OnHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPredictiveHitEnabled(bool Enabled); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.SetPredictiveHitEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PredictiveHit(); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.PredictiveHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeliverHit(struct FHitResult HitResult, bool FromPredictiveHit); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.DeliverHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetDeliverHit(); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.ResetDeliverHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryDeliverHit(struct FHitResult HitResult, bool FromPredictiveHit); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.TryDeliverHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_OnHit(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_OnHit.GA_Athena_ChromePlayers_OnHit_C.ExecuteUbergraph_GA_Athena_ChromePlayers_OnHit // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

