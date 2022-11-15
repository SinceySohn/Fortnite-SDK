// BlueprintGeneratedClass GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C
// Size: 0xcf0 (Inherited: 0xb20)
struct UGA_Athena_PushCannon_Launched_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawnAthena* PlayerPawn; // 0xb28(0x08)
	struct UGameplayEffect* BuildingDestroyGE; // 0xb30(0x08)
	struct TArray<struct AActor*> JumpHitActors; // 0xb38(0x10)
	struct AActor* HitActor; // 0xb48(0x08)
	struct TArray<enum class EObjectTypeQuery> DestroyObjectTypes; // 0xb50(0x10)
	struct FScalableFloat CapsuleRadius; // 0xb60(0x28)
	struct FScalableFloat CapsuleHalfHeight; // 0xb88(0x28)
	struct FScalableFloat TraceFrames; // 0xbb0(0x28)
	struct FTimerHandle BuildingDestroyTImer; // 0xbd8(0x08)
	bool bLaunchAreaClear; // 0xbe0(0x01)
	char pad_BE1[0x7]; // 0xbe1(0x07)
	struct FTimerHandle LaunchAreaClearedTimer; // 0xbe8(0x08)
	bool bLostVelocity; // 0xbf0(0x01)
	char pad_BF1[0x7]; // 0xbf1(0x07)
	struct FTimerHandle TimeoutTimer; // 0xbf8(0x08)
	struct FScalableFloat EnemyLaunchVelocity; // 0xc00(0x28)
	struct FScalableFloat LaunchAreaClearDuration; // 0xc28(0x28)
	struct FScalableFloat SelfVerticalLaunchVelocity; // 0xc50(0x28)
	struct FScalableFloat TimeoutDuration; // 0xc78(0x28)
	struct UFortAbilitySystemComponent* AbilitySystem; // 0xca0(0x08)
	struct FGameplayTagContainer BlockedAbilityTags; // 0xca8(0x20)
	struct FGameplayTag ImpactCue; // 0xcc8(0x04)
	char pad_CCC[0x4]; // 0xccc(0x04)
	struct UFortCameraMode* CameraMode; // 0xcd0(0x08)
	double CachedCapsuleHalfHeight; // 0xcd8(0x08)
	struct TArray<struct UAbilityTask*> AbilityTasks; // 0xce0(0x10)

	void ResetCollision(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.ResetCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShrinkCollision(struct ACharacter* PlayerPawn); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.ShrinkCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCollision(struct FVector Normal); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.HandleCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyBuilding(struct TArray<struct FHitResult>& BuildingActor, bool DestroySingleBuilding); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.DestroyBuilding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_C23371DD49EDDDD9B7E2DBBD6D21F80F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.Cancelled_C23371DD49EDDDD9B7E2DBBD6D21F80F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_C23371DD49EDDDD9B7E2DBBD6D21F80F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.Targeted_C23371DD49EDDDD9B7E2DBBD6D21F80F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_132DF0F04DF553962D727EAABF3CBB6B(struct FGameplayEventData Payload); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.EventReceived_132DF0F04DF553962D727EAABF3CBB6B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_715F2B30452EBB839367119D3A1B6445(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.Added_715F2B30452EBB839367119D3A1B6445 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_D675E5FB4FE04EAA900E2382B2BEC6D4(struct FGameplayEventData Payload); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.EventReceived_D675E5FB4FE04EAA900E2382B2BEC6D4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_A033A6444327E99E70C51D9018F18A99(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.Added_A033A6444327E99E70C51D9018F18A99 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_74E690AA4209E56B6BDC5280CEF22793(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.Added_74E690AA4209E56B6BDC5280CEF22793 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_C1807F4F442EEEDB13429195080B6F67(struct FGameplayEventData Payload); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.EventReceived_C1807F4F442EEEDB13429195080B6F67 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_F869432243D6BCC62CC6ECA789CE3790(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.Added_F869432243D6BCC62CC6ECA789CE3790 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_AA4435524A5F25B2A1B6A3A7C2AC4A51(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.Added_AA4435524A5F25B2A1B6A3A7C2AC4A51 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Trace ON(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.Trace ON // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetLaunchAreaCleared(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.SetLaunchAreaCleared // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventOnHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.EventOnHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DoExplosionAndKnockback(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.DoExplosionAndKnockback // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventOnLanded(struct FHitResult& Hit); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.EventOnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WatchForEndEvents(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.WatchForEndEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TimeoutEndAbility(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.TimeoutEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForInvalidState(); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.CheckForInvalidState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_PushCannon_Launched(int32_t EntryPoint); // Function GA_Athena_PushCannon_Launched.GA_Athena_PushCannon_Launched_C.ExecuteUbergraph_GA_Athena_PushCannon_Launched // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

