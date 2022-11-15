// BlueprintGeneratedClass GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C
// Size: 0xd20 (Inherited: 0xb50)
struct UGA_Athena_ChromePlayers_Blob_Dash_C : UFortGameplayAbility_Action {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb50(0x08)
	struct UGameplayEffect* GE_Cooldown_Falling; // 0xb58(0x08)
	struct APlayerPawn_Athena_C* PlayerPawnAthena; // 0xb60(0x08)
	struct UGameplayEffect* GE_OnHit; // 0xb68(0x08)
	struct FGameplayTagContainer Tag_Failed_NotEnoughEnergy; // 0xb70(0x20)
	struct FGameplayTag Tag_Dashing; // 0xb90(0x04)
	char pad_B94[0x4]; // 0xb94(0x04)
	struct FGameplayTagContainer Tags_SuppressFailedActivateMessage; // 0xb98(0x20)
	struct FGameplayTag Tag_Cooldown; // 0xbb8(0x04)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	struct FGameplayTagContainer Tag_Failed_OnCooldown; // 0xbc0(0x20)
	struct FScalableFloat Row_DashDuration; // 0xbe0(0x28)
	struct FScalableFloat Row_DashAimDirectionPitchOffset; // 0xc08(0x28)
	struct FScalableFloat Row_DashAimDirectionPitchMultiplier; // 0xc30(0x28)
	struct FScalableFloat Row_DashMaxSpeedHorizontal; // 0xc58(0x28)
	struct FScalableFloat Row_DashMaxSpeedVertical; // 0xc80(0x28)
	struct FScalableFloat Row_EnergyCost; // 0xca8(0x28)
	struct FScalableFloat Row_MinRequiredEnergyToDash; // 0xcd0(0x28)
	struct FGameplayTag Tag_ContextTutorial_BlobDashComplete; // 0xcf8(0x04)
	char pad_CFC[0x4]; // 0xcfc(0x04)
	struct FGameplayTagContainer Tags_PreventActivation; // 0xd00(0x20)

	void K2_OverrideFailedReason(struct FGameplayTagContainer& FailedReason, struct FGameplayTagContainer& OverridenFailedReason); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.K2_OverrideFailedReason // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetPlayerEnergyComponent(struct UTacticalSprintEnergyComponent_C*& EnergyComponent, bool& Success); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.GetPlayerEnergyComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CommitAbilityWithEnergyCost(double EnergyCost, double MinRequiredEnergyForSuccess, bool& CommitSuccess); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.CommitAbilityWithEnergyCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOutAndDestinationReached_CEA689D649286F9E12B3B5B35BD2EBF8(); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.OnTimedOutAndDestinationReached_CEA689D649286F9E12B3B5B35BD2EBF8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOut_CEA689D649286F9E12B3B5B35BD2EBF8(); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.OnTimedOut_CEA689D649286F9E12B3B5B35BD2EBF8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void AirJump(); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.AirJump // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DashTimeCompleted(); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.DashTimeCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_Dash(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_Blob_Dash.GA_Athena_ChromePlayers_Blob_Dash_C.ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_Dash // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

