// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C
// Size: 0x458 (Inherited: 0x2f1)
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C : ABP_ProjectileTrajectory_Athena_C {
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UStaticMeshComponent* SM_BuildingPreview; // 0x300(0x08)
	struct USceneComponent* Building; // 0x308(0x08)
	double GridSizeXY; // 0x310(0x08)
	double GridSizeZ; // 0x318(0x08)
	double GridYOffset; // 0x320(0x08)
	double LastPointDist; // 0x328(0x08)
	double GridZOffset; // 0x330(0x08)
	struct FRotator YawOffset; // 0x338(0x18)
	struct FRotator LastYawOffset; // 0x350(0x18)
	struct FVector GridSnapPosition; // 0x368(0x18)
	struct FVector LastGridSnapPosition; // 0x380(0x18)
	struct USoundBase* GridSnapSound; // 0x398(0x08)
	enum class ECardinalDirection CardinalDirection; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct TMap<enum class ECardinalDirection, struct FVector> OrientationDoortraceOffsets; // 0x3a8(0x50)
	struct FVector DoorTraceOffsetHigh; // 0x3f8(0x18)
	struct FVector DoorTraceOffsetLow; // 0x410(0x18)
	bool b_HitTerrain; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UStaticMesh* BuildingPreviewMesh; // 0x430(0x08)
	struct UStaticMesh* BuildingPreviewMeshUnderground; // 0x438(0x08)
	struct FVector DoorCheckSize; // 0x440(0x18)

	void HandleGridSnapUpdates(struct FVector NewLocation); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.HandleGridSnapUpdates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetTrajectorySpline(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.SetTrajectorySpline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTrajectoryValid(bool bIsTrajectoryValid); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.SetTrajectoryValid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow(int32_t EntryPoint); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

