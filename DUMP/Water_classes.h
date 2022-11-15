// Class Water.BuoyancyComponent
// Size: 0x208 (Inherited: 0xa0)
struct UBuoyancyComponent : UActorComponent {
	struct TArray<struct FSphericalPontoon> Pontoons; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnEnteredWaterDelegate; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnExitedWaterDelegate; // 0xc0(0x10)
	struct FBuoyancyData BuoyancyData; // 0xd0(0x90)
	struct TArray<struct UWaterBodyComponent*> CurrentWaterBodyComponents; // 0x160(0x10)
	struct UPrimitiveComponent* SimulatingComponent; // 0x170(0x08)
	char pad_178[0x90]; // 0x178(0x90)

	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon); // Function Water.BuoyancyComponent.OnPontoonExitedWater // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x64b8f8c
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon); // Function Water.BuoyancyComponent.OnPontoonEnteredWater // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x64b8e90
	bool IsOverlappingWaterBody(); // Function Water.BuoyancyComponent.IsOverlappingWaterBody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2be498c
	bool IsInWaterBody(); // Function Water.BuoyancyComponent.IsInWaterBody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8e38
	void GetLastWaterSurfaceInfo(struct FVector& OutWaterPlaneLocation, struct FVector& OutWaterPlaneNormal, struct FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, struct FVector& OutWaterVelocity); // Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x64b83f4
	struct TArray<struct UWaterBodyComponent*> GetCurrentWaterBodyComponents(); // Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8144
};

// Class Water.BuoyancyManager
// Size: 0x350 (Inherited: 0x288)
struct ABuoyancyManager : AActor {
	char pad_288[0x50]; // 0x288(0x50)
	struct TArray<struct UBuoyancyComponent*> BuoyancyComponents; // 0x2d8(0x10)
	char pad_2E8[0x68]; // 0x2e8(0x68)

	bool GetBuoyancyComponentManager(struct UObject* WorldContextObject, struct ABuoyancyManager*& Manager); // Function Water.BuoyancyManager.GetBuoyancyComponentManager // (Final|Native|Static|Public|HasOutParms) // @ game+0x64b7f80
};

// Class Water.EnvQueryTest_InsideWaterBody
// Size: 0x200 (Inherited: 0x1f8)
struct UEnvQueryTest_InsideWaterBody : UEnvQueryTest {
	bool bIncludeWaves; // 0x1f8(0x01)
	bool bSimpleWaves; // 0x1f9(0x01)
	bool bIgnoreExclusionVolumes; // 0x1fa(0x01)
	char pad_1FB[0x5]; // 0x1fb(0x05)
};

// Class Water.GerstnerWaterWaveGeneratorBase
// Size: 0x28 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorBase : UObject {

	void GenerateGerstnerWaves(struct TArray<struct FGerstnerWave>& OutWaves); // Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x64b7e44
};

// Class Water.GerstnerWaterWaveGeneratorSimple
// Size: 0x60 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSimple : UGerstnerWaterWaveGeneratorBase {
	int32_t NumWaves; // 0x28(0x04)
	int32_t Seed; // 0x2c(0x04)
	float Randomness; // 0x30(0x04)
	float MinWavelength; // 0x34(0x04)
	float MaxWavelength; // 0x38(0x04)
	float WavelengthFalloff; // 0x3c(0x04)
	float MinAmplitude; // 0x40(0x04)
	float MaxAmplitude; // 0x44(0x04)
	float AmplitudeFalloff; // 0x48(0x04)
	float WindAngleDeg; // 0x4c(0x04)
	float DirectionAngularSpreadDeg; // 0x50(0x04)
	float SmallWaveSteepness; // 0x54(0x04)
	float LargeWaveSteepness; // 0x58(0x04)
	float SteepnessFalloff; // 0x5c(0x04)
};

// Class Water.GerstnerWaterWaveGeneratorSpectrum
// Size: 0x40 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSpectrum : UGerstnerWaterWaveGeneratorBase {
	enum class EWaveSpectrumType SpectrumType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FGerstnerWaveOctave> Octaves; // 0x30(0x10)
};

