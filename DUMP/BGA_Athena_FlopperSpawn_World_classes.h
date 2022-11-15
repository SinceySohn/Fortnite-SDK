// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C
// Size: 0x1072 (Inherited: 0xef0)
struct ABGA_Athena_FlopperSpawn_World_C : ABGA_Athena_FlopperSpawn_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UMinimapHiddenComponent* MinimapHidden; // 0xef8(0x08)
	struct UAudioComponent* Audio_FlopperLoop; // 0xf00(0x08)
	struct UNiagaraComponent* NS_Flopper_Spot; // 0xf08(0x08)
	double Time_Interval; // 0xf10(0x08)
	double OffsetDistance; // 0xf18(0x08)
	double TimeIntervalOffset; // 0xf20(0x08)
	struct UNiagaraSystem* NS_FX_Jump; // 0xf28(0x08)
	struct UParticleSystem* FX_Jump; // 0xf30(0x08)
	struct FVector TraceOffsetAmount; // 0xf38(0x18)
	struct AFortWaterBodyActor* FortWaterBody; // 0xf50(0x08)
	struct FVector WaterPlaneOffset; // 0xf58(0x18)
	struct USoundBase* Sound_AmbientFishFlop; // 0xf70(0x08)
	struct FVector ExplosionItemSpawnOffset; // 0xf78(0x18)
	struct FGameplayTagContainer T_FlopperSpawn; // 0xf90(0x20)
	double MinDistanceToExplosion; // 0xfb0(0x08)
	struct TMap<struct FGameplayTag, struct FName> MAP_TagToLootExplode; // 0xfb8(0x50)
	struct FName ExplodeItemsToDrop; // 0x1008(0x04)
	int32_t ExplodeRolls; // 0x100c(0x04)
	struct FVector WaterNormalHit; // 0x1010(0x18)
	bool bHasWrittenAnalytic; // 0x1028(0x01)
	char pad_1029[0x7]; // 0x1029(0x07)
	struct FGameplayTagContainer BattleLabProjectileTag; // 0x1030(0x20)
	struct FGameplayTagContainer ExplosionSpawnTag; // 0x1050(0x20)
	bool TestForWaterOnStart; // 0x1070(0x01)
	bool SpawnInstance?; // 0x1071(0x01)

	void Get Loot Tier(bool IsExplosion, bool IsProFishingRod, struct AActor* Player, struct FName& Output_Get); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.Get Loot Tier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExplosionQuestProgress(struct AActor* Instigator, struct AActor* DamageCauser); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExplosionQuestProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_FortWaterBody(); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnRep_FortWaterBody // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	double RandomTimeInterval(); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.RandomTimeInterval // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SpawnJumpingFish(); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnJumpingFish // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SpawnFromExplosion(struct AActor* Instigator, struct AActor* DamageCauser); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnFromExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnItem(struct AActor* Target, bool Hooked, struct USceneComponent* HookComponent, struct FVector SpawnLoc, struct AActor* Player, double ItemSpawnDelay, bool CaughtWithFishingRod, bool CaughtWithHappyGhost, struct AActor* ItemUsedToFish, struct APrj_Athena_FloppingRabbit_C* Projectile, struct FGameplayTagContainer Required Tags); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_World(int32_t EntryPoint); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_World // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

