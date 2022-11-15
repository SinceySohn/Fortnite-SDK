// Class TankRuntime.FortTankVehicleConfigs
// Size: 0x8e0 (Inherited: 0x888)
struct UFortTankVehicleConfigs : UFortTreadVehicleConfigs {
	struct TArray<struct FTankWeaponAimingData> TankWeaponAimingData; // 0x888(0x10)
	struct FText SecondInteractText; // 0x898(0x18)
	enum class TInteractionType SecondInteractType; // 0x8b0(0x01)
	char pad_8B1[0x7]; // 0x8b1(0x07)
	struct FScalableFloat SecondInteractDuration; // 0x8b8(0x28)
};

// Class TankRuntime.FortTankAnimFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFortTankAnimFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class TankRuntime.FortTankVehicle
// Size: 0x1b90 (Inherited: 0x1960)
struct AFortTankVehicle : AFortTreadVehicle {
	char pad_1960[0x70]; // 0x1960(0x70)
	struct FMulticastInlineDelegate OnTankRepairedDelegate; // 0x19d0(0x10)
	struct FName BarrelSocketName; // 0x19e0(0x04)
	char pad_19E4[0x4]; // 0x19e4(0x04)
	struct UCapsuleComponent* BarrelCollision; // 0x19e8(0x08)
	struct UStaticMeshComponent* UnderVehicleCollision; // 0x19f0(0x08)
	struct TArray<struct FServerSocketTransformOverride> SocketOverrideArray; // 0x19f8(0x10)
	struct TMap<struct FName, struct FTransform> SocketTransformOverrideMap; // 0x1a08(0x50)
	struct USkeletalMeshComponent* CachedSkeletalMeshComponent; // 0x1a58(0x08)
	struct AFortVehicleAudioController* CachedVehicleAudioController; // 0x1a60(0x08)
	enum class EVisibilityBasedAnimTickOption DefaultServerVisibilityBasedAnimTickOption; // 0x1a68(0x01)
	bool DefaultServerSkeletalMeshTickEnabled; // 0x1a69(0x01)
	char pad_1A6A[0x2]; // 0x1a6a(0x02)
	struct FName YawPivotSocketName; // 0x1a6c(0x04)
	struct FName PitchPivotSocketName; // 0x1a70(0x04)
	char pad_1A74[0x4]; // 0x1a74(0x04)
	struct ULegacyCameraShake* DriverCameraShakeInstance; // 0x1a78(0x08)
	struct ULegacyCameraShake* AcceleratingCameraShakeInstance; // 0x1a80(0x08)
	char pad_1A88[0x8]; // 0x1a88(0x08)
	struct UNiagaraComponent* CachedNiagaraComponentRoadAndExhaust; // 0x1a90(0x08)
	struct FString RoadAndExhaustNiagaraComponentName; // 0x1a98(0x10)
	struct FString RoadAndExhaustPeelOutLeftName; // 0x1aa8(0x10)
	struct FString RoadAndExhaustPeelOutRightName; // 0x1ab8(0x10)
	struct FString RoadAndExhaustVehicleSpeedName; // 0x1ac8(0x10)
	struct FString RoadAndExhaustSlideDirectionName; // 0x1ad8(0x10)
	float RoadAndExhaustMinSpeedForDust; // 0x1ae8(0x04)
	char pad_1AEC[0x4]; // 0x1aec(0x04)
	struct FString RoadAndExhaustDustColorLerpName; // 0x1af0(0x10)
	float RoadAndExhaustDustColorLerpOffRoad; // 0x1b00(0x04)
	float RoadAndExhaustDustColorLerpOnRoad; // 0x1b04(0x04)
	struct FString RoadAndExhaustDustAlphaMultiplierName; // 0x1b08(0x10)
	float RoadAndExhaustDustAlphaMultiplierOffRoad; // 0x1b18(0x04)
	float RoadAndExhaustDustAlphaMultiplierOnRoad; // 0x1b1c(0x04)
	struct FString RoadAndExhaustDustFrontLeftName; // 0x1b20(0x10)
	struct FString RoadAndExhaustDustFrontRightName; // 0x1b30(0x10)
	struct FString RoadAndExhaustDustMiddleLeftName; // 0x1b40(0x10)
	struct FString RoadAndExhaustDustMiddleRightName; // 0x1b50(0x10)
	struct FString RoadAndExhaustDustRearLeftName; // 0x1b60(0x10)
	struct FString RoadAndExhaustDustRearRightName; // 0x1b70(0x10)
	struct FString RoadAndExhaustIsOnDirtName; // 0x1b80(0x10)
};