// Class Water.WaterWavesBase
// Size: 0x28 (Inherited: 0x28)
struct UWaterWavesBase : UObject {
};

// Class Water.WaterWaves
// Size: 0x28 (Inherited: 0x28)
struct UWaterWaves : UWaterWavesBase {
};

// Class Water.GerstnerWaterWaves
// Size: 0x48 (Inherited: 0x28)
struct UGerstnerWaterWaves : UWaterWaves {
	struct UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator; // 0x28(0x08)
	struct TArray<struct FGerstnerWave> GerstnerWaves; // 0x30(0x10)
	float MaxWaveHeight; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Water.GerstnerWaterWaveSubsystem
// Size: 0x48 (Inherited: 0x30)
struct UGerstnerWaterWaveSubsystem : UEngineSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Water.LakeCollisionComponent
// Size: 0x550 (Inherited: 0x530)
struct ULakeCollisionComponent : UPrimitiveComponent {
	struct UBodySetup* CachedBodySetup; // 0x530(0x08)
	struct FVector BoxExtent; // 0x538(0x18)
};

// Class Water.NiagaraDataInterfaceWater
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceWater : UNiagaraDataInterface {
	struct UWaterBodyComponent* SourceBodyComponent; // 0x38(0x08)
};

// Class Water.NiagaraWaterFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraWaterFunctionLibrary : UBlueprintFunctionLibrary {

	void SetWaterBodyComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UWaterBodyComponent* WaterBodyComponent); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x64b9704
	void SetWaterBody(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct AWaterBody* WaterBody); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBody // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x64b9550
};

// Class Water.OceanCollisionComponent
// Size: 0x570 (Inherited: 0x530)
struct UOceanCollisionComponent : UPrimitiveComponent {
	struct UBodySetup* CachedBodySetup; // 0x530(0x08)
	char pad_538[0x38]; // 0x538(0x38)
};

// Class Water.OceanBoxCollisionComponent
// Size: 0x570 (Inherited: 0x570)
struct UOceanBoxCollisionComponent : UBoxComponent {
};

// Class Water.WaterBody
// Size: 0x2b8 (Inherited: 0x288)
struct AWaterBody : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct UWaterSplineComponent* SplineComp; // 0x290(0x08)
	struct UWaterSplineMetadata* WaterSplineMetadata; // 0x298(0x08)
	struct UWaterBodyComponent* WaterBodyComponent; // 0x2a0(0x08)
	int32_t WaterBodyIndex; // 0x2a8(0x04)
	enum class EWaterBodyType WaterBodyType; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UWaterWavesBase* WaterWaves; // 0x2b0(0x08)

	void SetWaterWaves(struct UWaterWavesBase* InWaterWaves); // Function Water.WaterBody.SetWaterWaves // (Final|Native|Public|BlueprintCallable) // @ game+0x64b9958
	void SetWaterMaterial(struct UMaterialInterface* InMaterial); // Function Water.WaterBody.SetWaterMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x64b98c8
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBody.OnWaterBodyChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x64b9088
	struct FVector GetWaterVelocityVectorAtSplineInputKey(float InKey); // Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8d4c
	float GetWaterVelocityAtSplineInputKey(float InKey); // Function Water.WaterBody.GetWaterVelocityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8c14
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBody.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2878950
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBody.GetWaterMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x64b8924
	enum class EWaterBodyType GetWaterBodyType(); // Function Water.WaterBody.GetWaterBodyType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8874
	struct UWaterBodyComponent* GetWaterBodyComponent(); // Function Water.WaterBody.GetWaterBodyComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2695fcc
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x64b86f4
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x64b86c4
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBody.GetIslands // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8244
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBody.GetExclusionVolumes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8160
	float GetAudioIntensityAtSplineInputKey(float InKey); // Function Water.WaterBody.GetAudioIntensityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b7ee4
};

