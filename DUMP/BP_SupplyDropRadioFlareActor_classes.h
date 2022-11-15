// BlueprintGeneratedClass BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C
// Size: 0x3e8 (Inherited: 0x288)
struct ABP_SupplyDropRadioFlareActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UFortCollisionAudioComponent* FortCollisionAudio; // 0x290(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0x298(0x08)
	struct UStaticMeshComponent* Mesh; // 0x2a0(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x2a8(0x08)
	float Timeline_ThrowRotation_Alpha_0C5D02CA4737C6F55E978CAA17038410; // 0x2b0(0x04)
	enum class ETimelineDirection Timeline_ThrowRotation__Direction_0C5D02CA4737C6F55E978CAA17038410; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Timeline_ThrowRotation; // 0x2b8(0x08)
	bool bThrown; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	int32_t Bounces; // 0x2c4(0x04)
	struct FTimerHandle ProjectileSimulationTimerHandle; // 0x2c8(0x08)
	struct FScalableFloat MaxProjectileSimulationTime; // 0x2d0(0x28)
	struct FScalableFloat MaxAllowedBounces; // 0x2f8(0x28)
	bool bSupplyDropSpawned; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FTimerHandle SpawnSupplyDropTimerHandle; // 0x328(0x08)
	bool bPopped; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FRotator ThrowRotation; // 0x338(0x18)
	struct FRotator InitialRotation; // 0x350(0x18)
	double ThrowRotationLerpDuration; // 0x368(0x08)
	struct FScalableFloat LifespanAfterSupplyDropSpawn; // 0x370(0x28)
	struct FScalableFloat DurationAfterPrjStopToSpawnSupplyDrop; // 0x398(0x28)
	int32_t ConversationIndex; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UNiagaraSystem* NS_WaterSplash; // 0x3c8(0x08)
	struct USoundBase* WaterSplashSoundCue; // 0x3d0(0x08)
	struct UNiagaraComponent* FXSystemComponent; // 0x3d8(0x08)
	struct UFortCollisionAudioComponent* FortFlareIgniteAudio; // 0x3e0(0x08)

	void OnRep_bThrown(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.OnRep_bThrown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bPopped(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.OnRep_bPopped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PopFlare(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.PopFlare // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSupplyDropRadioData(struct FSupplyDropRadioDataStruct& Data); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.GetSupplyDropRadioData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartSpawnSupplyDropTimer(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.StartSpawnSupplyDropTimer // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnSupplyDrop(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.SpawnSupplyDrop // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSupplyDropRadioConversationIndex(int32_t Index); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.SetSupplyDropRadioConversationIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleProjectileSimulationTimerEnded(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.HandleProjectileSimulationTimerEnded // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ThrowFlare(struct FVector Velocity); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.ThrowFlare // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_ThrowRotation__FinishedFunc(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.Timeline_ThrowRotation__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_ThrowRotation__UpdateFunc(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.Timeline_ThrowRotation__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BP_SupplyDropRadioFlareActor_FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.BndEvt__BP_SupplyDropRadioFlareActor_FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BP_SupplyDropRadioFlareActor_FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.BndEvt__BP_SupplyDropRadioFlareActor_FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRep_ThrowRotation(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.OnRep_ThrowRotation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BP_SupplyDropRadioFlareActor_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.BndEvt__BP_SupplyDropRadioFlareActor_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecutePopCosmetic(); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.ExecutePopCosmetic // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_SupplyDropRadioFlareActor(int32_t EntryPoint); // Function BP_SupplyDropRadioFlareActor.BP_SupplyDropRadioFlareActor_C.ExecuteUbergraph_BP_SupplyDropRadioFlareActor // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

