// BlueprintGeneratedClass GA_Athena_ChromeSplash_ChromeObjects_GrantComponent.GA_Athena_ChromeSplash_ChromeObjects_GrantComponent_C
// Size: 0xbc8 (Inherited: 0xb20)
struct UGA_Athena_ChromeSplash_ChromeObjects_GrantComponent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	bool Debug; // 0xb28(0x01)
	char pad_B29[0x7]; // 0xb29(0x07)
	struct FGameplayTagContainer ValidActorTags; // 0xb30(0x20)
	struct FGameplayTagContainer InvalidActorTags; // 0xb50(0x20)
	struct FGameplayTagContainer ApplyChrome_PropTag; // 0xb70(0x20)
	struct ABuildingSMActor* SmActor; // 0xb90(0x08)
	struct FGameplayTag Gameplay Cue Tag; // 0xb98(0x04)
	struct FGameplayTag ChromeVehicleTag; // 0xb9c(0x04)
	struct FScalableFloat ChromeVehicleEnabled; // 0xba0(0x28)

	void ApplyChromeChestGameplayEffect(bool& bSuccess); // Function GA_Athena_ChromeSplash_ChromeObjects_GrantComponent.GA_Athena_ChromeSplash_ChromeObjects_GrantComponent_C.ApplyChromeChestGameplayEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromeSplash_ChromeObjects_GrantComponent.GA_Athena_ChromeSplash_ChromeObjects_GrantComponent_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Apply Chrome to Vehicles(); // Function GA_Athena_ChromeSplash_ChromeObjects_GrantComponent.GA_Athena_ChromeSplash_ChromeObjects_GrantComponent_C.Apply Chrome to Vehicles // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromeSplash_ChromeObjects_GrantComponent.GA_Athena_ChromeSplash_ChromeObjects_GrantComponent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromeSplash_ChromeObjects_GrantComponent.GA_Athena_ChromeSplash_ChromeObjects_GrantComponent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromeSplash_ChromeObjects_GrantComponent(int32_t EntryPoint); // Function GA_Athena_ChromeSplash_ChromeObjects_GrantComponent.GA_Athena_ChromeSplash_ChromeObjects_GrantComponent_C.ExecuteUbergraph_GA_Athena_ChromeSplash_ChromeObjects_GrantComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