// Class Water.WaterBodyGenerator
// Size: 0x28 (Inherited: 0x28)
struct UWaterBodyGenerator : UObject {
};

// Class Water.WaterBodyComponent
// Size: 0x1510 (Inherited: 0x530)
struct UWaterBodyComponent : UPrimitiveComponent {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x530(0x08)
	float TargetWaveMaskDepth; // 0x538(0x04)
	float MaxWaveHeightOffset; // 0x53c(0x04)
	struct FUnderwaterPostProcessSettings UnderwaterPostProcessSettings; // 0x540(0x700)
	struct FWaterCurveSettings CurveSettings; // 0xc40(0x20)
	struct UMaterialInterface* WaterMaterial; // 0xc60(0x08)
	struct UMaterialInterface* WaterHLODMaterial; // 0xc68(0x08)
	struct UMaterialInterface* WaterLODMaterial; // 0xc70(0x08)
	struct UMaterialInterface* UnderwaterPostProcessMaterial; // 0xc78(0x08)
	struct UMaterialInterface* WaterInfoMaterial; // 0xc80(0x08)
	struct FWaterBodyHeightmapSettings WaterHeightmapSettings; // 0xc88(0x80)
	float ShapeDilation; // 0xd08(0x04)
	float CollisionHeightOffset; // 0xd0c(0x04)
	bool bAffectsLandscape; // 0xd10(0x01)
	char pad_D11[0x3]; // 0xd11(0x03)
	int32_t WaterBodyIndex; // 0xd14(0x04)
	struct UStaticMesh* WaterMeshOverride; // 0xd18(0x08)
	bool bAlwaysGenerateWaterMeshTiles; // 0xd20(0x01)
	char pad_D21[0x3]; // 0xd21(0x03)
	int32_t OverlapMaterialPriority; // 0xd24(0x04)
	struct UWaterSplineMetadata* WaterSplineMetadata; // 0xd28(0x08)
	struct UMaterialInstanceDynamic* WaterMID; // 0xd30(0x08)
	struct UMaterialInstanceDynamic* WaterLODMID; // 0xd38(0x08)
	struct UMaterialInstanceDynamic* UnderwaterPostProcessMID; // 0xd40(0x08)
	struct UMaterialInstanceDynamic* WaterInfoMID; // 0xd48(0x08)
	struct TArray<struct TSoftObjectPtr<AWaterBodyIsland>> WaterBodyIslands; // 0xd50(0x10)
	struct TArray<struct TSoftObjectPtr<AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes; // 0xd60(0x10)
	struct TWeakObjectPtr<struct ALandscapeProxy> Landscape; // 0xd70(0x08)
	struct TSoftObjectPtr<AWaterZone> OwningWaterZone; // 0xd78(0x28)
	struct TSoftObjectPtr<AWaterZone> WaterZoneOverride; // 0xda0(0x28)
	char pad_DC8[0x8]; // 0xdc8(0x08)
	struct FPostProcessSettings CurrentPostProcessSettings; // 0xdd0(0x6e0)
	struct UNavAreaBase* WaterNavAreaClass; // 0x14b0(0x08)
	char pad_14B8[0x50]; // 0x14b8(0x50)
	double FixedWaterDepth; // 0x1508(0x08)

