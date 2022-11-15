// BlueprintGeneratedClass GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C
// Size: 0xfd0 (Inherited: 0xf99)
struct UGA_Athena_SuperTowerGrenadeWithTrajectory_C : UGA_Athena_UtilityGrenade_WithTrajectory_C {
	char pad_F99[0x7]; // 0xf99(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfa0(0x08)
	struct UFortQuestItemDefinition* QuestItemUsePortafort; // 0xfa8(0x08)
	struct FGameplayTagContainer T_TargetTags; // 0xfb0(0x20)

	void IsTrajectoryLocationValid(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult, bool& bIsLocationValid); // Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.IsTrajectoryLocationValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction); // Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.Server_SpawnProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory(int32_t EntryPoint); // Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

