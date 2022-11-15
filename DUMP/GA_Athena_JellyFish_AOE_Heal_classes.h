// BlueprintGeneratedClass GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C
// Size: 0xc60 (Inherited: 0xb20)
struct UGA_Athena_JellyFish_AOE_Heal_C : UFortGameplayAbility {
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
	struct FGameplayTag GC_PotionConsumed; // 0xb50(0x04)
	char pad_B54[0x4]; // 0xb54(0x04)
	struct UGameplayEffect* GE_EffectToApply; // 0xb58(0x08)
	bool HealsShields; // 0xb60(0x01)
	bool HasShieldCap; // 0xb61(0x01)
	char pad_B62[0x6]; // 0xb62(0x06)
	double ShieldHealAmount; // 0xb68(0x08)
	struct FScalableFloat Row_ShieldCap; // 0xb70(0x28)
	struct FScalableFloat Row_ShieldAmount; // 0xb98(0x28)
	struct FScalableFloat Row_HealthCap; // 0xbc0(0x28)
	struct FScalableFloat Row_HealthAmount; // 0xbe8(0x28)
	struct FGameplayTagContainer Tags_FailedResponse; // 0xc10(0x20)
	bool IgnoreCalcsForEffectApplication; // 0xc30(0x01)
	bool AlwaysActivate; // 0xc31(0x01)
	char pad_C32[0x2]; // 0xc32(0x02)
	struct FGameplayTag EquippingCue; // 0xc34(0x04)
	double OverHealing; // 0xc38(0x08)
	bool HealthIsEffective; // 0xc40(0x01)
	char pad_C41[0x7]; // 0xc41(0x07)
	struct UForceFeedbackEffect* ForceFeedback; // 0xc48(0x08)
	struct FGameplayTag ExplodeCue; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct AFortPlayerPawn* TargetPawn; // 0xc58(0x08)

	void ApplyCurieWater(struct FVector InputPin); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ApplyCurieWater // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMontageTriggered(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.OnMontageTriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MakeCustomMontageInfo(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.MakeCustomMontageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupGE(struct FGameplayEffectSpecHandle& Effect Out); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.SetupGE // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HealthCalc(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.HealthCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShieldCalc(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ShieldCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Completed_39BB44CE4B5ACBFAF09C9C960F1A3644(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Completed_39BB44CE4B5ACBFAF09C9C960F1A3644 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_CommitExecute(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CommitExecute // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal(int32_t EntryPoint); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