	void SetWaterAndUnderWaterPostProcessMaterial(struct UMaterialInterface* InWaterMaterial, struct UMaterialInterface* InUnderWaterPostProcessMaterial); // Function Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x64b9464
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBodyComponent.OnWaterBodyChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x64b9150
	struct UWaterWavesBase* GetWaterWaves(); // Function Water.WaterBodyComponent.GetWaterWaves // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8df8
	float GetWaterVelocityAtSplineInputKey(float InKey); // Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8cb0
	void GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector& OutWaterSurfaceLocation, struct FVector& OutWaterSurfaceNormal, struct FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth); // Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b89cc
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyComponent.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b89a4
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x64b8968
	struct UMaterialInterface* GetWaterMaterial(); // Function Water.WaterBodyComponent.GetWaterMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b890c
	struct UMaterialInstanceDynamic* GetWaterLODMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterLODMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x64b88d4
	struct UMaterialInstanceDynamic* GetWaterInfoMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterInfoMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x64b889c
	struct AWaterBody* GetWaterBodyActor(); // Function Water.WaterBodyComponent.GetWaterBodyActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f13598
	struct UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance(); // Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x64b883c
	struct TArray<struct UPrimitiveComponent*> GetStandardRenderableComponents(); // Function Water.WaterBodyComponent.GetStandardRenderableComponents // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b87c4
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance // (Native|Public|BlueprintCallable) // @ game+0x64b8724
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance // (Native|Public|BlueprintCallable) // @ game+0x5ff149c
	float GetMaxWaveHeight(); // Function Water.WaterBodyComponent.GetMaxWaveHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8620
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBodyComponent.GetIslands // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8380
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBodyComponent.GetExclusionVolumes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b81d0
	struct TArray<struct UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents); // Function Water.WaterBodyComponent.GetCollisionComponents // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8098
};

// Class Water.CustomMeshGenerator
// Size: 0x30 (Inherited: 0x28)
struct UCustomMeshGenerator : UWaterBodyGenerator {
	struct UStaticMeshComponent* MeshComp; // 0x28(0x08)
};

// Class Water.WaterBodyCustom
// Size: 0x2b8 (Inherited: 0x2b8)
struct AWaterBodyCustom : AWaterBody {
};

// Class Water.WaterBodyCustomComponent
// Size: 0x1520 (Inherited: 0x1510)
struct UWaterBodyCustomComponent : UWaterBodyComponent {
	struct UStaticMeshComponent* MeshComp; // 0x1510(0x08)
	char pad_1518[0x8]; // 0x1518(0x08)
};

// Class Water.WaterBodyExclusionVolume
// Size: 0x2e8 (Inherited: 0x2d0)
struct AWaterBodyExclusionVolume : APhysicsVolume {
	bool bExcludeAllOverlappingWaterBodies; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct TArray<struct AWaterBody*> WaterBodiesToExclude; // 0x2d8(0x10)
};

// Class Water.WaterBodyHLODBuilder
// Size: 0x28 (Inherited: 0x28)
struct UWaterBodyHLODBuilder : UHLODBuilder {
};

// Class Water.WaterBodyIsland
// Size: 0x298 (Inherited: 0x288)
struct AWaterBodyIsland : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct UWaterSplineComponent* SplineComp; // 0x290(0x08)

	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyIsland.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2878950
};

// Class Water.LakeGenerator
// Size: 0x40 (Inherited: 0x28)
struct ULakeGenerator : UWaterBodyGenerator {
	struct UStaticMeshComponent* LakeMeshComp; // 0x28(0x08)
	struct UBoxComponent* LakeCollisionComp; // 0x30(0x08)
	struct ULakeCollisionComponent* LakeCollision; // 0x38(0x08)
};

// Class Water.WaterBodyLake
// Size: 0x2b8 (Inherited: 0x2b8)
struct AWaterBodyLake : AWaterBody {
};

// Class Water.WaterBodyLakeComponent
// Size: 0x1520 (Inherited: 0x1510)
struct UWaterBodyLakeComponent : UWaterBodyComponent {
	struct UStaticMeshComponent* LakeMeshComp; // 0x1510(0x08)
	struct ULakeCollisionComponent* LakeCollision; // 0x1518(0x08)
};

// Class Water.OceanGenerator
// Size: 0x48 (Inherited: 0x28)
struct UOceanGenerator : UWaterBodyGenerator {
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes; // 0x28(0x10)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets; // 0x38(0x10)
};

// Class Water.WaterBodyOcean
// Size: 0x2b8 (Inherited: 0x2b8)
struct AWaterBodyOcean : AWaterBody {
};

