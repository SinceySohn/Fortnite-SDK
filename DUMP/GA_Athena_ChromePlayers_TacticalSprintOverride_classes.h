// BlueprintGeneratedClass GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C
// Size: 0xc78 (Inherited: 0xb50)
struct UGA_Athena_ChromePlayers_TacticalSprintOverride_C : UFortGameplayAbility_Action {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb50(0x08)
	struct FGameplayTagContainer Tags_InBlobState; // 0xb58(0x20)
	struct FGameplayTag Tag_EnteringBlobState; // 0xb78(0x04)
	struct FGameplayTag Tag_ExitingBlobState; // 0xb7c(0x04)
	struct UGameplayEffect* GE_EnterBlobState; // 0xb80(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb88(0x08)
	struct FGameplayTagContainer Tags_InBlob; // 0xb90(0x20)
	struct FGameplayTagContainer Tags_PreventEnterBlobMode; // 0xbb0(0x20)
	bool ForceExitBlobWhenSkydiving; // 0xbd0(0x01)
	char pad_BD1[0x3]; // 0xbd1(0x03)
	struct FGameplayTag Tag_Cooldown; // 0xbd4(0x04)
	struct FScalableFloat Row_EnergyCost; // 0xbd8(0x28)
	struct FScalableFloat Row_MinRequiredEnergyToEnterBlobState; // 0xc00(0x28)
	struct FGameplayTagContainer Tag_Failed_NotEnoughEnergy; // 0xc28(0x20)
	struct FGameplayTagContainer Tag_Failed_OnCooldown; // 0xc48(0x20)
	struct UGameplayEffect* GE_Cooldown_EnterBlob; // 0xc68(0x08)
	struct UGameplayEffect* GE_Cooldown_ExitBlob; // 0xc70(0x08)

	void CommitAbilityWithEnergyCost(double EnergyCost, double MinRequiredEnergyForSuccess, bool& Success); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.CommitAbilityWithEnergyCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetPlayerEnergyComponent(struct UTacticalSprintEnergyComponent_C*& EnergyComponent, bool& Success); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.GetPlayerEnergyComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RemoveBlobState(); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.RemoveBlobState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyBlobState(); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.ApplyBlobState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleBlobState(); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.ToggleBlobState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void TryCommitAndToggleBlobState(); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.TryCommitAndToggleBlobState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_TacticalSprintOverride(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_TacticalSprintOverride.GA_Athena_ChromePlayers_TacticalSprintOverride_C.ExecuteUbergraph_GA_Athena_ChromePlayers_TacticalSprintOverride // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

