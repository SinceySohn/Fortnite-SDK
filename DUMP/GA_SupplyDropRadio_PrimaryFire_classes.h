// BlueprintGeneratedClass GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C
// Size: 0xb98 (Inherited: 0xb20)
struct UGA_SupplyDropRadio_PrimaryFire_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct ABP_SupplyDropRadioDeployLocationIndicator_C* DeployLocationIndicator; // 0xb28(0x08)
	bool bConversationEnded; // 0xb30(0x01)
	bool bMoveAbortConversation; // 0xb31(0x01)
	char pad_B32[0x2]; // 0xb32(0x02)
	struct FActiveGameplayEffectHandle BlockMovementEffectHandle; // 0xb34(0x08)
	bool bSpawnLocationIndicator; // 0xb3c(0x01)
	bool bSupplyDropClassSetOnFlare; // 0xb3d(0x01)
	char pad_B3E[0x2]; // 0xb3e(0x02)
	int32_t SelectedConversationIndex; // 0xb40(0x04)
	bool bStopMovementForBriefDurationOnActivate; // 0xb44(0x01)
	char pad_B45[0x3]; // 0xb45(0x03)
	struct FGameplayTag ForceFeedbackCueTag; // 0xb48(0x04)
	char pad_B4C[0x4]; // 0xb4c(0x04)
	struct UAbilityTask_WaitGameplayTagAdded* AsyncTask_InteractingWithNPC; // 0xb50(0x08)
	struct UFortAbilityTask_PlayMontageWaitTarget* AsyncTask_MontageActivate; // 0xb58(0x08)
	struct UAbilityTask_WaitGameplayEvent* AsyncTask_OptionSelect; // 0xb60(0x08)
	struct UFortAbilityTask_PlayMontageWaitTarget* AsyncTask_MontageConfirm; // 0xb68(0x08)
	struct UAbilityAsync_WaitGameplayEvent* AsyncTask_AnimEventFlareThrow; // 0xb70(0x08)
	struct UAbilityAsync_WaitGameplayEvent* AsyncTask_AnimEventFlarePop; // 0xb78(0x08)
	bool bDebugThrowSocketLocation; // 0xb80(0x01)
	char pad_B81[0x7]; // 0xb81(0x07)
	struct USoundBase* OptionSelectSoundCue; // 0xb88(0x08)
	struct USoundBase* ActivateSoundCue; // 0xb90(0x08)

	void K2_OverrideFailedReason(struct FGameplayTagContainer& FailedReason, struct FGameplayTagContainer& OverridenFailedReason); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.K2_OverrideFailedReason // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldPlayFailedMontage(struct FGameplayTagContainer& FailedReason); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.ShouldPlayFailedMontage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void DebugThrowSocketLocation(); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.DebugThrowSocketLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsMovementComponenetInAllowedMode(struct UCharacterMovementComponent* CharacterMovementComponent); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.IsMovementComponenetInAllowedMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void HandlePlayerMovementStates(); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.HandlePlayerMovementStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyIndicator(); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.DestroyIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnIndicator(); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.SpawnIndicator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnbindConversationEndDelegate(); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.UnbindConversationEndDelegate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void EventReceived_F3A1C05D497AA578852C3A8DC46778A1(struct FGameplayEventData Payload); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.EventReceived_F3A1C05D497AA578852C3A8DC46778A1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_045B5AA2468AA03B2B52138056A2B59B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.Completed_045B5AA2468AA03B2B52138056A2B59B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_045B5AA2468AA03B2B52138056A2B59B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.Cancelled_045B5AA2468AA03B2B52138056A2B59B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_045B5AA2468AA03B2B52138056A2B59B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.Triggered_045B5AA2468AA03B2B52138056A2B59B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_AFF525324BC9AAF7B7F685A16D119FE8(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.Completed_AFF525324BC9AAF7B7F685A16D119FE8 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_AFF525324BC9AAF7B7F685A16D119FE8(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.Cancelled_AFF525324BC9AAF7B7F685A16D119FE8 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_AFF525324BC9AAF7B7F685A16D119FE8(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.Triggered_AFF525324BC9AAF7B7F685A16D119FE8 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_2D5BC19D44DE770838AEA28E1638BDC3(); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.Added_2D5BC19D44DE770838AEA28E1638BDC3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_5552A82E48823017D813DE931D30B981(struct FGameplayEventData Payload); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.EventReceived_5552A82E48823017D813DE931D30B981 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_E45686594E5D6137BEE7C7B2603294E1(struct FGameplayEventData Payload); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.EventReceived_E45686594E5D6137BEE7C7B2603294E1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HandleConversationEnded(); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.HandleConversationEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleWeaponUnEquipped(); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.HandleWeaponUnEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.HandleMovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_SupplyDropRadio_PrimaryFire(int32_t EntryPoint); // Function GA_SupplyDropRadio_PrimaryFire.GA_SupplyDropRadio_PrimaryFire_C.ExecuteUbergraph_GA_SupplyDropRadio_PrimaryFire // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