// Class Water.WaterBodyOceanComponent
// Size: 0x1560 (Inherited: 0x1510)
struct UWaterBodyOceanComponent : UWaterBodyComponent {
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes; // 0x1510(0x10)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets; // 0x1520(0x10)
	struct FVector2D VisualExtents; // 0x1530(0x10)
	struct FVector CollisionExtents; // 0x1540(0x18)
	float HeightOffset; // 0x1558(0x04)
	char pad_155C[0x4]; // 0x155c(0x04)
};

// Class Water.RiverGenerator
// Size: 0x38 (Inherited: 0x28)
struct URiverGenerator : UWaterBodyGenerator {
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x28(0x10)
};

// Class Water.WaterBodyRiver
// Size: 0x2b8 (Inherited: 0x2b8)
struct AWaterBodyRiver : AWaterBody {
};

// Class Water.WaterBodyRiverComponent
// Size: 0x1540 (Inherited: 0x1510)
struct UWaterBodyRiverComponent : UWaterBodyComponent {
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x1510(0x10)
	struct UMaterialInterface* LakeTransitionMaterial; // 0x1520(0x08)
	struct UMaterialInstanceDynamic* LakeTransitionMID; // 0x1528(0x08)
	struct UMaterialInterface* OceanTransitionMaterial; // 0x1530(0x08)
	struct UMaterialInstanceDynamic* OceanTransitionMID; // 0x1538(0x08)
};

// Class Water.WaterBrushActorInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterBrushActorInterface : UInterface {
};

// Class Water.WaterMeshComponent
// Size: 0x690 (Inherited: 0x570)
struct UWaterMeshComponent : UMeshComponent {
	int32_t ForceCollapseDensityLevel; // 0x568(0x04)
	struct UMaterialInterface* FarDistanceMaterial; // 0x570(0x08)
	float FarDistanceMeshExtent; // 0x578(0x04)
	float TileSize; // 0x57c(0x04)
	struct FIntPoint ExtentInTiles; // 0x580(0x08)
	char pad_58C[0x94]; // 0x58c(0x94)
	struct TSet<struct UMaterialInterface*> UsedMaterials; // 0x620(0x50)
	bool bUseFarMeshWithoutOcean; // 0x670(0x01)
	char pad_671[0xf]; // 0x671(0x0f)
	int32_t TessellationFactor; // 0x680(0x04)
	float LODScale; // 0x684(0x04)
	char pad_688[0x8]; // 0x688(0x08)

	bool IsEnabled(); // Function Water.WaterMeshComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8e20
};

// Class Water.WaterRuntimeSettings
// Size: 0xb0 (Inherited: 0x30)
struct UWaterRuntimeSettings : UDeveloperSettings {
	enum class ECollisionChannel CollisionChannelForWaterTraces; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection; // 0x38(0x28)
	float WaterBodyIconWorldZOffset; // 0x60(0x04)
	struct FName DefaultWaterCollisionProfileName; // 0x64(0x04)
	struct TSoftObjectPtr<UMaterialInterface> DefaultWaterInfoMaterial; // 0x68(0x28)
	struct UWaterBodyRiverComponent* WaterBodyRiverComponentClass; // 0x90(0x08)
	struct UWaterBodyLakeComponent* WaterBodyLakeComponentClass; // 0x98(0x08)
	struct UWaterBodyOceanComponent* WaterBodyOceanComponentClass; // 0xa0(0x08)
	struct UWaterBodyCustomComponent* WaterBodyCustomComponentClass; // 0xa8(0x08)
};

// Class Water.WaterSplineComponent
// Size: 0x650 (Inherited: 0x630)
struct UWaterSplineComponent : USplineComponent {
	struct FWaterSplineCurveDefaults WaterSplineDefaults; // 0x630(0x10)
	struct FWaterSplineCurveDefaults PreviousWaterSplineDefaults; // 0x640(0x10)
};

