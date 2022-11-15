// BlueprintGeneratedClass GA_Athena_ChromeBuild_GrantComponent.GA_Athena_ChromeBuild_GrantComponent_C
// Size: 0xbb8 (Inherited: 0xb20)
struct UGA_Athena_ChromeBuild_GrantComponent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTagContainer ValidActorTags; // 0xb28(0x20)
	struct FGameplayTagContainer InvalidActorTags; // 0xb48(0x20)
	struct FScalableFloat EnablePhaseableBuildFeature; // 0xb68(0x28)
	struct FScalableFloat EnableChromeOnPBWAs; // 0xb90(0x28)

	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromeBuild_GrantComponent.GA_Athena_ChromeBuild_GrantComponent_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromeBuild_GrantComponent.GA_Athena_ChromeBuild_GrantComponent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromeBuild_GrantComponent.GA_Athena_ChromeBuild_GrantComponent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromeBuild_GrantComponent(int32_t EntryPoint); // Function GA_Athena_ChromeBuild_GrantComponent.GA_Athena_ChromeBuild_GrantComponent_C.ExecuteUbergraph_GA_Athena_ChromeBuild_GrantComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

