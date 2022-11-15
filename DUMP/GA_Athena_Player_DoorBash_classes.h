// BlueprintGeneratedClass GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C
// Size: 0xc5a (Inherited: 0xb20)
struct UGA_Athena_Player_DoorBash_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* FortPlayerPawn; // 0xb28(0x08)
	struct TArray<enum class EObjectTypeQuery> PawnObjectTypes; // 0xb30(0x10)
	struct TArray<enum class EObjectTypeQuery> DoorTypes; // 0xb40(0x10)
	struct FTimerHandle TCheckDoor; // 0xb50(0x08)
	struct FVector Door_Location; // 0xb58(0x18)
	struct ABuildingWall* HitWall; // 0xb70(0x08)
	bool Debug?; // 0xb78(0x01)
	char pad_B79[0x3]; // 0xb79(0x03)
	struct FGameplayTag GC_DoorImpact; // 0xb7c(0x04)
	struct FVector Wall_Location; // 0xb80(0x18)
	bool HitDoor?; // 0xb98(0x01)
	char pad_B99[0x3]; // 0xb99(0x03)
	struct FGameplayTag GC_LaunchPlayer; // 0xb9c(0x04)
	struct FScalableFloat HF_DoorBashEnabled; // 0xba0(0x28)
	struct FScalableFloat HF_ForwardDoorCheckMult; // 0xbc8(0x28)
	struct FScalableFloat HF_LaunchPawnImpulseMult; // 0xbf0(0x28)
	struct FScalableFloat HF_PawnVelocityMinThreshold; // 0xc18(0x28)
	struct UAnimMontage* DoorBashMale; // 0xc40(0x08)
	struct UAnimMontage* DoorBashFemale; // 0xc48(0x08)
	double End Ability Grace Period Const; // 0xc50(0x08)
	bool bDoorBashingWhileSprinting; // 0xc58(0x01)
	bool bHasDisabledAutoOpenSwingingDoors; // 0xc59(0x01)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool HasActiveDoorBashAbility(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.HasActiveDoorBashAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsSprintingOrSliding(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.IsSprintingOrSliding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool HasSwitchedToDifferentDoorBashingState(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.HasSwitchedToDifferentDoorBashingState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetAutoOpenSwingingDoors(bool Open Swinging Doors Automatically); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.SetAutoOpenSwingingDoors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool CheckVelocityThreshold(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.CheckVelocityThreshold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool IsStillSprintingOrSlidingAsAbilityBegan(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.IsStillSprintingOrSlidingAsAbilityBegan // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void StartEndTrace(struct FVector& Start, struct FVector& End); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.StartEndTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CheckForPawnsAndLaunchThem(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.CheckForPawnsAndLaunchThem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForDoor(struct FVector Start, struct FVector End, bool& HitDoor, struct FVector& HitLocation); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.CheckForDoor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_B31495304CF5C421D4474FBD1185D542(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.Removed_B31495304CF5C421D4474FBD1185D542 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_5D7272044815CA361E3AE8A278EEAA82(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.Removed_5D7272044815CA361E3AE8A278EEAA82 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_155AF8ED474BC0B05C504AA683044E19(struct FGameplayTag NotifyTag); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.OnNotifyEnd_155AF8ED474BC0B05C504AA683044E19 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_155AF8ED474BC0B05C504AA683044E19(struct FGameplayTag NotifyTag); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.OnNotifyBegin_155AF8ED474BC0B05C504AA683044E19 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_155AF8ED474BC0B05C504AA683044E19(struct FGameplayTag NotifyTag); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.OnCancelled_155AF8ED474BC0B05C504AA683044E19 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_155AF8ED474BC0B05C504AA683044E19(struct FGameplayTag NotifyTag); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.OnInterrupted_155AF8ED474BC0B05C504AA683044E19 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_155AF8ED474BC0B05C504AA683044E19(struct FGameplayTag NotifyTag); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.OnBlendOut_155AF8ED474BC0B05C504AA683044E19 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_155AF8ED474BC0B05C504AA683044E19(struct FGameplayTag NotifyTag); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.OnCompleted_155AF8ED474BC0B05C504AA683044E19 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CheckDoorTimer(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.CheckDoorTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetDoorBash(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.ResetDoorBash // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RestartTimer(struct FHitResult& Hit); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.RestartTimer // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PauseDoorBashChecks(); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.PauseDoorBashChecks // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Player_DoorBash(int32_t EntryPoint); // Function GA_Athena_Player_DoorBash.GA_Athena_Player_DoorBash_C.ExecuteUbergraph_GA_Athena_Player_DoorBash // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

