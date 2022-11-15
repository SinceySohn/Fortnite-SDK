// BlueprintGeneratedClass BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C
// Size: 0x1018 (Inherited: 0xe98)
struct ABGA_Athena_RealityFlower_SeedPod_C : ABuildingRealitySeedPod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe98(0x08)
	struct UNiagaraComponent* NS_RealityPod_Pulse; // 0xea0(0x08)
	struct UNiagaraComponent* NS_RealityPod_Idle; // 0xea8(0x08)
	struct UAudioComponent* Audio; // 0xeb0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0xeb8(0x08)
	float Grow_SizePercent_86B45E174DE2455726BADBA7321F9397; // 0xec0(0x04)
	enum class ETimelineDirection Grow__Direction_86B45E174DE2455726BADBA7321F9397; // 0xec4(0x01)
	char pad_EC5[0x3]; // 0xec5(0x03)
	struct UTimelineComponent* Grow; // 0xec8(0x08)
	struct FScalableFloat Row_bCanBeDamaged; // 0xed0(0x28)
	struct FScalableFloat Row_bExplodeOnDeath; // 0xef8(0x28)
	struct FScalableFloat Row_SeedsToSpawnOnDeath_Min; // 0xf20(0x28)
	struct FScalableFloat Row_SeedsToSpawnOnDeath_Max; // 0xf48(0x28)
	struct FScalableFloat Row_Seeds_RadialSpacingVarianceMult; // 0xf70(0x28)
	struct FScalableFloat Row_SeedCollisionRadius; // 0xf98(0x28)
	struct FGameplayTagContainer Tags_IncomingDamageToIgnite; // 0xfc0(0x20)
	double Mesh_Scale; // 0xfe0(0x08)
	double Mesh_MaxScale; // 0xfe8(0x08)
	struct ABuildingGameplayActor* BGA_RealitySeed; // 0xff0(0x08)
	struct FGameplayTag GC_Die; // 0xff8(0x04)
	int32_t SeedsToSpawnOnDeath; // 0xffc(0x04)
	bool SkipDeathEffects; // 0x1000(0x01)
	bool CollisionEnabled; // 0x1001(0x01)
	char pad_1002[0x2]; // 0x1002(0x02)
	struct FGameplayTag GC_Damaged; // 0x1004(0x04)
	struct UFortAbilitySet* GAS_AbilitySet; // 0x1008(0x08)
	double Impact_TimeStamp; // 0x1010(0x08)

	struct FName GetMarkerDetailsId(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.GetMarkerDetailsId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct FGameplayTagContainer GetTargetTagsForQuestEvent(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.GetTargetTagsForQuestEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_CollisionEnabled(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.OnRep_CollisionEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSpawnedSeedTransform(int32_t SeedIndex, struct FTransform& SpawnTransform); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.GetSpawnedSeedTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetSpawnedSeedYaw(int32_t SpawnedSeedIndex, double& Yaw); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.GetSpawnedSeedYaw // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_Mesh_Scale(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.OnRep_Mesh_Scale // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Grow__FinishedFunc(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.Grow__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Grow__UpdateFunc(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.Grow__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void GrowOnSpawn(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.GrowOnSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.OnBuildingActorInitialized // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpawnSeedsOnDeath(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.SpawnSeedsOnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurieElementInteract_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.OnCurieElementInteract_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnCurieElementInteractBegun_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.OnCurieElementInteractBegun_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BGA_RealityFlower_SeedPod_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.BndEvt__BGA_RealityFlower_SeedPod_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Trigger FX Pulse(); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.Trigger FX Pulse // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_RealityFlower_SeedPod(int32_t EntryPoint); // Function BGA_Athena_RealityFlower_SeedPod.BGA_Athena_RealityFlower_SeedPod_C.ExecuteUbergraph_BGA_Athena_RealityFlower_SeedPod // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

