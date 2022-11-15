// BlueprintGeneratedClass BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C
// Size: 0x10f0 (Inherited: 0xc10)
struct ABGA_ValetMod_OffRoadTire_Pickup_C : ABGA_HeldObject_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc10(0x08)
	struct UCapsuleComponent* JumpCollision; // 0xc18(0x08)
	struct UNiagaraComponent* NS_ValetMod_TireHitGround; // 0xc20(0x08)
	struct USphereComponent* Sphere; // 0xc28(0x08)
	struct UFortItemEntryComponent* FortItemEntry; // 0xc30(0x08)
	struct UStaticMeshComponent* Tire; // 0xc38(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xc40(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xc48(0x08)
	bool ShouldExplode; // 0xc50(0x01)
	char pad_C51[0x7]; // 0xc51(0x07)
	struct TArray<struct UGameplayEffect*> ExplodeDamageGE; // 0xc58(0x10)
	struct AFortPawn* ExplodeInstigator; // 0xc68(0x08)
	struct TArray<struct AActor*> TargetedActors; // 0xc70(0x10)
	struct UGameplayEffect* GE_Explode; // 0xc80(0x08)
	struct FGameplayTag GC_Explode; // 0xc88(0x04)
	char pad_C8C[0x4]; // 0xc8c(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectArray; // 0xc90(0x10)
	struct FScalableFloat SpawnedProjectileMinSpeed; // 0xca0(0x28)
	struct FScalableFloat SpawnedProjectileMaxSpeed; // 0xcc8(0x28)
	struct FScalableFloat ConeHalfAngleInDegrees; // 0xcf0(0x28)
	struct ABuildingGameplayActor* CurieBGAtoSpawn; // 0xd18(0x08)
	struct AFortProjectileBase* CurieFireballsToSpawn; // 0xd20(0x08)
	struct FScalableFloat FireBallsToSpawn; // 0xd28(0x28)
	struct UFortWorldItemDefinition* WeaponItemDefinition; // 0xd50(0x08)
	struct AFortPickup* WeaponPickupToGrant; // 0xd58(0x08)
	struct FHitResult LastHit; // 0xd60(0xe0)
	struct FTimerHandle FuseTimerHandle; // 0xe40(0x08)
	struct FScalableFloat FuseMinDuration; // 0xe48(0x28)
	struct FScalableFloat FuseMaxDuration; // 0xe70(0x28)
	struct FGuid HeldItemGUID; // 0xe98(0x10)
	struct TScriptInterface<IFortInventoryOwnerInterface> HeldItemInventoryInterface; // 0xea8(0x10)
	bool IsAttachedToWeapon; // 0xeb8(0x01)
	bool Dropped; // 0xeb9(0x01)
	char pad_EBA[0x2]; // 0xeba(0x02)
	struct FGameplayTag GC_OnFire; // 0xebc(0x04)
	struct FScalableFloat ExplosionRadius; // 0xec0(0x28)
	struct FScalableFloat VehicleDamage; // 0xee8(0x28)
	struct AFortWeapon* WeaponAttachedTo; // 0xf10(0x08)
	struct FGameplayTag GC_Refuel; // 0xf18(0x04)
	char pad_F1C[0x4]; // 0xf1c(0x04)
	struct TArray<enum class EObjectTypeQuery> SpawnCollisionCheck_ObjectTypes; // 0xf20(0x10)
	double Max_Spawn_Z; // 0xf30(0x08)
	bool SpawnCollisionBlocked; // 0xf38(0x01)
	char pad_F39[0x7]; // 0xf39(0x07)
	struct FVector VelocityAfterVehicleOverlap; // 0xf40(0x18)
	struct FScalableFloat HotfixVehicleImpulse; // 0xf58(0x28)
	struct FScalableFloat HotfixSpinThrust; // 0xf80(0x28)
	struct UGameplayEffect* GE_ExplodePlayerDamage; // 0xfa8(0x08)
	struct UGameplayEffect* GE_ExplodeVehicleDamage; // 0xfb0(0x08)
	bool FuseLit; // 0xfb8(0x01)
	char pad_FB9[0x7]; // 0xfb9(0x07)
	double MinSpeedOfNoStickBounce; // 0xfc0(0x08)
	struct USoundBase* FailedInteractSound; // 0xfc8(0x08)
	struct FGameplayTagContainer Tag_FailedInteract_InventoryIsFull; // 0xfd0(0x20)
	struct AFortPawn* OverlapPawn; // 0xff0(0x08)
	double BounceHeight; // 0xff8(0x08)
	double JumpHeight; // 0x1000(0x08)
	double FinalBounceJumpHeight; // 0x1008(0x08)
	struct USoundBase* TireSound; // 0x1010(0x08)
	double Final Bounce X Vector; // 0x1018(0x08)
	double NoCeilingBounceHeight; // 0x1020(0x08)
	struct AFortPlayerController* OverlapController; // 0x1028(0x08)
	struct UGameplayEffect* GE_PlayerLaunched; // 0x1030(0x08)
	struct UForceFeedbackEffect* LaunchForceFeedback; // 0x1038(0x08)
	double VehicleImpulseVelocityMulti; // 0x1040(0x08)
	double SpinThrust; // 0x1048(0x08)
	struct AFortAthenaVehicle* OverlapVehicle; // 0x1050(0x08)
	struct UMaterialInstanceDynamic* TireMID; // 0x1058(0x08)
	struct FScalableFloat ShouldImpulsePlayer; // 0x1060(0x28)
	bool BBouncingProjectile; // 0x1088(0x01)
	char pad_1089[0x3]; // 0x1089(0x03)
	struct FGameplayTag GC Bounce Player; // 0x108c(0x04)
	struct FVector JumpCollisionLocation; // 0x1090(0x18)
	struct FGameplayTag Mod Tag to Apply; // 0x10a8(0x04)
	struct FGameplayTag ModTagToApply; // 0x10ac(0x04)
	struct AActor* Hit Actor; // 0x10b0(0x08)
	struct UFXSystemAsset* PickupFX; // 0x10b8(0x08)
	struct UFortWorldItemDefinition* TireModWID; // 0x10c0(0x08)
	struct FGameplayTag GC_BounceVehicle; // 0x10c8(0x04)
	char pad_10CC[0x4]; // 0x10cc(0x04)
	struct FGameplayEffectContextHandle Context; // 0x10d0(0x18)
	struct UFXSystemAsset* FX_WaterSpash; // 0x10e8(0x08)

	bool ShouldApplyMod(struct AFortDagwoodVehicle* Vehicle); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.ShouldApplyMod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_JumpCollisionLocation(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnRep_JumpCollisionLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DebugJumpCapsule(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.DebugJumpCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MID_Play_Animation(double StartFrame, double EndFrame); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.MID_Play_Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_OverlapVehicle(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnRep_OverlapVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CeilingCheck(bool& Success); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.CeilingCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintOnLocalInteract(struct AFortPlayerPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintOnLocalInteract // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalcVehicleImpulse(struct AActor* Vehicle, double VelocityMultiplier, struct FVector& Vector); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.CalcVehicleImpulse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_LastHit(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnRep_LastHit // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_ShouldExplode(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnRep_ShouldExplode // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float& OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__JumpCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__JumpCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HealthChanged(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideAndDestroy(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.HideAndDestroy // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchVehicle(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.LaunchVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventAttachedActorDestroyed(struct AActor* DestroyedActor); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.EventAttachedActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventAttachedBADied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.EventAttachedBADied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__JumpCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__JumpCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PlayerBounceCosmetics(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.PlayerBounceCosmetics // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void SpawnPickup(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.SpawnPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayJiggleTiresAnimation(double StartFrame, double EndFrame); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.PlayJiggleTiresAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_ValetMod_OffRoadTire_Pickup(int32_t EntryPoint); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.ExecuteUbergraph_BGA_ValetMod_OffRoadTire_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

