// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
// Size: 0xb2d (Inherited: 0xb20)
struct UGAT_TriggeredAbility_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTag TC_AbilitiesGenericTriggeredAbilityActivate; // 0xb28(0x04)
	bool bPlayerHolsterState; // 0xb2c(0x01)

	void EndAbilityWithReason(struct FString Reason); // Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.EndAbilityWithReason // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHolsterWeaponWithName(struct AFortPawn* Target Fort Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool& IsWeaponHolstered, bool& OperationSuccessful); // Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.SetHolsterWeaponWithName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggeredAbilitySetup(struct UAbilitySystemComponent* AbilitySystemIn, struct UAbilitySystemComponent*& AbilitySystemOut); // Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.TriggeredAbilitySetup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GAT_TriggeredAbility(int32_t EntryPoint); // Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

