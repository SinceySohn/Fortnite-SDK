// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C
// Size: 0xdf0 (Inherited: 0xbb8)
struct AB_Prj_Athena_Grenade_MolotovCocktail_C : AB_Prj_Athena_Grenade_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbb8(0x08)
	struct UNiagaraComponent* Niagara_Projectile_Particles; // 0xbc0(0x08)
	struct FVector Hit Location; // 0xbc8(0x18)
	struct USoundBase* Bottle Smash Audio Cue; // 0xbe0(0x08)
	struct USoundBase* Ignite Audio Cue; // 0xbe8(0x08)
	struct FVector Hit Normal; // 0xbf0(0x18)
	struct TArray<struct FVector> ProjectileSpawnVectors; // 0xc08(0x10)
	struct FScalableFloat SpawnedProjectileMinSpeed; // 0xc18(0x28)
	struct FScalableFloat SpawnedProjectileMaxSpeed; // 0xc40(0x28)
	struct FScalableFloat ConeHalfAngleInDegrees; // 0xc68(0x28)
	struct FScalableFloat FireBallsToSpawn; // 0xc90(0x28)
	bool CurieActivated; // 0xcb8(0x01)
	char pad_CB9[0x7]; // 0xcb9(0x07)
	struct FScalableFloat DoWeUseHomingProjectile; // 0xcc0(0x28)
	struct FVector ReflectionVector; // 0xce8(0x18)
	double FireflyProjectileAngleExtreme; // 0xd00(0x08)
	struct FVector FireflyProjectileDirection; // 0xd08(0x18)
	double FireflyProjectileRadius_Min; // 0xd20(0x08)
	double FireflyProjectileRadius_Max; // 0xd28(0x08)
	struct FVector FireflyProjectileEndPoint; // 0xd30(0x18)
	int32_t NumProjectileSpawned; // 0xd48(0x04)
	int32_t NumProjectilesToSpawn; // 0xd4c(0x04)
	struct FVector NewTemp; // 0xd50(0x18)
	bool EnteredWater; // 0xd68(0x01)
	bool Hit; // 0xd69(0x01)
	char pad_D6A[0x6]; // 0xd6a(0x06)
	struct UFXSystemAsset* Sound_EnterWater; // 0xd70(0x08)
	struct UFortWorldItemDefinition* ItemToSpawn_Molotov; // 0xd78(0x08)
	bool CanInteractWithWater; // 0xd80(0x01)
	char pad_D81[0xf]; // 0xd81(0x0f)
	struct FTransform SpawnBGATransform; // 0xd90(0x60)

	void FireflyProjectileLogic(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.FireflyProjectileLogic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Drunk Projectiles(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Drunk Projectiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurieActive_7575DCC3440AA42836D7988BCA6485E5(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.OnCurieActive_7575DCC3440AA42836D7988BCA6485E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void HasEnteredWater(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.HasEnteredWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Defer BGA Spawn(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Defer BGA Spawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail(int32_t EntryPoint); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

