// BlueprintGeneratedClass GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C
// Size: 0xd20 (Inherited: 0xb20)
struct UGA_Athena_MedConsumable_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	bool HealsHealth; // 0xb30(0x01)
	bool HasHealthCap; // 0xb31(0x01)
	char pad_B32[0x6]; // 0xb32(0x06)
	double HealthHealAmount; // 0xb38(0x08)
	double TriggerDuration; // 0xb40(0x08)
	bool ShouldHolster; // 0xb48(0x01)
	char pad_B49[0x3]; // 0xb49(0x03)
	struct FName ItemIDToHolster; // 0xb4c(0x04)
	struct UGameplayEffect* GE_EffectToApply; // 0xb50(0x08)
	bool HealsShields; // 0xb58(0x01)
	bool HasShieldCap; // 0xb59(0x01)
	char pad_B5A[0x6]; // 0xb5a(0x06)
	double ShieldHealAmount; // 0xb60(0x08)
	struct FScalableFloat Row_ShieldCap; // 0xb68(0x28)
	struct FScalableFloat Row_ShieldAmount; // 0xb90(0x28)
	struct FGameplayTag GC_PotionConsumed; // 0xbb8(0x04)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	struct FScalableFloat Row_HealthCap; // 0xbc0(0x28)
	struct FScalableFloat Row_HealthAmount; // 0xbe8(0x28)
	struct FGameplayTagContainer Tags_FailedResponse; // 0xc10(0x20)
	bool IgnoreCalcsForEffectApplication; // 0xc30(0x01)
	bool AlwaysActivate; // 0xc31(0x01)
	char pad_C32[0x2]; // 0xc32(0x02)
	struct FGameplayTag GC_EquippingCue; // 0xc34(0x04)
	double OverHealing; // 0xc38(0x08)
	bool HealthIsEffective; // 0xc40(0x01)
	char pad_C41[0x7]; // 0xc41(0x07)
	struct UForceFeedbackEffect* ForceFeedback; // 0xc48(0x08)
	struct FGameplayTag GC_HealthHealUsed; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct UGameplayEffect* GE_Channeling; // 0xc58(0x08)
	struct FActiveGameplayEffectHandle GEH_Channeling; // 0xc60(0x08)
	struct FGameplayTagContainer QuestTags; // 0xc68(0x20)
	struct FGameplayTagContainer QuestWeaponTags; // 0xc88(0x20)
	struct FGameplayTagContainer QuestSourceTags; // 0xca8(0x20)
	bool EndAbilityWhenTriggered; // 0xcc8(0x01)
	char pad_CC9[0x3]; // 0xcc9(0x03)
	struct FActiveGameplayEffectHandle Handle_AppliedGE; // 0xccc(0x08)
	enum class EFortAbilityTargetDataPolicy MontageTargetDataPolicy; // 0xcd4(0x01)
	char pad_CD5[0x3]; // 0xcd5(0x03)
	struct FGameplayTagContainer Tags_UseNullFailedActivateReason; // 0xcd8(0x20)
	struct FScalableFloat Wildlife Pct Heal Amount; // 0xcf8(0x28)

	void K2_OverrideFailedReason(struct FGameplayTagContainer& FailedReason, struct FGameplayTagContainer& OverridenFailedReason); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_OverrideFailedReason // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMontageTriggeredPostCommitSuccess(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.OnMontageTriggeredPostCommitSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMontageTriggeredPreCommit(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.OnMontageTriggeredPreCommit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MakeCustomMontageInfo(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.MakeCustomMontageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupGE(struct FGameplayEffectSpecHandle& Effect Out); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.SetupGE // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HealthCalc(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.HealthCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShieldCalc(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ShieldCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Completed_4C02BFB04B18D9E79F84848FFE6D2C32(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Completed_4C02BFB04B18D9E79F84848FFE6D2C32 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_4C02BFB04B18D9E79F84848FFE6D2C32(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Triggered_4C02BFB04B18D9E79F84848FFE6D2C32 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_MedConsumable_Parent(int32_t EntryPoint); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ExecuteUbergraph_GA_Athena_MedConsumable_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

