// BlueprintGeneratedClass GA_Athena_PortaShackGrenadeWithTrajectory_A.GA_Athena_PortaShackGrenadeWithTrajectory_A_C
// Size: 0xff8 (Inherited: 0xfd0)
struct UGA_Athena_PortaShackGrenadeWithTrajectory_A_C : UGA_Athena_SuperTowerGrenadeWithTrajectory_C {
	double GridZOffset; // 0xfd0(0x08)
	double GridYOffset; // 0xfd8(0x08)
	struct FVector StaticBlockingAreaCheckOffset; // 0xfe0(0x18)

	void OnUpdateTrajectory(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult); // Function GA_Athena_PortaShackGrenadeWithTrajectory_A.GA_Athena_PortaShackGrenadeWithTrajectory_A_C.OnUpdateTrajectory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

