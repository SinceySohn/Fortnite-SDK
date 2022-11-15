// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C
// Size: 0xdc0 (Inherited: 0xc40)
struct ABP_Athena_Environmental_ZipLine_C : AFortAthenaZipline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UCapsuleComponent* InteractCapsule; // 0xc48(0x08)
	struct UStaticMeshComponent* SM_Line; // 0xc50(0x08)
	struct UCapsuleComponent* OverlapCapsule; // 0xc58(0x08)
	struct USceneComponent* Zipline; // 0xc60(0x08)
	struct USceneComponent* Scene; // 0xc68(0x08)
	struct FVector StartLocation; // 0xc70(0x18)
	struct FVector TargetLocation; // 0xc88(0x18)
	struct FVector MotorOffset; // 0xca0(0x18)
	double LineThickness; // 0xcb8(0x08)
	double LineCollisionThickness; // 0xcc0(0x08)
	struct ABuildingActor* PoleA; // 0xcc8(0x08)
	struct ABuildingActor* PoleB; // 0xcd0(0x08)
	struct FCurveTableRowHandle SpeedCTHandle; // 0xcd8(0x10)
	struct FCurveTableRowHandle ZipLineEnabledCTHandle; // 0xce8(0x10)
	struct FCurveTableRowHandle LineCollisionRadiusCTHandle; // 0xcf8(0x10)
	struct FCurveTableRowHandle BuildingCheckBoxExtentsCTHandle; // 0xd08(0x10)
	struct FName BackendName; // 0xd18(0x04)
	char pad_D1C[0x4]; // 0xd1c(0x04)
	struct UFortQuestItemDefinition* QuestItem; // 0xd20(0x08)
	double LineExtendBeyondPoleLength; // 0xd28(0x08)
	struct FVector PoleASocketLocation; // 0xd30(0x18)
	struct FVector PoleBSocketLocation; // 0xd48(0x18)
	struct AFortPlayerPawn* PlayerPawn; // 0xd60(0x08)
	struct TArray<struct AFortPlayerPawn*> PlayersPendingMovementModeChange; // 0xd68(0x10)
	double CollisionHeightAboveLine; // 0xd78(0x08)
	struct FVector PlayerOffsetToLine_Hoverboard; // 0xd80(0x18)
	struct FTimerHandle EndOverlapReleaseTimer; // 0xd98(0x08)
	struct FGameplayTagContainer BlockInteractTags; // 0xda0(0x20)

	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CalculatePositionsOfPoles(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CalculatePositionsOfPoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Setup Overlap Bindings(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.Setup Overlap Bindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleEnterZipline(struct AFortPlayerPawn* InPlayerPawn); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleEnterZipline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForBuildings(struct AFortPlayerPawn* Player, bool& BuildingNearby?); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CheckForBuildings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void QuestCheckForUse(struct AFortPlayerController* FortPlayerController); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.QuestCheckForUse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetCharacterCustomMovementMode(struct APawn* Character, enum class EFortCustomMovement& CustomMovementMode, enum class EMovementMode& MovementMode); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.GetCharacterCustomMovementMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void StartZipLining(struct AFortPlayerPawn* FortPlayerPawn, struct UPrimitiveComponent* InteractComponent); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.StartZipLining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleOnMapInfoInitialized(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMapInfoInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnEndOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReleaseZipline(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReleaseZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandlePoleDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandlePoleDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine(int32_t EntryPoint); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

