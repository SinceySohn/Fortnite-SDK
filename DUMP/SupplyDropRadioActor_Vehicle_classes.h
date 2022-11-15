// BlueprintGeneratedClass SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C
// Size: 0xee0 (Inherited: 0xe98)
struct ASupplyDropRadioActor_Vehicle_C : ASupplyDropRadioActorParent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe98(0x08)
	struct UChildActorComponent* VehiclePreview_EDITORONLY; // 0xea0(0x08)
	struct USceneComponent* VehicleAttachComponent; // 0xea8(0x08)
	struct AFortAthenaVehicle* VehicleClass; // 0xeb0(0x08)
	struct FGameplayTagContainer VehicleModTags; // 0xeb8(0x20)
	struct AFortAthenaVehicle* SpawnedVehicle; // 0xed8(0x08)

	void GetAttachedActorToMark(struct AActor*& Actor); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.GetAttachedActorToMark // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShouldAddAttachComponentForActor(struct AActor* InActor, bool& bAdd); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.ShouldAddAttachComponentForActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleMovementBlocked_Deprecated(struct FHitResult& HitResult, bool& bValidBlock); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.HandleMovementBlocked_Deprecated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_SpawnedVehicle(); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.OnRep_SpawnedVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OpenSupplyDrop(); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.OpenSupplyDrop // (BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOnHealthChanged(); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.HandleOnHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SupplyDropRadioActor_Vehicle(int32_t EntryPoint); // Function SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C.ExecuteUbergraph_SupplyDropRadioActor_Vehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

