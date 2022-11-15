// Class Foliage.ProceduralFoliageComponent
// Size: 0xc8 (Inherited: 0xa0)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xa0(0x08)
	float TileOverlap; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct AVolume* SpawningVolume; // 0xb0(0x08)
	struct FGuid ProceduralGuid; // 0xb8(0x10)
};

// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x900 (Inherited: 0x8c0)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x8c0(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x8d0(0x10)
	bool bEnableDiscardOnLoad; // 0x8e0(0x01)
	char pad_8E1[0x3]; // 0x8e1(0x03)
	struct FGuid GenerationGuid; // 0x8e4(0x10)
	char pad_8F4[0xc]; // 0x8f4(0x0c)
};

// Class Foliage.FoliageType
// Size: 0x4b8 (Inherited: 0x28)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x04)
	float DensityAdjustmentFactor; // 0x3c(0x04)
	float Radius; // 0x40(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float SingleInstanceModeRadius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FFloatInterval ScaleX; // 0x50(0x08)
	struct FFloatInterval ScaleY; // 0x58(0x08)
	struct FFloatInterval ScaleZ; // 0x60(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FFloatInterval ZOffset; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	char AverageNormal : 1; // 0xac(0x01)
	char AverageNormalSingleComponent : 1; // 0xac(0x01)
	char pad_AC_3 : 5; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float AlignMaxAngle; // 0xb0(0x04)
	char RandomYaw : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float RandomPitchAngle; // 0xb8(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xbc(0x08)
	struct FFloatInterval Height; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd0(0x10)
	float MinimumLayerWeight; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xe8(0x10)
	float MinimumExclusionLayerWeight; // 0xf8(0x04)
	struct FName LandscapeLayer; // 0xfc(0x04)
	char CollisionWithWorld : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FVector CollisionScale; // 0x108(0x18)
	int32_t AverageNormalSampleCount; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FBoxSphereBounds MeshBounds; // 0x128(0x38)
	struct FVector LowBoundOriginRadius; // 0x160(0x18)
	enum class EComponentMobility Mobility; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	struct FInt32Interval CullDistance; // 0x17c(0x08)
	char bEnableStaticLighting : 1; // 0x184(0x01)
	char CastShadow : 1; // 0x184(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x184(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x184(0x01)
	char bCastDynamicShadow : 1; // 0x184(0x01)
	char bCastStaticShadow : 1; // 0x184(0x01)
	char pad_184_6 : 2; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	char bCastContactShadow : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	char bCastShadowAsTwoSided : 1; // 0x18c(0x01)
	char bReceivesDecals : 1; // 0x18c(0x01)
	char bOverrideLightMapRes : 1; // 0x18c(0x01)
	char pad_18C_3 : 5; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	int32_t OverriddenLightMapRes; // 0x190(0x04)
	enum class ELightmapType LightmapType; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	char bUseAsOccluder : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	char bVisibleInRayTracing : 1; // 0x19c(0x01)
	char bEvaluateWorldPositionOffset : 1; // 0x19c(0x01)
	char pad_19C_2 : 6; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	int32_t WorldPositionOffsetDisableDistance; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FBodyInstance BodyInstance; // 0x1a8(0x188)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x330(0x01)
	struct FLightingChannels LightingChannels; // 0x331(0x01)
	char pad_332[0x2]; // 0x332(0x02)
	char bRenderCustomDepth : 1; // 0x334(0x01)
	char pad_334_1 : 7; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t CustomDepthStencilValue; // 0x33c(0x04)
	int32_t TranslucencySortPriority; // 0x340(0x04)
	float CollisionRadius; // 0x344(0x04)
	float ShadeRadius; // 0x348(0x04)
	int32_t NumSteps; // 0x34c(0x04)
	float InitialSeedDensity; // 0x350(0x04)
	float AverageSpreadDistance; // 0x354(0x04)
	float SpreadVariance; // 0x358(0x04)
	int32_t SeedsPerStep; // 0x35c(0x04)
	int32_t DistributionSeed; // 0x360(0x04)
	float MaxInitialSeedOffset; // 0x364(0x04)
	bool bCanGrowInShade; // 0x368(0x01)
	bool bSpawnsInShade; // 0x369(0x01)
	char pad_36A[0x2]; // 0x36a(0x02)
	float MaxInitialAge; // 0x36c(0x04)
	float MaxAge; // 0x370(0x04)
	float OverlapPriority; // 0x374(0x04)
	struct FFloatInterval ProceduralScale; // 0x378(0x08)
	struct FRuntimeFloatCurve ScaleCurve; // 0x380(0x88)
	struct FFoliageDensityFalloff DensityFalloff; // 0x408(0x90)
	int32_t ChangeCount; // 0x498(0x04)
	char ReapplyDensity : 1; // 0x49c(0x01)
	char ReapplyRadius : 1; // 0x49c(0x01)
	char ReapplyAlignToNormal : 1; // 0x49c(0x01)
	char ReapplyRandomYaw : 1; // 0x49c(0x01)
	char ReapplyScaling : 1; // 0x49c(0x01)
	char ReapplyScaleX : 1; // 0x49c(0x01)
	char ReapplyScaleY : 1; // 0x49c(0x01)
	char ReapplyScaleZ : 1; // 0x49c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x49d(0x01)
	char ReapplyGroundSlope : 1; // 0x49d(0x01)
	char ReapplyHeight : 1; // 0x49d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x49d(0x01)
	char ReapplyZOffset : 1; // 0x49d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x49d(0x01)
	char ReapplyVertexColorMask : 1; // 0x49d(0x01)
	char bEnableDensityScaling : 1; // 0x49d(0x01)
	char bEnableDiscardOnLoad : 1; // 0x49e(0x01)
	char pad_49E_1 : 7; // 0x49e(0x01)
	char pad_49F[0x1]; // 0x49f(0x01)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x4a0(0x10)
	int32_t VirtualTextureCullMips; // 0x4b0(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
};

