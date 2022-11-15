// BlueprintGeneratedClass GA_Interrogate_GC.GA_Interrogate_GC_C
// Size: 0xb2c (Inherited: 0xb20)
struct UGA_Interrogate_GC_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTag Cue; // 0xb28(0x04)

	void K2_ActivateAbility(); // Function GA_Interrogate_GC.GA_Interrogate_GC_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Interrogate_GC.GA_Interrogate_GC_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Interrogate_GC(int32_t EntryPoint); // Function GA_Interrogate_GC.GA_Interrogate_GC_C.ExecuteUbergraph_GA_Interrogate_GC // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

