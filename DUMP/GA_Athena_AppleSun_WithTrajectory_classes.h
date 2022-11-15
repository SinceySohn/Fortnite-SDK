// BlueprintGeneratedClass GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C
// Size: 0xf88 (Inherited: 0xf30)
struct UGA_Athena_AppleSun_WithTrajectory_C : UGA_Athena_Consumable_Throw_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf30(0x08)
	struct UFortWorldItemDefinition* ItemDef; // 0xf38(0x08)
	struct UFortWorldItemDefinition* ItemDef_VR; // 0xf40(0x08)
	struct FGameplayTagContainer Recharging Tags; // 0xf48(0x20)
	struct FGameplayTagContainer VR tag; // 0xf68(0x20)

	void IsTrajectoryLocationValid(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult, bool& bIsLocationValid); // Function GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C.IsTrajectoryLocationValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnUpdateTrajectory(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult); // Function GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C.OnUpdateTrajectory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnProjectileSpawned(struct AFortProjectileBase* SpawnedProjectile); // Function GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C.OnProjectileSpawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_CommitExecute(); // Function GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C.K2_CommitExecute // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Remove Item?(); // Function GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C.Remove Item? // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory(int32_t EntryPoint); // Function GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C.ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

