// BlueprintGeneratedClass GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C
// Size: 0xe18 (Inherited: 0xd20)
struct UGA_Athena_HealSpray_Primary_C : UGA_Athena_MedConsumable_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd20(0x08)
	struct FGameplayTagContainer Tags_PreventActivation; // 0xd28(0x20)
	struct FName MontageSection_Outro; // 0xd48(0x04)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	struct FScalableFloat Row_MaxDuration; // 0xd50(0x28)
	struct FTimerHandle Handle_FailsafeTimer; // 0xd78(0x08)
	struct FScalableFloat Row_MontageIntroDuration; // 0xd80(0x28)
	struct FGameplayTag Tag_GC_SprayLoop; // 0xda8(0x04)
	char pad_DAC[0x4]; // 0xdac(0x04)
	struct USoundBase* Sound_OutOfAmmo; // 0xdb0(0x08)
	struct UAnimMontage* Montage_DiscardWeapon; // 0xdb8(0x08)
	struct FGameplayTag Tag_AmmoChanged; // 0xdc0(0x04)
	char pad_DC4[0x4]; // 0xdc4(0x04)
	struct FScalableFloat Row_HealCapPct; // 0xdc8(0x28)
	struct FGameplayTagContainer Tag_FailedToActivateDueToHealthThreshold; // 0xdf0(0x20)
	double HealthCheckPrecision; // 0xe10(0x08)

	void K2_CommitExecute(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.K2_CommitExecute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckHealthThreshold(bool& ValidCheck, bool& IsUnderHealthThreshold); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.CheckHealthThreshold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnMontageTriggeredPreCommit(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.OnMontageTriggeredPreCommit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OverrideFailedReason(struct FGameplayTagContainer& FailedReason, struct FGameplayTagContainer& OverridenFailedReason); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.K2_OverrideFailedReason // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MakeCustomMontageInfo(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.MakeCustomMontageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMontageTriggeredPostCommitSuccess(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.OnMontageTriggeredPostCommitSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnAbilityInputReleased(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailsafeTimer(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.FailsafeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CallEndAbility(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.CallEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EnableRelease(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.EnableRelease // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyGCAfterMontageIntroDelay(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.ApplyGCAfterMontageIntroDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageTriggeredPreCommit(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.MontageTriggeredPreCommit // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AmmoChangedEvent(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.AmmoChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHealthChanged(); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.OnHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_HealSpray_Primary(int32_t EntryPoint); // Function GA_Athena_HealSpray_Primary.GA_Athena_HealSpray_Primary_C.ExecuteUbergraph_GA_Athena_HealSpray_Primary // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

