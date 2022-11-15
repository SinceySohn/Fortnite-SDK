// Class SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
// Size: 0xbb8 (Inherited: 0x9d8)
struct ABuildingGameplayActorSupplyDropRadio : ABuildingGameplayActor {
	float MinimumMovingSpeedThresholdSq; // 0x9d8(0x04)
	float BalloonClosedGroundedFallSpeed; // 0x9dc(0x04)
	bool bAutoOpen; // 0x9e0(0x01)
	char pad_9E1[0x7]; // 0x9e1(0x07)
	struct FGameplayTagContainer ForceOpenActorTags; // 0x9e8(0x20)
	struct FGameplayTagQuery IgnoreMovingCollisionWithActorTagQuery; // 0xa08(0x48)
	float InterpRateToBalloonOpenedFallSpeed; // 0xa50(0x04)
	float DistanceFromOriginalSpawnLocForBalloonOpen; // 0xa54(0x04)
	enum class ESupplyDropRadioBalloonState BalloonState; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct FHitResult WaterHitResult; // 0xa60(0xe0)
	bool bMoving; // 0xb40(0x01)
	char pad_B41[0x3]; // 0xb41(0x03)
	float FallSpeed; // 0xb44(0x04)
	float BalloonOpenedFallSpeed; // 0xb48(0x04)
	float GravityMultiplier; // 0xb4c(0x04)
	struct FVector ServerLocation; // 0xb50(0x18)
	float ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0xb68(0x04)
	float ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0xb6c(0x04)
	struct FVector Velocity; // 0xb70(0x18)
	struct FVector PreviousFrameVelocity; // 0xb88(0x18)
	struct FVector OriginalServerSpawnLocation; // 0xba0(0x18)

	void UpdateGroundInfo(bool bValidBlock, struct FHitResult& MovementHitResult); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetGravityMultiplier(float InGravityMultiplier); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetGravityMultiplier // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x65384b8
	void SetBalloonState(enum class ESupplyDropRadioBalloonState InBalloonState); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x6762920
	void OpenSupplyDrop(); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop // (BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen(); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRep_BalloonState(); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool IsMoving(); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6949b74
	bool IsGrounded(); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded // (Event|Protected|BlueprintEvent|Const) // @ game+0xdef49c
	struct UBoxComponent* GetRootCollisionComponent(); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct AActor* GetHighestAttachParent(struct AActor* InActor); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetHighestAttachParent // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x6949ae0
	float GetGravityZ(); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x23bfa08
	enum class ESupplyDropRadioBalloonState GetBalloonState(); // Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2781e10
};

// Class SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UFortSupplyDropRadioAttachActorComponent : UActorComponent {

	void SetOwningActorNetCullDistance(float DistanceSquared); // Function SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent.SetOwningActorNetCullDistance // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x23c1fb0
};

// Class SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFortSupplyDropRadioBlueprintLibrary : UBlueprintFunctionLibrary {

	void StopCurrentConversation(struct AFortPlayerControllerGameplay* PlayerController); // Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.StopCurrentConversation // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x6949c40
	void SetMoveShouldAbortConversation(struct AFortPlayerControllerGameplay* PlayerController, bool bNewMoveAbortConversation); // Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.SetMoveShouldAbortConversation // (Final|BlueprintCosmetic|Native|Static|Private|BlueprintCallable) // @ game+0x6949b8c
};

