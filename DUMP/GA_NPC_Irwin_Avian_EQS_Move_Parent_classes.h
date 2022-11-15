// BlueprintGeneratedClass GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C
// Size: 0x1248 (Inherited: 0xfc0)
struct UGA_NPC_Irwin_Avian_EQS_Move_Parent_C : UGA_NPC_Parent_EQS_Move_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfc0(0x08)
	double RandomSyncedFloat; // 0xfc8(0x08)
	bool DebugLines; // 0xfd0(0x01)
	bool DebugLinesBirdOnly; // 0xfd1(0x01)
	char pad_FD2[0x6]; // 0xfd2(0x06)
	double DebugLineDuration; // 0xfd8(0x08)
	struct FScalableFloat NPC ShrinkAndDespawnAtMoveEnd_HF; // 0xfe0(0x28)
	struct FScalableFloat NPC DurationToStillAllowHealthBarBeforeDespawn_HF; // 0x1008(0x28)
	struct FScalableFloat NPC SetFallingAtMoveEnd_HF; // 0x1030(0x28)
	struct FScalableFloat NPC ShrinkAndDespawnIfEQSFails_HF; // 0x1058(0x28)
	struct FScalableFloat NPC IfTriggeredByDamageSkipShrinkAndDespawnIfEQSFails_HF; // 0x1080(0x28)
	struct FScalableFloat NPC MaxDistanceFromDestinationToConsiderMoveSuccess_HF; // 0x10a8(0x28)
	int32_t RandomlyChosenSequentialMovementSegments; // 0x10d0(0x04)
	int32_t CurrentSequentialMovementDestinationIndex; // 0x10d4(0x04)
	struct TArray<struct FVector> SequentialMovementAnchors; // 0x10d8(0x10)
	struct TArray<struct FVector> SequentialMovementDestinations; // 0x10e8(0x10)
	struct FScalableFloat NPC VerticalMovementOffsetMax_HF; // 0x10f8(0x28)
	struct FScalableFloat NPC HorizontalMovementOffsetMax_HF; // 0x1120(0x28)
	bool ShouldStopForLastSegment; // 0x1148(0x01)
	bool ShouldCheckStaleDespawn; // 0x1149(0x01)
	char pad_114A[0x6]; // 0x114a(0x06)
	struct FScalableFloat NPC GravityMin_HF; // 0x1150(0x28)
	struct FScalableFloat NPC GravityMax_HF; // 0x1178(0x28)
	struct FScalableFloat NPC ArcParamMin_HF; // 0x11a0(0x28)
	struct FScalableFloat NPC ArcParamMax_HF; // 0x11c8(0x28)
	struct FScalableFloat NPC SegmentLengthMin_HF; // 0x11f0(0x28)
	struct FScalableFloat NPC SegmentLengthMax_HF; // 0x1218(0x28)
	double LastPathCheckTestDistance; // 0x1240(0x08)

	bool NPC HasValidFlapImpulseArcData(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC HasValidFlapImpulseArcData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool NPC HasValidSequentialMovementData(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC HasValidSequentialMovementData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC ManageStopAtEndBehavior(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC ManageStopAtEndBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool NPC HasPassedSequentialMovementDestination(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC HasPassedSequentialMovementDestination // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC SetupAbility(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC SetupAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool NPC IsOnLastSequentialMoveSegment(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC IsOnLastSequentialMoveSegment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC GetNextSequentialMovementDestination(struct FVector& NextMoveDestinationLocation, bool& AlreadyFinishedMovement, bool& ThisIsFinalMove); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC GetNextSequentialMovementDestination // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC SetupSequentialMovementAnchors(bool& SubdivisionSuccessful, int32_t& Segments); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC SetupSequentialMovementAnchors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC SetupSequentialMovementOffsets(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC SetupSequentialMovementOffsets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceBeginScaleOutAndDespawn(enum class EPathFollowingResult PathingResult); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.ForceBeginScaleOutAndDespawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Despawn(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.Despawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RotateToMoveDestination(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.RotateToMoveDestination // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetScaleOutTimer(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.SetScaleOutTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveNoPointsFound(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC EQS MoveNoPointsFound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC MoveToLocation(struct FVector MoveLocation); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC MoveToLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FlapToNextPoint(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.FlapToNextPoint // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReachedJumpApex_Event(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.OnReachedJumpApex_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ForceMoveToNextSegment(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.ForceMoveToNextSegment // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReturnToFlying(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.ReturnToFlying // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCScaleMeshOutCompleted(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPCScaleMeshOutCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WaitForFlapApex(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.WaitForFlapApex // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveFinished(enum class EPathFollowingResult MoveResult); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.NPC EQS MoveFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHealthBarTimer(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.SetHealthBarTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPathCheckTimer(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.SetPathCheckTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PathCheckTest(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.PathCheckTest // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartPathLoopTest(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.StartPathLoopTest // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BeginScaleOutAndDespawn(); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.BeginScaleOutAndDespawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_NPC_Irwin_Avian_EQS_Move_Parent(int32_t EntryPoint); // Function GA_NPC_Irwin_Avian_EQS_Move_Parent.GA_NPC_Irwin_Avian_EQS_Move_Parent_C.ExecuteUbergraph_GA_NPC_Irwin_Avian_EQS_Move_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

