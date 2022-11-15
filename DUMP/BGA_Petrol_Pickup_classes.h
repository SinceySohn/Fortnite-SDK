// BlueprintGeneratedClass BGA_Petrol_Pickup.BGA_Petrol_Pickup_C
// Size: 0xfd8 (Inherited: 0xc10)
struct ABGA_Petrol_Pickup_C : ABGA_HeldObject_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc10(0x08)
	struct UNiagaraComponent* NS_Object_FloatingInWater; // 0xc18(0x08)
	struct UFortItemEntryComponent* FortItemEntry; // 0xc20(0x08)
	struct UStaticMeshComponent* PetrolCan; // 0xc28(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xc30(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xc38(0x08)
	bool ShouldExplode; // 0xc40(0x01)
	char pad_C41[0x7]; // 0xc41(0x07)
	struct AFortPawn* ExplodeInstigator; // 0xc48(0x08)
	struct TArray<struct AActor*> TargetedActors; // 0xc50(0x10)
	struct FGameplayTag GC_Explode; // 0xc60(0x04)
	char pad_C64[0x4]; // 0xc64(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectArray; // 0xc68(0x10)
	struct FScalableFloat SpawnedProjectileMinSpeed; // 0xc78(0x28)
	struct FScalableFloat SpawnedProjectileMaxSpeed; // 0xca0(0x28)
	struct FScalableFloat ConeHalfAngleInDegrees; // 0xcc8(0x28)
	struct ABuildingGameplayActor* CurieBGAtoSpawn; // 0xcf0(0x08)
	struct AFortProjectileBase* CurieFireballsToSpawn; // 0xcf8(0x08)
	struct FScalableFloat FireBallsToSpawn; // 0xd00(0x28)
	struct UFortWorldItemDefinition* WeaponItemDefinition; // 0xd28(0x08)
	struct AFortPickup* WeaponPickupToGrant; // 0xd30(0x08)
	struct FHitResult LastHit; // 0xd38(0xe0)
	struct FTimerHandle FuseTimerHandle; // 0xe18(0x08)
	struct FScalableFloat FuseMinDuration; // 0xe20(0x28)
	struct FScalableFloat FuseMaxDuration; // 0xe48(0x28)
	struct FGuid HeldItemGUID; // 0xe70(0x10)
	struct TScriptInterface<IFortInventoryOwnerInterface> HeldItemInventoryInterface; // 0xe80(0x10)
	bool IsAttachedToWeapon; // 0xe90(0x01)
	bool Dropped; // 0xe91(0x01)
	char pad_E92[0x2]; // 0xe92(0x02)
	struct FGameplayTag GC_OnFire; // 0xe94(0x04)
	struct FScalableFloat ExplosionRadius; // 0xe98(0x28)
	struct FScalableFloat VehicleDamage; // 0xec0(0x28)
	struct AFortWeapon* WeaponAttachedTo; // 0xee8(0x08)
	struct FGameplayTag GC_Refuel; // 0xef0(0x04)
	char pad_EF4[0x4]; // 0xef4(0x04)
	struct TArray<enum class EObjectTypeQuery> SpawnCollisionCheck_ObjectTypes; // 0xef8(0x10)
	double Max_Spawn_Z; // 0xf08(0x08)
	bool SpawnCollisionBlocked; // 0xf10(0x01)
	char pad_F11[0x7]; // 0xf11(0x07)
	struct FVector VelocityAfterVehicleOverlap; // 0xf18(0x18)
	struct FScalableFloat HotfixExplodeVehicleImpulse; // 0xf30(0x28)
	struct FScalableFloat HotfixExplodeSpinThrust; // 0xf58(0x28)
	struct UGameplayEffect* GE_ExplodePlayerDamage; // 0xf80(0x08)
	struct UGameplayEffect* GE_ExplodeVehicleDamage; // 0xf88(0x08)
	struct UGameplayEffect* GE_ExplodeBuildingDamage; // 0xf90(0x08)
	bool FuseLit; // 0xf98(0x01)
	char pad_F99[0x7]; // 0xf99(0x07)
	double MinSpeedOfNoStickBounce; // 0xfa0(0x08)
	struct USoundBase* FailedInteractSound; // 0xfa8(0x08)
	struct FGameplayTagContainer Tag_FailedInteract_InventoryIsFull; // 0xfb0(0x20)
	bool InWater; // 0xfd0(0x01)
	char pad_FD1[0x3]; // 0xfd1(0x03)
	int32_t RefillableAmmoLeft; // 0xfd4(0x04)

	void Refuel_Function(int32_t FuelToAdd, struct AFortPlayerController* InstigatingController, struct AActor* InstigatingActor); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.Refuel_Function // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Quest Manager Refuel Stat Event(struct AFortPlayerController* FortPlayerController, int32_t RefuelAmount, struct FGameplayTagContainer AdditionalSourceTags); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.Quest Manager Refuel Stat Event // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetGameplayEffectClassForTarget(struct AActor* Target, struct UGameplayEffect*& GE Class); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.GetGameplayEffectClassForTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool BlueprintOnLocalInteract(struct AFortPlayerPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnLocalInteract // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalcVehicleImpulse(struct AActor* Vehicle, double Magnitude, struct FVector& Vector); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.CalcVehicleImpulse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_LastHit(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_LastHit // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_ShouldExplode(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_ShouldExplode // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float& OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpawnCurieFireballs(struct AFortPawn* ExplodeInstigator); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnCurieFireballs // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetFuseAndDrop(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetFuseAndDrop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnFireBallsExplodeAndDie(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnFireBallsExplodeAndDie // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExplodeAndDie(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExplodeAndDie // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHeldItemInfo(struct TScriptInterface<IFortInventoryOwnerInterface> InventoryInterface, struct FGuid Guid, struct AFortWeapon* WeaponAttachedTo); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetHeldItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DropHeldItem(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.DropHeldItem // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideAndDestroy(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.HideAndDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (ServerOnly)HideAndDestroy(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.(ServerOnly)HideAndDestroy // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Refuel(int32_t FuelToAdd, struct AFortPlayerController* InstigatingController, struct AActor* InstigatingActor); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.Refuel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnCurieElementInteract_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteract_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnCurieElementInteractBegun_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteractBegun_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnExitWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnExitWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Petrol_Pickup(int32_t EntryPoint); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExecuteUbergraph_BGA_Petrol_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

