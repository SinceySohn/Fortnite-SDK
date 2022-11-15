// BlueprintGeneratedClass GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C
// Size: 0xc88 (Inherited: 0xb20)
struct UGA_PhaseableBuild_Player_Phase_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UC_Athena_PhaseableBuild_Parent_C* PhaseableComponentRef; // 0xb28(0x08)
	struct FVector PhaseEndLocation; // 0xb30(0x18)
	struct FVector PhaseDirection; // 0xb48(0x18)
	struct ABuildingSMActor* SMactorRef; // 0xb60(0x08)
	struct AFortPawn* PhasingPawnRef; // 0xb68(0x08)
	bool Debug; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct UAnimMontage* DashAnimation; // 0xb78(0x08)
	struct FGameplayTag GCN_Phase_BuildFX; // 0xb80(0x04)
	char pad_B84[0x4]; // 0xb84(0x04)
	struct FScalableFloat DefaultPhaseDuration; // 0xb88(0x28)
	struct FScalableFloat CapsuleSizeMult; // 0xbb0(0x28)
	struct FScalableFloat DelayToRestoreCameraCollisionAfterPhase; // 0xbd8(0x28)
	struct FScalableFloat DefaultVelocityOnPhaseFinish; // 0xc00(0x28)
	struct TArray<struct ABuildingActor*> ActorsToHideOnPhasing; // 0xc28(0x10)
	struct FGameplayTag GCN_Phase_PlayerFX; // 0xc38(0x04)
	char pad_C3C[0x4]; // 0xc3c(0x04)
	struct FScalableFloat BlobPhaseDuration; // 0xc40(0x28)
	struct FGameplayTagContainer TagsToPreventPhaseAnimation; // 0xc68(0x20)

	void SetHiddenAttachedActors(bool SetHidden); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.SetHiddenAttachedActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddRemovePhaseGCN(); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.AddRemovePhaseGCN // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanUpAbility(); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.CleanUpAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetPawnCapsuleDetails(struct FVector& WorldLocation, double& Adjusted CapsuleRadius, double& Adjusted CapsuleHalfHeight); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.GetPawnCapsuleDetails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CheckToIgnoreCollisionOrDestroyObjectsInPath(); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.CheckToIgnoreCollisionOrDestroyObjectsInPath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_60C9C8CF474CA352905429AD66B39F46(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.Completed_60C9C8CF474CA352905429AD66B39F46 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_60C9C8CF474CA352905429AD66B39F46(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.Cancelled_60C9C8CF474CA352905429AD66B39F46 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_60C9C8CF474CA352905429AD66B39F46(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.Triggered_60C9C8CF474CA352905429AD66B39F46 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOutAndDestinationReached_AC9EF754455B4AF108CF7E9AE8DD4910(); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.OnTimedOutAndDestinationReached_AC9EF754455B4AF108CF7E9AE8DD4910 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOut_AC9EF754455B4AF108CF7E9AE8DD4910(); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.OnTimedOut_AC9EF754455B4AF108CF7E9AE8DD4910 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void MovePlayerToTargetLocation(); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.MovePlayerToTargetLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBuildCollisionWithCamera(bool EnableCollision); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.SetBuildCollisionWithCamera // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHiddenAttachedActors_Local(bool SetHidden, struct TArray<struct ABuildingActor*>& ActorsToHideOnPhasing); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.SetHiddenAttachedActors_Local // (Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_PhaseableBuild_Player_Phase(int32_t EntryPoint); // Function GA_PhaseableBuild_Player_Phase.GA_PhaseableBuild_Player_Phase_C.ExecuteUbergraph_GA_PhaseableBuild_Player_Phase // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

