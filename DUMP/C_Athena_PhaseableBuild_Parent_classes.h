// BlueprintGeneratedClass C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C
// Size: 0x47a (Inherited: 0xb0)
struct UC_Athena_PhaseableBuild_Parent_C : UPhaseableBuildComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool Debug; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FGameplayTagContainer BlockPlayerPhasingTags; // 0xc0(0x20)
	struct UGameplayEffect* GE_BuildTag_NonPhaseable; // 0xe0(0x08)
	struct UGameplayEffect* GE_BuildTag_Phaseable; // 0xe8(0x08)
	struct UGameplayEffect* GE_BuildTags; // 0xf0(0x08)
	struct FGameplayTagContainer ValidPhaseableActorsTags; // 0xf8(0x20)
	struct FGameplayTag EventTag_PhaseEventInstigator; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UAbilityAsync_WaitGameplayEvent* Task_WaitChromeBlobDashHit; // 0x120(0x08)
	struct FScalableFloat WallHitAngleRestriction; // 0x128(0x28)
	struct UNavArea* Phaseable NavArea; // 0x150(0x08)
	struct FHitResult Phasing_HitResult; // 0x158(0xe0)
	bool WasInitiatedByCollision; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct AFortPawn* PawnRef; // 0x240(0x08)
	struct FVector PawnForwardDirection; // 0x248(0x18)
	struct FVector PhaseDirection; // 0x260(0x18)
	struct ABuildingSMActor* SMactorRef; // 0x278(0x08)
	struct FScalableFloat DelayBeforeRepairing; // 0x280(0x28)
	struct FScalableFloat ShouldRepairOnDamage; // 0x2a8(0x28)
	struct FScalableFloat MaskedMaterialDuration; // 0x2d0(0x28)
	struct FScalableFloat CapsuleSizeMult; // 0x2f8(0x28)
	struct FScalableFloat DefaultDashDistance; // 0x320(0x28)
	struct FVector PhaseEndLocation; // 0x348(0x18)
	struct TArray<struct FVector> DestinationTraceLocationOffsets; // 0x360(0x10)
	struct UGameplayEffect* GE_PhasePawn; // 0x370(0x08)
	struct FScalableFloat StairHitAngleRestriction; // 0x378(0x28)
	struct TArray<struct AFortPawn*> PawnsWithInvalidPhases; // 0x3a0(0x10)
	struct FScalableFloat EnableBlobDashPhasing; // 0x3b0(0x28)
	struct FScalableFloat EnablePhaseableBuildFeature; // 0x3d8(0x28)
	struct FScalableFloat EnablePlayerPhasing; // 0x400(0x28)
	struct FScalableFloat EdgeCheckOffsets; // 0x428(0x28)
	struct FScalableFloat WaitTimeForInvalidPhase; // 0x450(0x28)
	enum class EPhysicalSurface SurfaceOverrideType; // 0x478(0x01)
	bool bHasHealthBeenBeefedUp; // 0x479(0x01)

	struct UFortFootstepSurfaceData* GetFootstepSurfaceData(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.GetFootstepSurfaceData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	enum class EPhysicalSurface GetSurfaceType(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.GetSurfaceType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnTargeting_IsValidPhaseLocation(struct FHitResult TargetingHitResult, struct AFortPawn* PawnRef, bool& IsValidPhaseLocation); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnTargeting_IsValidPhaseLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearArrayOfPawnsWithInvalidPhases(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.ClearArrayOfPawnsWithInvalidPhases // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AngleRestrictionValidation(float AngleRestriction, bool& IsValidHitAngle); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.AngleRestrictionValidation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CheckForInvalidBuild_DestroyComponent(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.CheckForInvalidBuild_DestroyComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetPhaseStartLocation(struct FVector& PhaseStartLocation); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.GetPhaseStartLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CheckIfDestinationIsBeyondInvincibleObject(struct FVector TargetLocation, bool& IsValidLocation); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.CheckIfDestinationIsBeyondInvincibleObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SortDestinationsByDistance(struct TArray<struct FVector>& DestinationTraceLocationsSortedByDistance); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.SortDestinationsByDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForActorsBlockingPhasePath(struct TArray<struct FHitResult>& HitActors, struct FVector TargetLocation, bool& ValidDestinationFound); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.CheckForActorsBlockingPhasePath // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Pawn Capsule Details(double& Adjusted CapsuleRadius, double& Adjusted CapsuleHalfHeight); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.Get Pawn Capsule Details // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void LookAheadForDestination(bool WasInitiatedByCollision, bool& ValidDestinationFound, struct FVector& TargetLocation); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.LookAheadForDestination // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EdgeValidation(bool& IsValidPhase); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.EdgeValidation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupDoorLogic(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.SetupDoorLogic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DoorPhaseCheck(struct UObject* HitComponent, bool& PawnCollidedWithOpenDoor); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.DoorPhaseCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleBuildPhaseableTag(bool AddPhaseableTag); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.ToggleBuildPhaseableTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartAudioHealing(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.StartAudioHealing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculatePhaseCriteria(struct FHitResult Phasing_HitResult); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.CalculatePhaseCriteria // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PhasePawn(struct AActor* PawnToPhase); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.PhasePawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ValidatePhaseCriteria(struct UPrimitiveComponent* HitComponent, bool& IsValidPhase); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.ValidatePhaseCriteria // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyPhaseableBuildGEs(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.ApplyPhaseableBuildGEs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RepairBuild(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.RepairBuild // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetBuildFacingVector(struct FVector& BuildFacingVector); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.GetBuildFacingVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnReady_3068E96846680BA98DCC569CFD219547(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnReady_3068E96846680BA98DCC569CFD219547 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_A3F50EE348BB45ED76064DAE7D65491C(struct FGameplayEventData Payload); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.EventReceived_A3F50EE348BB45ED76064DAE7D65491C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged_Dispatcher(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnDamaged_Dispatcher // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPickaxeDamage(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnPickaxeDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponDamage(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnWeaponDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBuildHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnBuildHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckToRepairBuild(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.CheckToRepairBuild // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckToPhase(struct AActor* ActorToPhase, struct FHitResult Phasing_HitResult, struct UPrimitiveComponent* HitComponent); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.CheckToPhase // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindWaitEvents(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.BindWaitEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPhase_HandleMaskedMaterial(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnPhase_HandleMaskedMaterial // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFullHealthReached(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnFullHealthReached // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PhaseValidationFailed(); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.PhaseValidationFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHitByPawn(struct AFortPlayerPawn* Pawn, struct FHitResult& HitResult); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.OnHitByPawn // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_C_Athena_PhaseableBuild_Parent(int32_t EntryPoint); // Function C_Athena_PhaseableBuild_Parent.C_Athena_PhaseableBuild_Parent_C.ExecuteUbergraph_C_Athena_PhaseableBuild_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

