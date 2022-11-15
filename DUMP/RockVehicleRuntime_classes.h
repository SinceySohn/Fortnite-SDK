// Class RockVehicleRuntime.RockVehicle_InteractionOverrideComponent
// Size: 0xa0 (Inherited: 0xa0)
struct URockVehicle_InteractionOverrideComponent : UFortVehicleInteractionOverrideComponent {
};

// Class RockVehicleRuntime.FortCheatManager_RockVehicle
// Size: 0x28 (Inherited: 0x28)
struct UFortCheatManager_RockVehicle : UChildCheatManager {

	void RockVehicleSetVelocity(float X, float Y, float Z); // Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetVelocity // (Final|Exec|Native|Public) // @ game+0x6968080
	void RockVehicleSetRotation(float Pitch, float Yaw, float Roll); // Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetRotation // (Final|Exec|Native|Public) // @ game+0x6968080
	void RockVehicleSetLocation(float X, float Y, float Z); // Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetLocation // (Final|Exec|Native|Public) // @ game+0x6968080
	void RockVehicleSetBalboaVelocity(float X, float Y, float Z); // Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetBalboaVelocity // (Final|Exec|Native|Public) // @ game+0x6968080
};

// Class RockVehicleRuntime.RockVehicle
// Size: 0x1be0 (Inherited: 0x19a0)
struct ARockVehicle : AFortAthenaSKVehicle {
	float InputSwivelPitch; // 0x19a0(0x04)
	float InputSwivelYaw; // 0x19a4(0x04)
	char bInputReverseCamera : 1; // 0x19a8(0x01)
	char bHasDoubleJumped : 1; // 0x19a8(0x01)
	char bHasDodged : 1; // 0x19a8(0x01)
	char pad_19A8_3 : 5; // 0x19a8(0x01)
	bool bFreeLookCamera; // 0x19a9(0x01)
	char pad_19AA[0x6]; // 0x19aa(0x06)
	struct FMulticastInlineDelegate OnFreeCamToggled; // 0x19b0(0x10)
	char pad_19C0[0x1]; // 0x19c0(0x01)
	struct FRockRuntimeConfigOverrides RockRuntimeConfigs; // 0x19c1(0x04)
	char pad_19C5[0x1b]; // 0x19c5(0x1b)
	struct FMulticastInlineDelegate OnSpringImpact; // 0x19e0(0x10)
	char pad_19F0[0x78]; // 0x19f0(0x78)
	struct URockVehicleAnalyticsComponent* RockAnalyticsComp; // 0x1a68(0x08)
	struct TArray<struct URockVehicleAbility*> VehicleAbilities; // 0x1a70(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> VehicleAbilityTickOrder; // 0x1a80(0x10)
	struct AFortVehicleAudioController* CachedVehicleAudioController; // 0x1a90(0x08)
	struct URockVehicleAbility_Supersonic* SupersonicAbility; // 0x1a98(0x08)
	struct URockVehicleAnimInstance* RockAnimInstance; // 0x1aa0(0x08)
	struct FFortAthenaVehicleInputState PendingDriverInputState; // 0x1aa8(0x40)
	struct FFortAthenaVehicleInputState PrevDriverInputState; // 0x1ae8(0x40)
	struct FVector EnterExitImpulse; // 0x1b28(0x18)
	char pad_1B40[0xa0]; // 0x1b40(0xa0)

	void ServerToggleFreeCam(); // Function RockVehicleRuntime.RockVehicle.ServerToggleFreeCam // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x69682c4
	void ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle); // Function RockVehicleRuntime.RockVehicle.ServerSetLegacyDamageValues // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6968164
	void RockFreeCamToggledDelegate__DelegateSignature(bool bFreeCam); // DelegateFunction RockVehicleRuntime.RockVehicle.RockFreeCamToggledDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void OnSpringImpact__DelegateSignature(struct FName Socket, float ImpactSpeed, struct FHitResult& OutHit); // DelegateFunction RockVehicleRuntime.RockVehicle.OnSpringImpact__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xdef49c
	void OnRep_FreeLookCamera(); // Function RockVehicleRuntime.RockVehicle.OnRep_FreeLookCamera // (Final|Native|Public) // @ game+0x6967f24
	float GetThrottleState(); // Function RockVehicleRuntime.RockVehicle.GetThrottleState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x658631c
	struct FFortAthenaVehicleInputState GetDriverInput(); // Function RockVehicleRuntime.RockVehicle.GetDriverInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6967918
	struct FRockRuntimeConfigOverrides GetCurrentRockRuntimeConfigOverrides(); // Function RockVehicleRuntime.RockVehicle.GetCurrentRockRuntimeConfigOverrides // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6967900
};