// Class TankRuntime.FortTankVehicleAnimInstance
// Size: 0x7e0 (Inherited: 0x6c0)
struct UFortTankVehicleAnimInstance : UFortTreadVehicleAnimInstance {
	struct AFortTankVehicle* TankVehicle; // 0x6c0(0x08)
	struct FRotator CurrentAimRotation; // 0x6c8(0x18)
	struct FRotator CurrentTurretAimRotation; // 0x6e0(0x18)
	struct FRotator SmoothedTurretDeltaRotation; // 0x6f8(0x18)
	float InterpolationRate; // 0x710(0x04)
	bool bEngineOverheated; // 0x714(0x01)
	bool bHasPassenger; // 0x715(0x01)
	bool bIsFired; // 0x716(0x01)
	bool bIsReady; // 0x717(0x01)
	bool bDriverCoverOnCooldown; // 0x718(0x01)
	char pad_719[0x3]; // 0x719(0x03)
	float LeftTreadPower; // 0x71c(0x04)
	float RightTreadPower; // 0x720(0x04)
	float TurretYawAlpha; // 0x724(0x04)
	float TurretYawAlphaSmoothingRate; // 0x728(0x04)
	float CannonYaw; // 0x72c(0x04)
	float CannonPitch; // 0x730(0x04)
	float TurretYaw; // 0x734(0x04)
	float TurretPitch; // 0x738(0x04)
	struct FLinearColor MIDTreadPositionColor; // 0x73c(0x10)
	float MIDTreadDamageLeft; // 0x74c(0x04)
	float MIDTreadDamageRight; // 0x750(0x04)
	float MIDExhaustShakeSpeed; // 0x754(0x04)
	float MIDExhaustShakeAmp; // 0x758(0x04)
	float MIDEngineBoostGlow; // 0x75c(0x04)
	float MIDEngineHealthRatio; // 0x760(0x04)
	char pad_764[0x4]; // 0x764(0x04)
	struct TMap<enum class EVehicleSeats, struct FTankAnimAimingData> AimingData; // 0x768(0x50)
	struct FRotator PreviousTurretAimRotation; // 0x7b8(0x18)
	char pad_7D0[0x10]; // 0x7d0(0x10)

	void UpdateMIDEngineProperties(float DeltaSeconds, float EngineHealthRatio); // Function TankRuntime.FortTankVehicleAnimInstance.UpdateMIDEngineProperties // (Final|Native|Private|BlueprintCallable) // @ game+0x687bfdc
};

// Class TankRuntime.FortTankVehicleAudioController
// Size: 0x5b8 (Inherited: 0x2a0)
struct AFortTankVehicleAudioController : AFortVehicleAudioController {
	struct AFortTankVehicle* TankVehicle; // 0x2a0(0x08)
	struct FFortAudioFloatParameterMapping SpeedParam; // 0x2a8(0x28)
	struct FFortAudioFloatParameterMapping TurnPowerParam; // 0x2d0(0x28)
	struct FFortAudioFloatParameterMapping OutOfFuelParam; // 0x2f8(0x28)
	struct FFortAudioFloatParameterMapping IdleParam; // 0x320(0x28)
	struct FFortAudioFloatParameterMapping TurningParam; // 0x348(0x28)
	struct FFortAudioFloatParameterMapping ForwardParam; // 0x370(0x28)
	struct FFortAudioFloatParameterMapping ReverseParam; // 0x398(0x28)
	struct FFortAudioFloatParameterMapping SurfaceParam; // 0x3c0(0x28)
	struct FFortAudioFloatParameterMapping IsInWaterParam; // 0x3e8(0x28)
	struct FFortAudioFloatParameterMapping IsInAirParam; // 0x410(0x28)
	struct FFortAudioFloatParameterMapping BoostParam; // 0x438(0x28)
	struct FFortAudioFloatParameterMapping CannonHorizontalMovementParam; // 0x460(0x28)
	struct FFortAudioFloatParameterMapping CannonVerticalMovementParam; // 0x488(0x28)
	struct FFortAudioFloatParameterMapping TurretHorizontalMovementParam; // 0x4b0(0x28)
	struct FFortAudioFloatParameterMapping TurretVerticalMovementParam; // 0x4d8(0x28)
	struct FTankAudioUpdateContext Context; // 0x500(0xb8)

	void PlayTurningOneShot(); // Function TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayDecelOneShot(); // Function TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayAccelOneShot(); // Function TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct AFortTankVehicle* GetTankVehicleActor(); // Function TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2695fcc
};

