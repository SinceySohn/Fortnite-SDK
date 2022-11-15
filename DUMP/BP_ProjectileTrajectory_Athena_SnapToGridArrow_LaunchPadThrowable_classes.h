// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C
// Size: 0x52c (Inherited: 0x458)
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C : ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UStaticMesh* BuildingPreviewMeshFloorless; // 0x460(0x08)
	struct FGameplayTagContainer Floor Gameplay Tags; // 0x468(0x20)
	struct FGameplayTagContainer Ramp Gameplay Tags; // 0x488(0x20)
	struct FRotator Ramp Rot; // 0x4a8(0x18)
	struct TMap<int32_t, struct FVector> Ramp Rule Build Offsets; // 0x4c0(0x50)
	struct FVector Last Spline Point Coord; // 0x510(0x18)
	bool Ramp Rule Applies; // 0x528(0x01)
	enum class Enum_LaunchpadSpawnVariants Floor Variant; // 0x529(0x01)
	bool Ramp Floating Check; // 0x52a(0x01)
	bool Blacklisted Tag Found; // 0x52b(0x01)

	void Check for Blacklisted Tags(struct FVector Location, bool& Tag Found); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Check for Blacklisted Tags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Multiple Sphere Traces(struct FVector Location, struct TArray<struct FHitResult>& OutHits); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Multiple Sphere Traces // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Check Hits For Ramp(struct TArray<struct FHitResult>& Hit Results, bool& Ramp Found, struct AActor*& Ramp Actor); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Check Hits For Ramp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Ramp Underside Check(struct AActor* Ramp Actor, struct FVector Ramp Impact Location, bool& Is Underside); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Ramp Underside Check // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Instigator Standing On Ramp(struct AActor* Ramp Actor, bool& Standing On Ramp); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Instigator Standing On Ramp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Round To Nearest Rotation(int32_t Angle, int32_t& Rounded Angle); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Round To Nearest Rotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Handle Ramps(struct AActor* Ramp Actor, struct FVector Target Location); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Handle Ramps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Check for Ramp(struct FVector Location, bool& Ramp Rules Apply, struct AActor*& Ramp Actor); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Check for Ramp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Floor Trace(bool& Hit Floor); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.Floor Trace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGridSnapUpdates(struct FVector NewLocation); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.HandleGridSnapUpdates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetTrajectorySpline(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.SetTrajectorySpline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable(int32_t EntryPoint); // Function BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable.BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow_LaunchPadThrowable // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

