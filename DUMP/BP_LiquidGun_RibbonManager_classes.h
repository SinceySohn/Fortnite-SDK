// BlueprintGeneratedClass BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C
// Size: 0x640 (Inherited: 0x440)
struct ABP_LiquidGun_RibbonManager_C : ALiquidRibbonManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x448(0x08)
	struct TArray<struct AB_Prj_Ranged_NitroglycerineGun_C*> Projectiles; // 0x450(0x10)
	struct UNiagaraComponent* RibbonFX; // 0x460(0x08)
	struct TArray<struct FVector> ProjectilePositions; // 0x468(0x10)
	double Deprecated_MaxDistanceBeforeBreakage; // 0x478(0x08)
	bool Done; // 0x480(0x01)
	bool Stopped; // 0x481(0x01)
	char pad_482[0x6]; // 0x482(0x06)
	struct TArray<struct FVector> AllPositions; // 0x488(0x10)
	double Total_Distance; // 0x498(0x08)
	bool UNUSED LockedIn; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct TArray<struct FVector> VisiblePositions; // 0x4a8(0x10)
	struct TArray<struct FLiquidGun_DetachedRibbons> DetachedRibbons; // 0x4b8(0x10)
	int32_t CurrRibbonNumber; // 0x4c8(0x04)
	int32_t OLD PointsPerSegment; // 0x4cc(0x04)
	struct AB_Weapon_LiquidGun_C* Weapon; // 0x4d0(0x08)
	struct TArray<int32_t> Sizes; // 0x4d8(0x10)
	bool ExplosionStarted; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct TArray<int32_t> PointDamageArray; // 0x4f0(0x10)
	double BeginPlayTime; // 0x500(0x08)
	double BP  DamagePercentForSizeIncrease; // 0x508(0x08)
	struct TArray<double> BlinkingIntensityArray; // 0x510(0x10)
	bool UseNative; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct TArray<struct FLiquidGun_Detachment> BP_Detachments; // 0x528(0x10)
	struct TArray<struct FLiquidRibbonSplineSegment> SegmentsArray; // 0x538(0x10)
	struct UCurveFloat* CurlCurve; // 0x548(0x08)
	struct FScalableFloat SF_Curling_TowardEndMultiplier; // 0x550(0x28)
	struct FScalableFloat SF_Curling_TowardPerpendicularMultiplier; // 0x578(0x28)
	struct FScalableFloat SF_Curling_TowardRandomMultiplier; // 0x5a0(0x28)
	struct FScalableFloat SF_Curling_MaxCurlOffset; // 0x5c8(0x28)
	struct FScalableFloat SF_Curling_TimeToOffset; // 0x5f0(0x28)
	struct FScalableFloat SF_TimeToBreak; // 0x618(0x28)

	void CalculateOffset(struct FLiquidGun_Detachment Detachment, struct AB_Prj_Ranged_NitroglycerineGun_C* Projectile, double ClosenessToBreakage, bool IsBeginning, struct FVector& Offset); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.CalculateOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	int32_t GetFirstVisiblePointIndex(); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.GetFirstVisiblePointIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool BP_PointIsVisible(int32_t CurrentPointIndex, int32_t FirstVisibleIndex); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.BP_PointIsVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void BP OV Calculate Point Size(int32_t SegmentIndex, struct TArray<double>& SegmentLengths, int32_t PointIndex, int32_t PointsPerSegment, double Min Thickness, double Max Thickness, double& Output); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.BP OV Calculate Point Size // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP OV Calculate Point Blinking Intensity(int32_t Point Size, double& Intensity); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.BP OV Calculate Point Blinking Intensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_GetFirstVisibleIndex(int32_t& FirstVisible); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.BP_GetFirstVisibleIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void BP Get Or Add Detachment(int32_t RibbonNumber, struct FLiquidRibbonSplineSegment Segment, struct FLiquidGun_Detachment& Output); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.BP Get Or Add Detachment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Add Detached Segments(struct TArray<struct FVector>& Positions, struct TArray<int32_t>& RibbonIDs); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.Add Detached Segments // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OLD Calculate Segments(struct TArray<struct FVector>& Points, struct TArray<struct FLiquidGun_CurveSegment>& Result); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.OLD Calculate Segments // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FVector BP Get Point On Segment(double T, struct FLiquidRibbonSplineSegment Segment); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.BP Get Point On Segment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OLD Calculate Segment(struct FVector p0, struct FVector p1, struct FVector p2, struct FVector p3, double 01SqrtDist, double 12SqrtDist, double 23SqrtDist, struct FLiquidGun_CurveSegment& NewParam, double& sqrtDistance01, double& sqrtDistance12, double& sqrtDistance23); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.OLD Calculate Segment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetCurvePoints(struct TArray<int32_t>& RibbonIDs1, struct TArray<int32_t>& RibbonSizes1, struct TArray<struct FVector>& __AllPositions, struct TArray<bool>& RibbonVisibilityArray, struct TArray<double>& BlinkingIntensity); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.GetCurvePoints // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Niagara Positions(bool RunOnServer); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.Update Niagara Positions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void AddProjectile(struct AB_Prj_Ranged_NitroglycerineGun_C*& Prj); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.AddProjectile // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CE_StopExplosion(); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.CE_StopExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cleanup(); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.Cleanup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FirstProjectileStopped (server only)(); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.FirstProjectileStopped (server only) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FirstProjectileEnteredWater(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.FirstProjectileEnteredWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_LiquidGun_RibbonManager(int32_t EntryPoint); // Function BP_LiquidGun_RibbonManager.BP_LiquidGun_RibbonManager_C.ExecuteUbergraph_BP_LiquidGun_RibbonManager // (Final|UbergraphFunction) // @ game+0xdef49c
};

