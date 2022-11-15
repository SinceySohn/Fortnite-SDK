// BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C
// Size: 0xd60 (Inherited: 0xb48)
struct AAthenaSupplyDrop_C : AFortAthenaSupplyDrop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb48(0x08)
	struct UNiagaraComponent* Flare_Niagara; // 0xb50(0x08)
	struct UAudioComponent* FlareAudio; // 0xb58(0x08)
	struct UAudioComponent* ReticleAudio; // 0xb60(0x08)
	struct UNiagaraComponent* Reticle_Niagara; // 0xb68(0x08)
	struct USphereComponent* WaterCollisionSphere; // 0xb70(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0xb78(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0xb80(0x08)
	struct UAudioComponent* FallingAudio; // 0xb88(0x08)
	struct UBoxComponent* CrateCollision; // 0xb90(0x08)
	struct UChildActorComponent* ChildActor; // 0xb98(0x08)
	struct UStaticMeshComponent* CrateStaticMesh; // 0xba0(0x08)
	struct AFortPawn* MyInteractingPawn; // 0xba8(0x08)
	struct FName LootTableName; // 0xbb0(0x04)
	char pad_BB4[0x4]; // 0xbb4(0x04)
	struct FVector LootSpawnOffset; // 0xbb8(0x18)
	struct USoundBase* Sound_Looted; // 0xbd0(0x08)
	struct USoundBase* Sound_Destroyed; // 0xbd8(0x08)
	struct USoundBase* Sound_Landing; // 0xbe0(0x08)
	bool Opened; // 0xbe8(0x01)
	bool BalloonPopped; // 0xbe9(0x01)
	char pad_BEA[0x6]; // 0xbea(0x06)
	struct UFXSystemAsset* LandingFX; // 0xbf0(0x08)
	struct UParticleSystem* DestroyedFX; // 0xbf8(0x08)
	struct UParticleSystem* LootedFX; // 0xc00(0x08)
	double FallSpeed; // 0xc08(0x08)
	double ReticleUpdateInterval; // 0xc10(0x08)
	double InitialFallDelay; // 0xc18(0x08)
	struct UParticleSystem* FallTrailFX; // 0xc20(0x08)
	struct USoundBase* Sound_Appear; // 0xc28(0x08)
	struct USoundBase* Sound_ReticleAppear; // 0xc30(0x08)
	struct USoundBase* Sound_AlmostLanded; // 0xc38(0x08)
	struct FVector LandingLocation; // 0xc40(0x18)
	bool AutoOpen; // 0xc58(0x01)
	char pad_C59[0x7]; // 0xc59(0x07)
	double FallHeight; // 0xc60(0x08)
	double DescentOffsetMin; // 0xc68(0x08)
	double DescentOffsetMax; // 0xc70(0x08)
	struct FVector FallDirection; // 0xc78(0x18)
	struct FVector GroundLocation; // 0xc90(0x18)
	double DescentYOffsetMin; // 0xca8(0x08)
	double DescentYOffsetMax; // 0xcb0(0x08)
	bool bGroundLocationInitialized; // 0xcb8(0x01)
	bool bOverrideRotation; // 0xcb9(0x01)
	char pad_CBA[0x6]; // 0xcba(0x06)
	struct FRotator OverrideRotation; // 0xcc0(0x18)
	bool BlingDrop; // 0xcd8(0x01)
	char pad_CD9[0x3]; // 0xcd9(0x03)
	struct FName LootTableNameToUse; // 0xcdc(0x04)
	struct AFortAthenaVehicle* VehicleType; // 0xce0(0x08)
	struct FTimerHandle FallingAudioCheckTimerHandle; // 0xce8(0x08)
	double PlayerDistanceCheckTimeLoop; // 0xcf0(0x08)
	bool InfDrop; // 0xcf8(0x01)
	char pad_CF9[0x7]; // 0xcf9(0x07)
	struct USoundBase* Sound Looted Inf; // 0xd00(0x08)
	struct USoundBase* Sound Appear Dialogue; // 0xd08(0x08)
	struct TArray<struct FFortItemEntry> DelayedSpawnLoot; // 0xd10(0x10)
	double RandomSpawnRangeMin; // 0xd20(0x08)
	double RandomSpawnRangeMax; // 0xd28(0x08)
	bool LandInterrupted; // 0xd30(0x01)
	char pad_D31[0x7]; // 0xd31(0x07)
	double LogReticleDiscrepencyDistance Const; // 0xd38(0x08)
	struct UMaterialInterface* Anniversary Crate Material; // 0xd40(0x08)
	struct UMaterialInterface* Anniversary Balloon Material; // 0xd48(0x08)
	struct FString Anniversary Event Name; // 0xd50(0x10)

	void PlayLandingFX_InWater(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.PlayLandingFX_InWater // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnVehicle(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnVehicle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Analytics(struct TArray<struct FFortItemEntry>& ItemsToSpawn); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.Analytics // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetCustomDepthStencilValue(struct TArray<struct UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32_t StencilValue, bool& bOutConsume); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnSetCustomDepthStencilValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleProjectileMovementStop(struct FHitResult ImpactResult); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.HandleProjectileMovementStop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceSetLocationOnLanding(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.ForceSetLocationOnLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_LandingLocation(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_LandingLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AlmostLanded(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.AlmostLanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisableFlare(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.DisableFlare // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitFallHeightAndSpeed(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFallHeightAndSpeed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void playLandingFX(bool bSpawnVFX); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.playLandingFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitFall(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_BalloonPopped(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_BalloonPopped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BalloonDestroyed(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BalloonDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateReticleLocation(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.UpdateReticleLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OpenSupplyDrop(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OpenSupplyDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Opened(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_Opened // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Setup Bind To Building Actor(struct UObject* Object); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.Setup Bind To Building Actor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetLootSpawnLocation(struct FVector& LootSpawnLocation); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.GetLootSpawnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SpawnLoot(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnLoot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UserConstructionScript(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLandingLocationChanged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLandingLocationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Multicast_ApplyGravityForFall(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.Multicast_ApplyGravityForFall // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BeginFallAudioTimeline(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BeginFallAudioTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopFallAudioTimeline(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.StopFallAudioTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLanding(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLanding // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TimerCheckPlayerDistance(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.TimerCheckPlayerDistance // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyGroundComponents(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.DestroyGroundComponents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Looted Dialogue(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.Play Looted Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetupQuestData(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.SetupQuestData // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnDelayedSpawnLoot(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDelayedSpawnLoot // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTouchedFillFloor(struct AAthenaFillFloor* FillFloorActor); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnTouchedFillFloor // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PhysicsActivated(struct UActorComponent* Component, bool bReset); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.PhysicsActivated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LandingInterrupted(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.LandingInterrupted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaSupplyDrop(int32_t EntryPoint); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.ExecuteUbergraph_AthenaSupplyDrop // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

