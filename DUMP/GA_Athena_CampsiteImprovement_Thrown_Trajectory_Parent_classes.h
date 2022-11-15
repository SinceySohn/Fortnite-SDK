// BlueprintGeneratedClass GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C
// Size: 0x11b0 (Inherited: 0xf30)
struct UGA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C : UGA_Athena_Consumable_Throw_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf30(0x08)
	struct UStaticMesh* PreviewMesh; // 0xf38(0x08)
	enum class Enum_Campsite_Improvements Improvement Type; // 0xf40(0x01)
	char pad_F41[0x7]; // 0xf41(0x07)
	struct FScalableFloat MinDeploymentDistanceFromObstacles; // 0xf48(0x28)
	struct AActor* TrajectoryIndicatorRedClass; // 0xf70(0x08)
	struct ABP_ProjectileTrajectory_C* Projectile Trajectory Red; // 0xf78(0x08)
	bool ImprovementValid?; // 0xf80(0x01)
	char pad_F81[0x7]; // 0xf81(0x07)
	struct ABGA_Campsite_C* target campsite; // 0xf88(0x08)
	struct AActor* SpawnedDecal; // 0xf90(0x08)
	struct FScalableFloat Friendly Campsite Radius; // 0xf98(0x28)
	struct FScalableFloat Enemy Campsite Radius; // 0xfc0(0x28)
	struct FScalableFloat DisplayCampsiteRadiusDecal?; // 0xfe8(0x28)
	struct FFortItemEntry CachedItemEntry; // 0x1010(0x1a0)

	void OnProjectileSpawned(struct AFortProjectileBase* SpawnedProjectile); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.OnProjectileSpawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupCustomCampsitePreviewMesh(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.SetupCustomCampsitePreviewMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Is Trajectory Hidden(bool& IsHidden); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.Is Trajectory Hidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetupDummyProjectileRed(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.SetupDummyProjectileRed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CleanupTrajectory(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.CleanupTrajectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTrajectorySpline(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.UpdateTrajectorySpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupPreviewElements(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.SetupPreviewElements // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destroy Range Decal(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.Destroy Range Decal // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnCampsiteRadiusFeedback(struct ABGA_Campsite_C* Campsite, bool Valid); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.SpawnCampsiteRadiusFeedback // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupDummyProjectile(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.SetupDummyProjectile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ThrowProjectile(); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.ThrowProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent(int32_t EntryPoint); // Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

