// Class ValetRuntime.FortValetMountedGunAnimInstance
// Size: 0x560 (Inherited: 0x540)
struct UFortValetMountedGunAnimInstance : UFortAnimInstance {
	struct AFortDagwoodVehicle* VehicleActor; // 0x538(0x08)
	bool bIsUsingMountedGun; // 0x540(0x01)
	int32_t SeatIndexCached; // 0x544(0x04)
	float AimingYaw; // 0x548(0x04)
	float AimingPitch; // 0x54c(0x04)
	struct AFortWeaponRangedForVehicle* MountedWeapon; // 0x550(0x08)
	char pad_55D[0x3]; // 0x55d(0x03)
};

// Class ValetRuntime.FortValetPassengerAnimInstance
// Size: 0x880 (Inherited: 0x810)
struct UFortValetPassengerAnimInstance : UFortVehicleOccupantAnimInstance {
	struct FCachedAnimRelevancyData IntoVehicleCachedData; // 0x810(0x14)
	struct FCachedAnimRelevancyData OutOfVehicleCachedData; // 0x824(0x14)
	struct TSoftObjectPtr<AFortDagwoodVehicle> DagwoodVehicleInstance; // 0x838(0x28)
	float TurnYaw; // 0x860(0x04)
	float InTime; // 0x864(0x04)
	float OutTime; // 0x868(0x04)
	float NegativeTurnYaw; // 0x86c(0x04)
	bool bIsReloading; // 0x870(0x01)
	bool bIsTargeting; // 0x871(0x01)
	bool bIsFiring; // 0x872(0x01)
	bool bIsUsingConsumable; // 0x873(0x01)
	bool bIsInAction; // 0x874(0x01)
	bool bIsPassengerBackLeft; // 0x875(0x01)
	bool bIsThrowConsumable; // 0x876(0x01)
	bool bIsTargetingOrThrowingConsumable; // 0x877(0x01)
	char pad_878[0x8]; // 0x878(0x08)
};

// Class ValetRuntime.DagwoodNetworkPhysicsComponent
// Size: 0xe20 (Inherited: 0xa0)
struct UDagwoodNetworkPhysicsComponent : UActorComponent {
	struct FNetworkPhysicsState NetworkPhysicsState; // 0xa0(0x90)
	struct FMulticastInlineDelegate OnGeneratedLocalInputCmd; // 0x130(0x10)
	struct FDagwoodManagedState ReplicatedManagedState; // 0x140(0x448)
	struct FDagwoodManagedState InManagedState; // 0x588(0x448)
	struct FDagwoodManagedState OutManagedState; // 0x9d0(0x448)
	char pad_E18[0x8]; // 0xe18(0x08)

	void SetState_GT(struct FDagwoodInPersistent& In); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT // (Final|Native|Public|HasOutParms) // @ game+0x6538ac4
	void SetPendingInputCmd(struct FFortDagwoodCmd& In); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd // (Final|Native|Public|HasOutParms) // @ game+0x65389fc
	void OnGeneratedLocalInputCmd__DelegateSignature(); // DelegateFunction ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	struct FDagwoodState_PT GetState_PT(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6537c54
	struct FDagwoodInPersistent GetState_GT(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT // (Final|Native|Public|Const) // @ game+0x6537bd4
	struct FFortDagwoodCmd GetPendingInputCmd(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd // (Final|Native|Public|Const) // @ game+0x6537ba0
};

// Class ValetRuntime.NetworkPhysicsManager
// Size: 0x6118 (Inherited: 0x30)
struct UNetworkPhysicsManager : UWorldSubsystem {
	char pad_30[0x60e8]; // 0x30(0x60e8)
};

// Class ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
// Size: 0x380 (Inherited: 0x330)
struct AFortAthenaMutator_OverrideValetVehicleParameters : AFortAthenaMutator {
	struct FScalableFloat MinInitialVehicleFuelPercent; // 0x330(0x28)
	struct FScalableFloat MaxInitialVehicleFuelPercent; // 0x358(0x28)

	void OnPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContainerTags); // Function ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded // (Final|Native|Public|HasOutParms) // @ game+0x6538174
};

// Class ValetRuntime.FortCameraMode_Dagwood
// Size: 0x1b60 (Inherited: 0x1b20)
struct UFortCameraMode_Dagwood : UFortCameraMode_AthenaVehicle {
	float HorizontalCameraSpaceOffsetWhileTurning; // 0x1b20(0x04)
	float SteeringAngleForMaxHorizontalOffset; // 0x1b24(0x04)
	float InAirVerticalOffset; // 0x1b28(0x04)
	float AirOffsetDampFactor; // 0x1b2c(0x04)
	float SpeedAlphaDampFactor; // 0x1b30(0x04)
	float TimeInAirRequiredForVertOffset; // 0x1b34(0x04)
	float VehicleBasePitch; // 0x1b38(0x04)
	float HorizOffsetInterpSpeed; // 0x1b3c(0x04)
	float HorizOffsetInterpSpeedRecovery; // 0x1b40(0x04)
	float CurrentSpeedAlpha; // 0x1b44(0x04)
	float CurrentVerticalOffset; // 0x1b48(0x04)
	float CurrentHorizontalOffset; // 0x1b4c(0x04)
	float TimeInAir; // 0x1b50(0x04)
	float PreviousSpeed; // 0x1b54(0x04)
	float AppliedPitch; // 0x1b58(0x04)
	char pad_1B5C[0x4]; // 0x1b5c(0x04)
};

// Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
// Size: 0x100 (Inherited: 0xf8)
struct UFortContextualTutorial_VehicleValetLowFuel : UFortContextualTutorial {
	char pad_F8[0x8]; // 0xf8(0x08)

