// BlueprintGeneratedClass GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C
// Size: 0xf58 (Inherited: 0xb20)
struct UGA_Athena_Consumable_Throw_Secondary_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	bool AbilityKeyPressed; // 0xb30(0x01)
	bool InThrowWindup; // 0xb31(0x01)
	char pad_B32[0x6]; // 0xb32(0x06)
	double AdditionalThrowAngle; // 0xb38(0x08)
	double MaxTossPitch; // 0xb40(0x08)
	struct FVector GrenadeTargetingOriginOffset; // 0xb48(0x18)
	struct FVector GrenadeTargetingOriginOffset_Crouched; // 0xb60(0x18)
	struct AFortProjectileBase* SpawnedProjectile; // 0xb78(0x08)
	struct AFortProjectileBase* Proj_ThrownProjectile; // 0xb80(0x08)
	struct FScalableFloat ProjectileSpeed; // 0xb88(0x28)
	struct FScalableFloat ProjectileGravityScale; // 0xbb0(0x28)
	double TrajectoryUpdateInterval; // 0xbd8(0x08)
	struct UAnimMontage* CookMonage; // 0xbe0(0x08)
	struct UAnimMontage* ThrowMontage; // 0xbe8(0x08)
	struct FGameplayTag GC_OnThrow; // 0xbf0(0x04)
	char pad_BF4[0x4]; // 0xbf4(0x04)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xbf8(0x08)
	struct ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xc00(0x08)
	double DummyMaxSpeed; // 0xc08(0x08)
	double DummyGravity; // 0xc10(0x08)
	double DummyExtent; // 0xc18(0x08)
	double DummyTimeStep; // 0xc20(0x08)
	struct FGameplayTag GC_CookLoop; // 0xc28(0x04)
	char pad_C2C[0x4]; // 0xc2c(0x04)
	struct UGameplayEffect* GE_InWindup; // 0xc30(0x08)
	struct FVector GrenadeTargetingOriginOffsetWater; // 0xc38(0x18)
	struct FActiveGameplayEffectHandle Handle_GE_InWindup; // 0xc50(0x08)
	struct FGameplayTag EC_DefaultExplosion; // 0xc58(0x04)
	int32_t ExplosionEffectLevel; // 0xc5c(0x04)
	struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec; // 0xc60(0xb8)
	bool SpawnedOnEquip; // 0xd18(0x01)
	char pad_D19[0x3]; // 0xd19(0x03)
	struct FGameplayTag EC_DefaultHit; // 0xd1c(0x04)
	int32_t HitEffectLevel; // 0xd20(0x04)
	char pad_D24[0x4]; // 0xd24(0x04)
	struct FFortGameplayEffectContainerSpec HitEffectContainerSpec; // 0xd28(0xb8)
	struct FMulticastInlineDelegate OnProjectileSpawn; // 0xde0(0x10)
	bool HasAdditionalExplosion; // 0xdf0(0x01)
	char pad_DF1[0x3]; // 0xdf1(0x03)
	struct FGameplayTag EC_AdditionalExplosion; // 0xdf4(0x04)
	int32_t AdditionalExplodeLevel; // 0xdf8(0x04)
	char pad_DFC[0x4]; // 0xdfc(0x04)
	struct FFortGameplayEffectContainerSpec AdditionalContainerSpec; // 0xe00(0xb8)
	struct FGameplayTagContainer QuestCreditTargetTag; // 0xeb8(0x20)
	bool IsThrowing; // 0xed8(0x01)
	bool ThrowInstantly; // 0xed9(0x01)
	char pad_EDA[0x6]; // 0xeda(0x06)
	struct FScalableFloat ThrowConsumablesEnabled; // 0xee0(0x28)
	struct FName TrajectoryCollisionProfileName; // 0xf08(0x04)
	int32_t DummyMaxSteps; // 0xf0c(0x04)
	struct UFortCameraMode* CameraMode; // 0xf10(0x08)
	struct FGameplayTagContainer Tag_BlockAbilityActivation; // 0xf18(0x20)
	bool bPreventDeploymentInBlockAreas; // 0xf38(0x01)
	char pad_F39[0x3]; // 0xf39(0x03)
	float DeployableBlockingAreaCheckRadius; // 0xf3c(0x04)
	struct FVector DeployableBlockingAreaCheckOffset; // 0xf40(0x18)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, struct FHitResult& OutHitResult); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ExecuteThrowGC(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ExecuteThrowGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveCookGC(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.RemoveCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddCookGC(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.AddCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void AddValidCamera(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.AddValidCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetProjectileInitialGravityScaleToUse(double& GravityScaleToUse); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetProjectileInitialGravityScaleToUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetProjectileInitialSpeedToUse(double& ProjectileSpeedToUse); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetProjectileInitialSpeedToUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void IsTrajectoryLocationValid(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult, bool& bIsLocationValid); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.IsTrajectoryLocationValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnUpdateTrajectory(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnUpdateTrajectory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanupTrajectory(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.CleanupTrajectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PostThrowCleanup(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.PostThrowCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTrajectorySpline(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupDummyProjectile(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnProjectileSetup(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnProjectileSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnProjectileSpawned(struct AFortProjectileBase* SpawnedProjectile); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnProjectileSpawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnThrownProjectile(struct AFortProjectileBase* ProjectileClass, struct FVector& ProjectileSpawnLocation, struct FRotator& ProjectileSpawnDirection, struct FFortGameplayEffectContainerSpec HitEffectContainerSpec, struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec, double ProjectileInitialSpeed, double ProjectileGravityScale, struct AFortProjectileBase*& SpawnedProjectile); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.SpawnThrownProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetOwningPlayer(struct AFortPlayerPawn*& Player Pawn); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetSpawnLocationAndRotation(struct FVector& Location, struct FRotator& Rotation); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetSpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void PrethrowSetup(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.PrethrowSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_7CDE11F247AD13935CDDCCA29666AC3E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.Completed_7CDE11F247AD13935CDDCCA29666AC3E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_7CDE11F247AD13935CDDCCA29666AC3E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.Cancelled_7CDE11F247AD13935CDDCCA29666AC3E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_7CDE11F247AD13935CDDCCA29666AC3E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.Triggered_7CDE11F247AD13935CDDCCA29666AC3E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSync_65BB2FE343979EBE180BC6A76D8BF92F(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnSync_65BB2FE343979EBE180BC6A76D8BF92F // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_69B60BD84BF46B2613ACDE9E1A689444(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.EventReceived_69B60BD84BF46B2613ACDE9E1A689444 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAbilityInputReleased(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ThrowProjectile(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ThrowProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttemptSpawnThrownProjectile(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.AttemptSpawnThrownProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void InitTrajectoryVariables(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTrajectory(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ThrowMontageStarted(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ThrowMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Consumable_Throw_Secondary_Parent(int32_t EntryPoint); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_Throw_Secondary_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnProjectileSpawn__DelegateSignature(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnProjectileSpawn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

