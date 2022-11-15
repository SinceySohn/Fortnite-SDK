// BlueprintGeneratedClass BP_DeimosRift.BP_DeimosRift_C
// Size: 0xd58 (Inherited: 0xb90)
struct ABP_DeimosRift_C : ABuildingRift {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb90(0x08)
	struct UParticleSystemComponent* P_Rift_IdleFog; // 0xb98(0x08)
	struct UStaticMeshComponent* SM_CubeRunes; // 0xba0(0x08)
	struct UAudioComponent* Deimos_Spawner_Loop_Sound; // 0xba8(0x08)
	struct UStaticMeshComponent* FogMesh; // 0xbb0(0x08)
	struct UBoxComponent* NoBuildZone; // 0xbb8(0x08)
	struct UParticleSystemComponent* P_Deimos_Rift_Dying; // 0xbc0(0x08)
	struct UStaticMeshComponent* CosmeticBaseMesh; // 0xbc8(0x08)
	struct UParticleSystemComponent* P_Deimos_RiftSpawn_DamageState; // 0xbd0(0x08)
	struct UStaticMeshComponent* CubeMesh; // 0xbd8(0x08)
	struct UPointLightComponent* PointLight; // 0xbe0(0x08)
	struct UMaterialInstanceDynamic* MaskedMID; // 0xbe8(0x08)
	struct UMaterialInstanceDynamic* OpaqueMID; // 0xbf0(0x08)
	struct UMaterialInstanceDynamic* CubeMat; // 0xbf8(0x08)
	struct UMaterialInstanceDynamic* CubeMatLOD1; // 0xc00(0x08)
	struct UMaterialInterface* BaseMaterial; // 0xc08(0x08)
	struct UGameplayEffect* GE_Destroyed; // 0xc10(0x08)
	struct FGameplayCueParameters CueParamsChargeUp; // 0xc18(0xd0)
	int32_t DamageState; // 0xce8(0x04)
	char pad_CEC[0x4]; // 0xcec(0x04)
	struct UMaterialInterface* BaseLODMaterial; // 0xcf0(0x08)
	struct UMaterialInterface* BaseMeshMat; // 0xcf8(0x08)
	struct USoundBase* Sound_StageOneExplode; // 0xd00(0x08)
	struct USoundBase* Sound_StageTwoExplode; // 0xd08(0x08)
	struct USoundBase* Sound_DeimosSpawnerLoop; // 0xd10(0x08)
	struct USoundBase* Sound_StageThreeBuildup; // 0xd18(0x08)
	struct UGameplayEffect* GE_DamagePerSpawn; // 0xd20(0x08)
	struct UGameplayEffect* GE_DamageReduction; // 0xd28(0x08)
	bool DoSpawnEffects; // 0xd30(0x01)
	char pad_D31[0x7]; // 0xd31(0x07)
	double SpawnAnimDuration; // 0xd38(0x08)
	struct FGameplayTag FiendSpawnFXGC; // 0xd40(0x04)
	struct FGameplayTag ChargeUpFXGC; // 0xd44(0x04)
	struct FGameplayTag SpawnFXGC; // 0xd48(0x04)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	double HitAnimLength; // 0xd50(0x08)

	void Get Spawn Meshes(struct TArray<struct UStaticMeshComponent*>& Meshes); // Function BP_DeimosRift.BP_DeimosRift_C.Get Spawn Meshes // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FlashCubeMaterial(double Length); // Function BP_DeimosRift.BP_DeimosRift_C.FlashCubeMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_DamageState(); // Function BP_DeimosRift.BP_DeimosRift_C.OnRep_DamageState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_DeimosRift.BP_DeimosRift_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_Cosmetic_RampUp(); // Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_RampUp // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_DeimosRift.BP_DeimosRift_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_DeimosRift.BP_DeimosRift_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_Cosmetic_Intro(); // Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Intro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_Cosmetic_Idle(); // Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Idle // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartedEncounterSpawn(struct AFortAIPawn* SpawnedAI); // Function BP_DeimosRift.BP_DeimosRift_C.OnStartedEncounterSpawn // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_DeimosRift.BP_DeimosRift_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged_Bind(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_DeimosRift.BP_DeimosRift_C.OnDamaged_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_Cosmetic_ShouldDie(); // Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_ShouldDie // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBuildingRiftSpawnedAI_Bind(); // Function BP_DeimosRift.BP_DeimosRift_C.OnBuildingRiftSpawnedAI_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartDynamicRiftSpawnCosmetics(); // Function BP_DeimosRift.BP_DeimosRift_C.StartDynamicRiftSpawnCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnEffects(); // Function BP_DeimosRift.BP_DeimosRift_C.SpawnEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateDamageState(double HealthPercent); // Function BP_DeimosRift.BP_DeimosRift_C.UpdateDamageState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_DeimosRift(int32_t EntryPoint); // Function BP_DeimosRift.BP_DeimosRift_C.ExecuteUbergraph_BP_DeimosRift // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

