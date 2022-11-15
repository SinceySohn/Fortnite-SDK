// BlueprintGeneratedClass GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C
// Size: 0xf40 (Inherited: 0xb40)
struct UGA_Athena_ChromePlayers_Passive_C : UBlobGameplayAbility_Keybind {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb40(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb48(0x08)
	struct UFortWorldItemDefinition* GrantedItemInChromeState; // 0xb50(0x08)
	struct FGuid GrantedGUIDInChromeState; // 0xb58(0x10)
	double MinAccelerationToPreventBlobState; // 0xb68(0x08)
	struct FGameplayTagContainer Tags_PreventEnterBlobState; // 0xb70(0x20)
	struct FTimerHandle Handle_CanEnterBlobStateCheck; // 0xb90(0x08)
	double LastTimeCannotEnterBlobState; // 0xb98(0x08)
	double TimeToEnterBlobState; // 0xba0(0x08)
	struct UGameplayEffect* GE_EnterBlobState; // 0xba8(0x08)
	struct FGameplayTag GC_PendingEnterBlobState; // 0xbb0(0x04)
	char pad_BB4[0x4]; // 0xbb4(0x04)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitOvershieldsDestroyed; // 0xbb8(0x08)
	struct FGameplayTag EventTag_WeaponFired; // 0xbc0(0x04)
	char pad_BC4[0x4]; // 0xbc4(0x04)
	struct UGameplayEffect* GE_PreventBlobState_Short; // 0xbc8(0x08)
	struct FGameplayTag Tag_ElementalInteractionsToDisable; // 0xbd0(0x04)
	char pad_BD4[0x4]; // 0xbd4(0x04)
	struct FGameplayTagQuery HideKeybindQuery; // 0xbd8(0x48)
	double DamageTaken; // 0xc20(0x08)
	struct FScalableFloat Row_DamageTakenRemovalThreshold; // 0xc28(0x28)
	struct FGameplayTag GC_ChromeShatter; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct FGameplayTagContainer TagContainer_ChromePlayer; // 0xc58(0x20)
	float TimeLastDamaged; // 0xc78(0x04)
	char pad_C7C[0x4]; // 0xc7c(0x04)
	struct FScalableFloat Row_DamageThresholdResetTime; // 0xc80(0x28)
	struct FGameplayTagContainer TagContainer_IncomingDamageTypesToIgnore; // 0xca8(0x20)
	struct FGameplayTag EventTag_Damaged; // 0xcc8(0x04)
	struct FGameplayTag EventTag_DamageShielded; // 0xccc(0x04)
	struct FGameplayTag EventTag_DamageOvershielded; // 0xcd0(0x04)
	char pad_CD4[0x4]; // 0xcd4(0x04)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitDamaged; // 0xcd8(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitDamageShielded; // 0xce0(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitDamageOvershielded; // 0xce8(0x08)
	struct UGameplayEffect* GE_HealthRegen; // 0xcf0(0x08)
	struct FGameplayTagContainer Tag_HealthRegen; // 0xcf8(0x20)
	struct FScalableFloat Row_HealthRegenDelayOnDamaged; // 0xd18(0x28)
	struct FTimerHandle Handle_ResumeHealthRegenTimer; // 0xd40(0x08)
	struct FScalableFloat Row_HealthRegenPerTick; // 0xd48(0x28)
	struct UGameplayEffect* GE_ChromePlayers_ReduceDuration; // 0xd70(0x08)
	struct FScalableFloat Row_PercentDamageTakenToReduceDuration; // 0xd78(0x28)
	struct FGameplayTagContainer AssetTagContainer_ChromePlayerGE; // 0xda0(0x20)
	struct FScalableFloat Row_MinRemainingDurationToKeepChromeAfterDamaged; // 0xdc0(0x28)
	struct FGameplayTag GC_ExpirationWarning; // 0xde8(0x04)
	char pad_DEC[0x4]; // 0xdec(0x04)
	struct FScalableFloat Row_ExpirationWarningDuration; // 0xdf0(0x28)
	struct FTimerHandle Handle_ExpirationWarningTimer; // 0xe18(0x08)
	bool ExpirationWarningActive; // 0xe20(0x01)
	char pad_E21[0x3]; // 0xe21(0x03)
	struct FGameplayTag EventTag_RefreshExpirationWarning; // 0xe24(0x04)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitExpirationWarningRefresh; // 0xe28(0x08)
	struct FGameplayTagContainer TagContainer_Asset_BlobState; // 0xe30(0x20)
	struct FGameplayTag Tag_ContextTutorial_BlobState; // 0xe50(0x04)
	char pad_E54[0x4]; // 0xe54(0x04)
	struct FGameplayTagContainer Tag_Quest_ChromeApplied; // 0xe58(0x20)
	struct FGameplayTagContainer GC_ChromeNonBlobFX; // 0xe78(0x20)
	struct FScalableFloat Row_EnergyToAdd; // 0xe98(0x28)
	struct FGameplayTagRequirements ChromeGE_SourceTagReqs; // 0xec0(0x40)
	struct FGameplayTagRequirements ChromeGE_TargetTagReqs; // 0xf00(0x40)

	void GetValidController(bool& IsValid, struct AFortPlayerController*& PlayerController, struct AAIController*& AIController, bool& isPlayer); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.GetValidController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void IsAtMaxHealth(bool& AtMaxHealth); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.IsAtMaxHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetRemainingChromeDuration(double& Duration); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.GetRemainingChromeDuration // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetPlayerPawnInventoryOwnerInterface(struct TScriptInterface<IFortInventoryOwnerInterface>& InventoryOwnerInterface, bool& IsValid); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.GetPlayerPawnInventoryOwnerInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CanEnterBlobState(bool& CanEnterBlobState); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.CanEnterBlobState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void EventReceived_DCA75BBF40C6084CBAD8778730279968(struct FGameplayEventData Payload); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.EventReceived_DCA75BBF40C6084CBAD8778730279968 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_DF5DB5F349B3F14F2D9B838AB59F19E2(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.Triggered_DF5DB5F349B3F14F2D9B838AB59F19E2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_EEFA9EDA44572DD48B1646B61E764DDF(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.Triggered_EEFA9EDA44572DD48B1646B61E764DDF // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_A39FF1824D9AEA984B5E758E3490FE28(struct FGameplayEventData Payload); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.EventReceived_A39FF1824D9AEA984B5E758E3490FE28 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_BACAB38F4AE08259B5C6739B7E65D789(struct FGameplayEventData Payload); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.EventReceived_BACAB38F4AE08259B5C6739B7E65D789 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_2AC74B2E4EF100E336ABC9A891F8F411(struct FGameplayEventData Payload); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.EventReceived_2AC74B2E4EF100E336ABC9A891F8F411 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_CD9A0391487FBDCB25E0BB8F9D111379(struct FGameplayEventData Payload); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.EventReceived_CD9A0391487FBDCB25E0BB8F9D111379 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnApplied_91C1CD3B44A213BDCBDC44959A2E2C5D(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.OnApplied_91C1CD3B44A213BDCBDC44959A2E2C5D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnterBlobStateTracker(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.EnterBlobStateTracker // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CanEnterBlobStateCheck(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.CanEnterBlobStateCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetChromePlayerVisuals(bool SetInChromeState); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.SetChromePlayerVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetElementalAttachmentDisabled(bool Disabled); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.SetElementalAttachmentDisabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetOvershieldsEnabled(bool Enabled); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.SetOvershieldsEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWaitDamagedEvents(bool Enabled); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.SetWaitDamagedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged(struct FGameplayTagContainer InstigatorTags, double Damage); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.OnDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHealthRegenEnabled(bool Enabled); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.SetHealthRegenEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PauseHealthRegen(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.PauseHealthRegen // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResumeHealthRegen(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.ResumeHealthRegen // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReduceChromeDurationFromDamage(double Damage); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.ReduceChromeDurationFromDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RemoveChromeFromDamage(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.RemoveChromeFromDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartExpirationWarning(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.StartExpirationWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopExpirationWarning(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.StopExpirationWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateExpirationWarningState(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.UpdateExpirationWarningState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SendQuestEvent(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.SendQuestEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHealthChanged(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.OnHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GrantTacticalSprintEnergy(); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.GrantTacticalSprintEnergy // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_Passive(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_Passive.GA_Athena_ChromePlayers_Passive_C.ExecuteUbergraph_GA_Athena_ChromePlayers_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