// Class Water.WaterSplineMetadata
// Size: 0xa0 (Inherited: 0x28)
struct UWaterSplineMetadata : USplineMetadata {
	struct FInterpCurveFloat Depth; // 0x28(0x18)
	struct FInterpCurveFloat WaterVelocityScalar; // 0x40(0x18)
	struct FInterpCurveFloat RiverWidth; // 0x58(0x18)
	struct FInterpCurveFloat AudioIntensity; // 0x70(0x18)
	struct FInterpCurveVector WaterVelocity; // 0x88(0x18)
};

// Class Water.WaterSubsystem
// Size: 0x110 (Inherited: 0x40)
struct UWaterSubsystem : UTickableWorldSubsystem {
	char pad_40[0x38]; // 0x40(0x38)
	struct ABuoyancyManager* BuoyancyManager; // 0x78(0x08)
	struct FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x90(0x10)
	struct UStaticMesh* DefaultRiverMesh; // 0xa0(0x08)
	struct UStaticMesh* DefaultLakeMesh; // 0xa8(0x08)
	char pad_B0[0x28]; // 0xb0(0x28)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0xd8(0x08)
	char pad_E0[0x30]; // 0xe0(0x30)

	void SetOceanFloodHeight(float InFloodHeight); // Function Water.WaterSubsystem.SetOceanFloodHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x64b93e0
	void PrintToWaterLog(struct FString message, bool bWarning); // Function Water.WaterSubsystem.PrintToWaterLog // (Final|Native|Public|BlueprintCallable) // @ game+0x64b9214
	bool IsWaterRenderingEnabled(); // Function Water.WaterSubsystem.IsWaterRenderingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8e70
	bool IsUnderwaterPostProcessEnabled(); // Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8e54
	bool IsShallowWaterSimulationEnabled(); // Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c9e65c
	float GetWaterTimeSeconds(); // Function Water.WaterSubsystem.GetWaterTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8bec
	float GetSmoothedWorldTimeSeconds(); // Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8794
	int32_t GetShallowWaterSimulationRenderTargetSize(); // Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x64b877c
	int32_t GetShallowWaterMaxImpulseForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x64b8764
	int32_t GetShallowWaterMaxDynamicForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x64b874c
	float GetOceanTotalHeight(); // Function Water.WaterSubsystem.GetOceanTotalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8688
	float GetOceanFloodHeight(); // Function Water.WaterSubsystem.GetOceanFloodHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8670
	float GetOceanBaseHeight(); // Function Water.WaterSubsystem.GetOceanBaseHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8648
	float GetCameraUnderwaterDepth(); // Function Water.WaterSubsystem.GetCameraUnderwaterDepth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64b8080
};

// Class Water.WaterWavesAsset
// Size: 0x30 (Inherited: 0x28)
struct UWaterWavesAsset : UObject {
	struct UWaterWaves* WaterWaves; // 0x28(0x08)
};

// Class Water.WaterWavesAssetReference
// Size: 0x30 (Inherited: 0x28)
struct UWaterWavesAssetReference : UWaterWavesBase {
	struct UWaterWavesAsset* WaterWavesAsset; // 0x28(0x08)
};

// Class Water.WaterZone
// Size: 0x318 (Inherited: 0x288)
struct AWaterZone : AActor {
	struct UTextureRenderTarget2D* WaterInfoTexture; // 0x288(0x08)
	struct TArray<struct TWeakObjectPtr<struct UWaterBodyComponent>> OwnedWaterBodies; // 0x290(0x10)
	struct FIntPoint RenderTargetResolution; // 0x2a0(0x08)
	struct UWaterMeshComponent* WaterMesh; // 0x2a8(0x08)
	struct FVector2D ZoneExtent; // 0x2b0(0x10)
	float CaptureZOffset; // 0x2c0(0x04)
	bool bHalfPrecisionTexture; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	int32_t VelocityBlurRadius; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FVector TessellatedWaterMeshExtent; // 0x2d0(0x18)
	uint32_t NonTessellatedLODSectionScale; // 0x2e8(0x04)
	bool bEnableNonTessellatedLODMesh; // 0x2ec(0x01)
	char pad_2ED[0x2b]; // 0x2ed(0x2b)
};

