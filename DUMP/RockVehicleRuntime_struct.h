// Enum RockVehicleRuntime.ERockBoostLogic
enum class ERockBoostLogic : uint8 {
	Standard = 0,
	Recharge = 1,
	Infinite = 2,
	ERockBoostLogic_MAX = 3
};

// ScriptStruct RockVehicleRuntime.RockRuntimeConfigOverrides
// Size: 0x04 (Inherited: 0x00)
struct FRockRuntimeConfigOverrides {
	bool bDamageFriendlyVehicles; // 0x00(0x01)
	bool bDamageOtherVehicles; // 0x01(0x01)
	bool bDamageOwnVehicle; // 0x02(0x01)
	bool bDamageAllowedFromOtherVehicle; // 0x03(0x01)
};

// ScriptStruct RockVehicleRuntime.RockScalableFloat
// Size: 0x30 (Inherited: 0x28)
struct FRockScalableFloat : FScalableFloat {
	float CachedValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct RockVehicleRuntime.RockVehicleState
// Size: 0xe0 (Inherited: 0x00)
struct FRockVehicleState {
	struct FReplicatedPhysicsPawnState RigidBodyState; // 0x00(0x80)
	struct FFortAthenaVehicleInputState PrevDriverInput; // 0x80(0x40)
	bool bWheelsOnGround; // 0xc0(0x01)
	bool bAnyWheelsOnGround; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct FVector AverageSpringNormal; // 0xc8(0x18)
};

// ScriptStruct RockVehicleRuntime.AnimNode_RockVehicleController
// Size: 0xe0 (Inherited: 0xc8)
struct FAnimNode_RockVehicleController : FAnimNode_SkeletalControlBase {
	struct FBoneReference ChassisBone; // 0xc8(0x0c)
	struct FBouncyChassisState BouncyChassis; // 0xd4(0x0c)
};

// ScriptStruct RockVehicleRuntime.BouncyChassisState
// Size: 0x0c (Inherited: 0x00)
struct FBouncyChassisState {
	float PitchDegrees; // 0x00(0x04)
	float RollDegrees; // 0x04(0x04)
	float TranslationZ; // 0x08(0x04)
};

// ScriptStruct RockVehicleRuntime.RockBoxSpringSetup
// Size: 0x50 (Inherited: 0x00)
struct FRockBoxSpringSetup {
	struct FVector Strength; // 0x00(0x18)
	struct FVector Damping; // 0x18(0x18)
	struct FVector MaxDisplacement; // 0x30(0x18)
	float MaxSpeed; // 0x48(0x04)
	float Mass; // 0x4c(0x04)
};

// ScriptStruct RockVehicleRuntime.RockBoxSpring
// Size: 0xb0 (Inherited: 0x00)
struct FRockBoxSpring {
	struct FRockBoxSpringSetup Setup; // 0x00(0x50)
	char pad_50[0x60]; // 0x50(0x60)
};

// ScriptStruct RockVehicleRuntime.SpringSettings
// Size: 0x08 (Inherited: 0x00)
struct FSpringSettings {
	float Strength; // 0x00(0x04)
	float Damping; // 0x04(0x04)
};

// ScriptStruct RockVehicleRuntime.BouncyChassisSetup
// Size: 0x58 (Inherited: 0x00)
struct FBouncyChassisSetup {
	struct FSpringSettings PitchSpring; // 0x00(0x08)
	float PitchMaxAngleDegrees; // 0x08(0x04)
	struct FSpringSettings RollSpring; // 0x0c(0x08)
	float RollMaxAngleDegrees; // 0x14(0x04)
	struct FSpringSettings ZSpring; // 0x18(0x08)
	float ZMaxDrop; // 0x20(0x04)
	float ZMaxRaise; // 0x24(0x04)
	struct FVector MaxDisplacement; // 0x28(0x18)
	struct FVector MassOffset; // 0x40(0x18)
};

// ScriptStruct RockVehicleRuntime.BouncyChassisInstance
// Size: 0x118 (Inherited: 0x00)
struct FBouncyChassisInstance {
	struct FRockBoxSpring Spring; // 0x00(0xb0)
	char pad_B0[0x68]; // 0xb0(0x68)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent
// Size: 0x08 (Inherited: 0x00)
struct FRockVehicleAbilityInPersistent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_AirControl
// Size: 0x40 (Inherited: 0x08)
struct FRockVehicleAbilityInPersistent_AirControl : FRockVehicleAbilityInPersistent {
	struct FVector TorqueAccel; // 0x08(0x18)
	struct FVector TorqueDamping; // 0x20(0x18)
	float DisableForDodgeTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous
// Size: 0x40 (Inherited: 0x00)
struct FRockVehicleAbilityInContinuous {
	struct FFortAthenaVehicleInputState InputState; // 0x00(0x40)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_AirControl
// Size: 0x48 (Inherited: 0x40)
struct FRockVehicleAbilityInContinuous_AirControl : FRockVehicleAbilityInContinuous {
	bool bAnyWheelsOnGround; // 0x40(0x01)
	bool bDodgeActive; // 0x41(0x01)
	bool bAutoUprightActive; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_AutoUpright
// Size: 0x18 (Inherited: 0x08)
struct FRockVehicleAbilityInPersistent_AutoUpright : FRockVehicleAbilityInPersistent {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_AutoUpright
// Size: 0x50 (Inherited: 0x40)
struct FRockVehicleAbilityInContinuous_AutoUpright : FRockVehicleAbilityInContinuous {
	int32_t LastWorldContactFrame; // 0x40(0x04)
	bool bWheelsOnGround; // 0x44(0x01)
	bool bAnyWheelsOnGround; // 0x45(0x01)
	bool bDodgeActive; // 0x46(0x01)
	bool bBodyContact; // 0x47(0x01)
	float TimeSinceLastBodyContact; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_Boost
// Size: 0x10 (Inherited: 0x08)
struct FRockVehicleAbilityInPersistent_Boost : FRockVehicleAbilityInPersistent {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_Boost
// Size: 0x48 (Inherited: 0x40)
struct FRockVehicleAbilityInContinuous_Boost : FRockVehicleAbilityInContinuous {
	bool bHasBoost; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct RockVehicleRuntime.RockDodgeImpulse_PhysicsThread
// Size: 0x08 (Inherited: 0x00)
struct FRockDodgeImpulse_PhysicsThread {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct RockVehicleRuntime.RockDodgeImpulse
// Size: 0x60 (Inherited: 0x00)
struct FRockDodgeImpulse {
	struct FRockScalableFloat VelocityChange; // 0x00(0x30)
	struct FRockScalableFloat MaxSpeedScale; // 0x30(0x30)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_Dodge
// Size: 0x48 (Inherited: 0x08)
struct FRockVehicleAbilityInPersistent_Dodge : FRockVehicleAbilityInPersistent {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_Dodge
// Size: 0x48 (Inherited: 0x40)
struct FRockVehicleAbilityInContinuous_Dodge : FRockVehicleAbilityInContinuous {
	bool bWheelsOnGround; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_DoubleJump
// Size: 0x10 (Inherited: 0x08)
struct FRockVehicleAbilityInPersistent_DoubleJump : FRockVehicleAbilityInPersistent {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_Flip
// Size: 0x18 (Inherited: 0x08)
struct FRockVehicleAbilityInPersistent_Flip : FRockVehicleAbilityInPersistent {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_Flip
// Size: 0x48 (Inherited: 0x40)
struct FRockVehicleAbilityInContinuous_Flip : FRockVehicleAbilityInContinuous {
	bool bWheelsOnGround; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct RockVehicleRuntime.GroundTrailsData
// Size: 0x10 (Inherited: 0x00)
struct FGroundTrailsData {
	enum class EPhysicalSurface SurfaceType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UNiagaraSystem* NiagaraFx; // 0x08(0x08)
};

// ScriptStruct RockVehicleRuntime.GroundTrailsMap
// Size: 0x18 (Inherited: 0x00)
struct FGroundTrailsMap {
	struct UNiagaraSystem* DefaultTrails; // 0x00(0x08)
	struct TArray<struct FGroundTrailsData> GroundTrails; // 0x08(0x10)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_Jump
// Size: 0x18 (Inherited: 0x08)
struct FRockVehicleAbilityInPersistent_Jump : FRockVehicleAbilityInPersistent {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityOutContinuous
// Size: 0x01 (Inherited: 0x00)
struct FRockVehicleAbilityOutContinuous {
	bool bShouldStayActive; // 0x00(0x01)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAbilityOutPersistent
// Size: 0x04 (Inherited: 0x00)
struct FRockVehicleAbilityOutPersistent {
	float ActiveSeconds; // 0x00(0x04)
};

// ScriptStruct RockVehicleRuntime.RockVehileAbilityInContinous_StickyWheels
// Size: 0x60 (Inherited: 0x40)
struct FRockVehileAbilityInContinous_StickyWheels : FRockVehicleAbilityInContinuous {
	struct FVector ContactNormal; // 0x40(0x18)
	float Scale; // 0x58(0x04)
	bool bAnyWheelsOnGround; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAnalyticsSession
// Size: 0x28 (Inherited: 0x00)
struct FRockVehicleAnalyticsSession {
	struct AFortPlayerController* DriverPC; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct RockVehicleRuntime.RockVehicleWheelAnimInfo
// Size: 0x14 (Inherited: 0x00)
struct FRockVehicleWheelAnimInfo {
	float SpringToWheelOffsetZ; // 0x00(0x04)
	struct FFloatInterval SpringTravelRange; // 0x04(0x08)
	float WheelRadius; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct RockVehicleRuntime.RockCameraSettings
// Size: 0x1c (Inherited: 0x00)
struct FRockCameraSettings {
	float FOV; // 0x00(0x04)
	float Height; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	float Distance; // 0x0c(0x04)
	float Stiffness; // 0x10(0x04)
	float SwivelSpeed; // 0x14(0x04)
	float TransitionSpeed; // 0x18(0x04)
};

// ScriptStruct RockVehicleRuntime.RockThrottledValue
// Size: 0x08 (Inherited: 0x00)
struct FRockThrottledValue {
	float RiseRate; // 0x00(0x04)
	float FallRate; // 0x04(0x04)
};

// ScriptStruct RockVehicleRuntime.RockVehicleDriveConfig
// Size: 0x510 (Inherited: 0x00)
struct FRockVehicleDriveConfig {
	struct FRockScalableFloat DriveAccel; // 0x00(0x30)
	struct FRockScalableFloat DriveTopSpeed; // 0x30(0x30)
	struct FRockScalableFloat BrakeAccel; // 0x60(0x30)
	struct FRockScalableFloat StopSpeed; // 0x90(0x30)
	float IdleBrakeFactor; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FRuntimeFloatCurve DriveAccelCurve; // 0xc8(0x88)
	struct FRuntimeFloatCurve SteerAngleCurve; // 0x150(0x88)
	struct FRuntimeFloatCurve LatFrictionCurve; // 0x1d8(0x88)
	struct FRuntimeFloatCurve LongFrictionCurve; // 0x260(0x88)
	struct FRuntimeFloatCurve WallFrictionCurve; // 0x2e8(0x88)
	struct FRuntimeFloatCurve HandbrakeSteerAngleCurve; // 0x370(0x88)
	struct FRuntimeFloatCurve HandbrakeLatFrictionCurve; // 0x3f8(0x88)
	struct FRuntimeFloatCurve HandbrakeLongFrictionCurve; // 0x480(0x88)
	struct FRockThrottledValue HandbrakeRate; // 0x508(0x08)
};

// ScriptStruct RockVehicleRuntime.RockVehicleSuspensionConfig
// Size: 0x20 (Inherited: 0x00)
struct FRockVehicleSuspensionConfig {
	float MaxRaise; // 0x00(0x04)
	float MaxDrop; // 0x04(0x04)
	float Stiffness; // 0x08(0x04)
	float DampingCompression; // 0x0c(0x04)
	float DampingRelaxation; // 0x10(0x04)
	float Strength; // 0x14(0x04)
	float RockDampingCompression; // 0x18(0x04)
	float RockDampingRelaxation; // 0x1c(0x04)
};

// ScriptStruct RockVehicleRuntime.RockVehicleAxleConfig
// Size: 0x34 (Inherited: 0x00)
struct FRockVehicleAxleConfig {
	float TranslateX; // 0x00(0x04)
	float TranslateY; // 0x04(0x04)
	float TranslateZ; // 0x08(0x04)
	float WheelRadius; // 0x0c(0x04)
	float RestDistanceZ; // 0x10(0x04)
	struct FRockVehicleSuspensionConfig Suspension; // 0x14(0x20)
};

// ScriptStruct RockVehicleRuntime.RockVehicleDemoConfig
// Size: 0x28 (Inherited: 0x00)
struct FRockVehicleDemoConfig {
	struct FGameplayTagContainer VehiclesThatCanBeDemolished; // 0x00(0x20)
	float DemolishAngleYaw; // 0x20(0x04)
	float DemolishAnglePitch; // 0x24(0x04)
};

