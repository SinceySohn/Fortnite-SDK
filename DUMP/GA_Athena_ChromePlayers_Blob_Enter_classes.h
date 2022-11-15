// BlueprintGeneratedClass GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C
// Size: 0xce8 (Inherited: 0xb69)
struct UGA_Athena_ChromePlayers_Blob_Enter_C : UGA_Athena_Blob_Enter_C {
	char pad_B69[0x7]; // 0xb69(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb70(0x08)
	double TransitionDuration; // 0xb78(0x08)
	double DashDuration; // 0xb80(0x08)
	double DashAddedSpeed; // 0xb88(0x08)
	struct UAbilityTask_ApplyRootMotionMoveToForce* Task_RootMotionMovement; // 0xb90(0x08)
	double AdditionalZOffset; // 0xb98(0x08)
	struct FVector PlayerXYVelocity; // 0xba0(0x18)
	struct UGameplayEffect* GE_BlobState; // 0xbb8(0x08)
	struct FScalableFloat Row_BlobTransitionDuration; // 0xbc0(0x28)
	struct FScalableFloat Row_DashDuration; // 0xbe8(0x28)
	struct FScalableFloat Row_DashAddedSpeed; // 0xc10(0x28)
	struct FScalableFloat Row_DashAdditionalZOffset; // 0xc38(0x28)
	struct UGameplayEffect* GE_OnHitApplyChrome_EnterBlobState; // 0xc60(0x08)
	struct FScalableFloat Row_CanApplyChromeWallsAndPhase; // 0xc68(0x28)
	struct FScalableFloat Row_DashOnEnterBlobState; // 0xc90(0x28)
	struct FTimerHandle TimerHandle_FailsafeCheck; // 0xcb8(0x08)
	struct FScalableFloat Row_GrantingEffectDuration; // 0xcc0(0x28)

	void InitVars(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.InitVars // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOutAndDestinationReached_C1ADA711419D69027CB74D991A1AC2C6(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.OnTimedOutAndDestinationReached_C1ADA711419D69027CB74D991A1AC2C6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOut_C1ADA711419D69027CB74D991A1AC2C6(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.OnTimedOut_C1ADA711419D69027CB74D991A1AC2C6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyChromeEffectToBuildingsInPath(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.ApplyChromeEffectToBuildingsInPath // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Dash(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.Dash // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void MontageCompleted(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.MontageCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageCancelled(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.MontageCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageTriggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.MontageTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailsafeCheck(); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.FailsafeCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_Enter(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_Blob_Enter.GA_Athena_ChromePlayers_Blob_Enter_C.ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_Enter // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

