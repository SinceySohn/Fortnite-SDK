// BlueprintGeneratedClass GA_Generic_EffectiveHealingShielding_Parent.GA_Generic_EffectiveHealingShielding_Parent_C
// Size: 0xca0 (Inherited: 0xb20)
struct UGA_Generic_EffectiveHealingShielding_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UGameplayEffect* GE_Heal; // 0xb28(0x08)
	struct FScalableFloat Heal_Amount; // 0xb30(0x28)
	struct FScalableFloat Heal_Cap; // 0xb58(0x28)
	struct FScalableFloat bHealOverflowsIntoShields; // 0xb80(0x28)
	struct FScalableFloat Shield_Amount; // 0xba8(0x28)
	struct FScalableFloat Shield_Cap; // 0xbd0(0x28)
	struct AFortPawn* Pawn; // 0xbf8(0x08)
	struct FGameplayTag Tag_GC_Heal; // 0xc00(0x04)
	struct FGameplayTag Tag_GC_Shield; // 0xc04(0x04)
	struct FScalableFloat Duration; // 0xc08(0x28)
	struct FScalableFloat TickTime; // 0xc30(0x28)
	bool EndAbilityAfterHeal; // 0xc58(0x01)
	char pad_C59[0x7]; // 0xc59(0x07)
	struct FGameplayTagContainer QuestSourceTags; // 0xc60(0x20)
	struct FGameplayTagContainer QuestTargetTags; // 0xc80(0x20)

	void GetMagnitudes(double& HealMagnitude, double& ShieldMagnitude, bool& ApplyEffect, bool& RestoredHealth, bool& RestoredShields); // Function GA_Generic_EffectiveHealingShielding_Parent.GA_Generic_EffectiveHealingShielding_Parent_C.GetMagnitudes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Generic_EffectiveHealingShielding_Parent.GA_Generic_EffectiveHealingShielding_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Generic_EffectiveHealingShielding_Parent.GA_Generic_EffectiveHealingShielding_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Heal(); // Function GA_Generic_EffectiveHealingShielding_Parent.GA_Generic_EffectiveHealingShielding_Parent_C.Heal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DurationExpired(); // Function GA_Generic_EffectiveHealingShielding_Parent.GA_Generic_EffectiveHealingShielding_Parent_C.DurationExpired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Generic_EffectiveHealingShielding_Parent(int32_t EntryPoint); // Function GA_Generic_EffectiveHealingShielding_Parent.GA_Generic_EffectiveHealingShielding_Parent_C.ExecuteUbergraph_GA_Generic_EffectiveHealingShielding_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

