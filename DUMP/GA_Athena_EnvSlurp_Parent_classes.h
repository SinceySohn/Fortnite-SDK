// BlueprintGeneratedClass GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C
// Size: 0xbb1 (Inherited: 0xb20)
struct UGA_Athena_EnvSlurp_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UGameplayEffect* GE_HealEffectToApply; // 0xb28(0x08)
	struct FTimerHandle Timer_TickInterval; // 0xb30(0x08)
	struct FScalableFloat Row_TickInterval; // 0xb38(0x28)
	struct FScalableFloat Row_EffectiveHealthAmount; // 0xb60(0x28)
	struct AFortPawn* FortPawn; // 0xb88(0x08)
	bool OnApplicationPlayBurstGC; // 0xb90(0x01)
	char pad_B91[0x3]; // 0xb91(0x03)
	struct FGameplayTag GC_BurstApplication; // 0xb94(0x04)
	double HealthHealAmount; // 0xb98(0x08)
	double OverHealing; // 0xba0(0x08)
	struct UGameplayEffect* GE_ShieldEffectToApply; // 0xba8(0x08)
	bool Is Over Time; // 0xbb0(0x01)

	void ApplyShieldGE(); // Function GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C.ApplyShieldGE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Health and Overheal Calc(); // Function GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C.Health and Overheal Calc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyHealthGE(); // Function GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C.ApplyHealthGE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Heal(); // Function GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C.Heal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailsafeLogic(); // Function GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C.FailsafeLogic // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_EnvSlurp_Parent(int32_t EntryPoint); // Function GA_Athena_EnvSlurp_Parent.GA_Athena_EnvSlurp_Parent_C.ExecuteUbergraph_GA_Athena_EnvSlurp_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

