// BlueprintGeneratedClass BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C
// Size: 0xb58 (Inherited: 0x9e0)
struct ABGA_Barricade_CowCatcher_C : ACowCatcherBarricadeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct UFortSoundIndicatorComponent* SoundIndicator; // 0x9e8(0x08)
	struct UBoxComponent* DestructionCollision; // 0x9f0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x9f8(0x08)
	struct UStaticMeshComponent* CowCatcherSM; // 0xa00(0x08)
	struct USoundBase* CowCatcherAppliedSound; // 0xa08(0x08)
	struct TArray<struct AActor*> PendingDestructActors; // 0xa10(0x10)
	double SpawnZOffset; // 0xa20(0x08)
	struct UFXSystemAsset* FX_CowCatcherApplied_NS; // 0xa28(0x08)
	struct AActor* LinkedSurfaceActor; // 0xa30(0x08)
	struct FGameplayTag GC_OnDeath; // 0xa38(0x04)
	char pad_A3C[0x4]; // 0xa3c(0x04)
	double DownwardTraceLength; // 0xa40(0x08)
	struct FGameplayTag GC_OnSpawn; // 0xa48(0x04)
	bool OnDeath?; // 0xa4c(0x01)
	bool ExecuteGC?; // 0xa4d(0x01)
	char pad_A4E[0x2]; // 0xa4e(0x02)
	double MaxCrinkleSeverity; // 0xa50(0x08)
	double Health%ToShowDmgCrinkle; // 0xa58(0x08)
	double HealthMaterialQuantizeSteps; // 0xa60(0x08)
	char pad_A68[0x8]; // 0xa68(0x08)
	struct FTransform RepSnapTransform; // 0xa70(0x60)
	bool OnSpawn?; // 0xad0(0x01)
	char pad_AD1[0x7]; // 0xad1(0x07)
	struct FScalableFloat HF_EnviroDamage; // 0xad8(0x28)
	struct FScalableFloat HF_SpawnPickupVSArmor; // 0xb00(0x28)
	struct FTimerHandle ActivateDeploySafetyTimer; // 0xb28(0x08)
	struct FScalableFloat HF_CanBlockBuilding?; // 0xb30(0x28)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Filter Actors to Ignore(struct AActor* HitActor, bool& ValidActor); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.Filter Actors to Ignore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool CanSpawnOnActor?(struct AActor* TestActor); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.CanSpawnOnActor? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool CanDestroyBelow?(struct ABuildingActor* TestActor, struct FVector Normal); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.CanDestroyBelow? // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UpdateDamageMaterials(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.UpdateDamageMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetAllOverlapping(struct TArray<struct AActor*>& Overlapped, bool& Success?); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.GetAllOverlapping // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void HideDeployMaterialAnimation(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.HideDeployMaterialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateDeployMaterialAnimation(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.ActivateDeployMaterialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_OnSpawn?(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.OnRep_OnSpawn? // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_OnDeath?(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.OnRep_OnDeath? // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SnapToSurface(double TraceLength, struct TArray<struct AActor*>& IgnoredActors, bool& ReturnedHit?); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.SnapToSurface // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyAllOverlapping(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.DestroyAllOverlapping // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyAndSpawnPickup(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.DestroyAndSpawnPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BGA_Barricade_CowCatcher_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.BndEvt__BGA_Barricade_CowCatcher_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPlacementBlockedByPawnChanged(bool bBlockedByPawn); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.OnPlacementBlockedByPawnChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HealthChangedOnClient(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.HealthChangedOnClient // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBuildingRule(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.SetBuildingRule // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Barricade_CowCatcher(int32_t EntryPoint); // Function BGA_Barricade_CowCatcher.BGA_Barricade_CowCatcher_C.ExecuteUbergraph_BGA_Barricade_CowCatcher // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

