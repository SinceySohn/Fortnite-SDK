// BlueprintGeneratedClass SupplyDropRadioActorParent.SupplyDropRadioActorParent_C
// Size: 0xe98 (Inherited: 0xbb8)
struct ASupplyDropRadioActorParent_C : ABuildingGameplayActorSupplyDropRadio {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbb8(0x08)
	struct UAthenaSpecialActorComponent* AthenaSpecialActor; // 0xbc0(0x08)
	struct UNiagaraComponent* EntryFX; // 0xbc8(0x08)
	struct USphereComponent* WaterCollision; // 0xbd0(0x08)
	struct UAthenaBuildingActorChildComponent* BalloonActorChild; // 0xbd8(0x08)
	struct UBoxComponent* WorldCollision; // 0xbe0(0x08)
	double FallHeight; // 0xbe8(0x08)
	bool bFalling; // 0xbf0(0x01)
	char pad_BF1[0x3]; // 0xbf1(0x03)
	struct FGameplayTag OpenGameplayCueTag; // 0xbf4(0x04)
	struct ASupplyDropRadioIndicator_C* Indicator; // 0xbf8(0x08)
	struct FSupplyDropRadioGroundInfoStruct GroundInfo; // 0xc00(0x28)
	struct FMulticastInlineDelegate OnGroundInfoUpdate; // 0xc28(0x10)
	struct UGameplayEffect* SupplyDropFallingQuestGE; // 0xc38(0x08)
	double FlareDurationMultiplier; // 0xc40(0x08)
	bool bDebugMovement; // 0xc48(0x01)
	char pad_C49[0x3]; // 0xc49(0x03)
	int32_t MaxNumOfHeightTeleportAttempts; // 0xc4c(0x04)
	double FallHeightTeleportFailIncrement; // 0xc50(0x08)
	struct TArray<struct UBP_SupplyDropRadioAttachActorComponent_C*> AttachActorComponents; // 0xc58(0x10)
	struct FHitResult LatestSweep; // 0xc68(0xe0)
	struct FMulticastInlineDelegate OnBalloonStateChanged; // 0xd48(0x10)
	struct FScalableFloat Hotfix_ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0xd58(0x28)
	struct FScalableFloat Hotfix_FlareDurationMultiplier; // 0xd80(0x28)
	struct FScalableFloat Hotfix_MaxNumOfHeightTeleportAttempts; // 0xda8(0x28)
	struct FScalableFloat Hotfix_FallHeightTeleportFailIncrement; // 0xdd0(0x28)
	struct FScalableFloat Hotfix_ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0xdf8(0x28)
	bool bIsDying; // 0xe20(0x01)
	char pad_E21[0x3]; // 0xe21(0x03)
	struct FGameplayTag SpawnGameplayCueTag; // 0xe24(0x04)
	double GravityMultiplier_PreOpen; // 0xe28(0x08)
	double GravityMultiplier_PostOpen; // 0xe30(0x08)
	double EntryFXOffsetDuration; // 0xe38(0x08)
	struct FVector CenterOfMassRelativeOffset; // 0xe40(0x18)
	struct FVector SupplyDropActorHalfSize; // 0xe58(0x18)
	struct FScalableFloat Hotfix_AutoMarkOnSpawn; // 0xe70(0x28)

	void AutoMarkOnSpawn(struct AActor* ActorToMark); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.AutoMarkOnSpawn // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetAttachedActorToMark(struct AActor*& Actor); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.GetAttachedActorToMark // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bIsDying(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OnRep_bIsDying // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DelayedSilentDie(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.DelayedSilentDie // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UBoxComponent* GetRootCollisionComponent(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.GetRootCollisionComponent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UpdateGroundInfo(bool bValidBlock, struct FHitResult& MovementHitResult); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.UpdateGroundInfo // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsGrounded(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.IsGrounded // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void InitData(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetClosedStateFallDuration(double& Value); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.GetClosedStateFallDuration // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetFlareDuration(double& Duration); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.GetFlareDuration // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SetupEntryFXTime(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.SetupEntryFXTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TickBalloonState_Deprecated(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.TickBalloonState_Deprecated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateVelocity_Deprecated(double DeltaTime, struct FVector PreviousLocation); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.UpdateVelocity_Deprecated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShouldAddAttachComponentForActor(struct AActor* InActor, bool& bAdd); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.ShouldAddAttachComponentForActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyAttachComponentToAttachedActors(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.ApplyAttachComponentToAttachedActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetDesiredNetCullDistanceSquaredForAttachedActor(struct AActor* InActor, double& NetCullDistanceSquared); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.GetDesiredNetCullDistanceSquaredForAttachedActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void TeleportToDesiredHeight(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.TeleportToDesiredHeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateBalloonFallSpeed_Deprecated(double DeltaTime); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.UpdateBalloonFallSpeed_Deprecated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetGroundInfo(struct FSupplyDropRadioGroundInfoStruct& GroundInfo); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.GetGroundInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_GroundInfo(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OnRep_GroundInfo // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGroundBuildingActorDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.HandleGroundBuildingActorDied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGroundActorDestroyed(struct AActor* DestroyedActor); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.HandleGroundActorDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleLandEvent(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.HandleLandEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyBalloonActor(bool bSilent); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.DestroyBalloonActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetBalloonActor(struct ASupplyDropRadioBalloonParent_C*& BalloonActor); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.GetBalloonActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void HandleMovementBlocked_Deprecated(struct FHitResult& HitResult, bool& bValidBlock); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.HandleMovementBlocked_Deprecated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SweepMovement_Deprecated(double DeltaTime, struct FHitResult& HitResult); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.SweepMovement_Deprecated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TickMovement_Deprecated(double DeltaTime); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.TickMovement_Deprecated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBalloonDestroyed(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.HandleBalloonDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void NotifySupplyDropComplete(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.NotifySupplyDropComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OnBuildingActorInitialized // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__AthenaSupplyDropRadioDeliveryActorParent_WaterCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.BndEvt__AthenaSupplyDropRadioDeliveryActorParent_WaterCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HandleWaterCollisionOverlap(struct AActor* OtherActor); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.HandleWaterCollisionOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OpenSupplyDrop(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OpenSupplyDrop // (BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_BalloonState(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OnRep_BalloonState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen(); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SupplyDropRadioActorParent(int32_t EntryPoint); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.ExecuteUbergraph_SupplyDropRadioActorParent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnBalloonStateChanged__DelegateSignature(enum class ESupplyDropRadioBalloonState BalloonState); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OnBalloonStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnGroundInfoUpdate__DelegateSignature(struct FSupplyDropRadioGroundInfoStruct GroundInfo); // Function SupplyDropRadioActorParent.SupplyDropRadioActorParent_C.OnGroundInfoUpdate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

