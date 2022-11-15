// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C
// Size: 0xa61 (Inherited: 0xa20)
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C : AFortProjectile_DrunkHoming {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UAudioComponent* FireflyProjectileAudio; // 0xa28(0x08)
	struct UNiagaraComponent* Fire_Trail_Niagara; // 0xa30(0x08)
	double Fire Plane Spawn Offset; // 0xa38(0x08)
	bool DoesMeshAngleNeedAdjusted; // 0xa40(0x01)
	char pad_A41[0x7]; // 0xa41(0x07)
	struct ABuildingGameplayActor* BGAToSpawn; // 0xa48(0x08)
	bool HasHit; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
	struct USoundBase* Sound_Explode; // 0xa58(0x08)
	bool IsHomingToGround; // 0xa60(0x01)

	struct FTransform Find Mesh Angle(struct FVector HitLoc, struct FVector HitNotmal); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.Find Mesh Angle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Landed In Water(); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.Landed In Water // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HasNotLandedFadeOut(); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.HasNotLandedFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BeginDrunkenMovement(); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.BeginDrunkenMovement // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayClientFX(struct FVector HitLocationData); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.PlayClientFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile(int32_t EntryPoint); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

