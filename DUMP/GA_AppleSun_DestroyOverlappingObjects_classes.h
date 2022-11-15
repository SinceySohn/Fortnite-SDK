// BlueprintGeneratedClass GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C
// Size: 0xb28 (Inherited: 0xb20)
struct UGA_AppleSun_DestroyOverlappingObjects_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)

	struct FTransform GetCustomAbilitySourceTransform(); // Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.GetCustomAbilitySourceTransform // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Cancelled_96BA3C644E573EAE0D8760B88ABB3969(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Cancelled_96BA3C644E573EAE0D8760B88ABB3969 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_96BA3C644E573EAE0D8760B88ABB3969(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Targeted_96BA3C644E573EAE0D8760B88ABB3969 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects(int32_t EntryPoint); // Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

