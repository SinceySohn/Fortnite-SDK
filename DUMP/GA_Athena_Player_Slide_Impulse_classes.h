// BlueprintGeneratedClass GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C
// Size: 0xc4c (Inherited: 0xb20)
struct UGA_Athena_Player_Slide_Impulse_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UFortAbilityTask_TargetSelectionContinuous* SlideTargetTask; // 0xb28(0x08)
	struct FGameplayTag GC_SlideImpulse; // 0xb30(0x04)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct FScalableFloat SlideImpulseEnabled; // 0xb38(0x28)
	struct FScalableFloat SlideSpeedThreshold; // 0xb60(0x28)
	struct FScalableFloat SlideDurationThreshold; // 0xb88(0x28)
	struct FTimerHandle TargetingTimer; // 0xbb0(0x08)
	struct FGameplayTag PlayerVelocityMet; // 0xbb8(0x04)
	float ForwardDistanceMult; // 0xbbc(0x04)
	struct FGameplayEffectSpecHandle Gameplay Effect Spec Handle; // 0xbc0(0x10)
	struct FScalableFloat SlidingPhysicsImpulseHighVelocityThreshold; // 0xbd0(0x28)
	struct FScalableFloat SlidingPhysicsImpulseAmount; // 0xbf8(0x28)
	struct FScalableFloat SlidingPhysicsImpulseHighVelocityAmount; // 0xc20(0x28)
	struct FGameplayTag GC_SlideImpulseInstigatorEffect; // 0xc48(0x04)

	struct FVector DeterminePhysicsImpulseAmount(); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.DeterminePhysicsImpulseAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void HandleBuildingPropsAndPhysics(struct UObject* Object); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.HandleBuildingPropsAndPhysics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SlidingSpeedCheck(struct ACharacter* SlidingPawn, bool& IsSlidingEnemyFaster); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.SlidingSpeedCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetCurrentVelocityAsPercent(struct ACharacter* Target, struct FVector A, double& VelocityPercent); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.GetCurrentVelocityAsPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchPawnsTargeted(struct AActor* SelfActor, struct AActor* OtherActor, struct TArray<struct AActor*>& TargetDataArray); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.LaunchPawnsTargeted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Check Pawn Velocity(bool& ExceedsValue); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.Check Pawn Velocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Cancelled_CC0CA8254B47A3665437B0B0F0C8B67F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.Cancelled_CC0CA8254B47A3665437B0B0F0C8B67F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_CC0CA8254B47A3665437B0B0F0C8B67F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.Targeted_CC0CA8254B47A3665437B0B0F0C8B67F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BeginTargeting(); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.BeginTargeting // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Player_Slide_Impulse(int32_t EntryPoint); // Function GA_Athena_Player_Slide_Impulse.GA_Athena_Player_Slide_Impulse_C.ExecuteUbergraph_GA_Athena_Player_Slide_Impulse // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

