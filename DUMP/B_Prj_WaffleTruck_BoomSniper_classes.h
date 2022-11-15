// BlueprintGeneratedClass B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C
// Size: 0xdc0 (Inherited: 0xb48)
struct AB_Prj_WaffleTruck_BoomSniper_C : AFortAttachableProjectileDeprecated {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb48(0x08)
	struct UStaticMeshComponent* Tracer; // 0xb50(0x08)
	struct UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0xb58(0x08)
	struct UParticleSystemComponent* AttachedFuseBlink; // 0xb60(0x08)
	struct UStaticMeshComponent* Mesh; // 0xb68(0x08)
	struct UArrowComponent* Arrow_Plunger; // 0xb70(0x08)
	struct UParticleSystemComponent* Trail; // 0xb78(0x08)
	struct UAudioComponent* Beep; // 0xb80(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xb88(0x08)
	struct UParticleSystemComponent* Fuse_Particle; // 0xb90(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0xb98(0x08)
	float WobbleOnStick_WobbleCurve_3AC7CBFE4905C9469F8850ADBACDB9A3; // 0xba0(0x04)
	enum class ETimelineDirection WobbleOnStick__Direction_3AC7CBFE4905C9469F8850ADBACDB9A3; // 0xba4(0x01)
	char pad_BA5[0x3]; // 0xba5(0x03)
	struct UTimelineComponent* WobbleOnStick; // 0xba8(0x08)
	struct UParticleSystem* P_Explosion; // 0xbb0(0x08)
	struct USoundBase* Cue_DistantSound; // 0xbb8(0x08)
	struct USoundBase* Cue_CloseSound; // 0xbc0(0x08)
	struct UParticleSystem* P_Explosion_Water; // 0xbc8(0x08)
	struct FScalableFloat ExplosionRadius; // 0xbd0(0x28)
	struct UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0xbf8(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0xc00(0x08)
	struct USoundBase* Cue_Stick; // 0xc08(0x08)
	struct FLinearColor Beacon Streak Color (Friendly); // 0xc10(0x10)
	struct FLinearColor Beacon Streak Color (Enemy); // 0xc20(0x10)
	bool IsDead?; // 0xc30(0x01)
	char pad_C31[0x3]; // 0xc31(0x03)
	struct FLinearColor Beacon Core Color (Friendly); // 0xc34(0x10)
	struct FLinearColor Beacon Core Color (Enemy); // 0xc44(0x10)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct FScalableFloat TimeBeforeExplode; // 0xc58(0x28)
	double OffsetDistanceFromBone; // 0xc80(0x08)
	struct FVector HitNormal; // 0xc88(0x18)
	struct USoundBase* Audio_StuckToEnvironment; // 0xca0(0x08)
	struct USoundBase* Audio_StuckToPlayer; // 0xca8(0x08)
	bool IsSelfStickDelayOver?; // 0xcb0(0x01)
	char pad_CB1[0x7]; // 0xcb1(0x07)
	double SelfStickDelay; // 0xcb8(0x08)
	double OffsetDistanceFromPhysicsMesh; // 0xcc0(0x08)
	struct FVector HitLocation; // 0xcc8(0x18)
	bool bHasStopped; // 0xce0(0x01)
	char pad_CE1[0x7]; // 0xce1(0x07)
	struct UMaterialInstance* EnemyMeshMaterial; // 0xce8(0x08)
	struct UMaterialInstance* FriendlyMeshMaterial; // 0xcf0(0x08)
	struct FGameplayTagContainer TC_ActorTagsThatShouldExplodeOnOverlap; // 0xcf8(0x20)
	bool bSimulationRunning; // 0xd18(0x01)
	bool StickToAllies; // 0xd19(0x01)
	char pad_D1A[0x6]; // 0xd1a(0x06)
	struct TSet<struct AActor*> Ignore; // 0xd20(0x50)
	enum class EPhysicalSurface Surface Type; // 0xd70(0x01)
	bool EnteredWater; // 0xd71(0x01)
	char pad_D72[0x6]; // 0xd72(0x06)
	struct FScalableFloat ProjectileGravityScale; // 0xd78(0x28)
	bool StickToPlayers; // 0xda0(0x01)
	char pad_DA1[0x7]; // 0xda1(0x07)
	struct UTexture* SoundIndicatorIcon; // 0xda8(0x08)
	struct FTimerHandle FuseIndicatorTimer; // 0xdb0(0x08)
	struct APawn* StuckPawn; // 0xdb8(0x08)

	void OnRep_bResumeSimulation(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.OnRep_bResumeSimulation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHits(struct UObject* Actor, struct UPrimitiveComponent* Component); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.HandleHits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHitSupplyDrop(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.HandleHitSupplyDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHitVehicle(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.HandleHitVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHitBuildingWall(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.HandleHitBuildingWall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayStickSound(struct FVector Location, struct AActor* HitActor, bool Success); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.PlayStickSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WobbleOnStick__FinishedFunc(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.WobbleOnStick__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void WobbleOnStick__UpdateFunc(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.WobbleOnStick__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Stop_Rotation(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.Stop_Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Event_BuildingActorDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.Event_BuildingActorDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnAttachedToDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.OnAttachedToDied // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Event_TriggerExplosion(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.Event_TriggerExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Event_Building_Actor_Destroyed(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.Event_Building_Actor_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RestartSimulating(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.RestartSimulating // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReopenPawnCollision(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.ReopenPawnCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Event_OnVehicleDestroyed(struct AActor* DestroyedActor); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.Event_OnVehicleDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetBounceVelocity(struct FVector Velocity); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.SetBounceVelocity // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destroy(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.Destroy // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PlayerDiedEvent(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.PlayerDiedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AIDiedEvent(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.AIDiedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindToPlayerOrAIDeath(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.BindToPlayerOrAIDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void CallExplodeTrigger(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.CallExplodeTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceBeep(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.ForceBeep // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowFuseIndicator(); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.ShowFuseIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_WaffleTruck_BoomSniper(int32_t EntryPoint); // Function B_Prj_WaffleTruck_BoomSniper.B_Prj_WaffleTruck_BoomSniper_C.ExecuteUbergraph_B_Prj_WaffleTruck_BoomSniper // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