// Class RockVehicleRuntime.RockVehicleAbility
// Size: 0xb0 (Inherited: 0xa0)
struct URockVehicleAbility : UActorComponent {
	struct ARockVehicle* Vehicle; // 0xa0(0x08)
	float ActiveSeconds; // 0xa8(0x04)
	float LastDeactivationTimeSeconds; // 0xac(0x04)

	struct ARockVehicle* GetVehicle(); // Function RockVehicleRuntime.RockVehicleAbility.GetVehicle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23f9d18
	float GetInactiveSeconds(); // Function RockVehicleRuntime.RockVehicleAbility.GetInactiveSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6967964
	float GetActiveSeconds(); // Function RockVehicleRuntime.RockVehicleAbility.GetActiveSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6476bb8
};

// Class RockVehicleRuntime.RockVehicleAbility_Physics
// Size: 0x100 (Inherited: 0xb0)
struct URockVehicleAbility_Physics : URockVehicleAbility {
	bool bShouldStayActive; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FFortAthenaVehicleInputState InputState; // 0xb8(0x40)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class RockVehicleRuntime.RockVehicleAbility_AirControl
// Size: 0x160 (Inherited: 0x100)
struct URockVehicleAbility_AirControl : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FVector TorqueAccel; // 0x118(0x18)
	struct FVector TorqueDamping; // 0x130(0x18)
	float DisableForDodgeTime; // 0x148(0x04)
	bool bAnyWheelsOnGround; // 0x14c(0x01)
	bool bDodgeActive; // 0x14d(0x01)
	bool bAutoUprightActive; // 0x14e(0x01)
	char pad_14F[0x1]; // 0x14f(0x01)
	struct URockVehicleAbility_Dodge* DodgeAbility; // 0x150(0x08)
	struct URockVehicleAbility_AutoUpright* AutoUprightAbility; // 0x158(0x08)
};

// Class RockVehicleRuntime.RockVehicleAbility_AutoUpright
// Size: 0x208 (Inherited: 0x100)
struct URockVehicleAbility_AutoUpright : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FRockScalableFloat RollTorque; // 0x118(0x30)
	struct FRockScalableFloat PitchTorque; // 0x148(0x30)
	struct FRockScalableFloat PushForce; // 0x178(0x30)
	struct FRockScalableFloat MinActiveSeconds; // 0x1a8(0x30)
	struct URockVehicleAbility_Dodge* DodgeAbility; // 0x1d8(0x08)
	int32_t LastWorldContactFrame; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct FVector LastContactNormal; // 0x1e8(0x18)
	bool bWheelsOnGround; // 0x200(0x01)
	bool bAnyWheelsOnGround; // 0x201(0x01)
	bool bDodgeActive; // 0x202(0x01)
	bool bBodyContact; // 0x203(0x01)
	float TimeSinceLastBodyContact; // 0x204(0x04)
};

// Class RockVehicleRuntime.RockVehicleAbility_Boost
// Size: 0x168 (Inherited: 0x100)
struct URockVehicleAbility_Boost : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FRockScalableFloat BoostAccel; // 0x118(0x30)
	struct FMulticastInlineDelegate OnBoostFailed; // 0x148(0x10)
	struct URockVehicleBoostTank* BoostTank; // 0x158(0x08)
	bool bHasBoost; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
};

// Class RockVehicleRuntime.RockVehicleBoostTank
// Size: 0x128 (Inherited: 0xa0)
struct URockVehicleBoostTank : UActorComponent {
	struct FMulticastInlineDelegate OnSecondsChanged; // 0xa0(0x10)
	struct FRockScalableFloat StartSeconds; // 0xb0(0x30)
	struct FRockScalableFloat MaxSeconds; // 0xe0(0x30)
	enum class ERockBoostLogic BoostLogic; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float BoostRechargeRate; // 0x114(0x04)
	float BoostRechargeDelay; // 0x118(0x04)
	float SecondsRemaining; // 0x11c(0x04)
	char pad_120[0x8]; // 0x120(0x08)

