// BlueprintGeneratedClass GA_Athena_PortaShackGrenade_Secondary.GA_Athena_PortaShackGrenade_Secondary_C
// Size: 0xf80 (Inherited: 0xf58)
struct UGA_Athena_PortaShackGrenade_Secondary_C : UGA_Athena_Consumable_Throw_Secondary_Parent_C {
	double GridZOffset; // 0xf58(0x08)
	double GridYOffset; // 0xf60(0x08)
	struct FVector StaticBlockingAreaCheckOffset; // 0xf68(0x18)

	void OnUpdateTrajectory(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult); // Function GA_Athena_PortaShackGrenade_Secondary.GA_Athena_PortaShackGrenade_Secondary_C.OnUpdateTrajectory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

