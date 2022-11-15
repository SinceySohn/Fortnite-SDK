// BlueprintGeneratedClass BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C
// Size: 0xd2 (Inherited: 0xa0)
struct UBuildingActorLootDropOnDeathComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FName LootOnExplodePackage; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FVector OffsetLocation; // 0xb0(0x18)
	struct ABuildingActor* BuildingActorOwner; // 0xc8(0x08)
	bool Enabled; // 0xd0(0x01)
	bool AthenaOnly; // 0xd1(0x01)

	struct FVector MakeRelativeOffset(struct AActor* Target, struct FVector InVec); // Function BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C.MakeRelativeOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDied_Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C.OnDied_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BuildingActorLootDropOnDeathComponent(int32_t EntryPoint); // Function BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C.ExecuteUbergraph_BuildingActorLootDropOnDeathComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

