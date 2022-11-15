// BlueprintGeneratedClass NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C
// Size: 0x3fb8 (Inherited: 0x3b10)
struct ANPC_Pawn_SpicySake_Parent_C : ANPC_Pawn_Wildlife_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b10(0x08)
	struct UFTP_NPC_Assignment_Loot_GameplaySafe_C* FTP_NPC_Assignment_Loot_GameplaySafe; // 0x3b18(0x08)
	struct UCapsuleComponent* ServerProjectileCollision; // 0x3b20(0x08)
	struct UNiagaraComponent* LootGlow; // 0x3b28(0x08)
	struct UBoxComponent* BodyBumpBox; // 0x3b30(0x08)
	struct UBoxComponent* BiteMeleeBox; // 0x3b38(0x08)
	double JumpCooldown; // 0x3b40(0x08)
	struct FVector LastLaunchVelocity; // 0x3b48(0x18)
	double JumpForward; // 0x3b60(0x08)
	struct FGameplayTagContainer TC_NPC_AbilityAttackMeleePrimary; // 0x3b68(0x20)
	struct FGameplayTagContainer TC_NPC_ReactiveBiteAbilitiesThatCantBeActive; // 0x3b88(0x20)
	struct FGameplayTag TC_NPC_AbilityAttackTriggeredDamageTarget; // 0x3ba8(0x04)
	struct FGameplayTag Event_NPC_AbilityNonAttackGrabPickup; // 0x3bac(0x04)
	struct FGameplayTagContainer TC_NPC_AbilityNonAttackGrabPickup; // 0x3bb0(0x20)
	double OnLandJumpDisableTimer; // 0x3bd0(0x08)
	bool IsInWater; // 0x3bd8(0x01)
	char pad_3BD9[0x3]; // 0x3bd9(0x03)
	struct FGameplayTag GC_SakeJumpTag; // 0x3bdc(0x04)
	struct FGameplayTag GC_SakeLandTag; // 0x3be0(0x04)
	struct FActiveGameplayEffectHandle GE_AppliedOnStartHandle; // 0x3be4(0x08)
	char pad_3BEC[0x4]; // 0x3bec(0x04)
	struct UGameplayEffect* GE_AppliedOnStart; // 0x3bf0(0x08)
	struct FGameplayTag GC_TetherBegin; // 0x3bf8(0x04)
	struct FGameplayTag GC_TetherEnd; // 0x3bfc(0x04)
	struct FGameplayTag GC_AttackChomp; // 0x3c00(0x04)
	char pad_3C04[0x4]; // 0x3c04(0x04)
	struct AFortPawn* previousTetheredFollower; // 0x3c08(0x08)
	struct FTimerHandle SlowSwimmingSpeedDetachTimerHandle; // 0x3c10(0x08)
	struct FTimerHandle TestVelocityForDetachTimerHandle; // 0x3c18(0x08)
	struct FVector previousLocationForVelocity; // 0x3c20(0x18)
	double detachVelocityTimeStamp; // 0x3c38(0x08)
	double currentDetachVelocity; // 0x3c40(0x08)
	double previousDetachVelocity; // 0x3c48(0x08)
	double currentDetachVelocityXY; // 0x3c50(0x08)
	double previousDetacthVelocityXY; // 0x3c58(0x08)
	struct FScalableFloat TetheredDetachOnHitVelocityMin; // 0x3c60(0x28)
	struct FScalableFloat TetheredDetachOnHitVelocityChangeDelta; // 0x3c88(0x28)
	struct FScalableFloat TetheredDetachMinSwimmingVelocity; // 0x3cb0(0x28)
	struct FScalableFloat TetheredDetachSlowSwimmingTimeout; // 0x3cd8(0x28)
	struct FScalableFloat TetheredDetachMaxTimeOnLand; // 0x3d00(0x28)
	struct FScalableFloat TetheredJumpOnLandAllowanceBuffer; // 0x3d28(0x28)
	struct FScalableFloat TetheredJumpSpeedZ; // 0x3d50(0x28)
	struct FScalableFloat TetheredJumpLaunchFollowerDelay; // 0x3d78(0x28)
	struct FScalableFloat TetheredJumpFollowerSpeedZ; // 0x3da0(0x28)
	struct FScalableFloat TetheredJumpCooldown; // 0x3dc8(0x28)
	struct FScalableFloat AllowTethering; // 0x3df0(0x28)
	double DetachTestVelocityTimerTickRate; // 0x3e18(0x08)
	bool isDetached; // 0x3e20(0x01)
	char pad_3E21[0x7]; // 0x3e21(0x07)
	struct UGameplayEffect* GE_BreakStructuresDamage; // 0x3e28(0x08)
	struct FGameplayTag GC_BreakStructures; // 0x3e30(0x04)
	char pad_3E34[0x4]; // 0x3e34(0x04)
	double onHitRammingDelta; // 0x3e38(0x08)
	double RammingDestroyStructuresRadius; // 0x3e40(0x08)
	struct FScalableFloat BreakStructuresOnHitEnabled; // 0x3e48(0x28)
	struct FScalableFloat BreakStrucutresOnHitRadius; // 0x3e70(0x28)
	bool isJumpingAllowedToDestroyStructuresOnce; // 0x3e98(0x01)
	char pad_3E99[0x3]; // 0x3e99(0x03)
	struct FGameplayTag GC_ImpactLowSpeed; // 0x3e9c(0x04)
	double hitVelocityDelta; // 0x3ea0(0x08)
	bool lowSpeedImpactAllowed; // 0x3ea8(0x01)
	bool canStillJumpOnLandOnce; // 0x3ea9(0x01)
	char pad_3EAA[0x6]; // 0x3eaa(0x06)
	struct FScalableFloat AllowOnceOnLandJump; // 0x3eb0(0x28)
	struct FScalableFloat DestroyBuildingsOnJumpLanding; // 0x3ed8(0x28)
	struct FScalableFloat DestroyBuildingsOnJumpLandingRange; // 0x3f00(0x28)
	struct FScalableFloat LowSpeedImpactMinVelocity; // 0x3f28(0x28)
	struct FScalableFloat LowSpeedImpactRepeatDelay; // 0x3f50(0x28)
	struct FScalableFloat TetheredJumpFollowerOnLandHopZ; // 0x3f78(0x28)
	struct FGameplayTag GE_FullStop; // 0x3fa0(0x04)
	struct FGameplayTag Tag to Check; // 0x3fa4(0x04)
	struct TArray<struct AActor*> BiteMeleeBoxConsumptionOverlapActors; // 0x3fa8(0x10)

	struct UAnimInstance* GetAssociatedLinkedAnimLayerClass(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.GetAssociatedLinkedAnimLayerClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void PlayAdditiveHitReacts(struct FVector& Hit Direction, struct UAnimMontage* Anim Montage); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.PlayAdditiveHitReacts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryToBreakStructures(double SphereRadius); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.TryToBreakStructures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateDetachVelocity(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.CalculateDetachVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool CanTetherJump(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.CanTetherJump // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayWaterSplashAtWaterSurface(struct AFortWaterBodyActor* WaterBody, bool Enter Water); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.PlayWaterSplashAtWaterSurface // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdatedBasedOnTethered(bool hasTetheredFollower, struct AFortPawn* incomingTetheredFollower); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.UpdatedBasedOnTethered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryToActivateReactiveBiteAbility(struct FGameplayTagContainer& AbilityToTrigger, struct FGameplayTag EventTag, struct AActor* ActorWeAreReactingTo, bool& AbilityTriggered); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.TryToActivateReactiveBiteAbility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BiteMeleeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.BndEvt__BiteMeleeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BodyBumpBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.BndEvt__BodyBumpBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsFirstBody); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsLastBody); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateTetheredFollower(struct AFortPawn* InTetheredFollower); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.OnUpdateTetheredFollower // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DetachTether(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.DetachTether // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void JumpOnLandBuffer(bool EnteringWater); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.JumpOnLandBuffer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayJumpOutWaterSplash(struct AFortWaterBodyActor* WaterBody); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.PlayJumpOutWaterSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayJumpInWaterSplash(struct AFortWaterBodyActor* WaterBody); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.PlayJumpInWaterSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void MulticastGCBuildingBreaking(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.MulticastGCBuildingBreaking // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTetherRequestJump(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.OnTetherRequestJump // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void TestVelocityForDetach(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.TestVelocityForDetach // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ServerUpdateWhenTethered(bool IsTethered); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.ServerUpdateWhenTethered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitTestVelocityForDetach(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.InitTestVelocityForDetach // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MulticastGCLowSpeedImpact(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.MulticastGCLowSpeedImpact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetLowSpeedImpactAllowed(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.ResetLowSpeedImpactAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void NPC SendGameplayCuePickupGrabbed(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.NPC SendGameplayCuePickupGrabbed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DetachTetherAndStop(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.DetachTetherAndStop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SharkMeshLoaded(struct AFortPawn* ThisPawn); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.SharkMeshLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCustomizationsLoaded_BP(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.OnCustomizationsLoaded_BP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SharkTestLoot(); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.SharkTestLoot // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__NPC_Pawn_SpicySake_Parent_BiteMeleeBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.BndEvt__NPC_Pawn_SpicySake_Parent_BiteMeleeBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_SpicySake_Parent(int32_t EntryPoint); // Function NPC_Pawn_SpicySake_Parent.NPC_Pawn_SpicySake_Parent_C.ExecuteUbergraph_NPC_Pawn_SpicySake_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

