// BlueprintGeneratedClass GA_Athena_LaunchPadThrowableWithTrajectory_A.GA_Athena_LaunchPadThrowableWithTrajectory_A_C
// Size: 0x109a (Inherited: 0xfd0)
struct UGA_Athena_LaunchPadThrowableWithTrajectory_A_C : UGA_Athena_SuperTowerGrenadeWithTrajectory_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfd0(0x08)
	double GridSizeXY; // 0xfd8(0x08)
	double GridSizeZ; // 0xfe0(0x08)
	double GridYOffset; // 0xfe8(0x08)
	double GridZOffset; // 0xff0(0x08)
	bool Hostile Placement Detected; // 0xff8(0x01)
	enum class Enum_LaunchpadSpawnVariants Stored Variant; // 0xff9(0x01)
	char pad_FFA[0x6]; // 0xffa(0x06)
	struct FVector Stored Grid Location; // 0x1000(0x18)
	struct FVector Last Grid Snap; // 0x1018(0x18)
	struct FVector Center Cell Offset; // 0x1030(0x18)
	bool New Grid Cell; // 0x1048(0x01)
	char pad_1049[0x7]; // 0x1049(0x07)
	struct TArray<struct AActor*> Empty Array; // 0x1050(0x10)
	bool Terrain Embedded Detected; // 0x1060(0x01)
	char pad_1061[0x7]; // 0x1061(0x07)
	struct FVector Terrain Trace Bottom Offset; // 0x1068(0x18)
	struct FVector Terrain Trace Top Offset; // 0x1080(0x18)
	bool Floating Detected; // 0x1098(0x01)
	bool Blacklisted Tag Detected; // 0x1099(0x01)

	void IsTrajectoryLocationValid(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult, bool& bIsLocationValid); // Function GA_Athena_LaunchPadThrowableWithTrajectory_A.GA_Athena_LaunchPadThrowableWithTrajectory_A_C.IsTrajectoryLocationValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Was Grid Cell Changed?(bool& Was Changed); // Function GA_Athena_LaunchPadThrowableWithTrajectory_A.GA_Athena_LaunchPadThrowableWithTrajectory_A_C.Was Grid Cell Changed? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UpdateTrajectorySpline(); // Function GA_Athena_LaunchPadThrowableWithTrajectory_A.GA_Athena_LaunchPadThrowableWithTrajectory_A_C.UpdateTrajectorySpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_LaunchPadThrowableWithTrajectory_A(int32_t EntryPoint); // Function GA_Athena_LaunchPadThrowableWithTrajectory_A.GA_Athena_LaunchPadThrowableWithTrajectory_A_C.ExecuteUbergraph_GA_Athena_LaunchPadThrowableWithTrajectory_A // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

