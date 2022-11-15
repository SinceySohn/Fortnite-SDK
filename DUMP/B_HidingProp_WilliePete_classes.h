// BlueprintGeneratedClass B_HidingProp_WilliePete.B_HidingProp_WilliePete_C
// Size: 0x15a2 (Inherited: 0x1370)
struct AB_HidingProp_WilliePete_C : AB_HidingProp_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1370(0x08)
	struct UStaticMeshComponent* overlapCylinder; // 0x1378(0x08)
	struct UAudioComponent* WilliePete_Ambient_Loop; // 0x1380(0x08)
	struct UStaticMeshComponent* Geyser; // 0x1388(0x08)
	struct UStaticMeshComponent* S_Whirlpool_01; // 0x1390(0x08)
	struct UParticleSystemComponent* P_WilliePete_SurfaceVerticalSplash; // 0x1398(0x08)
	struct UFortProjectileMovementComponent* OverlappedFortProjectileMovementComponent; // 0x13a0(0x08)
	struct UProjectileMovementComponent* OverlappedStandardProjectileMovementComponent; // 0x13a8(0x08)
	struct AActor* TeleportingNonPawn; // 0x13b0(0x08)
	struct FHitResult SphereOverlapResult; // 0x13b8(0xe0)
	double ProjectileSpeedCeiling; // 0x1498(0x08)
	struct FRotator ProjectileExitFVectorRotation; // 0x14a0(0x18)
	int32_t WaterLevel; // 0x14b8(0x04)
	struct FGameplayTag GC_Exit; // 0x14bc(0x04)
	struct FGameplayTag GC_Enter; // 0x14c0(0x04)
	char pad_14C4[0x4]; // 0x14c4(0x04)
	struct FScalableFloat EnabledValue; // 0x14c8(0x28)
	struct FScalableFloat LaunchHeightValue; // 0x14f0(0x28)
	struct AFortPlayerPawnAthena* LaunchPawn; // 0x1518(0x08)
	struct FActiveGameplayEffectHandle LaunchGrantedEffectHandle; // 0x1520(0x08)
	struct FGameplayTagContainer T_Quest; // 0x1528(0x20)
	struct AActor* SpawnedWaterBody; // 0x1548(0x08)
	struct FGameplayTag GC_ScreenFX; // 0x1550(0x04)
	bool isOnTestMap; // 0x1554(0x01)
	char pad_1555[0x3]; // 0x1555(0x03)
	struct USoundBase* Launch Sound; // 0x1558(0x08)
	struct FVector AdjustedLocation; // 0x1560(0x18)
	bool skipAnimForLaunch; // 0x1578(0x01)
	char pad_1579[0x7]; // 0x1579(0x07)
	struct AFortPlayerPawnAthena* ExitingPawn; // 0x1580(0x08)
	struct UMovementComponent* OverlappedMovementComponent; // 0x1588(0x08)
	double ProjectileSpeedMult; // 0x1590(0x08)
	double PickupSpeedMult; // 0x1598(0x08)
	bool bSetSilentDie; // 0x15a0(0x01)
	bool bSetSpawnedWaterBody; // 0x15a1(0x01)

	void OnRep_bSetSpawnedWaterBody(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSpawnedWaterBody // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bSetSilentDie(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSilentDie // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HelperLocationLogger(struct FString InString); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.HelperLocationLogger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_AdjustedLocation(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_AdjustedLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TeleportExitSpeed(struct FVector ExitFVector, double EnterSpeed, double OverrideSpeed, double MinimumSpeed, bool ForceSpeedOverride, struct FVector& TeleportExitVelocity); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.TeleportExitSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnReady_74044DD44988556292500EB8F289359F(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnReady_74044DD44988556292500EB8F289359F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Non Pawn Actor Destroyed(struct AActor* DestroyedActor); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Actor Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Non Pawn Teleport(struct AActor* TeleportingActor); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Teleport // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Remove GE(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Remove GE // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Complete Setup(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Complete Setup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopHiding(struct AFortPawn* Pawn); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.StopHiding // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetGravity(struct FHitResult& Hit); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ResetGravity // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_HidingProp_WilliePete(int32_t EntryPoint); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ExecuteUbergraph_B_HidingProp_WilliePete // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

