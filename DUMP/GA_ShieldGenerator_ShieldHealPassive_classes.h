// BlueprintGeneratedClass GA_ShieldGenerator_ShieldHealPassive.GA_ShieldGenerator_ShieldHealPassive_C
// Size: 0xb70 (Inherited: 0xb20)
struct UGA_ShieldGenerator_ShieldHealPassive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPawn* Pawn; // 0xb28(0x08)
	struct FGameplayTagContainer QuestSourceTags; // 0xb30(0x20)
	struct FGameplayTagContainer QuestTargetTags; // 0xb50(0x20)

	void K2_ActivateAbility(); // Function GA_ShieldGenerator_ShieldHealPassive.GA_ShieldGenerator_ShieldHealPassive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_ShieldGenerator_ShieldHealPassive.GA_ShieldGenerator_ShieldHealPassive_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_ShieldGenerator_ShieldHealPassive(int32_t EntryPoint); // Function GA_ShieldGenerator_ShieldHealPassive.GA_ShieldGenerator_ShieldHealPassive_C.ExecuteUbergraph_GA_ShieldGenerator_ShieldHealPassive // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

