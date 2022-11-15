// BlueprintGeneratedClass GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C
// Size: 0x105c (Inherited: 0xe79)
struct UGA_Athena_ChromePlayers_Blob_BlobState_C : UGA_Athena_Blob_BlobState_C {
	char pad_E79[0x7]; // 0xe79(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe80(0x08)
	struct FGameplayTag Tag_ChromePlayer; // 0xe88(0x04)
	char pad_E8C[0x4]; // 0xe8c(0x04)
	struct UTacticalSprintEnergyComponent_C* CachedPlayerEnergyComponent; // 0xe90(0x08)
	struct FGameplayTag Tag_EventBeginFalling; // 0xe98(0x04)
	char pad_E9C[0x4]; // 0xe9c(0x04)
	double DamageTaken; // 0xea0(0x08)
	struct FScalableFloat Row_DamageTakenRemovalThreshold; // 0xea8(0x28)
	struct FGameplayTagContainer TagContainer_ChromePlayer; // 0xed0(0x20)
	struct FGameplayTag Tag_GC_ChromeShatter; // 0xef0(0x04)
	char pad_EF4[0x4]; // 0xef4(0x04)
	struct FScalableFloat Row_EnergyRegen; // 0xef8(0x28)
	struct FScalableFloat Row_EnergyRegenDelay; // 0xf20(0x28)
	struct FGameplayTag Tag_EnergyRegenIdentifier; // 0xf48(0x04)
	char pad_F4C[0x4]; // 0xf4c(0x04)
	struct FScalableFloat Row_DamageThresholdResetTime; // 0xf50(0x28)
	double TimeLastDamaged; // 0xf78(0x08)
	struct FScalableFloat Row_RemoveChromeStatusOnDamageThresholdReached; // 0xf80(0x28)
	struct UGameplayEffect* GE_BlobRemovalOnDamageThresholdReached; // 0xfa8(0x08)
	struct FGameplayTagContainer TagContainer_IncomingDamageTypesToIgnore; // 0xfb0(0x20)
	struct FGameplayTag EventTag_Damaged; // 0xfd0(0x04)
	struct FGameplayTag EventTag_DamageShielded; // 0xfd4(0x04)
	struct FGameplayTag EventTag_DamageOvershielded; // 0xfd8(0x04)
	char pad_FDC[0x4]; // 0xfdc(0x04)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitDamaged; // 0xfe0(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitDamageShielded; // 0xfe8(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitDamageOvershielded; // 0xff0(0x08)
	struct FGameplayTag Tag_ContextTutorial_BlobDash; // 0xff8(0x04)
	struct FGameplayTag Tag_ContextTutorial_BlobStateComplete; // 0xffc(0x04)
	float DashTutorialDelay; // 0x1000(0x04)
	char pad_1004[0x4]; // 0x1004(0x04)
	struct FRotator DefaultRotationRate; // 0x1008(0x18)
	bool UsingBlobRotation; // 0x1020(0x01)
	char pad_1021[0x7]; // 0x1021(0x07)
	struct FScalableFloat Row_BlobTurnRate; // 0x1028(0x28)
	struct FTimerHandle TimerHandle_FailsafeCheck; // 0x1050(0x08)
	struct FName HudElementVisibilityReason; // 0x1058(0x04)

	void GetPlayerEnergyComponent(struct UTacticalSprintEnergyComponent_C*& EnergyComponent, bool& Success); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.GetPlayerEnergyComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_99FF9B0C40B62DB600AADB85C8A442B8(); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.Removed_99FF9B0C40B62DB600AADB85C8A442B8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_6600D5A24909F2CB79E6FA9F2943E4E2(struct FGameplayEventData Payload); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.EventReceived_6600D5A24909F2CB79E6FA9F2943E4E2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_AFECC4D646BCA9AF023933A7A83ECF2B(struct FGameplayEventData Payload); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.EventReceived_AFECC4D646BCA9AF023933A7A83ECF2B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_DB72639740AB94D992F732B66F9DEE4A(struct FGameplayEventData Payload); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.EventReceived_DB72639740AB94D992F732B66F9DEE4A // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTacticalSprintRegenSettings(bool UseModifiedParameters); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.UpdateTacticalSprintRegenSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FallDamageImmunityEvent(); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.FallDamageImmunityEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWaitDamagedEvents(bool Enabled); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.SetWaitDamagedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleRemovalConditions(); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.HandleRemovalConditions // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged(struct FGameplayTagContainer InstigatorTags, double Damage); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.OnDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetUseBlobRotation(bool Enabled); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.SetUseBlobRotation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SendTutorialEvents(); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.SendTutorialEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailsafeCheck(); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.FailsafeCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CheatRemoveBlobStateClient(); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.CheatRemoveBlobStateClient // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheatRemoveBlobStateServer(); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.CheatRemoveBlobStateServer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_BlobState(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_Blob_BlobState.GA_Athena_ChromePlayers_Blob_BlobState_C.ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_BlobState // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

