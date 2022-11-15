// BlueprintGeneratedClass NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C
// Size: 0x3c80 (Inherited: 0x3b10)
struct ANPC_Pawn_Irwin_Prey_Nug_C : ANPC_Pawn_Wildlife_Prey_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b10(0x08)
	struct UFortCharacterPartsComponent* FortCharacterParts; // 0x3b18(0x08)
	struct UFTP_NPC_Assignment_Loot_Herbivore_C* FTP_NPC_Assignment_Loot_Herbivore; // 0x3b20(0x08)
	struct UFortHeldObjectComponent* FortHeldObject; // 0x3b28(0x08)
	bool bPawnPickedUp; // 0x3b30(0x01)
	bool bPawnThrown; // 0x3b31(0x01)
	char pad_3B32[0x2]; // 0x3b32(0x02)
	struct FActiveGameplayEffectHandle H_GE_PickedUp_Chicken; // 0x3b34(0x08)
	struct FActiveGameplayEffectHandle H_GE_PickedUp_Player; // 0x3b3c(0x08)
	char pad_3B44[0x4]; // 0x3b44(0x04)
	struct UGameplayEffect* GE_ApplyPickupAbility_Chicken; // 0x3b48(0x08)
	struct UGameplayEffect* GE_ApplyAbilities_Player; // 0x3b50(0x08)
	struct FGameplayTagContainer TC_BlockPickup; // 0x3b58(0x20)
	bool bIsPickupEnabled; // 0x3b78(0x01)
	char pad_3B79[0x7]; // 0x3b79(0x07)
	double PickupEnableDelay; // 0x3b80(0x08)
	double PostLandDelay; // 0x3b88(0x08)
	struct FGameplayTagContainer Interaction Preventing Tags; // 0x3b90(0x20)
	struct USoundBase* NugJumpLandSound; // 0x3bb0(0x08)
	bool bHasJumped; // 0x3bb8(0x01)
	char pad_3BB9[0x7]; // 0x3bb9(0x07)
	struct USoundBase* NugFloatLandSound; // 0x3bc0(0x08)
	struct UGameplayEffect* GE_RecentlyAttackedByPawn; // 0x3bc8(0x08)
	struct AFortPlayerPawn* FortPlayerPawnHoldingChicken; // 0x3bd0(0x08)
	struct FGameplayTagContainer TC_HeldBumpMeleeAbility; // 0x3bd8(0x20)
	struct FScalableFloat ChickenTrackHeldBumpsHF; // 0x3bf8(0x28)
	struct TSet<int32_t> ThrownByPlayerIDs; // 0x3c20(0x50)
	double Color Variation; // 0x3c70(0x08)
	struct FTimerHandle Thrown Handle; // 0x3c78(0x08)

	struct FVector GetCurrentLocation(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetCurrentLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct UFortProjectileMovementComponent* GetFortProjectileMovementComponent(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetFortProjectileMovementComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct AFortPlayerController* GetInstigatorPlayerController(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetInstigatorPlayerController // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool IsProjectileBeingKilled(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.IsProjectileBeingKilled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SetColorVariation(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetColorVariation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SendThrownByPlayerEvents(bool bAlreadyThrown); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SendThrownByPlayerEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateMovementComponents(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UpdateMovementComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCollision(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UpdateCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPawnMovementEnabled(bool bEnabled); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetPawnMovementEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Server Only Handle Player Controller OnUnPossess(struct APawn* PlayerPawn); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.Server Only Handle Player Controller OnUnPossess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindPlayerControllerOnUnpossess(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BindPlayerControllerOnUnpossess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bPawnThrown(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnRep_bPawnThrown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bPawnPickedUp(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnRep_bPawnPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHomingPassedTarget(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnHomingPassedTarget // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnReachedLockTargetDistanceThreshold(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnReachedLockTargetDistanceThreshold // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetAccelerationMagnitude(struct AActor* SelfActor, float InAccelerationMagnitude); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetAccelerationMagnitude // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetDesiredDirection(struct AActor* SelfActor, struct FVector& Direction); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetDesiredDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingData(struct AActor* SelfActor, struct FProjectileHomingData& NewHomingData); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingLaserTargetDistance(struct AActor* SelfActor, float NewDistance); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingLaserTargetDistance // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingLockTargetDistanceThreshold(struct AActor* SelfActor, float NewDistanceThreshold); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingLockTargetDistanceThreshold // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingStyle(struct AActor* SelfActor, enum class EFortHomingStyle NewHomingStyle, bool ResetHomingTurnSpeedTimer); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingStyle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingTarget(struct AActor* SelfActor, struct AActor* HomingTarget); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTarget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingTargetOffset(struct AActor* SelfActor, struct FVector& NewHomingOffset); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTargetOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingTargetPosition(struct AActor* SelfActor, struct FVector& HomingTargetPosition); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTargetPosition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingTimeUntilMaxTurnSpeed(struct AActor* SelfActor, float NewTimeUntilMax); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTimeUntilMaxTurnSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingTurnSpeedMax(struct AActor* SelfActor, float NewTurnSpeedMin); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTurnSpeedMax // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHomingTurnSpeedMin(struct AActor* SelfActor, float NewTurnSpeedMin); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTurnSpeedMin // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On NPC PawnInteractedWith(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.On NPC PawnInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnablePickUp(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.EnablePickUp // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetChickenVars(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ResetChickenVars // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCNugUpdateStormHandling(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.NPCNugUpdateStormHandling // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayThrowAudio(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.PlayThrowAudio // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayPickUpAudio(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.PlayPickUpAudio // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_4_OnHeldObjectGuideProjectileStarted__DelegateSignature(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_4_OnHeldObjectGuideProjectileStarted__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectGuideProjectileStopped__DelegateSignature(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectGuideProjectileStopped__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnNugLanded(struct FHitResult Hit); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnNugLanded // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NugLanded(struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.NugLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void AssignPlayerBumpEvent(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.AssignPlayerBumpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnassignPlayerBumpEvent(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UnassignPlayerBumpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnActorHit_Event(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnActorHit_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDied_Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnDied_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEndPlay_Event(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnEndPlay_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnActorBeginOverlap_Event(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnActorBeginOverlap_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__NPC_Pawn_Irwin_Prey_Nug_FortHeldObject_K2Node_ComponentBoundEvent_0_OnHeldObjectThrown__DelegateSignature(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__NPC_Pawn_Irwin_Prey_Nug_FortHeldObject_K2Node_ComponentBoundEvent_0_OnHeldObjectThrown__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void On Nug Died Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.On Nug Died Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttemptTriggerAbilityAfterPlayerBumpEvent(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.AttemptTriggerAbilityAfterPlayerBumpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCustomizationsLoaded_BP(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnCustomizationsLoaded_BP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ClearPlayer(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ClearPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug(int32_t EntryPoint); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