	void HandleVehicleStateChanged(struct AFortPlayerPawn* PlayerPawn, struct AActor* NewVehicle, struct AActor* OldVehicle); // Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged // (Final|Native|Private) // @ game+0x6537e0c
	void HandleStartSkydivingForActivation(); // Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation // (Final|Native|Private) // @ game+0x6537df8
};

// Class ValetRuntime.FortDagwoodModsConfigs
// Size: 0x28 (Inherited: 0x28)
struct UFortDagwoodModsConfigs : UObject {
};

// Class ValetRuntime.FortDagwoodVehicle
// Size: 0x2010 (Inherited: 0x1a20)
struct AFortDagwoodVehicle : AFortAthenaSKMotorVehicle {
	struct ULegacyCameraShake* HardLandingCameraShake; // 0x1a18(0x08)
	struct ULegacyCameraShake* DriverCamShakeClass; // 0x1a20(0x08)
	struct ULegacyCameraShake* HandBrakeCamShakeClass; // 0x1a28(0x08)
	enum class EVehicleClass VehicleClass; // 0x1a30(0x01)
	float FadeDelay; // 0x1a34(0x04)
	float FadeDuration; // 0x1a38(0x04)
	float MinBrakeForceForSkid; // 0x1a3c(0x04)
	float MinForwardSpeedForSkid; // 0x1a40(0x04)
	struct FGameplayTag SpeedLinesCueTag; // 0x1a44(0x04)
	float FadeStartTime; // 0x1a48(0x04)
	struct UDagwoodNetworkPhysicsComponent* NetworkPhysicsComponent; // 0x1a50(0x08)
	char pad_1A59[0x77]; // 0x1a59(0x77)
	struct FMulticastInlineDelegate OnTireModHealthChanged; // 0x1ad0(0x10)
	float RechargeableBoostPercent; // 0x1ae0(0x04)
	char pad_1AE4[0x4]; // 0x1ae4(0x04)
	struct UFortSplatterSourceComponent* SplatterSourceComp; // 0x1ae8(0x08)
	bool bEnableNativizedTick; // 0x1af0(0x01)
	char pad_1AF1[0x7]; // 0x1af1(0x07)
	struct TArray<struct FName> PassengerLeanSockets; // 0x1af8(0x10)
	struct TArray<struct FVector> PassngerLeanRelativeOffsets; // 0x1b08(0x10)
	struct UFortCameraMode_AthenaVehicle* PassengerCameraModeClass; // 0x1b18(0x08)
	struct UFortCameraMode* PassengerCameraModeClass_ADS; // 0x1b20(0x08)
	struct TArray<struct FName> WheelSocketNames; // 0x1b28(0x10)
	struct UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs; // 0x1b38(0x08)
	struct TArray<int32_t> RearShocks; // 0x1b40(0x10)
	struct FGameplayTagContainer OffroadEnvironmentDamageTags; // 0x1b50(0x20)
	struct FGameplayTagContainer FireDamageTags; // 0x1b70(0x20)
	struct FVector NativeWheelScaleRear; // 0x1b90(0x18)
	struct FVector NativeWheelScaleFront; // 0x1ba8(0x18)
	struct FVector NativeTireScaleRear; // 0x1bc0(0x18)
	struct FVector NativeTireScaleFront; // 0x1bd8(0x18)
	bool bTireSmokeActive; // 0x1bf0(0x01)
	bool bBoostFailed; // 0x1bf1(0x01)
	bool bCanBoostPitch; // 0x1bf2(0x01)
	bool bWasBrakeSkidding; // 0x1bf3(0x01)
	char pad_1BF4[0x4]; // 0x1bf4(0x04)
	uint64_t AccelForceFeedbackHandle; // 0x1bf8(0x08)
	uint64_t SkidForceFeedbackHandle; // 0x1c00(0x08)
	uint64_t BrakeForceFeedbackHandle; // 0x1c08(0x08)
	uint64_t HandBrakeForceFeedbackHandle; // 0x1c10(0x08)
	bool bSpeedLinesActive; // 0x1c18(0x01)
	char pad_1C19[0x1f]; // 0x1c19(0x1f)
	struct FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties; // 0x1c38(0x70)
	struct TArray<struct FAttachedWheel> ServerRepWheelData; // 0x1ca8(0x10)
	char pad_1CB8[0x50]; // 0x1cb8(0x50)
	struct FVector FlipYawForwardTargetDirection; // 0x1d08(0x18)
	struct FVector FlipYawOriginalForward; // 0x1d20(0x18)
	enum class ETireLocations LastPoppedTire; // 0x1d38(0x01)
	char pad_1D39[0x3]; // 0x1d39(0x03)
	float RoadTopSpeedMultiplier; // 0x1d3c(0x04)
	float CurrentBumpiness; // 0x1d40(0x04)
	float CurrentForwardAcceleration; // 0x1d44(0x04)
	float PreviousTurnAlpha; // 0x1d48(0x04)
	float CurrentCameraAssistStrength; // 0x1d4c(0x04)
	float LostGripTime; // 0x1d50(0x04)
	float LostGripRightAlpha; // 0x1d54(0x04)
	float HandbrakeTime; // 0x1d58(0x04)
	float HandbrakeStartTime; // 0x1d5c(0x04)
	float FlipYawMult; // 0x1d60(0x04)
	float FlipTimer; // 0x1d64(0x04)
	float FlipExplodeTimer; // 0x1d68(0x04)
	float FlipPushForceTimer; // 0x1d6c(0x04)
	float FlipAirTimer; // 0x1d70(0x04)
	float FlipLanding; // 0x1d74(0x04)
	float FlipStartTime; // 0x1d78(0x04)
	float LastFlipDamageTime; // 0x1d7c(0x04)
	float PreFlipControlLossTimer; // 0x1d80(0x04)
	bool bDidCinematicFlip; // 0x1d84(0x01)
	bool bCanCinematicFlip; // 0x1d85(0x01)
	bool bInPopTireVeer; // 0x1d86(0x01)
	bool bInFlipRecovery; // 0x1d87(0x01)
	bool bExplodeAfterFlip; // 0x1d88(0x01)
	bool bLostGrip; // 0x1d89(0x01)
	bool bApplyHandbrakeCatchupForce; // 0x1d8a(0x01)
	bool bDidHandbrakeCatchup; // 0x1d8b(0x01)
	bool bInFlipRoll; // 0x1d8c(0x01)
	bool bInFlipYaw; // 0x1d8d(0x01)
	bool bInFlipPitch; // 0x1d8e(0x01)
	bool bFlipDidLeaveGround; // 0x1d8f(0x01)
	bool bBreakBuildingsIfBlockingLeaningPassenger; // 0x1d90(0x01)
	char pad_1D91[0x3]; // 0x1d91(0x03)
	float LeanBreakTimeAccumulator; // 0x1d94(0x04)
	float LeanBreakCheckInterval; // 0x1d98(0x04)
	char pad_1D9C[0x4]; // 0x1d9c(0x04)
	struct TArray<struct FName> SeatToWindowShapeNames; // 0x1da0(0x10)
	struct ULegacyCameraShake* OffroadCameraShakeInstance; // 0x1db0(0x08)
	struct ULegacyCameraShake* DriverCameraShakeInstance; // 0x1db8(0x08)
	struct ULegacyCameraShake* AccelCameraShakeInstance; // 0x1dc0(0x08)
	struct ULegacyCameraShake* HandBrakeCameraShakeInstance; // 0x1dc8(0x08)
	struct UNiagaraComponent* NativeComp_RoadAndExhaust; // 0x1dd0(0x08)
	struct UNiagaraComponent* NativeComp_TireSkid; // 0x1dd8(0x08)
	struct UNiagaraComponent* NativeComp_Damage; // 0x1de0(0x08)
	struct UNiagaraComponent* NativeComp_SpeedLines; // 0x1de8(0x08)
	struct UNiagaraSystem* NativeSys_TireExhaust; // 0x1df0(0x08)
	struct UNiagaraSystem* NativeSys_SpeedLines; // 0x1df8(0x08)
	struct UNiagaraSystem* NativeSys_TireSkid; // 0x1e00(0x08)
	char pad_1E08[0x10]; // 0x1e08(0x10)
	struct TArray<enum class ETireStates> FakeTireStates; // 0x1e18(0x10)
	enum class EPoppedTireReactionStates ActivePoppedTireReaction; // 0x1e28(0x01)
	enum class EPoppedTireReactionStates ReplicatedPoppedTireReaction; // 0x1e29(0x01)
	char pad_1E2A[0x2]; // 0x1e2a(0x02)
	struct TWeakObjectPtr<struct AFortValetAudioController> ValetAudio; // 0x1e2c(0x08)
	char pad_1E34[0x4]; // 0x1e34(0x04)
	struct TArray<struct UStaticMeshComponent*> TireMeshes; // 0x1e38(0x10)
	struct TArray<struct UStaticMeshComponent*> FakeTireMeshes; // 0x1e48(0x10)
	char pad_1E58[0x4]; // 0x1e58(0x04)
	bool bIsInoperable; // 0x1e5c(0x01)
	char pad_1E5D[0x3]; // 0x1e5d(0x03)
	int32_t RandomSeed; // 0x1e60(0x04)
	struct FRandomStream RandStream; // 0x1e64(0x08)
	char pad_1E6C[0x104]; // 0x1e6c(0x104)
	char bSelfDestructEnabled : 1; // 0x1f70(0x01)
	char bClientUsesSelfDestructTimer : 1; // 0x1f70(0x01)
	char pad_1F70_2 : 6; // 0x1f70(0x01)
	char pad_1F71[0x7]; // 0x1f71(0x07)
	struct UStaticMesh* TireBootMesh; // 0x1f78(0x08)
	struct TMap<int32_t, struct FDagwoodActionDefForUI> MapSelfDestructActionDefForUI; // 0x1f80(0x50)
	float MinimumTimeBetweenSelfDestructPromptChanges; // 0x1fd0(0x04)
	char pad_1FD4[0x3c]; // 0x1fd4(0x3c)

