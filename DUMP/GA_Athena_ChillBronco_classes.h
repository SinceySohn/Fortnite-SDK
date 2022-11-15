// BlueprintGeneratedClass GA_Athena_ChillBronco.GA_Athena_ChillBronco_C
// Size: 0xf48 (Inherited: 0xf30)
struct UGA_Athena_ChillBronco_C : UGA_Athena_Consumable_Throw_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf30(0x08)
	double Added_X_SpawnRotation; // 0xf38(0x08)
	double Added_Y_SpawnRotation; // 0xf40(0x08)

	void SpawnThrownProjectile(struct AFortProjectileBase* ProjectileClass, struct FVector& ProjectileSpawnLocation, struct FRotator& ProjectileSpawnDirection, struct FFortGameplayEffectContainerSpec HitEffectContainerSpec, struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec, double ProjectileInitialSpeed, double ProjectileGravityScale, struct AFortProjectileBase*& SpawnedProjectile); // Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.SpawnThrownProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnProjectileSpawned(struct AFortProjectileBase* SpawnedProjectile); // Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.OnProjectileSpawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChillBronco(int32_t EntryPoint); // Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.ExecuteUbergraph_GA_Athena_ChillBronco // (Final|UbergraphFunction) // @ game+0xdef49c
};

