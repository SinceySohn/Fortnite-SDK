// BlueprintGeneratedClass GA_TrapGeneric.GA_TrapGeneric_C
// Size: 0xb40 (Inherited: 0xb20)
struct UGA_TrapGeneric_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct ABuildingTrap* CeilingTrap; // 0xb28(0x08)
	struct TArray<struct AActor*> TargetArray; // 0xb30(0x10)

	void Cancelled_EFEC611E4D988CAA3867F28EE35771B3(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_TrapGeneric.GA_TrapGeneric_C.Cancelled_EFEC611E4D988CAA3867F28EE35771B3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_EFEC611E4D988CAA3867F28EE35771B3(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_TrapGeneric.GA_TrapGeneric_C.Targeted_EFEC611E4D988CAA3867F28EE35771B3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_TrapGeneric.GA_TrapGeneric_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_TrapGeneric(int32_t EntryPoint); // Function GA_TrapGeneric.GA_TrapGeneric_C.ExecuteUbergraph_GA_TrapGeneric // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

