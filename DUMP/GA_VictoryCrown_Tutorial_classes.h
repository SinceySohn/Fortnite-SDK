// BlueprintGeneratedClass GA_VictoryCrown_Tutorial.GA_VictoryCrown_Tutorial_C
// Size: 0xb28 (Inherited: 0xb20)
struct UGA_VictoryCrown_Tutorial_C : UGAT_PassiveAbility_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)

	void K2_ActivateAbility(); // Function GA_VictoryCrown_Tutorial.GA_VictoryCrown_Tutorial_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_VictoryCrown_Tutorial.GA_VictoryCrown_Tutorial_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void TriggerCrown60sTutorial(); // Function GA_VictoryCrown_Tutorial.GA_VictoryCrown_Tutorial_C.TriggerCrown60sTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_VictoryCrown_Tutorial.GA_VictoryCrown_Tutorial_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void FireCrownTutorialActivation(); // Function GA_VictoryCrown_Tutorial.GA_VictoryCrown_Tutorial_C.FireCrownTutorialActivation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_VictoryCrown_Tutorial(int32_t EntryPoint); // Function GA_VictoryCrown_Tutorial.GA_VictoryCrown_Tutorial_C.ExecuteUbergraph_GA_VictoryCrown_Tutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

