// BlueprintGeneratedClass GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C
// Size: 0xbc0 (Inherited: 0xb20)
struct UGA_ResTorch_PercentHealingVehicle_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FScalableFloat HealingPercent; // 0xb28(0x28)
	struct FScalableFloat HealingEnabled?; // 0xb50(0x28)
	struct FScalableFloat MaxHealing; // 0xb78(0x28)
	struct UGameplayEffect* Gameplay Effect Class; // 0xba0(0x08)
	bool FullHealth?; // 0xba8(0x01)
	char pad_BA9[0x7]; // 0xba9(0x07)
	struct USoundBase* SFX_FullyHealedOneShot; // 0xbb0(0x08)
	struct UGameplayEffect* GE_HealVehicle; // 0xbb8(0x08)

	void HealDamagedParts(struct AFortAthenaVehicle* Vehicle); // Function GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C.HealDamagedParts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_CommitExecute(); // Function GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C.K2_CommitExecute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsFullHealthVehicle?(struct TScriptInterface<IFortVehicleInterface> Vehicle); // Function GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C.IsFullHealthVehicle? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateQuests(int32_t Amount); // Function GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C.UpdateQuests // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RepPlayFullHeal(struct FVector Location); // Function GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C.RepPlayFullHeal // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_ResTorch_PercentHealingVehicle(int32_t EntryPoint); // Function GA_ResTorch_PercentHealingVehicle.GA_ResTorch_PercentHealingVehicle_C.ExecuteUbergraph_GA_ResTorch_PercentHealingVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

