// BlueprintGeneratedClass MountedCannon__v2.MountedCannon__v2_C
// Size: 0x1e94 (Inherited: 0x1d51)
struct AMountedCannon__v2_C : AMountedTurret_C {
	char pad_1D51[0x7]; // 0x1d51(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d58(0x08)
	struct UBoxComponent* Box; // 0x1d60(0x08)
	struct UFortVehicleNavModifierComponent* FortVehicleNavModifier; // 0x1d68(0x08)
	struct UNiagaraComponent* OverHeat_Muzzle; // 0x1d70(0x08)
	struct UNiagaraComponent* NS_OverheatingVents; // 0x1d78(0x08)
	struct TArray<struct FLinearColor> MapMarkerColors; // 0x1d80(0x10)
	struct TArray<struct FVector> MapMarkerLocations; // 0x1d90(0x10)
	struct TArray<struct FVector> ComputedAimVectors; // 0x1da0(0x10)
	struct FScalableFloat DefaultPlayerLaunchSpeed; // 0x1db0(0x28)
	struct FScalableFloat LaunchedPlayerGravityMultiplier; // 0x1dd8(0x28)
	struct AActor* SpawnableTargetRingClass; // 0x1e00(0x08)
	struct USoundBase* PlayerMountSFX; // 0x1e08(0x08)
	struct USoundBase* PlayerDismountSFX; // 0x1e10(0x08)
	struct UNiagaraSystem* DestructionFX; // 0x1e18(0x08)
	struct AB_Resolve_MountedCannonAthena_C* CannonWeapon; // 0x1e20(0x08)
	struct UAnimMontage* PlayerEnterSecondaryFire; // 0x1e28(0x08)
	struct UAnimMontage* CannonEnterSecondaryFire; // 0x1e30(0x08)
	struct UAnimMontage* CannonSecondaryFire; // 0x1e38(0x08)
	struct UNiagaraSystem* FirePlayerMuzzleVFX; // 0x1e40(0x08)
	struct UAnimMontage* PlayerExitSecondaryFire; // 0x1e48(0x08)
	struct UAnimMontage* CannonExitSecondaryFire; // 0x1e50(0x08)
	struct FGameplayTag GC_Damaged; // 0x1e58(0x04)
	bool CurrentlyTargeting; // 0x1e5c(0x01)
	char pad_1E5D[0x3]; // 0x1e5d(0x03)
	struct FTimerHandle OverheatPostExitTimer; // 0x1e60(0x08)
	struct FScalableFloat CannonDeathCameraShakeRadius; // 0x1e68(0x28)
	struct FGameplayTag CannonDeathCamShakeCue; // 0x1e90(0x04)

