// BlueprintGeneratedClass GA_Galileo_Lobster_Block_Break.GA_Galileo_Lobster_Block_Break_C
// Size: 0xba0 (Inherited: 0xb20)
struct UGA_Galileo_Lobster_Block_Break_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FFortGameplayAbilityMontageInfo NoMotionMontage; // 0xb28(0x58)
	struct FGameplayTagContainer TagsForNoMotionBlock; // 0xb80(0x20)

	void Completed_D1B82CD04940A900D0C5A5BEFF3AF323(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Galileo_Lobster_Block_Break.GA_Galileo_Lobster_Block_Break_C.Completed_D1B82CD04940A900D0C5A5BEFF3AF323 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_D1B82CD04940A900D0C5A5BEFF3AF323(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Galileo_Lobster_Block_Break.GA_Galileo_Lobster_Block_Break_C.Cancelled_D1B82CD04940A900D0C5A5BEFF3AF323 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_D1B82CD04940A900D0C5A5BEFF3AF323(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Galileo_Lobster_Block_Break.GA_Galileo_Lobster_Block_Break_C.Triggered_D1B82CD04940A900D0C5A5BEFF3AF323 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Galileo_Lobster_Block_Break.GA_Galileo_Lobster_Block_Break_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Galileo_Lobster_Block_Break.GA_Galileo_Lobster_Block_Break_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Galileo_Lobster_Block_Break(int32_t EntryPoint); // Function GA_Galileo_Lobster_Block_Break.GA_Galileo_Lobster_Block_Break_C.ExecuteUbergraph_GA_Galileo_Lobster_Block_Break // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

