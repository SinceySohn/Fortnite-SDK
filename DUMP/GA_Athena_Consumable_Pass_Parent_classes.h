// BlueprintGeneratedClass GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C
// Size: 0xd28 (Inherited: 0xb20)
struct UGA_Athena_Consumable_Pass_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct UFortWeaponRangedItemDefinition* ItemDefinition; // 0xb30(0x08)
	struct AFortProjectileBase* ProjectileToThrow; // 0xb38(0x08)
	struct AFortProjectileBase* ProjectileReference; // 0xb40(0x08)
	double DistanceFromInstigatorCheck; // 0xb48(0x08)
	double ProjectileSpeedMin; // 0xb50(0x08)
	double ProjectileSpeedMax; // 0xb58(0x08)
	double ProjectileGravityScale; // 0xb60(0x08)
	struct FVector ProjectileTargetingOriginOffset; // 0xb68(0x18)
	bool DummyShouldBounce; // 0xb80(0x01)
	char pad_B81[0x7]; // 0xb81(0x07)
	double DummyBounciness; // 0xb88(0x08)
	double DummyFriction; // 0xb90(0x08)
	double DummyMaxSpeed; // 0xb98(0x08)
	double DummyGravity; // 0xba0(0x08)
	double DummyTimeStep; // 0xba8(0x08)
	double DummyExtent; // 0xbb0(0x08)
	struct FVector ProjectileTargetingOriginOffset_Crouched; // 0xbb8(0x18)
	bool InThrowWindup; // 0xbd0(0x01)
	char pad_BD1[0x7]; // 0xbd1(0x07)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xbd8(0x58)
	struct ABP_ProjectileTrajectory_Athena_C* TrajectoryIndicator; // 0xc30(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xc38(0x08)
	bool AbilityKeyPressed; // 0xc40(0x01)
	char pad_C41[0x7]; // 0xc41(0x07)
	struct FVector GrenadeTargetingOriginOffsetWater; // 0xc48(0x18)
	double AdditionalThrowAngle; // 0xc60(0x08)
	double MaxSpeedPitch; // 0xc68(0x08)
	double MinSpeedPitch; // 0xc70(0x08)
	double MaxThrowPitch; // 0xc78(0x08)
	int32_t MaxTrajectoryBounces; // 0xc80(0x04)
	bool IsThrowing; // 0xc84(0x01)
	char pad_C85[0x3]; // 0xc85(0x03)
	double PostThrowDelay; // 0xc88(0x08)
	bool Spawned On Equip; // 0xc90(0x01)
	enum class ECollisionChannel DummyCollisionChannel; // 0xc91(0x01)
	char pad_C92[0x6]; // 0xc92(0x06)
	struct FScalableFloat ThrowConsumablesEnabled; // 0xc98(0x28)
	struct FGameplayTagContainer T_ItemThrown; // 0xcc0(0x20)
	struct FGameplayTag T_Quest; // 0xce0(0x04)
	char pad_CE4[0x4]; // 0xce4(0x04)
	struct AB_UtilityItem_Generic_Athena_C* WeaponUtilityItemGeneric; // 0xce8(0x08)
	int32_t DummyMaxSteps; // 0xcf0(0x04)
	char pad_CF4[0x4]; // 0xcf4(0x04)
	struct FVector Projectile Trajectory Final Location; // 0xcf8(0x18)
	struct FGameplayTag T_Quest_NearOtherPlayer; // 0xd10(0x04)
	char pad_D14[0x4]; // 0xd14(0x04)
	double DistanceCheckToNearbyPlayers; // 0xd18(0x08)
	struct FGameplayTag GC_OnPass; // 0xd20(0x04)
	struct FGameplayTag GC_CookLoop; // 0xd24(0x04)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, struct FHitResult& OutHitResult); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void RemoveCookGC(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.RemoveCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddCookGC(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.AddCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayThrowGC(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.PlayThrowGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CanBeDropped(bool& Yes); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.CanBeDropped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetProjectileDataFromWeaponID(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.GetProjectileDataFromWeaponID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTrajectorySpline(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetOwningPlayer(struct AFortPlayerPawn*& Player Pawn); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CalcProjectileSpeedFromPitch(double AimPitch, double& GrenadeSpeed); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.CalcProjectileSpeedFromPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SetupDummyProjectile(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnLocationAndRotation(struct FVector& OutLoc, struct FRotator& OutRot); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.SpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Destroyed_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData& ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Destroyed_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Exploded_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData& ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Exploded_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Stopped_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData& ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Stopped_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Bounced_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData& ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Bounced_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Touched_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData& ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Touched_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Created_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData& ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Created_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_B7154AE349A61FA4A5545D97B125C031(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Completed_B7154AE349A61FA4A5545D97B125C031 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_B7154AE349A61FA4A5545D97B125C031(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Cancelled_B7154AE349A61FA4A5545D97B125C031 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_B7154AE349A61FA4A5545D97B125C031(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Triggered_B7154AE349A61FA4A5545D97B125C031 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFinish_3698CE084DFBBB65C54A74B61C442258(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnFinish_3698CE084DFBBB65C54A74B61C442258 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFinish_37708BDA4A053044298FDD8A986CE91D(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnFinish_37708BDA4A053044298FDD8A986CE91D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFinish_CF0A57844174C8A87D0024B17D96B713(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnFinish_CF0A57844174C8A87D0024B17D96B713 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_13E531C84957E69360FC6EB6E9818D90(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.EventReceived_13E531C84957E69360FC6EB6E9818D90 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSync_F83BC34A45D86702B453A1BFE1D7F7E1(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnSync_F83BC34A45D86702B453A1BFE1D7F7E1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_D907E28A43BC498803B5B0AD054E5FC1(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.EventReceived_D907E28A43BC498803B5B0AD054E5FC1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction, struct FVector Projected Landing Location); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Server_SpawnProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAbilityInputReleased(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CleanupTrajectoryDisplay(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ThrowConsumable(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.ThrowConsumable // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitTrajectoryVariables(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cleanup Trajectory Display On End(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Cleanup Trajectory Display On End // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTrajectory(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Consumable_Pass_Parent(int32_t EntryPoint); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_Pass_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

