// BlueprintGeneratedClass GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C
// Size: 0xd70 (Inherited: 0xb20)
struct UGA_Athena_AppleSun_Passive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTagRequirements Falling Tag; // 0xb28(0x40)
	struct UFortWorldItemDefinition* ItemDef; // 0xb68(0x08)
	struct FGameplayAttribute Attribute; // 0xb70(0x38)
	bool HasFallImmunity; // 0xba8(0x01)
	char pad_BA9[0x7]; // 0xba9(0x07)
	struct AFortPlayerPawn* PlayerPawn; // 0xbb0(0x08)
	struct UAnimMontage* ThrowDownMontage; // 0xbb8(0x08)
	bool CanAirbagByJumping; // 0xbc0(0x01)
	bool Throwing; // 0xbc1(0x01)
	bool PreviousCanAirbag; // 0xbc2(0x01)
	bool IsCloseToGround; // 0xbc3(0x01)
	char pad_BC4[0x4]; // 0xbc4(0x04)
	double TimeSinceGrounded; // 0xbc8(0x08)
	double UpdateInterval; // 0xbd0(0x08)
	double MaxVelJumpPrompt; // 0xbd8(0x08)
	double MinVelJumpPrompt; // 0xbe0(0x08)
	double MinTimeSinceGroundedForJumpPrompt; // 0xbe8(0x08)
	bool InInventory; // 0xbf0(0x01)
	char pad_BF1[0x7]; // 0xbf1(0x07)
	struct UFortWorldItemDefinition* ItemDef_VR; // 0xbf8(0x08)
	struct FGameplayTagContainer Recharging Tags; // 0xc00(0x20)
	struct FGameplayTagContainer VR tag; // 0xc20(0x20)
	struct FGameplayTag T_Clambering; // 0xc40(0x04)
	bool bIsClambering; // 0xc44(0x01)
	char pad_C45[0x3]; // 0xc45(0x03)
	struct FGameplayTagContainer TC_GliderTags; // 0xc48(0x20)
	struct TArray<struct FGameplayTag> TC Blocking Tags; // 0xc68(0x10)
	double GroundTraceMaxDistance; // 0xc78(0x08)
	struct FHitResult Out Hit; // 0xc80(0xe0)
	double TraceDistanceToGround; // 0xd60(0x08)
	double MontagePlayRate; // 0xd68(0x08)

	void HasEnoughStacks(bool& Return); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.HasEnoughStacks // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_88451BF04FEA60EEE79926856BA05A42(struct FGameplayEventData Payload); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.EventReceived_88451BF04FEA60EEE79926856BA05A42 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_E2E08D9245B8C2437B278CACDF6A674C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Completed_E2E08D9245B8C2437B278CACDF6A674C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_E2E08D9245B8C2437B278CACDF6A674C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Cancelled_E2E08D9245B8C2437B278CACDF6A674C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_E2E08D9245B8C2437B278CACDF6A674C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Triggered_E2E08D9245B8C2437B278CACDF6A674C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_6CF7877A4087E6390DA1828899D54EFB(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Completed_6CF7877A4087E6390DA1828899D54EFB // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_6CF7877A4087E6390DA1828899D54EFB(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Cancelled_6CF7877A4087E6390DA1828899D54EFB // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_6CF7877A4087E6390DA1828899D54EFB(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Triggered_6CF7877A4087E6390DA1828899D54EFB // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_63BCF2B94670637917112AB859C9E042(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Added_63BCF2B94670637917112AB859C9E042 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_736B5D864FA5D230EC8C6AA486E73C07(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Removed_736B5D864FA5D230EC8C6AA486E73C07 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SpawnProjectile(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.SpawnProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCanCrashpad(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.UpdateCanCrashpad // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateIsCloseToGround(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.UpdateIsCloseToGround // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Throw_Server(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Throw_Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Remove Item From Inventory?(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Remove Item From Inventory? // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void WaitForClamberTags(); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.WaitForClamberTags // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_AppleSun_Passive(int32_t EntryPoint); // Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.ExecuteUbergraph_GA_Athena_AppleSun_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

