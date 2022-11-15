// Class ChromeSharedRuntime.ChromeSoundComponentBase
// Size: 0xa0 (Inherited: 0xa0)
struct UChromeSoundComponentBase : UActorComponent {

	void SetupChromeAudio(struct AActor* Actor, bool bAdd, enum class ELacklusterChromeType ChromeType); // Function ChromeSharedRuntime.ChromeSoundComponentBase.SetupChromeAudio // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class ChromeSharedRuntime.ChromeBlobAnimInstance
// Size: 0x750 (Inherited: 0x6f0)
struct UChromeBlobAnimInstance : UCustomCharacterPartAnimInstance {
	struct FFortAnimInput_Zipline ZiplineInput; // 0x6f0(0x38)
	float LocalVelocityAngle; // 0x728(0x04)
	float LeanAngle; // 0x72c(0x04)
	float LeanAngleMultiplier; // 0x730(0x04)
	float LeanInterpolationSpeed; // 0x734(0x04)
	struct FRotator ActorRotationLastTick; // 0x738(0x18)
};

// Class ChromeSharedRuntime.ChromeGameFeatureData
// Size: 0x530 (Inherited: 0x520)
struct UChromeGameFeatureData : UFortGameFeatureData {
	struct TArray<struct FFortChromeComponentData> ChromeComponents; // 0x520(0x10)
};

// Class ChromeSharedRuntime.ApplyChromeComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UApplyChromeComponent : UActorComponent {
	struct TArray<struct UActorComponent*> NativePredefinedMeshComponents; // 0xa0(0x10)
};

// Class ChromeSharedRuntime.FortChromeSubsystem
// Size: 0x598 (Inherited: 0x30)
struct UFortChromeSubsystem : UWorldSubsystem {
	struct TArray<struct FLacklusterMaterialData> ChromeMaterialData; // 0x30(0x10)
	struct TArray<struct FLacklusterOriginalMaterialData> OriginalMaterialData; // 0x40(0x10)
	struct TMap<struct FName, float> ContainerMatScalarParamMap; // 0x50(0x50)
	struct TMap<struct FName, struct FLinearColor> ContainerMatVectorParamMap; // 0xa0(0x50)
	struct FGameplayTag CurieFireTag; // 0xf0(0x04)
	enum class ELacklusterActorType NativeNativeActorType; // 0xf4(0x01)
	enum class ELacklusterChromeType NativeNativeChromeType; // 0xf5(0x01)
	char pad_F6[0xa]; // 0xf6(0x0a)
	struct TArray<struct ABuildingFoundation*> StreamedInBuildingFoundations; // 0x100(0x10)
	struct TArray<struct ABuildingFoundation*> FullyChromedPreviewFoundations; // 0x110(0x10)
	struct FName ChromeTagName; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FGameplayTagQuery ApplyChromeMaterialsTagQuery; // 0x128(0x48)
	struct TArray<struct FFortChromeComponentData> ChromeComponents; // 0x170(0x10)
	struct FLacklusterData LacklusterData; // 0x180(0x360)
	struct TArray<struct AActor*> ActorsWaitingForChromeSetup; // 0x4e0(0x10)
	struct TMap<struct ABuildingFoundation*, bool> FoundationsWithChromeActors; // 0x4f0(0x50)
	char pad_540[0x28]; // 0x540(0x28)
	struct TArray<struct TSoftClassPtr<UObject>> ChromableActorClassDenyList; // 0x568(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> PhaseableActorClassDenyList; // 0x578(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> SharedChromeMIDClassDenyList; // 0x588(0x10)

