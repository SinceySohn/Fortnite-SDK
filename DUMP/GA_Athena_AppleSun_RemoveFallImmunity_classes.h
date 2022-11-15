// BlueprintGeneratedClass GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C
// Size: 0xb44 (Inherited: 0xb20)
struct UGA_Athena_AppleSun_RemoveFallImmunity_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTag Looping GC; // 0xb28(0x04)
	struct FGameplayTag Player Landing GC; // 0xb2c(0x04)
	struct FTimerHandle VehicleOnGroundTimer; // 0xb30(0x08)
	struct AFortPawn* Fort Pawn; // 0xb38(0x08)
	struct FGameplayTag TagIsRiding; // 0xb40(0x04)

	void OnChange_3DD8539A4FF5097BAD1292AD341357CA(enum class EMovementMode NewMovementMode); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.OnChange_3DD8539A4FF5097BAD1292AD341357CA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnChange_E50882E9463BCB5DDE04EE8407D66091(enum class EMovementMode NewMovementMode); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.OnChange_E50882E9463BCB5DDE04EE8407D66091 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_DE210D3C4F6FD74066C6B794D16628CC(); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.Added_DE210D3C4F6FD74066C6B794D16628CC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void VehicleLandedCheck(); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.VehicleLandedCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ServerRemove(); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.ServerRemove // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_AppleSun_RemoveFallImmunity(int32_t EntryPoint); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.ExecuteUbergraph_GA_Athena_AppleSun_RemoveFallImmunity // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

