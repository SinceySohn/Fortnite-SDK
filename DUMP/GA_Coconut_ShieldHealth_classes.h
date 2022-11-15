// BlueprintGeneratedClass GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C
// Size: 0xb88 (Inherited: 0xb20)
struct UGA_Coconut_ShieldHealth_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct FScalableFloat TimeInterval; // 0xb30(0x28)
	struct FTimerHandle Timer_Interval; // 0xb58(0x08)
	struct UGameplayEffect* GE_Heals; // 0xb60(0x08)
	struct UGameplayEffect* GE_Shields; // 0xb68(0x08)
	struct FGameplayTag GC_Activate; // 0xb70(0x04)
	char pad_B74[0x4]; // 0xb74(0x04)
	struct FMulticastInlineDelegate OnEffectApplied; // 0xb78(0x10)

	void ForceCancelAbility(bool& bCancelAbility); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.ForceCancelAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetTimeInterval(double& ValueAtTimeInterval); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.GetTimeInterval // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ApplyEffect(); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.ApplyEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RecachePlayerPawn(); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.RecachePlayerPawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Coconut_ShieldHealth(int32_t EntryPoint); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.ExecuteUbergraph_GA_Coconut_ShieldHealth // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnEffectApplied__DelegateSignature(); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.OnEffectApplied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