	void StartFade(); // Function ValetRuntime.FortDagwoodVehicle.StartFade // (Final|Native|Public|BlueprintCallable) // @ game+0x2dd600c
	void SetValetAudioController(struct AFortValetAudioController* ValetAudio); // Function ValetRuntime.FortDagwoodVehicle.SetValetAudioController // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x235cc48
	void SetDamageInfoOnServer(bool bInDamageFriendlyVehicles, bool bInDamageOtherVehicles, bool bInDamageOwnVehicle, bool bInDamageAllowedFromOtherVehicle); // Function ValetRuntime.FortDagwoodVehicle.SetDamageInfoOnServer // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x6538894
	void ServerSetRuntimeSpringsInfo(struct FRuntimeSpringsInfo& SpringsInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeSpringsInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x65387f8
	void ServerSetRuntimeGravity(float GravMult); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeGravity // (Final|Native|Protected|BlueprintCallable) // @ game+0x6538764
	void ServerSetRuntimeFuelInfo(struct FRuntimeFuelInfo& FuelInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeFuelInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x65386b4
	void ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeDriveInfo // (Final|Native|Protected|BlueprintCallable) // @ game+0x65385d8
	void ServerSetRuntimeBoostInfo(struct FRuntimeBoostInfo& BoostInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeBoostInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6538524
	void ServerSetFadeDuration(float NewFadeDuration); // Function ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x65384b8
	void ServerSelfDestructActivated(); // Function ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x65384a0
	void ServerAddRuntimeGearsInfo(struct FRuntimeGearInfo& GearInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerAddRuntimeGearsInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x653840c
	void SelfDestructCleanup(); // Function ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup // (Final|Native|Public) // @ game+0x65383f8
	void OnTickAudioFade(float FadeParam); // Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTickAudioController(float DeltaTime); // Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnStopHandbrake(); // Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnStartHandbrake(); // Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnServerAltInteract(struct AFortPawn* Pawn); // Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRep_ServerRepWheelData(struct TArray<struct FAttachedWheel>& PrevWheelData); // Function ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData // (Final|Native|Private|HasOutParms) // @ game+0x253f200
	void OnRep_RandSeed(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed // (Final|Native|Private) // @ game+0x24a56dc
	void OnRep_PoppedTireReaction(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction // (Final|Native|Private) // @ game+0x2b6d2f0
	void OnRep_IsInoperable(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable // (Final|Native|Private) // @ game+0x19cbd98
	void OnRep_FakeTires(struct TArray<enum class ETireStates>& PrevTireStates); // Function ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires // (Final|Native|Private|HasOutParms) // @ game+0x248e454
	void OnRep_DagwoodRuntimeModifiers(struct FDagwoodRuntimeModifiers& PrevMods); // Function ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers // (Final|Native|Private|HasOutParms) // @ game+0x19897a4
	void OnInoperableChanged(bool bInoperable); // Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnHoldSelfDestructStopped(struct AFortPawn* DriverPawn); // Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnHoldSelfDestructStarted(struct AFortPawn* DriverPawn, float ExitDuration); // Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFlipImpactDamage(); // Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDestroyedPropFromCollision(struct ABuildingActor* BuildingHitActor); // Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnClientBeginAltInteract(struct AFortPawn* Pawn); // Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBoostReady(); // Function ValetRuntime.FortDagwoodVehicle.OnBoostReady // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBoostFailed(); // Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	float NativeCalculateAccelRumbleIntensity(float MaxIntensity); // Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x65380cc
	void MakeOperable(bool bAddGas); // Function ValetRuntime.FortDagwoodVehicle.MakeOperable // (Final|Native|Public|BlueprintCallable) // @ game+0x6538068
	void MakeInoperable(); // Function ValetRuntime.FortDagwoodVehicle.MakeInoperable // (Native|Public|BlueprintCallable) // @ game+0x6538048
	bool IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking); // Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6537f04
	bool IsOnLandscape(); // Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4937cc8
	bool IsNativeBPTickEnabled(); // Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x248ecd4
	void HandleCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded // (Final|Native|Protected|HasOutParms) // @ game+0x19d72ec
	enum class ETireSurfaces GetTireSurface(enum class ETireLocations TireIndex); // Function ValetRuntime.FortDagwoodVehicle.GetTireSurface // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6537d6c
	float GetTireHealthPercent(enum class ETireLocations TireIndex); // Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6537cd4
	float GetMiddleAxleForwardAdjust(); // Function ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2542b74
	struct FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties(); // Function ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties // (Final|Native|Protected|BlueprintCallable) // @ game+0x6537b84
	float GetBumpiness(); // Function ValetRuntime.FortDagwoodVehicle.GetBumpiness // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6537b6c
	bool ForwardOrReverseInputPressed(); // Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6537b48
	void CleanupLoopingPooledFX(); // Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2a3abd8
	void ApplyRuntimeModifiers(); // Function ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers // (Final|Native|Private) // @ game+0x6537ad0
};

// Class ValetRuntime.FortDagwoodVehicleAnimInstance
// Size: 0x660 (Inherited: 0x5f0)
struct UFortDagwoodVehicleAnimInstance : UFortVehicleAnimInstance {
	struct AFortDagwoodVehicle* Dagwood; // 0x5f0(0x08)
	struct FVector GlassScale_FR; // 0x5f8(0x18)
	struct FVector GlassScale_FL; // 0x610(0x18)
	struct FVector GlassScale_BR; // 0x628(0x18)
	struct FVector GlassScale_BL; // 0x640(0x18)
	char pad_658[0x8]; // 0x658(0x08)
};

// Class ValetRuntime.FortDagwoodVehicleConfigs
// Size: 0x9d0 (Inherited: 0x7b8)
struct UFortDagwoodVehicleConfigs : UFortPhysicsVehicleConfigs {
	float BoostMinPushForce; // 0x7b8(0x04)
	float BoostTopSpeedForceMultiplier; // 0x7bc(0x04)
	float BoostTopSpeedMultiplier; // 0x7c0(0x04)
	float BoostWaterMultiplier; // 0x7c4(0x04)
	float VehiclePowerSlideFrontMultiplier; // 0x7c8(0x04)
	float VehiclePowerSlideRearMultiplier; // 0x7cc(0x04)
	float HandbrakeGripAngle; // 0x7d0(0x04)
	float HandbrakeGripAngleRecovery; // 0x7d4(0x04)
	float HandbrakeSpeedForGripLoss; // 0x7d8(0x04)
	float MinSlipDuration; // 0x7dc(0x04)
	float HandbrakeLateralFriction; // 0x7e0(0x04)
	float HandbrakeSteeringMultiplier; // 0x7e4(0x04)
	float HandbrakeFrictionDampFactor; // 0x7e8(0x04)
	float RestoreTractionDampFactor; // 0x7ec(0x04)
	float HandbrakeForce; // 0x7f0(0x04)
	float HandbrakeForceNoAccel; // 0x7f4(0x04)
	float BoostSteeringMultiplier; // 0x7f8(0x04)
	float DirtRoadTopSpeedMultiplier; // 0x7fc(0x04)
	float DirtRoadFrontLateralFriction; // 0x800(0x04)
	float DirtRoadRearLateralFriction; // 0x804(0x04)
	float DirtRoadAccelForceMultiplier; // 0x808(0x04)
	float DirtRoadFakeBumpinessMultiplier; // 0x80c(0x04)
	float OffRoadTopSpeedMultiplier; // 0x810(0x04)
	float OffRoadFrontLateralFriction; // 0x814(0x04)
	float OffRoadRearLateralFriction; // 0x818(0x04)
	float OffRoadPushForceMultiplier; // 0x81c(0x04)
	float OffroadDamageImpactForceMin; // 0x820(0x04)
	float OffroadDamageImpactForceMax; // 0x824(0x04)
	float OffroadImpactDamageMin; // 0x828(0x04)
	float OffroadImpactDamageMax; // 0x82c(0x04)
	float MinSpeedForOffroadHandling; // 0x830(0x04)
	float IceFrontLateralFriction; // 0x834(0x04)
	float IceRearLateralFriction; // 0x838(0x04)
	float IcePushForceMultiplier; // 0x83c(0x04)
	float IceBrakeForceMultiplier; // 0x840(0x04)
	float FireHealthPercentThreshold; // 0x844(0x04)
	float MinBumpinessSpringHitTimeMultiplier; // 0x848(0x04)
	float MaxBumpinessSpringHitTimeMultiplier; // 0x84c(0x04)
	float BumpinessExponentForShocks; // 0x850(0x04)
	float OffroadRumbleIntensity; // 0x854(0x04)
	float DirtRoadRumbleIntensity; // 0x858(0x04)
	float OffroadDamageScaleExponent; // 0x85c(0x04)
	float HardLandingThresholdMin; // 0x860(0x04)
	float HardLandingThresholdMax; // 0x864(0x04)
	float HardLandingShakeZAmplitudeMin; // 0x868(0x04)
	float HardLandingShakeZAmplitudeMax; // 0x86c(0x04)
	float SpeedLinesThreshold; // 0x870(0x04)
	float PropDestructionImpulse; // 0x874(0x04)
	float DestructionAngle; // 0x878(0x04)
	float UpNormalMinProtected; // 0x87c(0x04)
	float UpForwardMinProtected; // 0x880(0x04)
	float NonCameraSteeringAngleMultiplier; // 0x884(0x04)
	float CameraAssistStrengthMax; // 0x888(0x04)
	float CameraAssistStrengthMin; // 0x88c(0x04)
	float CameraAssistStrengthRecovery; // 0x890(0x04)
	float CameraAssistInterpSpeed; // 0x894(0x04)
	float ReverseChangeDirectionBrakeForceMultiplier; // 0x898(0x04)
	float ReverseChangeDirectionSpeedThreshold; // 0x89c(0x04)
	float DriftExitPushForce; // 0x8a0(0x04)
	float DriftExitCatchupSpeed; // 0x8a4(0x04)
	float HandbrakeDurationRequiredForCatchup; // 0x8a8(0x04)
	float ImpactMagnitudeToEndCatchup; // 0x8ac(0x04)
	float PoppedTireSpringLength; // 0x8b0(0x04)
	float PoppedTireSpringStiff; // 0x8b4(0x04)
	float PoppedTireSpringDamp; // 0x8b8(0x04)
	float PoppedTireScrapeFrictionMultiplier; // 0x8bc(0x04)
	float RimScrapeFlipRollMagnitude; // 0x8c0(0x04)
	float RimScrapeFlipPitchMagnitude; // 0x8c4(0x04)
	float SpeedForRimFlip; // 0x8c8(0x04)
	float HealthPercentForFlip; // 0x8cc(0x04)
	float FlipYawDuration; // 0x8d0(0x04)
	float FlipRollDuration; // 0x8d4(0x04)
	float FlipPitchDuration; // 0x8d8(0x04)
	float FlipExplodeDuration_Yaw; // 0x8dc(0x04)
	float FlipExplodeDuration_Pitch; // 0x8e0(0x04)
	float FlipPushForceDuration_Yaw; // 0x8e4(0x04)
	float FlipPushForceDuration_Pitch; // 0x8e8(0x04)
	float FlipPushForcMultiplier; // 0x8ec(0x04)
	float FlipPushForce_UpComponentPitch; // 0x8f0(0x04)
	float FlipPushForce_UpComponentRoll; // 0x8f4(0x04)
	float MinTimeInAirRequiredForExplodeLanding; // 0x8f8(0x04)
	float FlipYawSpringStiff; // 0x8fc(0x04)
	float FlipYawSpringDamp; // 0x900(0x04)
	float FlipYawSpringMaxAccel; // 0x904(0x04)
	float HealthPercentForExplode; // 0x908(0x04)
	float FlipRecoveryTime; // 0x90c(0x04)
	float FlipMaxDuration; // 0x910(0x04)
	float FlipWiggleDuration; // 0x914(0x04)
	float PoppedTireVeerDuration; // 0x918(0x04)
	float PoppedTireVeerSteeringAngle; // 0x91c(0x04)
	float FlipWiggleFrequency; // 0x920(0x04)
	float FlipWiggleSteeringAngle; // 0x924(0x04)
	float FlipYawAngleThreshold; // 0x928(0x04)
	bool bUsesBoost; // 0x92c(0x01)
	char pad_92D[0x3]; // 0x92d(0x03)
	float RechargeableBoostRateOfUse; // 0x930(0x04)
	float RechargeableBoostRateOfRegen; // 0x934(0x04)
	float BoostRateOfRegenMinMultiplier; // 0x938(0x04)
	float BoostRateOfRegenMaxMultiplier; // 0x93c(0x04)
	float BoostRegenMaxMultiplyTime; // 0x940(0x04)
	float RechargeableBoostRequiredPercentToActivate; // 0x944(0x04)
	float RechargeableBoostMaxPercent; // 0x948(0x04)
	float RechargeableBoostMinPercent; // 0x94c(0x04)
	float AnalogDriftStickThreshold; // 0x950(0x04)
	struct FName TireBootRightSocketName; // 0x954(0x04)
	struct FName TireBootLeftSocketName; // 0x958(0x04)
	float TireBootRelativeDistance; // 0x95c(0x04)
	float BoostForceInAir; // 0x960(0x04)
	float BoostAirMaxSpeed; // 0x964(0x04)
	struct TArray<struct FName> TireSocketNames; // 0x968(0x10)
	struct TArray<struct FName> TireBoneNames; // 0x978(0x10)
	struct TArray<int32_t> RearTireIndices; // 0x988(0x10)
	struct TArray<int32_t> RightSideTires; // 0x998(0x10)
	struct TArray<int32_t> FakeTireIndices; // 0x9a8(0x10)
	bool bNoWheels; // 0x9b8(0x01)
	char pad_9B9[0x3]; // 0x9b9(0x03)
	float NoWheelsSpringLenMult; // 0x9bc(0x04)
	struct TArray<struct FName> NoWheelsBonesToHide; // 0x9c0(0x10)
};

// Class ValetRuntime.FortDagwoodVehicleManager
// Size: 0xb0 (Inherited: 0xa0)
struct UFortDagwoodVehicleManager : UGameStateComponent {
	bool bHasUpdatedPropReplacement; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t NumVehiclesSpawnedWithTireMod; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)

	void UpdatePropReplacement(); // Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement // (Final|Native|Public) // @ game+0x258f6c0
	void OnVehicleSpawnsUpdated(struct UFortVehicleItemDefinition* VehicleItemDef, struct TArray<struct AActor*>& SpawnedVehicles, int32_t NewVehicleCount); // Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated // (Final|Native|Public|HasOutParms) // @ game+0x65382d0
	void OnVehicleSpawned(struct AFortAthenaVehicle* Vehicle); // Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned // (Final|Native|Public) // @ game+0x653824c
	void CustomHandleActorStreamedInEditor(struct AActor* SourceActor); // Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor // (Final|Native|Public) // @ game+0x6537ae4
};

// Class ValetRuntime.FortValetAudioController
// Size: 0x3d8 (Inherited: 0x288)
struct AFortValetAudioController : AActor {
	struct FMulticastInlineDelegate OnEngineLoadChanged; // 0x288(0x10)
	struct FMulticastInlineDelegate OnShiftGearCompleted; // 0x298(0x10)
	struct FMulticastInlineDelegate OnShiftGearDelegate; // 0x2a8(0x10)
	float RPMResetTime_Native; // 0x2b8(0x04)
	float JitterAmount_Native; // 0x2bc(0x04)
	float ShiftTimeThreshold_Native; // 0x2c0(0x04)
	float TimeSinceShift_Native; // 0x2c4(0x04)
	float EngineRPMInterp_Native; // 0x2c8(0x04)
	float EngineRPMLinear_Native; // 0x2cc(0x04)
	float MinRPMRange_Native; // 0x2d0(0x04)
	float MaxRPMRange_Native; // 0x2d4(0x04)
	bool bCurrentlyShifting_Native; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float CurrentAccelRateGearModifier_Native; // 0x2dc(0x04)
	float CurrentAccelRate_Native; // 0x2e0(0x04)
	int32_t CurrentGear_Native; // 0x2e4(0x04)
	int32_t MaxGear_Native; // 0x2e8(0x04)
	float DefaultAccelRateScalar_Native; // 0x2ec(0x04)
	float GearAttackInterpSpeed_Native; // 0x2f0(0x04)
	float GearReleaseInterpSpeed_Native; // 0x2f4(0x04)
	float AccelRateScalarFirstGear_Native; // 0x2f8(0x04)
	float AccelRateScalarMinGear_Native; // 0x2fc(0x04)
	float AccelRateScalarMaxGear_Native; // 0x300(0x04)
	float ShiftToRPMStart_Native; // 0x304(0x04)
	float ShiftToRPMEnd_Native; // 0x308(0x04)
	float ShiftFromRPMStart_Native; // 0x30c(0x04)
	float ShiftFromRPMEnd_Native; // 0x310(0x04)
	float MaxRPMSawtoothDecrement_Native; // 0x314(0x04)
	float MaxRPMSawtoothRepeatTime_Native; // 0x318(0x04)
	float DownhillAccelScalar_Native; // 0x31c(0x04)
	float UphillAccelScalar_Native; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct UCurveFloat* RPMFloatCurveMapping; // 0x328(0x08)
	float NormalizedSpeed_Native; // 0x330(0x04)
	float SuspValue_Native; // 0x334(0x04)
	bool bIsHandbraking_Native; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float MotoSynthVolume_Native; // 0x33c(0x04)
	float MotoSynthInitialFadeInTime_Native; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	float MotoSynthLogRPM_Native; // 0x348(0x04)
	bool bHasFuel_Native; // 0x34c(0x01)
	bool bIsInWater_Native; // 0x34d(0x01)
	bool bLocalPlayerInVehicle_Native; // 0x34e(0x01)
	char pad_34F[0x1]; // 0x34f(0x01)
	float TimeLocalPlayerEnteredVehicle_Native; // 0x350(0x04)
	bool bAttemptingDirectionChange_Native; // 0x354(0x01)
	bool bPreDestroy_Native; // 0x355(0x01)
	bool bEngineLoad_Native; // 0x356(0x01)
	char pad_357[0x1]; // 0x357(0x01)
	float SkidAmount_Native; // 0x358(0x04)
	float TimeSinceAwoken_Native; // 0x35c(0x04)
	bool bDestroyed_Native; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float TimeSinceSurfaceChange_Native; // 0x364(0x04)
	struct USoundBase* OnInitialSuspensionSound; // 0x368(0x08)
	float AngleForSkidding_Native; // 0x370(0x04)
	float SpringCompressionMultiplier; // 0x374(0x04)
	float MotoSynthMaxVolume_Native; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FVector2D MotoSynthTimeInVehicleTimeRange; // 0x380(0x10)
	struct FVector2D MotoSynthTimeInVehicleVolumeRange; // 0x390(0x10)
	struct TWeakObjectPtr<struct AFortDagwoodVehicle> ValetVehicle; // 0x3a0(0x08)
	struct UFortLayeredAudioComponent* Engine_Native; // 0x3a8(0x08)
	struct UAudioComponent* BoostAudioComponent_Native; // 0x3b0(0x08)
	struct USynthComponentMoto* SynthComponentMoto_Native; // 0x3b8(0x08)
	struct UFortCollisionAudioComponent* SuspensionCollisionComponent_Native; // 0x3c0(0x08)
	char pad_3C8[0x10]; // 0x3c8(0x10)

	void Update_Native(); // Function ValetRuntime.FortValetAudioController.Update_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x196a568
	void OnTireModApplied(struct FTireInfo& AppliedTireMod); // Function ValetRuntime.FortValetAudioController.OnTireModApplied // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSuspensionCollision_Native(bool& OutResult, float& OutMagnitude); // Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10b2c80
	void CacheValetVehicle(struct AFortDagwoodVehicle* InVehicle); // Function ValetRuntime.FortValetAudioController.CacheValetVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x235cb44
};

// Class ValetRuntime.FortValetGameFeatureData
// Size: 0x5a0 (Inherited: 0x520)
struct UFortValetGameFeatureData : UFortGameFeatureData {
	struct TMap<struct TSoftClassPtr<UObject>, struct FVehiclePropReplacementData> PropReplacements; // 0x520(0x50)
	struct TSoftClassPtr<UObject> VehicleSpawnerClass; // 0x570(0x28)
	enum class ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
};

