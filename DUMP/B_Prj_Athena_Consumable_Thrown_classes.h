// BlueprintGeneratedClass B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C
// Size: 0xae1 (Inherited: 0xa20)
struct AB_Prj_Athena_Consumable_Thrown_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UNiagaraComponent* Niagara_Trail; // 0xa28(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0xa30(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xa38(0x08)
	struct UParticleSystemComponent* FX_Trail; // 0xa40(0x08)
	struct UFortWorldItemDefinition* ItemDefinition; // 0xa48(0x08)
	double Projectile Max Lifetime; // 0xa50(0x08)
	bool bHasExploded?; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct FVector Impact Location; // 0xa60(0x18)
	double FX Linger Time; // 0xa78(0x08)
	struct FTimerHandle Lifespan Timer; // 0xa80(0x08)
	struct FVector SpawnPositionOffset; // 0xa88(0x18)
	struct AFortPickup* PickUp; // 0xaa0(0x08)
	struct UFXSystemAsset* SpawnFX; // 0xaa8(0x08)
	struct UFXSystemAsset* SpawnFX_Water; // 0xab0(0x08)
	struct UFXSystemAsset* Bounce Off FX; // 0xab8(0x08)
	struct USoundBase* SpawnSound; // 0xac0(0x08)
	struct USoundBase* Splash Sound ; // 0xac8(0x08)
	double WaterSpawnDelay; // 0xad0(0x08)
	struct USoundBase* ThrowSoundAttachedToPlayer; // 0xad8(0x08)
	bool ShouldUseRandomRotationWhenSpawningPickUp; // 0xae0(0x01)

	void PlayThrowSound(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.PlayThrowSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Deactivate Trail FX System(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Deactivate Trail FX System // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Pickup Spawned(struct AFortPickup* Spawned Pickup); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.On Pickup Spawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Spawned Pickup Optional Owner PC(struct AFortPlayerController*& Optional Owner PC); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Get Spawned Pickup Optional Owner PC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Pickup(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Pickup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Impact Location(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Impact Location // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Timeout(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Timeout // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHomingPassedTarget(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnHomingPassedTarget // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnReachedLockTargetDistanceThreshold(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnReachedLockTargetDistanceThreshold // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBounce(struct FHitResult& Hit); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SpawnedItemFx(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnedItemFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Mark(struct AActor* NewParam); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Mark // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void SpawnItem(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WaterImpactItemFX(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.WaterImpactItemFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetItemDefinition(struct UFortWorldItemDefinition* In Item Definition); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SetItemDefinition // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Broadcast Pickup Projectile Created(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Broadcast Pickup Projectile Created // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown(int32_t EntryPoint); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

