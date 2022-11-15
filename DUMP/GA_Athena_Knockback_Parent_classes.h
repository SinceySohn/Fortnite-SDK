// BlueprintGeneratedClass GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C
// Size: 0xdf4 (Inherited: 0xb20)
struct UGA_Athena_Knockback_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AActor* Launcher; // 0xb28(0x08)
	struct AActor* Target; // 0xb30(0x08)
	struct FGameplayTagContainer TC_TagsToIgnore; // 0xb38(0x20)
	struct FScalableFloat Row_XYKnockMag; // 0xb58(0x28)
	struct FScalableFloat Row_ZKnockMag; // 0xb80(0x28)
	struct FScalableFloat Row_ZAdd; // 0xba8(0x28)
	bool ZAlwayzPositive; // 0xbd0(0x01)
	bool KnockTowardsLauncher; // 0xbd1(0x01)
	char pad_BD2[0x6]; // 0xbd2(0x06)
	struct FScalableFloat Row_ZVelPercentMaintained; // 0xbd8(0x28)
	struct FScalableFloat Row_XYVelPercentMaintained; // 0xc00(0x28)
	struct FScalableFloat Row_PhysicsObjectImpulseMultiplier; // 0xc28(0x28)
	struct FGameplayTagContainer DefaultTags; // 0xc50(0x20)
	struct FVector FinalLaunchVel; // 0xc70(0x18)
	double DistanceMagMult; // 0xc88(0x08)
	double Distance; // 0xc90(0x08)
	double LaunchDuration; // 0xc98(0x08)
	bool XYMagUsesInstigatorDistanceMod; // 0xca0(0x01)
	bool ZMagUsesInstigatorDistanceMod; // 0xca1(0x01)
	char pad_CA2[0x6]; // 0xca2(0x06)
	struct FScalableFloat Row_MinDistance; // 0xca8(0x28)
	struct FScalableFloat Row_MaxDistance; // 0xcd0(0x28)
	bool ResetFallHeight; // 0xcf8(0x01)
	bool ImpulseMustBePositiveForReset; // 0xcf9(0x01)
	enum class Athena_Knockback_Parent_Type LaunchType; // 0xcfa(0x01)
	bool KnocksVehicles; // 0xcfb(0x01)
	char pad_CFC[0x4]; // 0xcfc(0x04)
	struct FScalableFloat Row_VehicleXYMult; // 0xd00(0x28)
	struct FScalableFloat Row_VehicleZMult; // 0xd28(0x28)
	enum class ERootMotionFinishVelocityMode VelocityOnFinish; // 0xd50(0x01)
	char pad_D51[0x7]; // 0xd51(0x07)
	struct FVector SetVelocityOnFinish; // 0xd58(0x18)
	double ClampVelocityOnFinish; // 0xd70(0x08)
	bool UsesGravity; // 0xd78(0x01)
	bool AccountsForGravityZScale; // 0xd79(0x01)
	char pad_D7A[0x6]; // 0xd7a(0x06)
	double LowZGravityDampenerIntensity; // 0xd80(0x08)
	double HighZGravityMultiplierIntensity; // 0xd88(0x08)
	struct UCurveFloat* Curve_StrengthOverTime; // 0xd90(0x08)
	struct UCurveVector* Curve_PathOffset; // 0xd98(0x08)
	struct UGameplayEffect* GE_Knockback_Status; // 0xda0(0x08)
	bool ShouldApplyKnockbackStatus; // 0xda8(0x01)
	bool SetKnockbackDurationEqualToLaunchDuration; // 0xda9(0x01)
	char pad_DAA[0x6]; // 0xdaa(0x06)
	struct FScalableFloat Row_KnockbackDuration; // 0xdb0(0x28)
	double LocalGravityScale; // 0xdd8(0x08)
	struct FGameplayTag Tag_BuildingPhysics; // 0xde0(0x04)
	char pad_DE4[0x4]; // 0xde4(0x04)
	double FailsafeDelay; // 0xde8(0x08)
	struct FGameplayTag KnockbackTypeTag; // 0xdf0(0x04)

	double CheckGravityScale(struct FGameplayAttribute Attribute Gravity Scale); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.CheckGravityScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Find Launcher(struct AActor* DefaultLauncher, struct AActor*& LauncherOut); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.Find Launcher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FVector GetTargetLocation(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.GetTargetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FVector CalcVehicleMult(struct FVector InVec); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.CalcVehicleMult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CalculateDistanceMod(struct FVector TargetLocation, struct FVector KnockOrigin, double& ModAmount, bool& AboveMax); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.CalculateDistanceMod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FVector GetKnockbackOrigin(struct AActor* OriginActor); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.GetKnockbackOrigin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Get Initial Knock Mag(struct FVector Direction, struct FVector& LaunchMag); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.Get Initial Knock Mag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CalculateVelocityMaintained(struct AActor* LaunchTarget, struct FVector LaunchMagIn, struct FVector& ModifiedLaunchSpeed); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.CalculateVelocityMaintained // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnFinish_78B7A0C144DB79535B9890B75AE5F853(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.OnFinish_78B7A0C144DB79535B9890B75AE5F853 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOutAndDestinationReached_C8C9B5D948887DE06B469CAFC5621C02(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.OnTimedOutAndDestinationReached_C8C9B5D948887DE06B469CAFC5621C02 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimedOut_C8C9B5D948887DE06B469CAFC5621C02(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.OnTimedOut_C8C9B5D948887DE06B469CAFC5621C02 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DoLaunch(struct FVector Vel); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.DoLaunch // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchFinished(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.LaunchFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchBuldingActors(struct AActor* Actor); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.LaunchBuldingActors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OwningPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.OwningPawnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailsafeEndAbility(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.FailsafeEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Knockback_Parent(int32_t EntryPoint); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.ExecuteUbergraph_GA_Athena_Knockback_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

