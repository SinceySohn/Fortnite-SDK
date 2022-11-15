// BlueprintGeneratedClass GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C
// Size: 0xc02 (Inherited: 0xb20)
struct UGA_Athena_Blob_Exit_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	bool ForceLaunchPlayer; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
	struct FScalableFloat Row_LaunchDuration; // 0xb38(0x28)
	struct FScalableFloat Row_LaunchSpeed_XY_Stationary; // 0xb60(0x28)
	struct FScalableFloat Row_LaunchSpeed_Z_Stationary; // 0xb88(0x28)
	struct FScalableFloat Row_LaunchSpeed_XY_Moving; // 0xbb0(0x28)
	struct FScalableFloat Row_LaunchSpeed_Z_Moving; // 0xbd8(0x28)
	bool ForceUnCrouch; // 0xc00(0x01)
	bool AllowActivationDuringSkydive; // 0xc01(0x01)

	void CanActivateAbilityPostActivate(bool& CanActivate); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.CanActivateAbilityPostActivate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnLanded_C77BD2454DBA9211CA934A95A547493B(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.OnLanded_C77BD2454DBA9211CA934A95A547493B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFinish_C77BD2454DBA9211CA934A95A547493B(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.OnFinish_C77BD2454DBA9211CA934A95A547493B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLanded_E6B6B1C7414CD54494019BA6C71DFFCA(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.OnLanded_E6B6B1C7414CD54494019BA6C71DFFCA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFinish_E6B6B1C7414CD54494019BA6C71DFFCA(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.OnFinish_E6B6B1C7414CD54494019BA6C71DFFCA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_58D6CBCE4475C1E0063321B8DE9B92F0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.Completed_58D6CBCE4475C1E0063321B8DE9B92F0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_58D6CBCE4475C1E0063321B8DE9B92F0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.Cancelled_58D6CBCE4475C1E0063321B8DE9B92F0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_58D6CBCE4475C1E0063321B8DE9B92F0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.Triggered_58D6CBCE4475C1E0063321B8DE9B92F0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void LaunchPlayer(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.LaunchPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageTriggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.MontageTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageCancelled(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.MontageCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageCompleted(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.MontageCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CannotActivatePostActivate(); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.CannotActivatePostActivate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Blob_Exit(int32_t EntryPoint); // Function GA_Athena_Blob_Exit.GA_Athena_Blob_Exit_C.ExecuteUbergraph_GA_Athena_Blob_Exit // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

