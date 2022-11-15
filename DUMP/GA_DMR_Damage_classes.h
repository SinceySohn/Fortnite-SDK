// BlueprintGeneratedClass GA_DMR_Damage.GA_DMR_Damage_C
// Size: 0xb40 (Inherited: 0xb20)
struct UGA_DMR_Damage_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UAbilitySystemComponent* ; // 0xb28(0x08)
	struct FGameplayEffectSpecHandle EffectSpec; // 0xb30(0x10)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_DMR_Damage.GA_DMR_Damage_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_DMR_Damage(int32_t EntryPoint); // Function GA_DMR_Damage.GA_DMR_Damage_C.ExecuteUbergraph_GA_DMR_Damage // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

