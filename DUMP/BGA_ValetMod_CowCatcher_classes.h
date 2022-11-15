// BlueprintGeneratedClass BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C
// Size: 0xa60 (Inherited: 0x9d8)
struct ABGA_ValetMod_CowCatcher_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x9e0(0x08)
	struct TScriptInterface<IFortVehicleInterface> AttachedVehicle; // 0x9e8(0x10)
	double SpinMag; // 0x9f8(0x08)
	struct USoundBase* CowCatcherRemovedSound; // 0xa00(0x08)
	struct UFXSystemAsset* FX_CowCatcherApplied_NS; // 0xa08(0x08)
	struct USoundBase* CowCatcherAppliedSound; // 0xa10(0x08)
	double Health%ToShowDmgCrinkle; // 0xa18(0x08)
	double MaxCrinkleSeverity; // 0xa20(0x08)
	double HealthMaterialQuantizeSteps; // 0xa28(0x08)
	struct UFXSystemAsset* FX_CowCatcherRemoved_NS; // 0xa30(0x08)
	bool BindVehicleSkeletalHitEvents; // 0xa38(0x01)
	bool StartTrackingVehicleSkeletalMeshHits; // 0xa39(0x01)
	char pad_A3A[0x6]; // 0xa3a(0x06)
	struct FGameplayTagContainer HealingTag; // 0xa40(0x20)

	void UpdateDamageMaterials(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.UpdateDamageMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateLaunchDirection(struct FVector& LaunchDirection); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.CalculateLaunchDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool CanDestroyBuilding(struct AActor* Actor); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.CanDestroyBuilding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector RandomizeSpinThrust(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.RandomizeSpinThrust // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetAttachedVehicle(struct TScriptInterface<IFortVehicleInterface> AttachedVehicle); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.SetAttachedVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HealthChanged(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupVehicleSkeletalHitNotifications(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.SetupVehicleSkeletalHitNotifications // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void VehicleSkeletalMeshHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.VehicleSkeletalMeshHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IgnoreEarlyCollisionOver(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.IgnoreEarlyCollisionOver // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SFX(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.SFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindVehicleHealthEvents(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.BindVehicleHealthEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnVehicleOwnerOutOfHealth(struct AFortAthenaVehicle* DeadVehicle, struct FGameplayTagContainer& InTags, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.OnVehicleOwnerOutOfHealth // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOwnerVehicleExploded(struct AController* LastDamageInstigator, struct AFortAthenaVehicle* Vehicle); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.OnOwnerVehicleExploded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanupOwnerVehicleHealthBindings(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.CleanupOwnerVehicleHealthBindings // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreativeCleanup(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.CreativeCleanup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCreativeNullOwnerDestroy(); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.HandleCreativeNullOwnerDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_ValetMod_CowCatcher(int32_t EntryPoint); // Function BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C.ExecuteUbergraph_BGA_ValetMod_CowCatcher // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

