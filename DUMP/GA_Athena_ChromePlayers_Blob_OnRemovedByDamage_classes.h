// BlueprintGeneratedClass GA_Athena_ChromePlayers_Blob_OnRemovedByDamage.GA_Athena_ChromePlayers_Blob_OnRemovedByDamage_C
// Size: 0xb90 (Inherited: 0xb20)
struct UGA_Athena_ChromePlayers_Blob_OnRemovedByDamage_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct UTacticalSprintEnergyComponent_C* EnergyComponent; // 0xb30(0x08)
	struct FGameplayTag Tag_EnergyUseIdentifier; // 0xb38(0x04)
	char pad_B3C[0x4]; // 0xb3c(0x04)
	struct FScalableFloat Row_EnergyCost; // 0xb40(0x28)
	struct FScalableFloat Row_AdditionalEnergyRegenDelay; // 0xb68(0x28)

	void K2_ActivateAbility(); // Function GA_Athena_ChromePlayers_Blob_OnRemovedByDamage.GA_Athena_ChromePlayers_Blob_OnRemovedByDamage_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromePlayers_Blob_OnRemovedByDamage.GA_Athena_ChromePlayers_Blob_OnRemovedByDamage_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CallEndAbility(); // Function GA_Athena_ChromePlayers_Blob_OnRemovedByDamage.GA_Athena_ChromePlayers_Blob_OnRemovedByDamage_C.CallEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromePlayers_Blob_OnRemovedByDamage.GA_Athena_ChromePlayers_Blob_OnRemovedByDamage_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_OnRemovedByDamage(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_Blob_OnRemovedByDamage.GA_Athena_ChromePlayers_Blob_OnRemovedByDamage_C.ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_OnRemovedByDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