	void OnRep_SecondsRemaining(float PrevValue); // Function RockVehicleRuntime.RockVehicleBoostTank.OnRep_SecondsRemaining // (Final|Native|Protected) // @ game+0x267f474
	bool IsBoostFull(); // Function RockVehicleRuntime.RockVehicleBoostTank.IsBoostFull // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6967a94
	bool HasBoost(); // Function RockVehicleRuntime.RockVehicleBoostTank.HasBoost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6967a74
	void GiveBoost(float Seconds); // Function RockVehicleRuntime.RockVehicleBoostTank.GiveBoost // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69679f0
	float GetPercentRemaining(); // Function RockVehicleRuntime.RockVehicleBoostTank.GetPercentRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69679d0
	float GetMaxBoostInSeconds(); // Function RockVehicleRuntime.RockVehicleBoostTank.GetMaxBoostInSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cc305c
};

// Class RockVehicleRuntime.RockVehicleAbility_Dodge
// Size: 0x430 (Inherited: 0x100)
struct URockVehicleAbility_Dodge : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FRockDodgeImpulse ForwardImpulse; // 0x118(0x60)
	struct FRockDodgeImpulse BackwardImpulse; // 0x178(0x60)
	struct FRockDodgeImpulse SideImpulse; // 0x1d8(0x60)
	struct FRockScalableFloat MinTimeAfterJump; // 0x238(0x30)
	struct FRockScalableFloat MinTorqueTime; // 0x268(0x30)
	struct FRockScalableFloat MaxTorqueTime; // 0x298(0x30)
	struct FRockScalableFloat ForwardTorque; // 0x2c8(0x30)
	struct FRockScalableFloat SideTorque; // 0x2f8(0x30)
	struct FRockScalableFloat ZLiftTime; // 0x328(0x30)
	struct FRockScalableFloat ZLiftAccel; // 0x358(0x30)
	struct FRockScalableFloat ZDampingTime; // 0x388(0x30)
	struct FRockScalableFloat ZDamping; // 0x3b8(0x30)
	struct FRockScalableFloat InputThreshold; // 0x3e8(0x30)
	struct FVector2D DodgeInput; // 0x418(0x10)
	bool bWheelsOnGround; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
};

// Class RockVehicleRuntime.RockVehicleAbility_DoubleJump
// Size: 0x150 (Inherited: 0x100)
struct URockVehicleAbility_DoubleJump : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FRockScalableFloat JumpVelocity; // 0x118(0x30)
	struct URockVehicleAbility_Jump* JumpAbility; // 0x148(0x08)
};

// Class RockVehicleRuntime.RockVehicleAbility_Flip
// Size: 0x1e8 (Inherited: 0x100)
struct URockVehicleAbility_Flip : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FRockScalableFloat Impulse; // 0x118(0x30)
	struct FRockScalableFloat Torque; // 0x148(0x30)
	struct FRockScalableFloat Duration; // 0x178(0x30)
	struct FRockScalableFloat ContactNormalThresholdDegrees; // 0x1a8(0x30)
	bool bWheelsOnGround; // 0x1d8(0x01)
	char pad_1D9[0xf]; // 0x1d9(0x0f)
};

// Class RockVehicleRuntime.RockVehicleAbility_GroundTrails
// Size: 0x108 (Inherited: 0xb0)
struct URockVehicleAbility_GroundTrails : URockVehicleAbility {
	struct FGroundTrailsMap GroundTrailsMap; // 0xb0(0x18)
	struct TArray<struct FName> GroundTrailSockets; // 0xc8(0x10)
	struct UNiagaraSystem* HandbrakeSystem; // 0xd8(0x08)
	struct TArray<struct UNiagaraComponent*> GroundTrailComponents; // 0xe0(0x10)
	struct TArray<struct UNiagaraComponent*> HandbrakeComponents; // 0xf0(0x10)
	char pad_100[0x8]; // 0x100(0x08)

	void SetEnabled(bool bValue); // Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x272a00c
	void OnSurfaceChanged(enum class EPhysicalSurface NewSurface); // Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.OnSurfaceChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0x1aefe44
};

// Class RockVehicleRuntime.RockVehicleAbility_Jump
// Size: 0x1d8 (Inherited: 0x100)
struct URockVehicleAbility_Jump : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FRockScalableFloat JumpVelocity; // 0x118(0x30)
	struct FRockScalableFloat JumpAccel; // 0x148(0x30)
	struct FRockScalableFloat MinJumpSeconds; // 0x178(0x30)
	struct FRockScalableFloat MaxJumpSeconds; // 0x1a8(0x30)
};

