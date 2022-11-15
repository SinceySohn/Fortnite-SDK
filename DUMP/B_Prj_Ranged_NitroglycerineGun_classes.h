// BlueprintGeneratedClass B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C
// Size: 0x1261 (Inherited: 0xb70)
struct AB_Prj_Ranged_NitroglycerineGun_C : AFortLiquidGunProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb70(0x08)
	float MoveProjectile_Progress_CD1CC9EE41FC03F38B15218A3F97F3B7; // 0xb78(0x04)
	enum class ETimelineDirection MoveProjectile__Direction_CD1CC9EE41FC03F38B15218A3F97F3B7; // 0xb7c(0x01)
	char pad_B7D[0x3]; // 0xb7d(0x03)
	struct UTimelineComponent* MoveProjectile; // 0xb80(0x08)
	struct FVector StopLocation; // 0xb88(0x18)
	struct FRotator StopRotX; // 0xba0(0x18)
	struct AActor* SpawnBounceFXHitActor; // 0xbb8(0x08)
	struct FHitResult OnBounceHitResult; // 0xbc0(0xe0)
	struct UParticleSystemComponent* WaterLandDelayRipplePSC; // 0xca0(0x08)
	struct UParticleSystem* WaterLandDelayPS; // 0xca8(0x08)
	enum class EPhysicalSurface StopSurfaceType; // 0xcb0(0x01)
	char pad_CB1[0x7]; // 0xcb1(0x07)
	struct FRotator StopRotZ; // 0xcb8(0x18)
	bool HasStopped; // 0xcd0(0x01)
	char pad_CD1[0x3]; // 0xcd1(0x03)
	struct FGameplayTag FeedbackCue; // 0xcd4(0x04)
	struct AActor* PreviousPrj; // 0xcd8(0x08)
	bool Project; // 0xce0(0x01)
	char pad_CE1[0x7]; // 0xce1(0x07)
	struct FVector HitNormal; // 0xce8(0x18)
	struct FVector Impact Point; // 0xd00(0x18)
	struct FHitResult LastHit; // 0xd18(0xe0)
	struct AB_Prj_Ranged_NitroglycerineGun_C* NextPrj; // 0xdf8(0x08)
	bool OnGround; // 0xe00(0x01)
	bool Should Break Chain; // 0xe01(0x01)
	char pad_E02[0x6]; // 0xe02(0x06)
	struct FTimerHandle CheckBreakageTimer; // 0xe08(0x08)
	struct USoundBase* SFX_Land_Water; // 0xe10(0x08)
	struct USoundBase* SFX_Land; // 0xe18(0x08)
	struct FScalableFloat AttachToPlayers; // 0xe20(0x28)
	struct FScalableFloat AttachToVehicles; // 0xe48(0x28)
	bool AttachedToPawn; // 0xe70(0x01)
	bool AttachedToVehicle; // 0xe71(0x01)
	char pad_E72[0x6]; // 0xe72(0x06)
	struct FVector UpdatePosition; // 0xe78(0x18)
	struct FVector LastUpdatePosition; // 0xe90(0x18)
	struct FVector DirectionPrjHitFrom; // 0xea8(0x18)
	struct FScalableFloat InitialGravity; // 0xec0(0x28)
	struct FScalableFloat DelayBeforeIncreasedGravity; // 0xee8(0x28)
	struct FScalableFloat IncreasedGravity; // 0xf10(0x28)
	struct FMulticastInlineDelegate OnStopped; // 0xf38(0x10)
	int32_t NumColliding; // 0xf48(0x04)
	bool RunningCollisionUpdate; // 0xf4c(0x01)
	char pad_F4D[0x3]; // 0xf4d(0x03)
	struct FTimerHandle CollisionUpdateTimer; // 0xf50(0x08)
	int32_t NumUpdates; // 0xf58(0x04)
	char pad_F5C[0x4]; // 0xf5c(0x04)
	struct FVector LastMovement; // 0xf60(0x18)
	bool CheckingCollision; // 0xf78(0x01)
	char pad_F79[0x7]; // 0xf79(0x07)
	struct FTimerHandle CheckCollisionTimer; // 0xf80(0x08)
	double LastOverlapTime; // 0xf88(0x08)
	struct FVector LiquidStartPoint; // 0xf90(0x18)
	struct FVector LiquidCenterPoint; // 0xfa8(0x18)
	struct FVector LiquidEndPoint; // 0xfc0(0x18)
	bool CheckCollisionLastPoint; // 0xfd8(0x01)
	char pad_FD9[0x7]; // 0xfd9(0x07)
	struct ABP_LiquidGun_RibbonManager_C* CachedBPRibbonManager; // 0xfe0(0x08)
	struct FVector LastCheckedStartPoint; // 0xfe8(0x18)
	struct FVector LastCheckedCenterPoint; // 0x1000(0x18)
	struct FVector LastCheckedEndPoint; // 0x1018(0x18)
	bool HasTriedToAttach; // 0x1030(0x01)
	char pad_1031[0x7]; // 0x1031(0x07)
	struct FScalableFloat CollisionRadius; // 0x1038(0x28)
	double AggregateAngle; // 0x1060(0x08)
	struct FVector RandomVectorOne; // 0x1068(0x18)
	struct FVector RandomVectorTwo; // 0x1080(0x18)
	struct FScalableFloat SF_AngleBreaking_ThresholdForBreak; // 0x1098(0x28)
	struct FScalableFloat SF_AngleBreaking_MinDistanceForAngleBreakage; // 0x10c0(0x28)
	struct FScalableFloat SF_AngleBreaking_AngleAggregationOffset; // 0x10e8(0x28)
	struct FScalableFloat SF_AngleBreaking_AggregateAngleBottomClamp; // 0x1110(0x28)
	struct FScalableFloat SF_AngleBreaking_MinAggregateIncreaseMultiplier; // 0x1138(0x28)
	struct FScalableFloat SF_AngleBreaking_MaxAggregateIncreaseMultiplier; // 0x1160(0x28)
	struct FScalableFloat SF_AngleBreaking_PrjTravelTimeForMaxMultiplier; // 0x1188(0x28)
	struct FScalableFloat SF_AngleBreaking_UpperLengthForMinMultiplier; // 0x11b0(0x28)
	struct FVector Location I'm Moving To; // 0x11d8(0x18)
	struct FVector Location I'm Moving From; // 0x11f0(0x18)
	bool BlockAngleDetach; // 0x1208(0x01)
	char pad_1209[0x7]; // 0x1209(0x07)
	struct FScalableFloat SF_MoveAwayFromCloseNeighbors; // 0x1210(0x28)
	struct FScalableFloat SF_InterpolateWhenMovingAwayFromNeighbors; // 0x1238(0x28)
	bool bDebug; // 0x1260(0x01)

	void OverlapIsValid(struct AActor* OverlappedActor, struct FHitResult HitResult, bool bFromSweep, bool& bValidHit); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.OverlapIsValid // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSplineHit(struct FHitResult& Hit); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.HandleSplineHit // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForTooCloseToNeighbors(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.CheckForTooCloseToNeighbors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BrokeFromAngle(bool& RevVal); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.BrokeFromAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void BrokeFromDistance(bool& RetVal); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.BrokeFromDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Try to Break(bool& Result); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.Try to Break // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool Deprecated Do Collision Check(struct FVector CapsuleLastEdge, struct FVector MyLastPosition, struct FVector CapsuleCurrentEdge, struct FVector MyCurrentPosition, struct FHitResult& OutHit); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.Deprecated Do Collision Check // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetLiquidPoints(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.GetLiquidPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void B_Prj_Ranged_NitroglycerineGun_AutoGenFunc(bool& ShouldCancel); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.B_Prj_Ranged_NitroglycerineGun_AutoGenFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetShouldBreakChain(bool& ShouldBreakChain); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.GetShouldBreakChain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector GetVector(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.GetVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void MoveProjectile__FinishedFunc(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.MoveProjectile__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void MoveProjectile__UpdateFunc(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.MoveProjectile__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void SetPreviousPrj(struct AActor* PreviousPrj); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.SetPreviousPrj // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Deprecated Update collider(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.Deprecated Update collider // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAttachedWallDestroyed(struct AActor* DestroyedActor); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.OnAttachedWallDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BaseDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.BaseDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HitMulticast(struct FHitResult LastHit); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.HitMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttachToPawnMulticast(struct AActor* ParentActor); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.AttachToPawnMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IncreaseGravity(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.IncreaseGravity // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__B_Prj_Ranged_NitroglycerineGun_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.BndEvt__B_Prj_Ranged_NitroglycerineGun_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void HitActor(struct AActor* HitActor); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.HitActor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (bool WasCancelled); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CheckCollision(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.CheckCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void StartCheckingCollision(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.StartCheckingCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateLastCheckedPositions(bool IsFirstUpdate); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.UpdateLastCheckedPositions // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__B_Prj_Ranged_NitroglycerineGun_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.BndEvt__B_Prj_Ranged_NitroglycerineGun_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void MoveProjectile (Multicast)(struct FVector NewLocation); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.MoveProjectile (Multicast) // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetNextPrj(struct AB_Prj_Ranged_NitroglycerineGun_C* NextPrj); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.SetNextPrj // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Ranged_NitroglycerineGun(int32_t EntryPoint); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.ExecuteUbergraph_B_Prj_Ranged_NitroglycerineGun // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnStopped__DelegateSignature(); // Function B_Prj_Ranged_NitroglycerineGun.B_Prj_Ranged_NitroglycerineGun_C.OnStopped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

