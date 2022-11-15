// BlueprintGeneratedClass GA_ResTorch_PercentHealing.GA_ResTorch_PercentHealing_C
// Size: 0xba8 (Inherited: 0xb20)
struct UGA_ResTorch_PercentHealing_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FScalableFloat HealingPercent; // 0xb28(0x28)
	struct FScalableFloat HealingEnabled?; // 0xb50(0x28)
	struct FScalableFloat MaxHealing; // 0xb78(0x28)
	struct USoundBase* SFX_FullyHealedOneShot; // 0xba0(0x08)

	bool IsActorFullyHealed?(struct ABuildingActor* Actor); // Function GA_ResTorch_PercentHealing.GA_ResTorch_PercentHealing_C.IsActorFullyHealed? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_ResTorch_PercentHealing.GA_ResTorch_PercentHealing_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_ResTorch_PercentHealing.GA_ResTorch_PercentHealing_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RepPlayFullHeal(struct FVector Location); // Function GA_ResTorch_PercentHealing.GA_ResTorch_PercentHealing_C.RepPlayFullHeal // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_ResTorch_PercentHealing(int32_t EntryPoint); // Function GA_ResTorch_PercentHealing.GA_ResTorch_PercentHealing_C.ExecuteUbergraph_GA_ResTorch_PercentHealing // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

