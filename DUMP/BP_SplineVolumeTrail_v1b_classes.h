// BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C
// Size: 0x4f8 (Inherited: 0x288)
struct ABP_SplineVolumeTrail_v1b_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UArrowComponent* DebugArrow; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	enum class ETimelineDirection DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UTimelineComponent* DebugRotateTimeline; // 0x2a8(0x08)
	struct USplineComponent* Spline; // 0x2b0(0x08)
	struct USkeletalMeshComponent* Skeletal Mesh; // 0x2b8(0x08)
	struct FName Socket Attach Point; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UStaticMesh* SplineMeshTemplate; // 0x2c8(0x08)
	struct UMaterialInterface* SplineMeshMaterialOverride; // 0x2d0(0x08)
	struct UParticleSystem* Particles; // 0x2d8(0x08)
	double LifeTime; // 0x2e0(0x08)
	double Lifetime Buffer; // 0x2e8(0x08)
	double SplineSystemDuration; // 0x2f0(0x08)
	double LifetimeAfterCompletion; // 0x2f8(0x08)
	bool KeepTickEnabledWhenCompleting; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t NumberOfSplineMeshesToUpdate; // 0x304(0x04)
	double Initial Size; // 0x308(0x08)
	struct TArray<struct USplineMeshComponent*> SplineMeshes; // 0x310(0x10)
	double SplineDistanceThreshold; // 0x320(0x08)
	double SplineDistanceThresholdEmpty; // 0x328(0x08)
	struct TArray<struct USplineMeshComponent*> SplineMeshesHidden; // 0x330(0x10)
	struct TArray<double> SplineTimestamps; // 0x340(0x10)
	int32_t ArrayIndex; // 0x350(0x04)
	bool SplineSystemActive; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	double CompletionTimestamp; // 0x358(0x08)
	double LifetimeAdjusted; // 0x360(0x08)
	struct UCurveLinearColor* SizeOverLife; // 0x368(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> ; // 0x370(0x10)
	struct UCurveLinearColor* ColorAndAlphaOverLife; // 0x380(0x08)
	struct UParticleSystemComponent* ParticlesComponent; // 0x388(0x08)
	int32_t SplineID; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct USplineMeshComponent* Current Spline Mesh; // 0x398(0x08)
	double Initial Rotation (Roll); // 0x3a0(0x08)
	struct UCurveFloat* RotationOverLife; // 0x3a8(0x08)
	bool DebugMode; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FVector DebugPositionOffset; // 0x3b8(0x18)
	struct FRotator DebugRotationRate; // 0x3d0(0x18)
	double DebugTickDelta; // 0x3e8(0x08)
	double DebugPreviousTickTimestamp; // 0x3f0(0x08)
	struct FTimerHandle Spline System Duration Event Handle; // 0x3f8(0x08)
	bool Use Tick Interval LODs; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FTimerHandle Tick Interval Event Handle; // 0x408(0x08)
	double Tick Interval LOD Check Rate; // 0x410(0x08)
	struct TArray<int32_t> Tick Interval LOD Distances; // 0x418(0x10)
	struct TArray<double> Tick Actor Intervals; // 0x428(0x10)
	int32_t LOD Array Index; // 0x438(0x04)
	bool Use Recently Rendered LOD; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	double Recently Rendered Check Rate; // 0x440(0x08)
	struct FTimerHandle Recently Rendered Event Handle; // 0x448(0x08)
	bool RecentlyRendered; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FVector SplineDefaultUpVector; // 0x458(0x18)
	bool SplineDefaultUpVectorInWorldSpace; // 0x470(0x01)
	enum class En_SplineForwardAxes_01 SplineMeshForwardAxis; // 0x471(0x01)
	bool CeaseAndDetachSplineUponCompletion; // 0x472(0x01)
	bool CanNewSplinePointsBeCreated; // 0x473(0x01)
	bool LinearColorOverLengthOfSpline; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	struct TArray<int32_t> IndiciesToDelete; // 0x478(0x10)
	bool RedistributePointsAlongSplineWhenCreated; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct UMaterialInstanceDynamic* CurveBakeMID; // 0x490(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x498(0x08)
	struct FVector2D RenderTextureResolution; // 0x4a0(0x10)
	struct TArray<struct UCurveLinearColor*> LinearColorCurvesToBake; // 0x4b0(0x10)
	bool WriteBakedCurveDataToDisk; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct FString File Path; // 0x4c8(0x10)
	struct FString File Name; // 0x4d8(0x10)
	bool UseCheapSplines; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct UTexture* LinearColorTexture; // 0x4f0(0x08)

	void UpdateCheapSplinesWPOVectors(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateCheapSplinesWPOVectors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSocketLocationWS(struct FName Socket Name, struct FVector& Location WS); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetSocketLocationWS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetStartAndEndAllSplineMeshes(bool Update All Spline Meshes); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndAllSplineMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyAllSplineMeshes(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DestroyAllSplineMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BakeLinearColor(struct UCurveLinearColor* Curve Linear Color, int32_t Pixel (X), struct FLinearColor& LinearColorOut); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.BakeLinearColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ReturnSplineMeshToPool(struct USplineMeshComponent* SplineMesh, int32_t IndexToRemove); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReturnSplineMeshToPool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SplineUpdateOnTick(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineUpdateOnTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RedistributePointsAlongSpline(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RedistributePointsAlongSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetLinearColorFromCurveAtTime(struct UCurveLinearColor* Curve Linear Color, int32_t Index, struct FLinearColor& LinearColorOut); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetLinearColorFromCurveAtTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void TickIntervalLODCheck(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.TickIntervalLODCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWasRecentlyRendered(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetWasRecentlyRendered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool AddSplineDistanceCheck(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineDistanceCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetNewSplinePointsBool(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetNewSplinePointsBool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetForwardAxisOnSplineMesh(struct USplineMeshComponent* SplineMesh); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetForwardAxisOnSplineMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RollSplineMesh(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RollSplineMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateParticleSystemPosition(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateParticleSystemPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateMID(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ScaleSplineMesh(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ScaleSplineMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SplineTimestampManagement(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineTimestampManagement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateSplinePointPosition(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateSplinePointPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddSplinePoint(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplinePoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetStartAndEndSplineMesh(bool Update Spline Mesh); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndSplineMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddSplineMesh(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DebugRotateTimeline__FinishedFunc(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void DebugRotateTimeline__UpdateFunc(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SplineSystemDurationReached(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineSystemDurationReached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DebugMode_Rotate(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugMode_Rotate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ManuallyStopSplineSystem(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ManuallyStopSplineSystem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Tick Interval LOD Check(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Tick Interval LOD Check // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Recently Rendered Check(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Recently Rendered Check // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearRenderTarget(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ClearRenderTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GenerateCurveTextures(); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GenerateCurveTextures // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int32_t EntryPoint); // Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ExecuteUbergraph_BP_SplineVolumeTrail_v1b // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

