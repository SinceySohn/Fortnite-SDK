// BlueprintGeneratedClass GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C
// Size: 0xd0c (Inherited: 0xb20)
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct AFortProjectileBase* ProjectileReference; // 0xb30(0x08)
	double DistanceFromInstigatorCheck; // 0xb38(0x08)
	double ProjectileSpeedMin; // 0xb40(0x08)
	double ProjectileSpeedMax; // 0xb48(0x08)
	double TrajectoryProjectileGravityScaleCorrection; // 0xb50(0x08)
	struct FVector ProjectileTargetingOriginOffset; // 0xb58(0x18)
	bool DummyShouldBounce; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	double DummyBounciness; // 0xb78(0x08)
	double DummyFriction; // 0xb80(0x08)
	double DummyMaxSpeed; // 0xb88(0x08)
	double DummyGravity; // 0xb90(0x08)
	double DummyTimeStep; // 0xb98(0x08)
	double DummyExtent; // 0xba0(0x08)
	struct FVector ProjectileTargetingOriginOffset_Crouched; // 0xba8(0x18)
	bool InThrowWindup; // 0xbc0(0x01)
	char pad_BC1[0x7]; // 0xbc1(0x07)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xbc8(0x58)
	struct ABP_ProjectileTrajectory_Athena_C* TrajectoryIndicator; // 0xc20(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xc28(0x08)
	bool AbilityKeyPressed; // 0xc30(0x01)
	char pad_C31[0x7]; // 0xc31(0x07)
	double AdditionalThrowAngle; // 0xc38(0x08)
	double MaxSpeedPitch; // 0xc40(0x08)
	double MinSpeedPitch; // 0xc48(0x08)
	double MaxThrowPitch; // 0xc50(0x08)
	int32_t MaxTrajectoryBounces; // 0xc58(0x04)
	bool IsThrowing; // 0xc5c(0x01)
	char pad_C5D[0x3]; // 0xc5d(0x03)
	double PostThrowDelay; // 0xc60(0x08)
	bool Spawned On Equip; // 0xc68(0x01)
	enum class ECollisionChannel DummyCollisionChannel; // 0xc69(0x01)
	char pad_C6A[0x6]; // 0xc6a(0x06)
	struct FScalableFloat ThrowConsumablesEnabled; // 0xc70(0x28)
	struct FGameplayTagContainer T_ItemThrown; // 0xc98(0x20)
	struct FGameplayTag T_Quest; // 0xcb8(0x04)
	char pad_CBC[0x4]; // 0xcbc(0x04)
	struct ABGA_HeldObject_Parent_C* BGA_ToSpawn; // 0xcc0(0x08)
	struct ABGA_HeldObject_Parent_C* DummyProjectile; // 0xcc8(0x08)
	struct ABGA_HeldObject_Parent_C* SpawnedBGAHeldObject; // 0xcd0(0x08)
	int32_t ItemCountToRemoveWhenThrown; // 0xcd8(0x04)
	char pad_CDC[0x4]; // 0xcdc(0x04)
	struct UGameplayEffect* GE_Windup; // 0xce0(0x08)
	struct FGameplayTagContainer Tag_InWindup; // 0xce8(0x20)
	int32_t DummyMaxSteps; // 0xd08(0x04)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, struct FHitResult& OutHitResult); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CanBeDropped(bool& Yes); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CanBeDropped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UpdateTrajectorySpline(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetOwningPlayer(struct AFortPlayerPawn*& Player Pawn); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CalcProjectileSpeedFromPitch(double AimPitch, double& GrenadeSpeed); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CalcProjectileSpeedFromPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SetupDummyProjectile(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnLocationAndRotation(struct FVector& OutLoc, struct FRotator& OutRot); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Completed_11EB7D0B4C52CC25C785B3A1EA90B008(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Completed_11EB7D0B4C52CC25C785B3A1EA90B008 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_11EB7D0B4C52CC25C785B3A1EA90B008(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Triggered_11EB7D0B4C52CC25C785B3A1EA90B008 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFinish_4303A6684F8456517B7D258D8BA1CE9B(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnFinish_4303A6684F8456517B7D258D8BA1CE9B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_37ED270D4E5065DF6944ECB72BFD05A2(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_37ED270D4E5065DF6944ECB72BFD05A2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_526561A640EC49D3EEBA449BC71450EF(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_526561A640EC49D3EEBA449BC71450EF // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAbilityInputReleased(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CleanupTrajectoryDisplay(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ThrowConsumable(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ThrowConsumable // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitTrajectoryVariables(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cleanup Trajectory Display On End(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cleanup Trajectory Display On End // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTrajectory(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateSpawnedBGA(ServerOnly)(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateSpawnedBGA(ServerOnly) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnBGA(ServerOnly)(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnBGA(ServerOnly) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveItemFromQuickBar(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.RemoveItemFromQuickBar // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SendGameplayEventsAndQuestUpdate(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SendGameplayEventsAndQuestUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent(int32_t EntryPoint); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

