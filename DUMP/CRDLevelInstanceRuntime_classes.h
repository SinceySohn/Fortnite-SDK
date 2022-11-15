// Class CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
// Size: 0x338 (Inherited: 0x330)
struct AFortAthenaMutator_LevelInstanceDevice : AFortAthenaMutator {
	struct ALevelInstanceGameplayVolume* CachedGameplayVolume; // 0x330(0x08)
};

// Class CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
// Size: 0x498 (Inherited: 0x310)
struct ALevelInstanceGameplayVolume : AGameplayVolume {
	char pad_310[0x8]; // 0x310(0x08)
	struct FMulticastInlineDelegate OnLevelInstanceResolved; // 0x318(0x10)
	char pad_328[0x30]; // 0x328(0x30)
	struct FMulticastInlineDelegate OnDisabledStateChanged; // 0x358(0x10)
	struct FMulticastInlineDelegate OnLevelInstanceGuidChanged; // 0x368(0x10)
	struct FMulticastInlineDelegate OnLevelInstanceNameChanged; // 0x378(0x10)
	struct FMulticastInlineDelegate OnLevelInstanceSizeChanged; // 0x388(0x10)
	struct FMulticastInlineDelegate OnLevelInstanceContentCollectionChanged; // 0x398(0x10)
	char pad_3A8[0x1]; // 0x3a8(0x01)
	bool bEditMode; // 0x3a9(0x01)
	bool bDisabled; // 0x3aa(0x01)
	enum class ESpatialLoadingState LoadingState; // 0x3ab(0x01)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct FString LevelInstanceName; // 0x3b0(0x10)
	bool bInstanceLoaded; // 0x3c0(0x01)
	bool bWantsLevelLoaded; // 0x3c1(0x01)
	char pad_3C2[0x1]; // 0x3c2(0x01)
	bool bConvertStructuresToProps; // 0x3c3(0x01)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct AFortMinigame* CachedMinigame; // 0x3c8(0x08)
	struct UFortMutatorListComponent* MutatorListComponent; // 0x3d0(0x08)
	struct UFortClassTrackerComponent* ClassFilterComponent; // 0x3d8(0x08)
	struct TArray<ClassPtrProperty> BlacklistedClasses; // 0x3e0(0x10)
	char pad_3F0[0x50]; // 0x3f0(0x50)
	struct FGuid LevelInstanceSaveActorGuid; // 0x440(0x10)
	struct AFortLevelInstanceSaveActor* LevelInstanceSaveActor; // 0x450(0x08)
	char pad_458[0x40]; // 0x458(0x40)

	void SetWantsLevelLoaded(bool bInWantsLevelLoaded); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetWantsLevelLoaded // (Final|Native|Public|BlueprintCallable) // @ game+0x68429dc
	void SetReadyForInstantiation(bool bReady); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation // (Final|Native|Protected|BlueprintCallable) // @ game+0x684295c
	void SetLevelInstanceName(struct FString InName); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName // (Final|Native|Public|BlueprintCallable) // @ game+0x6842808
	void SetLevelInstanceContentCollection(struct TSoftObjectPtr<UFortCreativeActorCollection> ContentCollection); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x6842750
	void SetLevelInstanceActorGuid(struct FGuid InLevelInstanceActorGuid); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x68426c0
	void SetEditMode(bool bInEditMode); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode // (Final|Native|Public|BlueprintCallable) // @ game+0x6842608
	void RemoveActorWhenEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay // (Final|Native|Protected) // @ game+0x6842544
	void RemoveActorWhenDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenDied // (Final|Native|Protected|HasDefaults) // @ game+0x68421d0
	void OnVolumeChanged(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRep_IsDisabled(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled // (Final|Native|Protected) // @ game+0x68421bc
	void OnRep_InstanceLoaded(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded // (Final|Native|Protected) // @ game+0x68421bc
	void OnRep_EditMode(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode // (Final|Native|Protected) // @ game+0x68421bc
	void OnMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged // (Final|Native|Protected) // @ game+0x68420f8
	void LevelInstanceSizeChanged(struct AActor* InstigatorActor); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged // (Final|Native|Protected) // @ game+0x6842078
	void LevelInstanceNameChanged(struct FString Name); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged // (Final|Native|Protected) // @ game+0x6841f24
	void LevelInstanceContentCollectionChanged(struct AActor* InstigatorActor, struct TSoftObjectPtr<UFortCreativeActorCollection> ContentCollection); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged // (Final|Native|Protected) // @ game+0x6841e2c
	void LevelInstanceContentChanged(struct AActor* InstigatorActor); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged // (Final|Native|Protected) // @ game+0x6841dac
	void LevelInstanceBeingDestroyed(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed // (Final|Native|Protected) // @ game+0x6841d98
	bool IsPreviewActor(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6841d74
	bool IsInEditMode(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6841d5c
	bool IsDisabled(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6841d44
	void InstantiateFromLevelInstanceSaveActor(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor // (Final|Native|Protected|BlueprintCallable) // @ game+0x6841d30
	void HandleActorHealthChanged(struct AActor* Actor, float NewHealth); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged // (Final|Native|Protected) // @ game+0x6841c74
	struct FString GetLevelInstanceName(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6841c00
	struct AFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor // (Final|Native|Public|BlueprintCallable) // @ game+0x6841bdc
	void CheckForOverlappingVolumes(); // Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes // (Final|Native|Protected|BlueprintCallable) // @ game+0x6841bc8
};

// Class CRDLevelInstanceRuntime.LevelInstanceItemListComponent
// Size: 0x128 (Inherited: 0x128)
struct ULevelInstanceItemListComponent : UFortMinigameItemContainerComponent {
};