// Class RockVehicleRuntime.RockVehicleAbility_StickyWheels
// Size: 0x198 (Inherited: 0x100)
struct URockVehicleAbility_StickyWheels : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FRockScalableFloat StickyForceScaleGround; // 0x118(0x30)
	struct FRockScalableFloat StickyForceScaleWall; // 0x148(0x30)
	struct FVector ContactNormal; // 0x178(0x18)
	float Scale; // 0x190(0x04)
	bool bAnyWheelsOnGround; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
};

// Class RockVehicleRuntime.RockVehicleAbility_Supersonic
// Size: 0x178 (Inherited: 0xb0)
struct URockVehicleAbility_Supersonic : URockVehicleAbility {
	struct FMulticastInlineDelegate OnTrailsActivate; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTrailsDeactivate; // 0xc0(0x10)
	struct FRockScalableFloat TurnOffTime; // 0xd0(0x30)
	struct FRockScalableFloat TurnOnTime; // 0x100(0x30)
	bool bUseTurnOnTimeRequirement; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FRockScalableFloat TurnOffSpeedBuffer; // 0x138(0x30)
	float TimeBelowSupersonic; // 0x168(0x04)
	float WorldTimeSupersonicExceeded; // 0x16c(0x04)
	char pad_170[0x8]; // 0x170(0x08)
};

// Class RockVehicleRuntime.RockVehicleAnalyticsComponent
// Size: 0xd8 (Inherited: 0xa0)
struct URockVehicleAnalyticsComponent : UActorComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct FRockVehicleAnalyticsSession CurrentSession; // 0xa8(0x28)
	struct ARockVehicle* Vehicle; // 0xd0(0x08)

	void OnSupersonicStart(struct UActorComponent* InComp, bool bInReset); // Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicStart // (Final|Native|Private) // @ game+0x6967fc8
	void OnSupersonicEnd(struct UActorComponent* InComp); // Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicEnd // (Final|Native|Private) // @ game+0x6967f58
	void OnPawnExitedSeat(struct TScriptInterface<IFortVehicleInterface>& InVehicle, struct AFortPawn* InPlayerPawn, int32_t InSeatIndex); // Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnExitedSeat // (Final|Native|Private|HasOutParms) // @ game+0x6967e0c
	void OnPawnEnteredSeat(struct TScriptInterface<IFortVehicleInterface>& InVehicle, struct AFortPawn* InPlayerPawn, int32_t InSeatIndex); // Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnEnteredSeat // (Final|Native|Private|HasOutParms) // @ game+0x6967cf4
	void OnJumped(struct UActorComponent* InComp, bool bInReset); // Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnJumped // (Final|Native|Private) // @ game+0x6967c3c
	void OnDoubleJumped(struct UActorComponent* InComp, bool bInReset); // Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDoubleJumped // (Final|Native|Private) // @ game+0x6967b84
	void OnDodged(struct UActorComponent* InComp, bool bInReset); // Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDodged // (Final|Native|Private) // @ game+0x6967acc
};

// Class RockVehicleRuntime.RockVehicleAnimInstance
// Size: 0x770 (Inherited: 0x5f0)
struct URockVehicleAnimInstance : UFortVehicleAnimInstance {
	struct FBouncyChassisState BouncyChassis; // 0x5f0(0x0c)
	struct FRockVehicleWheelAnimInfo WheelInfoFR; // 0x5fc(0x14)
	struct FRockVehicleWheelAnimInfo WheelInfoFL; // 0x610(0x14)
	struct FRockVehicleWheelAnimInfo WheelInfoBR; // 0x624(0x14)
	struct FRockVehicleWheelAnimInfo WheelInfoBL; // 0x638(0x14)
	float WheelLerpSpeed; // 0x64c(0x04)
	char pad_650[0x120]; // 0x650(0x120)
};

// Class RockVehicleRuntime.RockVehicleAudioController
// Size: 0x390 (Inherited: 0x2a0)
struct ARockVehicleAudioController : AFortVehicleAudioController {
	struct FRuntimeFloatCurve SideSpeedToSkidVolume; // 0x2a0(0x88)
	float SurfaceTypeInterpSpeed; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct UAudioComponent* TireSurfaceComponent; // 0x330(0x08)
	struct UAudioComponent* AirLoopComponent; // 0x338(0x08)
	struct UAudioComponent* SuperSonicComponent; // 0x340(0x08)
	bool bInWater; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UAudioMotorModelComponent* MotorModel; // 0x350(0x08)
	struct ARockVehicle* CachedVehicle; // 0x358(0x08)
	char pad_360[0x30]; // 0x360(0x30)

