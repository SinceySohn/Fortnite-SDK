// BlueprintGeneratedClass B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C
// Size: 0x1018 (Inherited: 0xaf1)
struct AB_Prj_RealitySeed_SpawnSappling_C : AB_Prj_Athena_BGASpawner_C {
	char pad_AF1[0x7]; // 0xaf1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf8(0x08)
	struct UNiagaraComponent* NS_RealitySeed_Trail_Projectile; // 0xb00(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xb08(0x08)
	bool TeamHasBeenSet; // 0xb10(0x01)
	bool Debug; // 0xb11(0x01)
	bool bindToSurfaceOnStart?; // 0xb12(0x01)
	char pad_B13[0x1]; // 0xb13(0x01)
	int32_t Max#Bounces; // 0xb14(0x04)
	struct UFortWorldItemDefinition* PickupWID; // 0xb18(0x08)
	struct FScalableFloat MaxFriendlyCampsiteExclusionRange; // 0xb20(0x28)
	struct FScalableFloat MaxEnemyCampsiteExclusionRange; // 0xb48(0x28)
	bool Hit; // 0xb70(0x01)
	bool SpawnDoOnce; // 0xb71(0x01)
	bool EnteredWater; // 0xb72(0x01)
	char pad_B73[0x1]; // 0xb73(0x01)
	int32_t BounceCount; // 0xb74(0x04)
	struct FScalableFloat MinSaplingDeploymentDistanceFromObstacles; // 0xb78(0x28)
	struct FGameplayTagContainer TooCloseToAnotherSaplingFailed; // 0xba0(0x20)
	struct FGameplayTag GC Revert To Pickup; // 0xbc0(0x04)
	struct FGameplayTag GC Water Splash; // 0xbc4(0x04)
	struct FGameplayTagContainer Invalid Surface Failed Reason; // 0xbc8(0x20)
	struct FFortItemEntry ItemEntry; // 0xbe8(0x1a0)
	double PickupSpawnZOffset; // 0xd88(0x08)
	struct FVector DefaultSpawnOffset; // 0xd90(0x18)
	struct FVector RiftSpawnOffset; // 0xda8(0x18)
	struct FScalableFloat MinRiftDeploymentDistanceFromObstacles; // 0xdc0(0x28)
	struct UAbilitySystemComponent* PlayerAbilitySystemComponent; // 0xde8(0x08)
	struct FActiveGameplayEffectHandle PreventThrowHandle; // 0xdf0(0x08)
	bool PrjHasStopped; // 0xdf8(0x01)
	char pad_DF9[0x7]; // 0xdf9(0x07)
	struct AFortPlayerPawn* PlayerPawn; // 0xe00(0x08)
	struct FRealitySaplingPersistentData Persistent Sapling Data; // 0xe08(0x60)
	double SeedSpinSpeed; // 0xe68(0x08)
	double SpinMultiplierPerBounce; // 0xe70(0x08)
	struct FGameplayTagContainer NotEnoughSpace; // 0xe78(0x20)
	struct UPrimitiveComponent* CachedHit_MyComp; // 0xe98(0x08)
	struct AActor* CachedHit_Other; // 0xea0(0x08)
	struct UPrimitiveComponent* CachedHit_OtherComp; // 0xea8(0x08)
	bool CachedHit_SelfMoved; // 0xeb0(0x01)
	char pad_EB1[0x7]; // 0xeb1(0x07)
	struct FVector CachedHit_HitLocation; // 0xeb8(0x18)
	struct FVector CachedHit_HitNormal; // 0xed0(0x18)
	struct FVector CachedHit_NormalImpulse; // 0xee8(0x18)
	struct FHitResult CachedHit_Hit; // 0xf00(0xe0)
	int32_t TransplantedSaplingNumTimesWateredThisMatch; // 0xfe0(0x04)
	char pad_FE4[0x4]; // 0xfe4(0x04)
	struct FVector CachedPlayableBoundsBoxExtent; // 0xfe8(0x18)
	struct FVector CachedPlayableBoundsOrigin; // 0x1000(0x18)

	void Is Point in Playable Bounds(struct FVector Point, bool& RetVal); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.Is Point in Playable Bounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsSlopeValid(struct FHitResult Hit, bool& Valid); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.IsSlopeValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct AActor* SpawnBGA_(struct FVector Normal, struct AActor* HitActor, struct UPrimitiveComponent* HitComp, struct FVector Pos, bool FromWater, struct FHitResult Hit); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.SpawnBGA_ // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HasEnteredWater(); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.HasEnteredWater // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ParentHit(); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.ParentHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RevertToPickupAndDestroyProj(); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.RevertToPickupAndDestroyProj // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeployFailedFeedback(int32_t FailReason); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.DeployFailedFeedback // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitialSpinSpeed(); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.InitialSpinSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cache Hit Data(); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.Cache Hit Data // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SaplingDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.SaplingDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_RealitySeed_SpawnSappling(int32_t EntryPoint); // Function B_Prj_RealitySeed_SpawnSappling.B_Prj_RealitySeed_SpawnSappling_C.ExecuteUbergraph_B_Prj_RealitySeed_SpawnSappling // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

