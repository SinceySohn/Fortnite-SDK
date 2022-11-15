// BlueprintGeneratedClass GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C
// Size: 0xfc0 (Inherited: 0xe58)
struct UGA_NPC_Parent_EQS_Move_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)
	struct UEnvQuery* MoveEQS; // 0xe60(0x08)
	enum class EEnvQueryRunMode MoveEQS RunMode; // 0xe68(0x01)
	char pad_E69[0x7]; // 0xe69(0x07)
	struct UEnvQueryInstanceBlueprintWrapper* MoveEQS WrapperClass; // 0xe70(0x08)
	struct UObject* MoveEQS Querier; // 0xe78(0x08)
	struct UFortAbilityTask_MoveAI* EQS MoveTask; // 0xe80(0x08)
	struct FScalableFloat NPC WaitDurationAfterMoveMinHF; // 0xe88(0x28)
	struct FScalableFloat NPC WaitDurationAfterMoveMaxHF; // 0xeb0(0x28)
	struct FScalableFloat NPC_MinMoveDistanceToConsiderSuccessHF; // 0xed8(0x28)
	int32_t MinNumValidLocationsGeneratedToSkipCooldowns; // 0xf00(0x04)
	enum class EFortMovementUrgency Movement Urgency; // 0xf04(0x01)
	enum class EPawnActionMoveMode MoveMode; // 0xf05(0x01)
	enum class EPathObstacleAction PathObstacleAction; // 0xf06(0x01)
	bool OnActorHitVehicleCountsAsPathObstacle; // 0xf07(0x01)
	bool StopAtEnd; // 0xf08(0x01)
	enum class EAIOptionFlag AcceptPartialPath; // 0xf09(0x01)
	bool FinishOnPlayerCollision; // 0xf0a(0x01)
	bool ProjectGoalLocationOnNavMesh; // 0xf0b(0x01)
	char pad_F0C[0x4]; // 0xf0c(0x04)
	double AcceptableRadius; // 0xf10(0x08)
	struct AFortPawn* PushBumpedPawnClass; // 0xf18(0x08)
	struct FGameplayTag NavFilterTag; // 0xf20(0x04)
	char pad_F24[0x4]; // 0xf24(0x04)
	struct UNavigationQueryFilter* NavFilterClass; // 0xf28(0x08)
	bool UseContinuousGoalTracking; // 0xf30(0x01)
	char pad_F31[0x7]; // 0xf31(0x07)
	double ChosenWaitDurationAfterMove; // 0xf38(0x08)
	bool InitiatedMove; // 0xf40(0x01)
	char pad_F41[0x7]; // 0xf41(0x07)
	double EQS StartTime; // 0xf48(0x08)
	struct AActor* MoveActor; // 0xf50(0x08)
	struct FVector MoveDestinationLocation; // 0xf58(0x18)
	struct FVector MoveStartLocation; // 0xf70(0x18)
	bool FocusOnAIAbilityTargetWhileMoving; // 0xf88(0x01)
	char pad_F89[0x7]; // 0xf89(0x07)
	struct TArray<struct AActor*> NPC EQS ResultActors; // 0xf90(0x10)
	int32_t NumValidActorsGenerated; // 0xfa0(0x04)
	bool NPC EQS ResultActorsSuccess; // 0xfa4(0x01)
	char pad_FA5[0x3]; // 0xfa5(0x03)
	struct TArray<struct FVector> NPC EQS ResultLocations; // 0xfa8(0x10)
	bool NPC EQSResultLocationsSuccess; // 0xfb8(0x01)
	char pad_FB9[0x3]; // 0xfb9(0x03)
	int32_t NumValidLocationsGenerated; // 0xfbc(0x04)

	void NPC SetupAbility(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC SetupAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS Move SetQuerier(struct UObject* Querier); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC EQS Move SetQuerier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMoveFinished_75964A6C45D765D0514F88B99721706D(enum class EPathFollowingResult Result, struct AAIController* AIController); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnMoveFinished_75964A6C45D765D0514F88B99721706D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRequestFailed_75964A6C45D765D0514F88B99721706D(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnRequestFailed_75964A6C45D765D0514F88B99721706D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_75964A6C45D765D0514F88B99721706D(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnCancelled_75964A6C45D765D0514F88B99721706D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_75964A6C45D765D0514F88B99721706D(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnInterrupted_75964A6C45D765D0514F88B99721706D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnComplete_75964A6C45D765D0514F88B99721706D(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnComplete_75964A6C45D765D0514F88B99721706D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMoveFinished_80AB34194790C753D9F322ACAC29A6D6(enum class EPathFollowingResult Result, struct AAIController* AIController); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnMoveFinished_80AB34194790C753D9F322ACAC29A6D6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRequestFailed_80AB34194790C753D9F322ACAC29A6D6(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnRequestFailed_80AB34194790C753D9F322ACAC29A6D6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_80AB34194790C753D9F322ACAC29A6D6(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnCancelled_80AB34194790C753D9F322ACAC29A6D6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_80AB34194790C753D9F322ACAC29A6D6(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnInterrupted_80AB34194790C753D9F322ACAC29A6D6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnComplete_80AB34194790C753D9F322ACAC29A6D6(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnComplete_80AB34194790C753D9F322ACAC29A6D6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMoveQueryFinishedEvent(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnMoveQueryFinishedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindMoveFinished(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.BindMoveFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnbindMoveFinished(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.UnbindMoveFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMoveFinished_Event(enum class EPathFollowingResult Result, struct AAIController* AIController); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnMoveFinished_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void WaitAfterMove(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.WaitAfterMove // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveNoPointsFound(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC EQS MoveNoPointsFound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveFailed(enum class EPathFollowingResult MoveResult); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC EQS MoveFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveStarted(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC EQS MoveStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveFinished(enum class EPathFollowingResult MoveResult); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC EQS MoveFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void QueryAndMove(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.QueryAndMove // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC MoveToLocation(struct FVector MoveLocation); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC MoveToLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveSuccess(enum class EPathFollowingResult MoveResult); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC EQS MoveSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveTaskInvalid(); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.NPC EQS MoveTaskInvalid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnActorHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.OnActorHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_NPC_Parent_EQS_Move(int32_t EntryPoint); // Function GA_NPC_Parent_EQS_Move.GA_NPC_Parent_EQS_Move_C.ExecuteUbergraph_GA_NPC_Parent_EQS_Move // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