	void SetSurfaceTypeParam(float NewSurfaceParam); // Function RockVehicleRuntime.RockVehicleAudioController.SetSurfaceTypeParam // (Final|Native|Public|BlueprintCallable) // @ game+0x250dff4
	void SetBoosting(bool bNewBoosting); // Function RockVehicleRuntime.RockVehicleAudioController.SetBoosting // (Final|Native|Public|BlueprintCallable) // @ game+0x27e9a0c
	void OnInAirUpdated(bool bNewInAir); // Function RockVehicleRuntime.RockVehicleAudioController.OnInAirUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UAudioMotorModelComponent* GetMotorSimComponent(); // Function RockVehicleRuntime.RockVehicleAudioController.GetMotorSimComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69679b8
};

// Class RockVehicleRuntime.RockVehicleCameraMode
// Size: 0x1d20 (Inherited: 0x1b20)
struct URockVehicleCameraMode : UFortCameraMode_AthenaVehicle {
	float SwivelPitchMax; // 0x1b20(0x04)
	float SwivelYawMax; // 0x1b24(0x04)
	float GroundNormalInterpRate; // 0x1b28(0x04)
	float GroundNormalAirInterpRate; // 0x1b2c(0x04)
	float GroundYawRate; // 0x1b30(0x04)
	float WallYawRate; // 0x1b34(0x04)
	float InterpToGroundTime; // 0x1b38(0x04)
	float InterpToAirTime; // 0x1b3c(0x04)
	float AverageVelocityInterpRate; // 0x1b40(0x04)
	char pad_1B44[0x4]; // 0x1b44(0x04)
	struct FRuntimeFloatCurve AirRotationInterpRateForSpeed; // 0x1b48(0x88)
	float FocusOffsetInterpRate; // 0x1bd0(0x04)
	float DistanceSpeedScale; // 0x1bd4(0x04)
	float DistanceOffsetMin; // 0x1bd8(0x04)
	float DistanceOffsetMax; // 0x1bdc(0x04)
	float DistanceInterpRate; // 0x1be0(0x04)
	float MaxSpeedFOVOffset; // 0x1be4(0x04)
	float SupersonicFOVOffset; // 0x1be8(0x04)
	float FOVInterpRate; // 0x1bec(0x04)
	struct FRockCameraSettings CameraSettings; // 0x1bf0(0x1c)
	char pad_1C0C[0x4]; // 0x1c0c(0x04)
	struct ARockVehicle* VehicleTarget; // 0x1c10(0x08)
	struct URockVehicleAbility_Jump* JumpAbility; // 0x1c18(0x08)
	char pad_1C20[0x100]; // 0x1c20(0x100)
};

// Class RockVehicleRuntime.RockVehicleConfigs
// Size: 0xdc0 (Inherited: 0x7b8)
struct URockVehicleConfigs : UFortPhysicsVehicleConfigs {
	struct FRockVehicleAxleConfig FrontAxle; // 0x7b8(0x34)
	struct FRockVehicleAxleConfig BackAxle; // 0x7ec(0x34)
	struct FRockVehicleDriveConfig Drive; // 0x820(0x510)
	struct FRockVehicleDemoConfig DemolitionConfiguration; // 0xd30(0x28)
	struct FRockScalableFloat MaxLinearSpeed; // 0xd58(0x30)
	struct FRockScalableFloat SupersonicSpeed; // 0xd88(0x30)
	float MaxAngularSpeed; // 0xdb8(0x04)
	float SafeBuildingLandingDegrees; // 0xdbc(0x04)
};

// Class RockVehicleRuntime.RockVehicleManager
// Size: 0x2a8 (Inherited: 0x288)
struct ARockVehicleManager : AActor {
	char pad_288[0x10]; // 0x288(0x10)
	struct TArray<struct ARockVehicle*> RockVehicles; // 0x298(0x10)
};

// Class RockVehicleRuntime.RockVehicleWorldSubsystem
// Size: 0x38 (Inherited: 0x30)
struct URockVehicleWorldSubsystem : UWorldSubsystem {
	struct ARockVehicleManager* VehicleManager; // 0x30(0x08)
};

// Class RockVehicleRuntime.StreamingRadioPlayerComponent_Rock
// Size: 0x438 (Inherited: 0x438)
struct UStreamingRadioPlayerComponent_Rock : UStreamingRadioPlayerComponent {

	void VehicleExploded(struct AController* LastDamageInstigator, struct AFortAthenaVehicle* Vehicle); // Function RockVehicleRuntime.StreamingRadioPlayerComponent_Rock.VehicleExploded // (Final|Native|Protected) // @ game+0x6968310
};

