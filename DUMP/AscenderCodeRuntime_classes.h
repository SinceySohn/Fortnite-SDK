// Class AscenderCodeRuntime.FortAscenderZipline
// Size: 0xfb8 (Inherited: 0xc70)
struct AFortAscenderZipline : AFortAthenaSplineZipline {
	struct FMulticastInlineDelegate OnAscenderSetupComplete; // 0xc70(0x10)
	struct FName SplineTopAttachPointName; // 0xc80(0x04)
	bool bAutoFindSplineEndLocation; // 0xc84(0x01)
	char pad_C85[0x3]; // 0xc85(0x03)
	float SplineOffsetFromGround; // 0xc88(0x04)
	float CableOffsetFromSplineEnd; // 0xc8c(0x04)
	float SplineLength; // 0xc90(0x04)
	char pad_C94[0x4]; // 0xc94(0x04)
	struct UStaticMesh* SplineStaticMesh; // 0xc98(0x08)
	enum class ESplineMeshAxis MeshForwardAxis; // 0xca0(0x01)
	bool bHandleReturning; // 0xca1(0x01)
	char pad_CA2[0x2]; // 0xca2(0x02)
	float HandleReturnSpeed; // 0xca4(0x04)
	bool bCableDropping; // 0xca8(0x01)
	char pad_CA9[0x3]; // 0xca9(0x03)
	float CableDropSpeed; // 0xcac(0x04)
	float YawRotationOffsetWhileUsingHandle; // 0xcb0(0x04)
	float YawRotationOffsetWhileSlidingDown; // 0xcb4(0x04)
	bool bUseComplexSplineCollision; // 0xcb8(0x01)
	char pad_CB9[0x3]; // 0xcb9(0x03)
	float SimpleSplineCollisionRadius; // 0xcbc(0x04)
	float SimpleSplineCollisionHeightExtension; // 0xcc0(0x04)
	char pad_CC4[0x4]; // 0xcc4(0x04)
	struct FScalableFloat DescendMinDistanceFromBottom; // 0xcc8(0x28)
	struct FScalableFloat AscendReachedEndHorizontalLaunchSpeed; // 0xcf0(0x28)
	struct FScalableFloat AscendReachedEndVerticalLaunchSpeed; // 0xd18(0x28)
	struct FScalableFloat AscendJumpedOffHorizontalLaunchSpeed; // 0xd40(0x28)
	struct FScalableFloat AscendJumpedOffVerticalLaunchSpeed; // 0xd68(0x28)
	struct FScalableFloat DescendReachedEndHorizontalLaunchSpeed; // 0xd90(0x28)
	struct FScalableFloat DescendReachedEndVerticalLaunchSpeed; // 0xdb8(0x28)
	struct FScalableFloat DescendJumpedOffHorizontalLaunchSpeed; // 0xde0(0x28)
	struct FScalableFloat DescendJumpedOffVerticalLaunchSpeed; // 0xe08(0x28)
	struct FScalableFloat HandleActorHitPlayerHorizontalLaunchSpeed; // 0xe30(0x28)
	struct FScalableFloat HandleActorHitPlayerVerticalLaunchSpeed; // 0xe58(0x28)
	struct FVector HandleDestroyBuildingsOverlapExtents; // 0xe80(0x18)
	struct FVector PlayerDestroyBuildingsOverlapExtents; // 0xe98(0x18)
	struct FVector InitialSplineEndLocation; // 0xeb0(0x18)
	struct FVector CurrentSplineEndLocation; // 0xec8(0x18)
	struct FVector TargetSplineEndLocation; // 0xee0(0x18)
	struct FVector CurrentHandleLocation; // 0xef8(0x18)
	struct TWeakObjectPtr<struct UPrimitiveComponent> CurrentInteractComponent; // 0xf10(0x08)
	struct TWeakObjectPtr<struct AFortPlayerPawn> PawnUsingHandle; // 0xf18(0x08)
	struct TWeakObjectPtr<struct AFortPlayerPawn> PreviousPawnUsingHandle; // 0xf20(0x08)
	struct USplineMeshComponent* SplineMesh; // 0xf28(0x08)
	struct UCapsuleComponent* SimpleSplineMeshCollision; // 0xf30(0x08)
	struct TWeakObjectPtr<struct ABuildingActor> FloorActor; // 0xf38(0x08)
	struct TArray<struct TWeakObjectPtr<struct AFortPlayerPawn>> RotationLockedPawns; // 0xf40(0x10)
	char pad_F50[0x68]; // 0xf50(0x68)

	void OnRep_TargetSplineEndLocation(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation // (Final|Native|Protected) // @ game+0x2b7bf10
	void OnRep_PawnUsingHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle // (Final|Native|Protected) // @ game+0x653cd38
	void OnRep_InitialSplineEndLocation(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation // (Final|Native|Protected) // @ game+0x2a6eff0
	void HandlePawnUsingHandleDied(struct AFortPawn* DeadPawn); // Function AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied // (Final|Native|Protected) // @ game+0x653ccb8
	void HandleFloorActorHealthChanged(); // Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged // (Final|Native|Protected) // @ game+0x653cca4
	void HandleFloorActorDestroyed(struct AActor* Actor); // Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed // (Final|Native|Protected) // @ game+0x653cc24
	struct UPrimitiveComponent* GetTopComponent(); // Function AscenderCodeRuntime.FortAscenderZipline.GetTopComponent // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct AFortPlayerPawn* GetPawnUsingHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x653cbb8
	struct UPrimitiveComponent* GetInteractComponentOverride(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x653caec
	struct UPrimitiveComponent* GetHandleComponent(); // Function AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void BP_HandleUpdatedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleUpdatedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleStoppedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleStoppedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleStartedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleStartedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandlePlayerStoppedUsingHandle(struct AFortPlayerPawn* Player); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandlePlayerStartedUsingHandle(struct AFortPlayerPawn* Player); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ApplyStructureDamage(struct ABuildingSMActor* BuildingActor, struct AActor* DamageSource); // Function AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