// Class Foliage.FoliageType_Actor
// Size: 0x4d0 (Inherited: 0x4b8)
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; // 0x4b8(0x08)
	bool bShouldAttachToBaseComponent; // 0x4c0(0x01)
	bool bStaticMeshOnly; // 0x4c1(0x01)
	char pad_4C2[0x6]; // 0x4c2(0x06)
	struct UFoliageInstancedStaticMeshComponent* StaticMeshOnlyComponentClass; // 0x4c8(0x08)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x4e8 (Inherited: 0x4b8)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x4b8(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x4c0(0x10)
	struct TArray<struct UMaterialInterface*> NaniteOverrideMaterials; // 0x4d0(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x4e0(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x2e8 (Inherited: 0x298)
struct AInstancedFoliageActor : AISMPartitionActor {
	char pad_298[0x50]; // 0x298(0x50)
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x5f0 (Inherited: 0x5f0)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x90430f8
	void FoliageOverlappingBoxTransforms(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box, struct TArray<struct FTransform>& OutTransforms); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x9042f74
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x9042e54
};

// Class Foliage.GrassInstancedStaticMeshComponent
// Size: 0x8c0 (Inherited: 0x8c0)
struct UGrassInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x328 (Inherited: 0x298)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x298(0x08)
	struct FVector TouchingActorEntryPosition; // 0x2a0(0x18)
	struct FVector FoliageVelocity; // 0x2b8(0x18)
	struct FVector FoliageForce; // 0x2d0(0x18)
	struct FVector FoliagePosition; // 0x2e8(0x18)
	float FoliageDamageImpulseScale; // 0x300(0x04)
	float FoliageTouchImpulseScale; // 0x304(0x04)
	float FoliageStiffness; // 0x308(0x04)
	float FoliageStiffnessQuadratic; // 0x30c(0x04)
	float FoliageDamping; // 0x310(0x04)
	float MaxDamageImpulse; // 0x314(0x04)
	float MaxTouchImpulse; // 0x318(0x04)
	float MaxForce; // 0x31c(0x04)
	float Mass; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (Final|Native|Protected|HasOutParms) // @ game+0x9042adc
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x358 (Inherited: 0x2c0)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x2c0(0x08)
	struct FFoliageDensityFalloff DensityFalloff; // 0x2c8(0x90)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x68 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28(0x04)
	float TileSize; // 0x2c(0x04)
	int32_t NumUniqueTiles; // 0x30(0x04)
	float MinimumQuadTreeSize; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (Final|Native|Public|BlueprintCallable) // @ game+0x9043248
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x170 (Inherited: 0x28)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x08)
	char pad_30[0xa0]; // 0x30(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd0(0x10)
	char pad_E0[0x90]; // 0xe0(0x90)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x2d0 (Inherited: 0x2c0)
struct AProceduralFoliageVolume : AVolume {
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x2c8(0x08)
};

