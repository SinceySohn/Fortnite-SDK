// BlueprintGeneratedClass GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C
// Size: 0xbfc (Inherited: 0xb20)
struct UGA_Athena_HealSpray_Secondary_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPrimaryPressed; // 0xb28(0x08)
	struct FGameplayTag Tag_PrimaryPressed; // 0xb30(0x04)
	struct FGameplayTag Tag_PrimaryReleased; // 0xb34(0x04)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPrimaryReleased; // 0xb38(0x08)
	bool PrimaryFireActive; // 0xb40(0x01)
	char pad_B41[0x3]; // 0xb41(0x03)
	struct FName Section_FireLoop; // 0xb44(0x04)
	struct FName Section_AimLoop; // 0xb48(0x04)
	struct FName Section_Outro; // 0xb4c(0x04)
	bool AbilityEnding; // 0xb50(0x01)
	char pad_B51[0x7]; // 0xb51(0x07)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0xb58(0x28)
	struct FGameplayTag ApplicationTag; // 0xb80(0x04)
	struct FGameplayTag Tag_GC_SprayLoop; // 0xb84(0x04)
	bool SprayFXActive; // 0xb88(0x01)
	char pad_B89[0x3]; // 0xb89(0x03)
	struct FGameplayTag Tag_AmmoChanged; // 0xb8c(0x04)
	struct UGameplayEffect* GE_Channeling; // 0xb90(0x08)
	struct FActiveGameplayEffectHandle Handle_GE_Channeling; // 0xb98(0x08)
	struct FScalableFloat Row_MontageIntroDuration; // 0xba0(0x28)
	struct FScalableFloat Row_MaxDuration; // 0xbc8(0x28)
	struct FTimerHandle Handle_FailsafeTimer; // 0xbf0(0x08)
	struct FName MontageSection_Outro; // 0xbf8(0x04)

	void OnRep_SprayFXActive(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.OnRep_SprayFXActive // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitVars(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.InitVars // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_79A3F9314B40B2F7BBB018827DA65523(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.Completed_79A3F9314B40B2F7BBB018827DA65523 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_79A3F9314B40B2F7BBB018827DA65523(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.Cancelled_79A3F9314B40B2F7BBB018827DA65523 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_79A3F9314B40B2F7BBB018827DA65523(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.Triggered_79A3F9314B40B2F7BBB018827DA65523 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PrimaryPressed(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.PrimaryPressed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PrimaryReleased(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.PrimaryReleased // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AbilityTriggered(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.AbilityTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageCanceledOrEnded(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.MontageCanceledOrEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanUpAndEndAbility(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.CleanUpAndEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RepSetSprayActive(bool SprayFXActive); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.RepSetSprayActive // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetReleaseEvent(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.ResetReleaseEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageTriggeredPreCommit(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.MontageTriggeredPreCommit // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AmmoChangedEvent(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.AmmoChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyGCAfterMontageIntroDelay(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.ApplyGCAfterMontageIntroDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAbilityInputReleased(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CallEndAbility(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.CallEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailsafeTimer(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.FailsafeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RepMontageOutro(); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.RepMontageOutro // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_HealSpray_Secondary(int32_t EntryPoint); // Function GA_Athena_HealSpray_Secondary.GA_Athena_HealSpray_Secondary_C.ExecuteUbergraph_GA_Athena_HealSpray_Secondary // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