	bool ShouldDelayASCCreation(); // Function ChromeSharedRuntime.FortChromeSubsystem.ShouldDelayASCCreation // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27c91e4
	void SetupChromeOnActor(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.SetupChromeOnActor // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RestoreActorOriginalMaterials(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.RestoreActorOriginalMaterials // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PawnHitActor(struct AFortPlayerPawn* Pawn, struct FHitResult& HitResult, struct AActor* HitActor); // Function ChromeSharedRuntime.FortChromeSubsystem.PawnHitActor // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x67b5e00
	void OnPlaylistDataReady(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function ChromeSharedRuntime.FortChromeSubsystem.OnPlaylistDataReady // (Final|Native|Protected|HasOutParms) // @ game+0x2be80e4
	void NativeSetupChromeOnActor(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.NativeSetupChromeOnActor // (Final|Native|Protected|BlueprintCallable) // @ game+0x272a404
	void NativeHandleVehicleModUpdated(struct AFortAthenaVehicle* Vehicle, struct FGameplayTag& ModTag); // Function ChromeSharedRuntime.FortChromeSubsystem.NativeHandleVehicleModUpdated // (Final|Native|Public|HasOutParms) // @ game+0x67b3fcc
	void NativeHandleContainerSearchedStateChanged(struct ABuildingContainer* BuildingContainer, bool bSearched); // Function ChromeSharedRuntime.FortChromeSubsystem.NativeHandleContainerSearchedStateChanged // (Final|Native|Public) // @ game+0x67b32e8
	void NativeHandleContainerRandomUpgradeApplied(struct ABuildingContainer* BuildingContainer, int32_t UpgradeIndex, struct FName& UpgradeLootTierGroup); // Function ChromeSharedRuntime.FortChromeSubsystem.NativeHandleContainerRandomUpgradeApplied // (Final|Native|Public|HasOutParms) // @ game+0x67b2190
	void NativeHandleContainerMeshSetChanged(struct ABuildingSMActor* BuildingSMActor, struct FMeshSet& NewMeshSet); // Function ChromeSharedRuntime.FortChromeSubsystem.NativeHandleContainerMeshSetChanged // (Final|Native|Public|HasOutParms) // @ game+0x67b1020
	bool IsActorPhaseable(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.IsActorPhaseable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x67acb60
	bool IsActorChromable(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.IsActorChromable // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x25a7798
	void InitLacklusterFunctionLibrary(); // Function ChromeSharedRuntime.FortChromeSubsystem.InitLacklusterFunctionLibrary // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct UMaterialInstanceDynamic* GetSharedChromeMID(struct AActor* Actor, struct UMaterialInterface* Parent, struct TMap<struct FName, struct UTexture*>& NamesToTexturesMap); // Function ChromeSharedRuntime.FortChromeSubsystem.GetSharedChromeMID // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x28349b8
	void GetOverlappingActorsOfClass(struct AActor* Actor, struct AActor* Class, struct TArray<struct AActor*>& OutOverlappingActors); // Function ChromeSharedRuntime.FortChromeSubsystem.GetOverlappingActorsOfClass // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67ac7dc
	void ApplyChromeToActor(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.ApplyChromeToActor // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class ChromeSharedRuntime.FortGameFeatureAction_AddChromeSubsystem
// Size: 0x50 (Inherited: 0x50)
struct UFortGameFeatureAction_AddChromeSubsystem : UFortGameFeatureAction_AddWorldSubsystem {
};

// Class ChromeSharedRuntime.LacklusterFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULacklusterFunctionLibrary : UBlueprintFunctionLibrary {

	bool UseNativeFunctions(); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.UseNativeFunctions // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13fb004
	void NativeUnbindChromeEvents(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeUnbindChromeEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b5a58
	void NativeStopBuildingAudio(struct ABuildingActor* BuildingActor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeStopBuildingAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b594c
	bool NativeShouldIgnoreMaterial(struct UMaterialInterface* Material); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeShouldIgnoreMaterial // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b582c
	void NativeSetupChromeOnActor(struct AActor* Actor, enum class ELacklusterActorType& ActorType, enum class ELacklusterChromeType& ChromeType, struct TArray<struct FLacklusterMaterialData>& ChromeMaterialData, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialData, struct TMap<struct FName, float>& ContainerMatScalarParamMap, struct TMap<struct FName, struct FLinearColor>& ContainerMatVectorParamMap); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeSetupChromeOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67b47d8
	void NativeSetChromeMaterials(struct TArray<struct FLacklusterMaterialData>& ChromeMaterialStructs, enum class ELacklusterChromeType ChromeType); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeSetChromeMaterials // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67b4700
	void NativeSetChromeAudio(struct AActor* Actor, bool bAdd, enum class ELacklusterChromeType ChromeType); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeSetChromeAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b44e4
	void NativeRestoreOriginalMaterials(struct AActor* Actor, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialDataArray); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeRestoreOriginalMaterials // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67b43a0
	bool NativeIsMaskedBlendMode(struct UMaterialInterface* MaterialInterface); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeIsMaskedBlendMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x67b4310
	enum class ELacklusterActorType NativeHandleActorTypeSpecialCases(enum class ELacklusterActorType ActorType, bool bIsMaskedMaterial, bool bIsChonkers); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeHandleActorTypeSpecialCases // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b0f24
	struct UApplyChromeComponent* NativeGetChromeVisualComponent(struct AActor* Actor, bool bCreateComponentIfNotFound); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeVisualComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b0dc4
	struct UMaterialInstance* NativeGetChromeTieredChestMaterial(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeTieredChestMaterial // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b0d44
	struct UChromeSoundComponentBase* NativeGetChromeSoundComponent(struct AActor* Actor, bool bCreateComponentIfNotFound); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeSoundComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x67b0bf4
	struct UMaterialInterface* NativeGetChromeMaterialOverride(bool bIsMaskedMaterial, bool bIsChonkers, enum class ELacklusterActorType ActorType, struct AActor* Actor, enum class ELacklusterChromeType ChromeType); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeMaterialOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b0a64
	bool NativeGetChromeChonkerTires(struct UMeshComponent* MeshComponent); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeChonkerTires // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b09e4
	void NativeGetChromeActorType(struct AActor* Actor, enum class ELacklusterChromeType& ChromeTypeOut, enum class ELacklusterActorType& ActorTypeOut); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeActorType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x206a578
	void NativeFindTexturesFromComponents(enum class ELacklusterActorType ActorType, struct AActor* Actor, struct TArray<struct FLacklusterMaterialData>& ChromeMaterialStructs, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialStructs); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeFindTexturesFromComponents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67b06b8
	struct FName NativeFindSetParameterName(enum class ELacklusterTextureGroup TextureGroup); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeFindSetParameterName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b0634
	struct TArray<struct FLacklusterTextureSet> NativeFindGetSetParameters(bool bIsMaskedMaterial, bool bIsChonkers, enum class ELacklusterActorType ActorType, struct UMeshComponent* MeshComponent); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeFindGetSetParameters // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67b04e4
	void NativeExecuteOwnerTypeFunctionality_PreChrome_Container(struct AActor* Actor, struct FGameplayTagContainer& ContainerTags, struct TMap<struct FName, float>& ContainerMatScalarParamMap, struct TMap<struct FName, struct FLinearColor>& ContainerMatVectorParamMap); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeExecuteOwnerTypeFunctionality_PreChrome_Container // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67b00e8
	void NativeExecuteOwnerTypeFunctionality_PreChrome(struct AActor* Actor, enum class ELacklusterActorType ActorType, struct FGameplayTagContainer& ContainerTags, struct TMap<struct FName, float>& ContainerMatScalarParamMap, struct TMap<struct FName, struct FLinearColor>& ContainerMatVectorParamMap); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeExecuteOwnerTypeFunctionality_PreChrome // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67afc74
	void NativeExecuteOwnerTypeFunctionality_PostChrome_Vehicle(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeExecuteOwnerTypeFunctionality_PostChrome_Vehicle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67af858
	void NativeExecuteOwnerTypeFunctionality_PostChrome_Container(struct AActor* Actor, struct FGameplayTagContainer& ContainerTags, struct TMap<struct FName, float>& ContainerMatScalarParamMap, struct TMap<struct FName, struct FLinearColor>& ContainerMatVectorParamMap); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeExecuteOwnerTypeFunctionality_PostChrome_Container // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67af078
	void NativeExecuteOwnerTypeFunctionality_PostChrome(struct AActor* Actor, enum class ELacklusterActorType ActorType, struct FGameplayTagContainer& ContainerTags, struct TMap<struct FName, float>& ContainerMatScalarParamMap, struct TMap<struct FName, struct FLinearColor>& ContainerMatVectorParamMap); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeExecuteOwnerTypeFunctionality_PostChrome // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67ae2f8
	bool NativeExcludeFromChroming(struct USceneComponent* Component); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeExcludeFromChroming // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67ae278
	bool NativeDoesActorSupportChromeSoundComponent(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeDoesActorSupportChromeSoundComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x67adf7c
	void NativeDisableShadowProxyWPO(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeDisableShadowProxyWPO // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67addcc
	bool NativeCastToSpecificClasses(struct AActor* Actor, enum class ELacklusterChromeType ChromeTypeIn, enum class ELacklusterChromeType& ChromeTypeOut, enum class ELacklusterActorType& ActorTypeOut); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeCastToSpecificClasses // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67ada40
	bool NativeCastToParentClasses(struct AActor* Actor, enum class ELacklusterActorType& ActorTypeOut); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeCastToParentClasses // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67ad918
	void NativeBindChromeEvents(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeBindChromeEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67ad520
	bool NativeAreWeOverridingAudio(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeAreWeOverridingAudio // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x67ad460
	void NativeApplyChromeToActor(struct AActor* Actor, enum class ELacklusterActorType& ActorType, enum class ELacklusterChromeType& ChromeType, struct TArray<struct FLacklusterMaterialData>& ChromeMaterialData, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialData, struct TMap<struct FName, float>& ContainerMatScalarParamMap, struct TMap<struct FName, struct FLinearColor>& ContainerMatVectorParamMap); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeApplyChromeToActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x206a884
	void NativeApplyChromeMaterial(struct AActor* Actor, struct TArray<struct FLacklusterMaterialData>& ChromeMaterialStructs, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialStructs, enum class ELacklusterChromeType ChromeType, enum class ELacklusterActorType OverrideActorType); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeApplyChromeMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67ace68
	void NativeAddTextureData(enum class ELacklusterActorType ActorType, struct AActor* Actor, struct TArray<struct FLacklusterMaterialData>& ChromeMaterialStructs, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialStructs, int32_t MaterialIndex, struct UMaterialInterface* Material, struct UMeshComponent* MeshComponent); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeAddTextureData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67acc14
};