	void OnGetExitSocketTransform(struct FName ExitSocket, int32_t SocketIndex, struct FTransform InTransform, bool& bOutOverriderExitSocket, struct FTransform& OutOverrideTransform); // Function MountedCannon__v2.MountedCannon__v2_C.OnGetExitSocketTransform // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReleaseBalloons(struct AFortPlayerPawn* FortPlayerPawn); // Function MountedCannon__v2.MountedCannon__v2_C.ReleaseBalloons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyDeathCameraShake(); // Function MountedCannon__v2.MountedCannon__v2_C.ApplyDeathCameraShake // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldShowActionLabelAtIndex(int32_t Index, struct TArray<struct FName>& SeatActionNames, struct TArray<struct FText>& SeatActionLabels); // Function MountedCannon__v2.MountedCannon__v2_C.ShouldShowActionLabelAtIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnTargetOutOfRange(int32_t Index); // Function MountedCannon__v2.MountedCannon__v2_C.OnTargetOutOfRange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearPingTargetData(); // Function MountedCannon__v2.MountedCannon__v2_C.ClearPingTargetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateMapMarkerTargets(); // Function MountedCannon__v2.MountedCannon__v2_C.UpdateMapMarkerTargets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_734966964A5FBF0E3A3676B014A59517(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyEnd_734966964A5FBF0E3A3676B014A59517 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_734966964A5FBF0E3A3676B014A59517(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyBegin_734966964A5FBF0E3A3676B014A59517 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_734966964A5FBF0E3A3676B014A59517(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnInterrupted_734966964A5FBF0E3A3676B014A59517 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_734966964A5FBF0E3A3676B014A59517(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnBlendOut_734966964A5FBF0E3A3676B014A59517 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_734966964A5FBF0E3A3676B014A59517(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnCompleted_734966964A5FBF0E3A3676B014A59517 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_67D5C315415B8BEF7B842DAE6EEF4DF7(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyEnd_67D5C315415B8BEF7B842DAE6EEF4DF7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_67D5C315415B8BEF7B842DAE6EEF4DF7(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyBegin_67D5C315415B8BEF7B842DAE6EEF4DF7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_67D5C315415B8BEF7B842DAE6EEF4DF7(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnInterrupted_67D5C315415B8BEF7B842DAE6EEF4DF7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_67D5C315415B8BEF7B842DAE6EEF4DF7(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnBlendOut_67D5C315415B8BEF7B842DAE6EEF4DF7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_67D5C315415B8BEF7B842DAE6EEF4DF7(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnCompleted_67D5C315415B8BEF7B842DAE6EEF4DF7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_81E6EFB74060B719A52277B436B552C1(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyEnd_81E6EFB74060B719A52277B436B552C1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_81E6EFB74060B719A52277B436B552C1(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyBegin_81E6EFB74060B719A52277B436B552C1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_81E6EFB74060B719A52277B436B552C1(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnInterrupted_81E6EFB74060B719A52277B436B552C1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_81E6EFB74060B719A52277B436B552C1(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnBlendOut_81E6EFB74060B719A52277B436B552C1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_81E6EFB74060B719A52277B436B552C1(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnCompleted_81E6EFB74060B719A52277B436B552C1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_5944C4BB4ED8F786896504B21F802424(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyEnd_5944C4BB4ED8F786896504B21F802424 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_5944C4BB4ED8F786896504B21F802424(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyBegin_5944C4BB4ED8F786896504B21F802424 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_5944C4BB4ED8F786896504B21F802424(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnInterrupted_5944C4BB4ED8F786896504B21F802424 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_5944C4BB4ED8F786896504B21F802424(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnBlendOut_5944C4BB4ED8F786896504B21F802424 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_5944C4BB4ED8F786896504B21F802424(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnCompleted_5944C4BB4ED8F786896504B21F802424 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_AE2B0042415D33E96D661EA976B3488C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyEnd_AE2B0042415D33E96D661EA976B3488C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_AE2B0042415D33E96D661EA976B3488C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyBegin_AE2B0042415D33E96D661EA976B3488C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_AE2B0042415D33E96D661EA976B3488C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnInterrupted_AE2B0042415D33E96D661EA976B3488C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_AE2B0042415D33E96D661EA976B3488C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnBlendOut_AE2B0042415D33E96D661EA976B3488C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_AE2B0042415D33E96D661EA976B3488C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnCompleted_AE2B0042415D33E96D661EA976B3488C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_62396D4C464212C294D70A8931A3D1C3(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyEnd_62396D4C464212C294D70A8931A3D1C3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_62396D4C464212C294D70A8931A3D1C3(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyBegin_62396D4C464212C294D70A8931A3D1C3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_62396D4C464212C294D70A8931A3D1C3(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnInterrupted_62396D4C464212C294D70A8931A3D1C3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_62396D4C464212C294D70A8931A3D1C3(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnBlendOut_62396D4C464212C294D70A8931A3D1C3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_62396D4C464212C294D70A8931A3D1C3(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnCompleted_62396D4C464212C294D70A8931A3D1C3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_98B953C64C4BF015432287A051AA883C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyEnd_98B953C64C4BF015432287A051AA883C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_98B953C64C4BF015432287A051AA883C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyBegin_98B953C64C4BF015432287A051AA883C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_98B953C64C4BF015432287A051AA883C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnInterrupted_98B953C64C4BF015432287A051AA883C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_98B953C64C4BF015432287A051AA883C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnBlendOut_98B953C64C4BF015432287A051AA883C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_98B953C64C4BF015432287A051AA883C(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnCompleted_98B953C64C4BF015432287A051AA883C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_5DAE499B40B725099BE740A84C575457(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyEnd_5DAE499B40B725099BE740A84C575457 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_5DAE499B40B725099BE740A84C575457(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnNotifyBegin_5DAE499B40B725099BE740A84C575457 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_5DAE499B40B725099BE740A84C575457(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnInterrupted_5DAE499B40B725099BE740A84C575457 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_5DAE499B40B725099BE740A84C575457(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnBlendOut_5DAE499B40B725099BE740A84C575457 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_5DAE499B40B725099BE740A84C575457(struct FName NotifyName); // Function MountedCannon__v2.MountedCannon__v2_C.OnCompleted_5DAE499B40B725099BE740A84C575457 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPawnExitVehicle(struct AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName); // Function MountedCannon__v2.MountedCannon__v2_C.OnPawnExitVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPawnEnterVehicle(struct AFortPlayerPawn* PlayerPawn, int32_t SeatIdx); // Function MountedCannon__v2.MountedCannon__v2_C.OnPawnEnterVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMapMarkersChanged(); // Function MountedCannon__v2.MountedCannon__v2_C.OnMapMarkersChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function MountedCannon__v2.MountedCannon__v2_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PlayDeathEffects(); // Function MountedCannon__v2.MountedCannon__v2_C.PlayDeathEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Turret Weapon(); // Function MountedCannon__v2.MountedCannon__v2_C.Get Turret Weapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventOnCannonFired(struct AFortWeapon* Weapon); // Function MountedCannon__v2.MountedCannon__v2_C.EventOnCannonFired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTargetingChange(bool bIsTargeting); // Function MountedCannon__v2.MountedCannon__v2_C.OnTargetingChange // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayLaunchPawnCosmetics(); // Function MountedCannon__v2.MountedCannon__v2_C.PlayLaunchPawnCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function MountedCannon__v2.MountedCannon__v2_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OverheatValueUpdated(float CurrentValue, float MaxValue, enum class EFortWeaponOverheatState State, bool bIsInCooldown); // Function MountedCannon__v2.MountedCannon__v2_C.OverheatValueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckEndOverheatVFX(); // Function MountedCannon__v2.MountedCannon__v2_C.CheckEndOverheatVFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function MountedCannon__v2.MountedCannon__v2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MountedCannon__v2(int32_t EntryPoint); // Function MountedCannon__v2.MountedCannon__v2_C.ExecuteUbergraph_MountedCannon__v2 // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

