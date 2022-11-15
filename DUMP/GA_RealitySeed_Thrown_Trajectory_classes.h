// BlueprintGeneratedClass GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C
// Size: 0x11b8 (Inherited: 0xf60)
struct UGA_RealitySeed_Thrown_Trajectory_C : UGA_RealitySeed_Thrown_Trajectory_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf60(0x08)
	struct UStaticMesh* PreviewMesh; // 0xf68(0x08)
	struct FScalableFloat MinSaplingDeploymentDistanceFromObstacles; // 0xf70(0x28)
	struct AActor* TrajectoryIndicatorRedClass; // 0xf98(0x08)
	struct ABP_ProjectileTrajectory_C* Projectile Trajectory Red; // 0xfa0(0x08)
	bool ImprovementValid?; // 0xfa8(0x01)
	char pad_FA9[0x7]; // 0xfa9(0x07)
	struct AActor* SpawnedDecal; // 0xfb0(0x08)
	struct FScalableFloat Friendly Campsite Radius; // 0xfb8(0x28)
	struct FFortItemEntry CachedItemEntry; // 0xfe0(0x1a0)
	struct FVector PreviewMeshScale; // 0x1180(0x18)
	struct FGameplayTagContainer Failed Reason; // 0x1198(0x20)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void SetupCustomPreviewMesh(); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.SetupCustomPreviewMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Is Trajectory Hidden(bool& IsHidden); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.Is Trajectory Hidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetupDummyProjectileRed(); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.SetupDummyProjectileRed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CleanupTrajectory(); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.CleanupTrajectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTrajectorySpline(); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.UpdateTrajectorySpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupDummyProjectile(); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.SetupDummyProjectile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitialiseTrajectory(); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.InitialiseTrajectory // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_RealitySeed_Thrown_Trajectory(int32_t EntryPoint); // Function GA_RealitySeed_Thrown_Trajectory.GA_RealitySeed_Thrown_Trajectory_C.ExecuteUbergraph_GA_RealitySeed_Thrown_Trajectory // (Final|UbergraphFunction) // @ game+0xdef49c
};

