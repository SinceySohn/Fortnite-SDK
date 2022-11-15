// BlueprintGeneratedClass B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C
// Size: 0xe91 (Inherited: 0xba0)
struct AB_Prj_Bullet_DMR22_C : AFortProjectileAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xba0(0x08)
	struct UNiagaraComponent* NS_CoreSniper_Bullet_Trail; // 0xba8(0x08)
	struct UStaticMeshComponent* TracerMesh; // 0xbb0(0x08)
	struct UParticleSystemComponent* P_Sniper_Bullet_Trail; // 0xbb8(0x08)
	struct TMap<enum class EPhysicalSurface, struct USoundBase*> SurfaceImpactSFX; // 0xbc0(0x50)
	struct FVector DecalSize; // 0xc10(0x18)
	struct FScalableFloat ProjectileGravityScale; // 0xc28(0x28)
	struct UParticleSystem* WaterImpactFX; // 0xc50(0x08)
	struct FHitResult WaterHit; // 0xc58(0xe0)
	struct UPhysicalMaterial* WaterHitMat; // 0xd38(0x08)
	double WaterDepthTrace; // 0xd40(0x08)
	int32_t WaterIndexTrace; // 0xd48(0x04)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	struct FVector TraceImpactLocation; // 0xd50(0x18)
	struct FVector TraceImpactNormal; // 0xd68(0x18)
	struct USoundBase* Sniper_Rifle_WaterImpactSound; // 0xd80(0x08)
	bool bHasPlayedWaterSound; // 0xd88(0x01)
	char pad_D89[0x7]; // 0xd89(0x07)
	struct UNiagaraSystem* NiagaraWaterImpactFX; // 0xd90(0x08)
	struct FHitResult CachedHit; // 0xd98(0xe0)
	struct FGameplayEffectContextHandle DamageContext; // 0xe78(0x18)
	bool IsPredicted; // 0xe90(0x01)

	void GetSurfaceTypeFromInfo(enum class EPhysicalSurface Surface Type, struct AActor* Actor, enum class EPhysicalSurface& Surface); // Function B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C.GetSurfaceTypeFromInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void PlayImpactSFX(enum class EPhysicalSurface Surface Type, struct AActor* Actor); // Function B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C.PlayImpactSFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap); // Function B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSniperTraceWaterHit(struct FHitResult& WaterHit, struct AFortWaterBodyActor* WaterBody); // Function B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C.OnSniperTraceWaterHit // (BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Bullet_DMR22(int32_t EntryPoint); // Function B_Prj_Bullet_DMR22.B_Prj_Bullet_DMR22_C.ExecuteUbergraph_B_Prj_Bullet_DMR22 // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

