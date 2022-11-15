// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// Size: 0x5160 (Inherited: 0x5070)
struct APlayerPawn_Athena_Generic_Parent_C : AFortPlayerPawnAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5070(0x08)
	struct UMotionWarpingComponent* MotionWarping; // 0x5078(0x08)
	struct UMultiInteractActorComponent_C* MultiInteractActorComponent; // 0x5080(0x08)
	struct TArray<struct UMaterialInterface*> Default Weapon Materials; // 0x5088(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBackpackMaterials; // 0x5098(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHatMaterials; // 0x50a8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHeadMaterials; // 0x50b8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBodyMaterials; // 0x50c8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnCharmMaterials; // 0x50d8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnFaceMaterials; // 0x50e8(0x10)
	struct UPostProcessComponent* PlayerPostProcessFX; // 0x50f8(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x5100(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnMaterials_ALL; // 0x5110(0x10)
	struct FMulticastInlineDelegate ShootingTargetReactToJump; // 0x5120(0x10)
	struct FMulticastInlineDelegate OnPlayHit; // 0x5130(0x10)
	struct FMulticastInlineDelegate OnEnteredVehicleDispatcher; // 0x5140(0x10)
	struct FMulticastInlineDelegate OnExitedVehicleDispatcher; // 0x5150(0x10)

	void ReceiveBeginPlay(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredVehicle(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedVehicle(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnJumped(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32_t EntryPoint); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnExitedVehicleDispatcher__DelegateSignature(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicleDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredVehicleDispatcher__DelegateSignature(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicleDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayHit__DelegateSignature(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnPlayHit__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShootingTargetReactToJump__DelegateSignature(struct AFortPlayerPawnAthena* JumpingPlayer); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

